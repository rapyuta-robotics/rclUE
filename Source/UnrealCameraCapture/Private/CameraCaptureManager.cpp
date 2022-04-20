#include "CameraCaptureManager.h"

#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Kismet/GameplayStatics.h"
#include "ShowFlags.h"
#include "Materials/Material.h"
#include "RHICommandList.h"
#include "ImageWrapper/Public/IImageWrapper.h"
#include "ImageWrapper/Public/IImageWrapperModule.h"
#include "ImageUtils.h"
#include "Modules/ModuleManager.h"
#include "Misc/FileHelper.h"

DEFINE_LOG_CATEGORY(LogCameraCaptureManager);

// Sets default values
UCameraCaptureManagerComponent::UCameraCaptureManagerComponent()
{
	// Set this to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void UCameraCaptureManagerComponent::BeginPlay()
{
	Super::BeginPlay();

	SetupCaptureComponent();
}

void UCameraCaptureManagerComponent::TickComponent(float DeltaTime,	enum ELevelTick TickType,
		FActorComponentTickFunction * ThisTickFunction)
{
	TRACE_CPUPROFILER_EVENT_SCOPE_STR("UCameraCaptureManagerComponent::Tick")
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// Read pixels once RenderFence is completed
	if (!RenderRequestQueue.IsEmpty())
	{
		// Peek the next RenderRequest from queue
		FRenderRequestStruct* nextRenderRequest = nullptr;
		RenderRequestQueue.Peek(nextRenderRequest);

		if (nextRenderRequest)
		{
			//nullptr check
			if (nextRenderRequest->RenderFence.IsFenceComplete())
			{
				// Check if rendering is done, indicated by RenderFence
				if (bCallbackOnCapture)
				{
					CaptureCallBack.ExecuteIfBound(*nextRenderRequest);
				} else {
					SaveCapture(nextRenderRequest);
					ImgCounter += 1;
				}
				
				// Delete the first element from RenderQueue
				RenderRequestQueue.Pop();
				delete nextRenderRequest;

				UE_LOG(LogCameraCaptureManager, Verbose, TEXT("Capture complete."));
			}
		}
	}
}

void UCameraCaptureManagerComponent::SaveCapture(FRenderRequestStruct* NextRenderRequest)
{
	TRACE_CPUPROFILER_EVENT_SCOPE_STR("UCameraCaptureManagerComponent::SaveCapture")

	// Load the image wrapper module 
	IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(
		FName("ImageWrapper"));

	// Decide storing of data, either jpeg or png
	FString fileName = "";
	if (UsePNG)
	{
		//Generate image name
		fileName = FPaths::ProjectSavedDir() + SubDirectoryName + "/img" + "_" + ToStringWithLeadingZeros(
			ImgCounter, NumDigits);
		fileName += ".png"; // Add file ending

		// Prepare data to be written to disk
		static TSharedPtr<IImageWrapper> imageWrapper = ImageWrapperModule.CreateImageWrapper(EImageFormat::PNG);
		//EImageFormat::PNG //EImageFormat::JPEG
		imageWrapper->SetRaw(NextRenderRequest->Image.GetData(), NextRenderRequest->Image.GetAllocatedSize(),
		                     FrameWidth, FrameHeight, ERGBFormat::BGRA, 8);
		const TArray64<uint8>& ImgData = imageWrapper->GetCompressed(5);
		RunAsyncImageSaveTask(ImgData, fileName);
	} else {
		// Generate image name
		fileName = FPaths::ProjectSavedDir() + SubDirectoryName + "/img" + "_" + ToStringWithLeadingZeros(
			ImgCounter, NumDigits);
		fileName += ".jpeg"; // Add file ending

		// Prepare data to be written to disk
		static TSharedPtr<IImageWrapper> imageWrapper = ImageWrapperModule.CreateImageWrapper(EImageFormat::JPEG);
		//EImageFormat::PNG //EImageFormat::JPEG
		imageWrapper->SetRaw(NextRenderRequest->Image.GetData(), NextRenderRequest->Image.GetAllocatedSize(),
		                     FrameWidth, FrameHeight, ERGBFormat::BGRA, 8);
		const TArray64<uint8>& ImgData = imageWrapper->GetCompressed(0);
		RunAsyncImageSaveTask(ImgData, fileName);
	}

	if (VerboseLogging && !fileName.IsEmpty())
	{
		UE_LOG(LogCameraCaptureManager, Warning, TEXT("%f"), *fileName);
	}
}

void UCameraCaptureManagerComponent::SetupCaptureComponent()
{
	TRACE_CPUPROFILER_EVENT_SCOPE_STR("UCameraCaptureManagerComponent::SetupCaptureComponent")
	if (!IsValid(CaptureComponent))
	{
		UE_LOG(LogCameraCaptureManager, Error, TEXT("SetupCaptureComponent: CaptureComponent is not valid!"));
		return;
	}
	// Create RenderTargets
	UTextureRenderTarget2D* renderTarget2D = NewObject<UTextureRenderTarget2D>(GetWorld());

	renderTarget2D->TargetGamma = GEngine->GetDisplayGamma();
	// renderTarget2D->TargetGamma = 1.2f;
	//1.2f; // for Vulkan //GEngine->GetDisplayGamma(); // for DX11/12

	renderTarget2D->ClearColor = FLinearColor::Black;
	renderTarget2D->bAutoGenerateMips = false;
	
	// renderTarget2D->InitCustomFormat(FrameWidth, FrameHeight, PF_B8G8R8A8, true);
	// PF_B8G8R8A8 disables HDR which will boost storing to disk due to less image information

	// note: RTF_RGBA8 means the pixels are stored in FColor structs which are BGRA ordered.
	renderTarget2D->RenderTargetFormat = ETextureRenderTargetFormat::RTF_RGBA8;
	renderTarget2D->bGPUSharedFlag = true; // demand buffer on GPU
	
	// Set Camera Properties
	CaptureComponent->CaptureSource = ESceneCaptureSource::SCS_FinalColorLDR;
	CaptureComponent->ShowFlags.SetTemporalAA(true);
	CaptureComponent->ShowFlags.SetLensFlares(true);
	
	// Assign PostProcess Material if assigned
	if (PostProcessMaterial)
	{
		// check nullptr
		CaptureComponent->AddOrUpdateBlendable(PostProcessMaterial);
	}
	else
	{
		UE_LOG(LogCameraCaptureManager, Log, TEXT("No PostProcessMaterial is assigend"));
	}

	renderTarget2D->InitAutoFormat(FrameWidth, FrameHeight);
	CaptureComponent->TextureTarget = renderTarget2D;
	renderTarget2D->UpdateResourceImmediate(true);
}

void UCameraCaptureManagerComponent::CaptureNonBlocking()
{
	TRACE_CPUPROFILER_EVENT_SCOPE_STR("UCameraCaptureManagerComponent::CaptureNonBlocking")
	if (!IsValid(CaptureComponent))
	{
		UE_LOG(LogCameraCaptureManager, Error, TEXT("CaptureColorNonBlocking: CaptureComponent was not valid!"));
		return;
	}

	if (!IsValid(CaptureComponent->TextureTarget))
	{
		UE_LOG(LogCameraCaptureManager, Error, TEXT("CaptureColorNonBlocking: TextureTarget was not valid!"));
		return;
	}

	if (!RenderRequestQueue.IsEmpty()) // if we are already requesting a frame there is no point in adding another
		return;
	
	CaptureComponent->TextureTarget->TargetGamma = GEngine->GetDisplayGamma();

	// Get RenderConterx
	FTextureRenderTargetResource* renderTargetResource = CaptureComponent->TextureTarget->
	                                                                       GameThread_GetRenderTargetResource();

	struct FReadSurfaceContext
	{
		FRenderTarget* SrcRenderTarget;
		TArray<FColor>* OutData;
		FIntRect Rect;
		FReadSurfaceDataFlags Flags;
		FDateTime& CaptureTime;
	};

	// Init new RenderRequest
	FRenderRequestStruct* renderRequest = new FRenderRequestStruct();

	// Setup GPU command
	FReadSurfaceContext readSurfaceContext = {
		renderTargetResource,
		&(renderRequest->Image),
		FIntRect(0, 0, renderTargetResource->GetSizeXY().X, renderTargetResource->GetSizeXY().Y),
		FReadSurfaceDataFlags(RCM_UNorm, CubeFace_MAX),
		renderRequest->CaptureTime
	};

	ENQUEUE_RENDER_COMMAND(SceneDrawCompletion)(
		[readSurfaceContext](FRHICommandListImmediate& RHICmdList)
		{
			TRACE_CPUPROFILER_EVENT_SCOPE_STR("UCameraCaptureManagerComponent::CaptureNonBlocking_ENQUEUE_RENDER_COMMAND")
			RHICmdList.ReadSurfaceData(
				readSurfaceContext.SrcRenderTarget->GetRenderTargetTexture(),
				readSurfaceContext.Rect,
				*readSurfaceContext.OutData,
				readSurfaceContext.Flags
			);
			readSurfaceContext.CaptureTime = FDateTime::UtcNow();
		});

	// Notifiy new task in RenderQueue
	RenderRequestQueue.Enqueue(renderRequest);

	// Set RenderCommandFence
	renderRequest->RenderFence.BeginFence();
}


/*
void UCameraCaptureManagerComponent::SpawnSegmentationCaptureComponent(ASceneCapture2D* ColorCapture){
	if(!IsValid(ColorCapture)){
        UE_LOG(LogTemp, Error, TEXT("CaptureColorNonBlocking: CaptureComponent was not valid!"));
        return;
    }

    // Spawning a new SceneCaptureComponent
    ASceneCapture2D* newSegmentationCapture = (ASceneCapture2D*) GetWorld()->SpawnActor<ASceneCapture2D>(ASceneCapture2D::StaticClass());
    if(!newSegmentationCapture){ // nullptr check
        UE_LOG(LogTemp, Error, TEXT("Failed to spawn SegmentationComponent"));
        return;
    }
    // Register new CaptureComponent to game
    newSegmentationCapture->GetCaptureComponent2D()->RegisterComponent();
    // Attach SegmentationCaptureComponent to match ColorCaptureComponent
    newSegmentationCapture->AttachToActor(ColorCapture, FAttachmentTransformRules::SnapToTargetNotIncludingScale);

    // Get values from "parent" ColorCaptureComponent
    newSegmentationCapture->GetCaptureComponent2D()->FOVAngle = ColorCapture->GetCaptureComponent2D()->FOVAngle;

    // Set pointer to new segmentation capture component
    SegmentationCapture = newSegmentationCapture;

    UE_LOG(LogTemp, Warning, TEXT("Done..."));
}
*/

/*
void UCameraCaptureManagerComponent::SetupSegmentationCaptureComponent(ASceneCapture2D* ColorCapture){
	if(!IsValid(ColorCapture)){
        UE_LOG(LogTemp, Error, TEXT("CaptureColorNonBlocking: CaptureComponent was not valid!"));
        return;
    }

    // Spawn SegmentaitonCaptureComponents
    SpawnSegmentationCaptureComponent(ColorCapture);

    // Setup SegmentationCaptureComponent
    SetupColorCaptureComponent(SegmentationCapture);

    // Assign PostProcess Material
    if(PostProcessMaterial){ // check nullptr
        SegmentationCapture->GetCaptureComponent2D()->AddOrUpdateBlendable(PostProcessMaterial);
    } else {
        UE_LOG(LogTemp, Error, TEXT("PostProcessMaterial was nullptr!"));
    }
}
*/

FString UCameraCaptureManagerComponent::ToStringWithLeadingZeros(int32 Integer, int32 MaxDigits)
{
	FString result = FString::FromInt(Integer);
	int32 stringSize = result.Len();
	int32 stringDelta = MaxDigits - stringSize;
	if (stringDelta < 0)
	{
		UE_LOG(LogCameraCaptureManager, Error, TEXT("MaxDigits of ImageCounter Overflow!"));
		return result;
	}
	//FIXME: Smarter function for this..
	FString leadingZeros = "";
	for (size_t i = 0; i < stringDelta; i++)
	{
		leadingZeros += "0";
	}
	result = leadingZeros + result;

	return result;
}

void UCameraCaptureManagerComponent::RunAsyncImageSaveTask(TArray64<uint8> Image, FString ImageName)
{
	(new FAutoDeleteAsyncTask<AsyncSaveImageToDiskTask>(Image, ImageName))->StartBackgroundTask();
}

AsyncSaveImageToDiskTask::AsyncSaveImageToDiskTask(TArray64<uint8> Image, FString ImageName)
{
	ImageCopy = Image;
	FileName = ImageName;
}

AsyncSaveImageToDiskTask::~AsyncSaveImageToDiskTask()
{
	//UE_LOG(LogTemp, Warning, TEXT("AsyncTaskDone"));
}

void AsyncSaveImageToDiskTask::DoWork()
{
	TRACE_CPUPROFILER_EVENT_SCOPE_STR("AsyncSaveImageToDiskTask::DoWork")
	FFileHelper::SaveArrayToFile(ImageCopy, *FileName);
	UE_LOG(LogCameraCaptureManager, Log, TEXT("Stored Image: %s"), *FileName);
}

#include "NormalSceneCapture.h"

#include "Runtime/Engine/Classes/Engine/Engine.h"
// #include "Kismet/GameplayStatics.h"
#include "ShowFlags.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Materials/Material.h"

DEFINE_LOG_CATEGORY(LogNormalSceneCapture);

UNormalSceneCapture::UNormalSceneCapture(const FObjectInitializer & ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Set this to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void UNormalSceneCapture::BeginPlay()
{
	Super::BeginPlay();

	// TRACE_CPUPROFILER_EVENT_SCOPE_STR("UNormalSceneCapture::SetupCaptureComponent")

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
	renderTarget2D->InitAutoFormat(FrameWidth, FrameHeight);
	
	// Set Camera Properties
	CaptureSource = ESceneCaptureSource::SCS_FinalColorLDR;
	ShowFlags.SetTemporalAA(true);
	ShowFlags.SetLensFlares(true);
	
	// Assign PostProcess Material if assigned
	// if (PostProcessMaterial)
	// {
	// 	AddOrUpdateBlendable(PostProcessMaterial);
	// }
	// else
	// {
	// 	UE_LOG(LogCameraCaptureManager, Log, TEXT("No PostProcessMaterial is assigend"));
	// }
	
	TextureTarget = renderTarget2D;
	TextureTarget->UpdateResourceImmediate(true);
}

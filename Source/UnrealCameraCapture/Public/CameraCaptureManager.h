#pragma once

class ASceneCapture2D;
class UMaterial;

#include "CoreMinimal.h"
#include "Containers/Queue.h"
#include "CameraCaptureManager.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogCameraCaptureManager, Log, All);

USTRUCT(Blueprintable)
struct FRenderRequestStruct
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	FDateTime CaptureTime;
	
	UPROPERTY(BlueprintReadWrite)
	TArray<FColor> Image;
	
	FRenderCommandFence RenderFence;

	FRenderRequestStruct()
	{
	}
};

DECLARE_DYNAMIC_DELEGATE_OneParam(FCallbackDelegate, FRenderRequestStruct, RenderRequest);

UCLASS(ClassGroup = (Custom), Blueprintable, meta = (BlueprintSpawnableComponent))
class UNREALCAMERACAPTURE_API UCameraCaptureManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	UCameraCaptureManagerComponent();
	
	// Color Capture Components
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Capture")
	USceneCaptureComponent2D* CaptureComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Capture")
	int FrameWidth = 640;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Capture")
	int FrameHeight = 480;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Capture", meta = (InlineEditConditionToggle))
	bool bCallbackOnCapture = true;

	// If not UsePNG, JPEG format is used (For Non-Color purposes PNG is necessary, elsewise compression will mess with labels!)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Capture", Meta = (EditCondition="!bCallbackOnCapture"))
	bool UsePNG = false;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(IsBindableEvent="True"), Category="Capture")
	FCallbackDelegate CaptureCallBack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Capture", Meta = (EditCondition="!bCallbackOnCapture"))
	int NumDigits = 6;
	// Captured Data Sub-Directory Name 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Capture", Meta = (EditCondition="!bCallbackOnCapture"))
	FString SubDirectoryName = "";


	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Capture")
	//ASceneCapture2D* SegmentationCapture = nullptr;

	// PostProcessMaterial used for segmentation
	UPROPERTY(EditAnywhere, Category="Capture")
	UMaterial* PostProcessMaterial = nullptr;

	UPROPERTY(EditAnywhere, Category="Logging")
	bool VerboseLogging = false;

protected:
	// RenderRequest Queue
	TQueue<FRenderRequestStruct*> RenderRequestQueue;

	int ImgCounter = 0;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void SetupCaptureComponent();

	void SaveCapture(FRenderRequestStruct* NextRenderRequest);

	// Creates an async task that will save the captured image to disk
	void RunAsyncImageSaveTask(TArray64<uint8> Image, FString ImageName);

	//void SpawnSegmentationCaptureComponent(ASceneCapture2D* ColorCapture);
	//void SetupSegmentationCaptureComponent(ASceneCapture2D* ColorCapture);

	FString ToStringWithLeadingZeros(int32 Integer, int32 MaxDigits);

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "ImageCapture")
	void CaptureNonBlocking();
};


class AsyncSaveImageToDiskTask : public FNonAbandonableTask
{
public:
	AsyncSaveImageToDiskTask(TArray64<uint8> Image, FString ImageName);
	~AsyncSaveImageToDiskTask();

	// Required by UE4!
	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(AsyncSaveImageToDiskTask, STATGROUP_ThreadPoolAsyncTasks);
	}

protected:
	TArray<uint8> ImageCopy;
	FString FileName = "";

public:
	void DoWork();
};

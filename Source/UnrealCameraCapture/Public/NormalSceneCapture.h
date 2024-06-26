#pragma once

#include "Components/SceneCaptureComponent2D.h"

#include "CoreMinimal.h"
#include "NormalSceneCapture.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogNormalSceneCapture, Log, All);

UCLASS(ClassGroup = (Custom), Blueprintable, meta = (BlueprintSpawnableComponent))
class UNREALCAMERACAPTURE_API UNormalSceneCapture : public USceneCaptureComponent2D
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	UNormalSceneCapture(const FObjectInitializer & ObjectInitializer);
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Capture")
	int FrameWidth = 640;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Capture")
	int FrameHeight = 480;
	
	UPROPERTY(EditAnywhere, Category="Logging")
	bool VerboseLogging = false;

protected:
	virtual void BeginPlay() override;
};

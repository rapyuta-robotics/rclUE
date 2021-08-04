// Copyright 2021 Rapyuta Robotics Co., Ltd.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Msgs/ROS2LaserScanMsg.h"

#include "SensorLidar.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogROS2Sensor, Log, All);

#define TRACE_ASYNC 1

UCLASS()
class RCLUE_API ASensorLidar : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASensorLidar();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	UFUNCTION()
	void LidarMessageUpdate(UROS2GenericMsg* TopicMessage);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void Run();

	UFUNCTION(BlueprintCallable)
	void Scan();

	UFUNCTION(BlueprintCallable)
	void InitToNode(AROS2Node* Node);

	// adding the rest of the necessary information might be tedious
	// eventually split into multiple getters
	UFUNCTION(BlueprintCallable)
	void GetData(TArray<FHitResult>& hits, float& time);

	// this should probably be removed so that the sensor can be decoupled from the message types
	UFUNCTION(BlueprintCallable)
	FLaserScanData GetROS2Data() const;

	UFUNCTION(BlueprintCallable)
	float GetMinAngleRadians() const;

	UFUNCTION(BlueprintCallable)
	float GetMaxAngleRadians() const;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UROS2Publisher* LidarPublisher;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int NSamplesPerScan;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int ScanFrequency;

	// [degrees]
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float StartAngle;

	// scan goes from StartAngle to StartAngle+FOVHorizontal
	// [degrees]
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float FOVHorizontal;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float MinRange;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float MaxRange;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
	float TimeOfLastScan = 0.f;

	// [degrees]
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
	float DHAngle;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
  	TArray<FHitResult> RecordedHits;

#if TRACE_ASYNC
 	TArray<FTraceHandle> TraceHandles;
#endif
	
	UPROPERTY()
	FTimerHandle TimerHandle;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool ShowLidarRays = true;

private:
	float dt;
};

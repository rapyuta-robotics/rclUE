// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Msgs/ROS2LaserScanMsg.h"
#include "SensorLidar.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogROS2Sensor, Log, All);

class AROS2Node;
class UROS2LidarPublisher;

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

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void InitToNode(AROS2Node *Node);

	// adding the rest of the necessary information might be tedious
	// eventually split into multiple getters
	UFUNCTION(BlueprintCallable)
	void GetData(TArray<FHitResult>& hits, float& time);

	// this should probably be removed so that the sensor can be decoupled from the message types
	UFUNCTION(BlueprintCallable)
	FLaserScanData GetROS2Data() const;
	
	UPROPERTY(EditAnywhere)
    UStaticMeshComponent* LidarMesh;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UROS2LidarPublisher *LidarPublisher;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int nSamplesPerSecond;

	// [degrees]
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float StartAngle;

	// scan goes from StartAngle to StartAngle+FOVHorizontal
	// [degrees]
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float FOVHorizontal;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float Range;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
	float TimeOfLastScan = 0.f;

	// [degrees]
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
	float DHAngle;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
  	TArray<FHitResult> RecordedHits;

private:
	uint32 nSamplesPerFrame;
	float dt;
};

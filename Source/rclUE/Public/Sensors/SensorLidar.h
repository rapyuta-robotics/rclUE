// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Msgs/ROS2LaserScanMsg.h"
#include "SensorLidar.generated.h"

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

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// adding the rest of the necessary information might be tedious
	// eventually split into multiple getters
	UFUNCTION(BlueprintCallable)
	void GetData(TArray<FHitResult>& hits, float& time);

	// this should probably be removed so that the sensor can be decoupled from the message types
	UFUNCTION(BlueprintCallable)
	FLaserScanData GetROS2Data() const;
	
	UPROPERTY(EditAnywhere)
    UStaticMeshComponent* LidarMesh;

	UPROPERTY(EditAnywhere)
	uint32 nSamplesPerSecond;

	// scan goes from -FOVHorizontal to +FOVHorizontal
	// [degrees]
	UPROPERTY(EditAnywhere)
	float FOVHorizontal;

	UPROPERTY(EditAnywhere)
	float Range;

	UPROPERTY(VisibleAnywhere)
	float TimeOfLastScan;

	// [degrees]
	UPROPERTY(VisibleAnywhere)
	float DHAngle;

  	TArray<FHitResult> RecordedHits;

private:
	uint32 nSamplesPerFrame;
	float dt;
};

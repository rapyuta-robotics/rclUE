// Copyright (C) Rapyuta Robotics

#pragma once

#include <Msgs/ROS2OdometryMsg.h>
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ROS2Utility.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RCLUE_API UROS2Utility : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UROS2Utility();

	// UE to ROS conversion
	// cm -> m
	// Left handed -> Right handed
	UFUNCTION(BlueprintCallable)
	static FVector VectorUEToROS(const FVector Input);

	UFUNCTION(BlueprintCallable)
	static FVector RotationUEToROS(const FVector Input);

	UFUNCTION(BlueprintCallable)
	static FQuat QuatUEToROS(const FQuat Input);

	UFUNCTION(BlueprintCallable)
	static FTransform TransformUEToROS(const FTransform Input);

	UFUNCTION(BlueprintCallable)
	static FOdometryData OdomUEToROS(const FOdometryData Input);

	// ROS to UE conversion
	// m -> cm
	// Right handed -> Left handed
	UFUNCTION(BlueprintCallable)
	static FVector VectorROSToUE(const FVector Input);
	
	UFUNCTION(BlueprintCallable)
	static FVector RotationROSToUE(const FVector Input);
	
	UFUNCTION(BlueprintCallable)
	static FQuat QuatROSToUE(const FQuat Input);

	UFUNCTION(BlueprintCallable)
	static FTransform TransformROSToUE(const FTransform Input);

	UFUNCTION(BlueprintCallable)
	static FOdometryData OdomROSToUE(const FOdometryData Input);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};

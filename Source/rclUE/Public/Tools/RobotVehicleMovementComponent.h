// Copyright (C) Rapyuta Robotics

#pragma once

#include <Msgs/ROS2OdometryMsg.h>
#include "CoreMinimal.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Kismet/GameplayStatics.h"
#include "RobotVehicleMovementComponent.generated.h"

/**
 * 
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RCLUE_API URobotVehicleMovementComponent : public UPawnMovementComponent
{
	GENERATED_BODY()

private:

	UPROPERTY(Transient)
	FVector DesiredMovement;

	UPROPERTY(Transient)
	FQuat DesiredRotation;

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Velocity)
	FVector AngularVelocity;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FOdometryData OdomData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString FrameId = TEXT("");

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ChildFrameId = TEXT("");

	UPROPERTY(EditAnywhere)
	FTransform InitialTransform;

	// UFUNCTION(BlueprintCallable)
	// FOdometryData getOdomDataROS();

	UFUNCTION(BlueprintCallable)
	FTransform GetOdomTF();

private:
	virtual void InitOdom();
	virtual void UpdateMovement(float DeltaTime);
	virtual void UpdateOdom();
	bool IsOdomInitialized = false;

public:

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;
};

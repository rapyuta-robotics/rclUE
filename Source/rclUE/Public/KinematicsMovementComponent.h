// Copyright (C) Rapyuta Robotics

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/FloatingPawnMovement.h"

#include "KinematicsMovementComponent.generated.h"

/**
 * 
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RCLUE_API UKinematicsMovementComponent : public UPawnMovementComponent
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

private:

	virtual void UpdateMovement(float DeltaTime);
	virtual void UpdateOdom(float DeltaTime);

public:

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;
};

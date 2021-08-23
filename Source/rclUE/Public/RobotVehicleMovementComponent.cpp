// Copyright (C) Rapyuta Robotics


#include "RobotVehicleMovementComponent.h"

#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"

void URobotVehicleMovementComponent::UpdateMovement(float DeltaTime)
{
	const FQuat OldRotation = UpdatedComponent->GetComponentQuat();

	FVector position = UpdatedComponent->ComponentVelocity * DeltaTime;
	FQuat DeltaRotation(FVector(0.0f, 0.0f, 1.0f), AngularVelocity.Z * DeltaTime);

	DesiredRotation = OldRotation * DeltaRotation;
	DesiredMovement = (OldRotation * position);

}
void URobotVehicleMovementComponent::InitOdom(){
	OdomData.frame_id = FrameId;
	OdomData.child_frame_id = ChildFrameId;
	
	InitialTransform.SetTranslation(PawnOwner->GetActorLocation());
	InitialTransform.SetRotation(FQuat(PawnOwner->GetActorRotation()));

	// todo temporary hardcoded
	OdomData.pose_covariance.Init(0,36);
	OdomData.pose_covariance[0] = 0.00001;
	OdomData.pose_covariance[7] = 0.00001;
	OdomData.pose_covariance[14] = 1000000000000.0;
	OdomData.pose_covariance[21] = 1000000000000.0;
	OdomData.pose_covariance[28] = 1000000000000.0;
	OdomData.pose_covariance[35] = 0.001;	
	OdomData.twist_covariance.Init(0,36);
	OdomData.twist_covariance[0] = 0.00001;
	OdomData.twist_covariance[7] = 0.00001;
	OdomData.twist_covariance[14] = 1000000000000.0;
	OdomData.twist_covariance[21] = 1000000000000.0;
	OdomData.twist_covariance[28] = 1000000000000.0;
	OdomData.twist_covariance[35] = 0.001;

	IsOdomInitialized = true;
}
void URobotVehicleMovementComponent::UpdateOdom()
{
	if(!IsOdomInitialized){
		InitOdom();
	}
	// time
	float TimeNow = UGameplayStatics::GetTimeSeconds(GWorld);
	OdomData.sec = (int32_t)TimeNow;
	unsigned long long ns = (unsigned long long)(TimeNow * 1000000000.0f);
	OdomData.nanosec = (uint32_t)(ns - (OdomData.sec * 1000000000ul));

	// position
	OdomData.position = PawnOwner->GetActorLocation() - InitialTransform.GetTranslation();
	OdomData.orientation = FQuat(PawnOwner->GetActorRotation() - InitialTransform.GetRotation().Rotator());

	// velocity
	OdomData.linear = Velocity;
	OdomData.angular = FMath::DegreesToRadians(AngularVelocity);
}

void URobotVehicleMovementComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	if (!ShouldSkipUpdate(DeltaTime))
	{
		Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

		// Make sure that everything is still valid, and that we are allowed to move.
		if (IsValid(UpdatedComponent))
		{
			UpdateMovement(DeltaTime);
			UpdateOdom();

			FHitResult Hit;
			SafeMoveUpdatedComponent(DesiredMovement, DesiredRotation, true, Hit);
			// UE_LOG(LogTemp, Error, TEXT("INNNN movementtickcomponent %ds"), Hit.IsValidBlockingHit());
			// If we bumped into something, try to slide along it
			if (Hit.IsValidBlockingHit())
			{
				SlideAlongSurface(DesiredMovement, 1.0f - Hit.Time, Hit.Normal, Hit);
			}
		}

		UpdateComponentVelocity();
	}
}

FTransform URobotVehicleMovementComponent::GetOdomTF(){
	FTransform TF;
	TF.SetTranslation(OdomData.position);
	TF.SetRotation(OdomData.orientation);
	return TF;
}

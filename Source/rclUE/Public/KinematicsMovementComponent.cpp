// Copyright (C) Rapyuta Robotics


#include "KinematicsMovementComponent.h"

#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"

void UKinematicsMovementComponent::UpdateMovement(float DeltaTime)
{
	const FQuat OldRotation = UpdatedComponent->GetComponentQuat();

	FVector position = UpdatedComponent->ComponentVelocity * DeltaTime;
	FQuat DeltaRotation(FVector(0.0f, 0.0f, 1.0f), -AngularVelocity.Z * DeltaTime);

	DesiredRotation = OldRotation * DeltaRotation;
	DesiredMovement = (OldRotation * position);
}

void UKinematicsMovementComponent::UpdateOdom(float DeltaTime)
{
	
}

void UKinematicsMovementComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	if (!ShouldSkipUpdate(DeltaTime))
	{
		Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

		// Make sure that everything is still valid, and that we are allowed to move.
		if (IsValid(UpdatedComponent))
		{
			UpdateMovement(DeltaTime);

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

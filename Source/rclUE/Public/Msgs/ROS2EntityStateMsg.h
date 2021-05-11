// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2EntityStateMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FEntityStateData
{
	GENERATED_BODY()

public:
	FString name;
	
	// Pose
	FVector position;
	FQuat orientation;

	// Twist
	FVector linear;
	FVector angular;

	FString refFrame;
};

/**
 * 
 */
UCLASS(Blueprintable)
class RCLUE_API UROS2EntityStateMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void Update(FEntityStateData data);
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;
	
	
};

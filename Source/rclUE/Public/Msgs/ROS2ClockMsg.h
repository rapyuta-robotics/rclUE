// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"
#include <rosgraph_msgs/msg/clock.h>

#include "ROS2ClockMsg.generated.h"

/**
 * 
 */
UCLASS()
class RCLUE_API UROS2ClockMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void Update(const float elapsedTime);

	UFUNCTION(BlueprintCallable)
	void PrintSubToLog() const;
	
	virtual void* Get() override;
	
	virtual FString MsgToString() const override;

private:
	rosgraph_msgs__msg__Clock clock_pub_msg;
};

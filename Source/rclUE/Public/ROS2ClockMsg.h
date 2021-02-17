// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ROS2GenericMsg.h"
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
	UROS2ClockMsg();
	~UROS2ClockMsg();

  	UFUNCTION(BlueprintCallable)
	virtual void Init() override;

  	UFUNCTION(BlueprintCallable)
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void Update(const float elapsedTime);
	
	const rosgraph_msgs__msg__Clock* Get() const;
	
	virtual void* Get() override;
	
	virtual void PrintPubToLog(rcl_ret_t rc) const override;
	
	virtual void PrintSubToLog(rcl_ret_t rc) const override;

private:
	rosgraph_msgs__msg__Clock clock_pub_msg;
};
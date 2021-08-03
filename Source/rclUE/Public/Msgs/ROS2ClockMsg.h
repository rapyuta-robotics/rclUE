// Copyright 2021 Rapyuta Robotics Co., Ltd.

#pragma once

#include "CoreMinimal.h"

#include "rosgraph_msgs/msg/clock.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

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

private:
	virtual FString MsgToString() const override;

	rosgraph_msgs__msg__Clock clock_pub_msg;
};

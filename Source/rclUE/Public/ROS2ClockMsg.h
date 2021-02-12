// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ROS2MsgInterface.h"
#include "rclcUtilities.h"
#include <rosgraph_msgs/msg/clock.h>

/**
 * 
 */
class RCLUE_API ROS2ClockMsg : public UObject, public IROS2MsgInterface
{
public:
	ROS2ClockMsg();
	~ROS2ClockMsg();

	void Init();
	const rosidl_message_type_support_t* GetTypeSupport();
	void Update(const void* data);
	const void* Get();
	void PrintToLog(rcl_ret_t rc);

private:
	rosgraph_msgs__msg__Clock clock_pub_msg;
};

// Fill out your copyright notice in the Description page of Project Settings.


#include "ROS2ClockMsg.h"
#include "Kismet/GameplayStatics.h"


UROS2ClockMsg::UROS2ClockMsg()
{
}

UROS2ClockMsg::~UROS2ClockMsg()
{
}

void UROS2ClockMsg::Init()
{
	UE_LOG(LogTemp, Warning, TEXT("UROS2ClockMsg::Init"));
	rosgraph_msgs__msg__Clock__init(&clock_pub_msg);
}

const rosidl_message_type_support_t* UROS2ClockMsg::GetTypeSupport()
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(rosgraph_msgs, msg, Clock);
}

void UROS2ClockMsg::Update(const void* data)
{
    float elapsedTime = *((float*)data);
	clock_pub_msg.clock.sec = (int32_t)elapsedTime;
	unsigned long long ns = (unsigned long long)(elapsedTime * 1000000000.0f);
	clock_pub_msg.clock.nanosec = (uint32_t)(ns - (clock_pub_msg.clock.sec * 1000000000ul));
}

const void* UROS2ClockMsg::Get()
{
	return &clock_pub_msg;
}


void UROS2ClockMsg::PrintToLog(rcl_ret_t rc)
{
	if (rc == RCL_RET_OK)
	{
		UE_LOG(LogTemp, Log, TEXT("Published message %ds %dns"), clock_pub_msg.clock.sec, clock_pub_msg.clock.nanosec);
	} 
	else 
	{
		UE_LOG(LogTemp, Log, TEXT("timer_callback: Error publishing message %ds %dns"), clock_pub_msg.clock.sec, clock_pub_msg.clock.nanosec);
	}
}


// Copyright 2021 Rapyuta Robotics Co., Ltd.

#include "Msgs/ROS2ClockMsg.h"
#include "Kismet/GameplayStatics.h"

void UROS2ClockMsg::Init()
{
	rosgraph_msgs__msg__Clock__init(&clock_pub_msg);
}

void UROS2ClockMsg::Fini()
{
	rosgraph_msgs__msg__Clock__fini(&clock_pub_msg);
}

const rosidl_message_type_support_t* UROS2ClockMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(rosgraph_msgs, msg, Clock);
}

void UROS2ClockMsg::Update(const float elapsedTime)
{
	clock_pub_msg.clock.sec = (int32_t)elapsedTime;
	unsigned long long ns = (unsigned long long)(elapsedTime * 1000000000.0f);
	clock_pub_msg.clock.nanosec = (uint32_t)(ns - (clock_pub_msg.clock.sec * 1000000000ul));
}

void* UROS2ClockMsg::Get()
{
	return &clock_pub_msg;
}

FString UROS2ClockMsg::MsgToString() const
{
	return FString::Printf(TEXT("%ds %dns"), clock_pub_msg.clock.sec, clock_pub_msg.clock.nanosec);
}

void UROS2ClockMsg::PrintSubToLog() const
{
	UE_LOG(LogROS2Msg, Log, TEXT("Subscriber clock message %s"), *MsgToString());
}
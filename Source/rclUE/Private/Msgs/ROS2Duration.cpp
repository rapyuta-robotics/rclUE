// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from builtin_interfaces/msg/Duration.msg - do not modify

#include "Msgs/ROS2Duration.h"

#include "Kismet/GameplayStatics.h"



void UROS2DurationMsg::Init()
{
	builtin_interfaces__msg__Duration__init(&duration_msg);
}

void UROS2DurationMsg::Fini()
{
	builtin_interfaces__msg__Duration__fini(&duration_msg);
}

const rosidl_message_type_support_t* UROS2DurationMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(builtin_interfaces, msg, Duration);
}

void UROS2DurationMsg::SetMsg(const FROSDuration& Inputs)
{
    Inputs.SetROS2(duration_msg);
}

void UROS2DurationMsg::GetMsg(FROSDuration& Outputs) const
{
    Outputs.SetFromROS2(duration_msg);
}

void* UROS2DurationMsg::Get()
{
	return &duration_msg;
}

FString UROS2DurationMsg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}
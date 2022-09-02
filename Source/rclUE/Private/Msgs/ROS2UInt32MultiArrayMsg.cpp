// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/msg/UInt32MultiArray.msg - do not modify

#include "Msgs/ROS2UInt32MultiArrayMsg.h"

#include "Kismet/GameplayStatics.h"

void UROS2UInt32MultiArrayMsg::Init()
{
	example_interfaces__msg__UInt32MultiArray__init(&u_int32_multi_array_msg);
}

void UROS2UInt32MultiArrayMsg::Fini()
{
	example_interfaces__msg__UInt32MultiArray__fini(&u_int32_multi_array_msg);
}

const rosidl_message_type_support_t* UROS2UInt32MultiArrayMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(example_interfaces, msg, UInt32MultiArray);
}

void UROS2UInt32MultiArrayMsg::SetMsg(const FROSUInt32MultiArray& Inputs)
{
    Inputs.SetROS2(u_int32_multi_array_msg);
}

void UROS2UInt32MultiArrayMsg::GetMsg(FROSUInt32MultiArray& Outputs) const
{
    Outputs.SetFromROS2(u_int32_multi_array_msg);
}

void* UROS2UInt32MultiArrayMsg::Get()
{
	return &u_int32_multi_array_msg;
}

FString UROS2UInt32MultiArrayMsg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}
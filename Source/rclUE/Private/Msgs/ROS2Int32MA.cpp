// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/msg/Int32MultiArray.msg - do not modify

#include "Msgs/ROS2Int32MA.h"

#include "Kismet/GameplayStatics.h"



void UROS2Int32MAMsg::Init()
{
	example_interfaces__msg__Int32MultiArray__init(&int32_multi_array_msg);
}

void UROS2Int32MAMsg::Fini()
{
	example_interfaces__msg__Int32MultiArray__fini(&int32_multi_array_msg);
}

const rosidl_message_type_support_t* UROS2Int32MAMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(example_interfaces, msg, Int32MultiArray);
}

void UROS2Int32MAMsg::SetMsg(const FROSInt32MA& Inputs)
{
    Inputs.SetROS2(int32_multi_array_msg);
}

void UROS2Int32MAMsg::GetMsg(FROSInt32MA& Outputs) const
{
    Outputs.SetFromROS2(int32_multi_array_msg);
}

void* UROS2Int32MAMsg::Get()
{
	return &int32_multi_array_msg;
}

FString UROS2Int32MAMsg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}
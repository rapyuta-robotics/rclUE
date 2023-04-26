// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/msg/MultiArrayDimension.msg - do not modify

#include "Msgs/ROS2MADim.h"

#include "Kismet/GameplayStatics.h"



void UROS2MADimMsg::Init()
{
	example_interfaces__msg__MultiArrayDimension__init(&multi_array_dimension_msg);
}

void UROS2MADimMsg::Fini()
{
	example_interfaces__msg__MultiArrayDimension__fini(&multi_array_dimension_msg);
}

const rosidl_message_type_support_t* UROS2MADimMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(example_interfaces, msg, MultiArrayDimension);
}

void UROS2MADimMsg::SetMsg(const FROSMADim& Inputs)
{
    Inputs.SetROS2(multi_array_dimension_msg);
}

void UROS2MADimMsg::GetMsg(FROSMADim& Outputs) const
{
    Outputs.SetFromROS2(multi_array_dimension_msg);
}

void* UROS2MADimMsg::Get()
{
	return &multi_array_dimension_msg;
}

FString UROS2MADimMsg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}
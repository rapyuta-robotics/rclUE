// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/Illuminance.msg - do not modify

#include "Msgs/ROS2Illuminance.h"

#include "Kismet/GameplayStatics.h"



void UROS2IlluminanceMsg::Init()
{
	sensor_msgs__msg__Illuminance__init(&illuminance_msg);
}

void UROS2IlluminanceMsg::Fini()
{
	sensor_msgs__msg__Illuminance__fini(&illuminance_msg);
}

const rosidl_message_type_support_t* UROS2IlluminanceMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, Illuminance);
}

void UROS2IlluminanceMsg::SetMsg(const FROSIlluminance& Inputs)
{
    Inputs.SetROS2(illuminance_msg);
}

void UROS2IlluminanceMsg::GetMsg(FROSIlluminance& Outputs) const
{
    Outputs.SetFromROS2(illuminance_msg);
}

void* UROS2IlluminanceMsg::Get()
{
	return &illuminance_msg;
}

FString UROS2IlluminanceMsg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}
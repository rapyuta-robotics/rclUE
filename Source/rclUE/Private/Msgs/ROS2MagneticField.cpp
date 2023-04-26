// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/MagneticField.msg - do not modify

#include "Msgs/ROS2MagneticField.h"

#include "Kismet/GameplayStatics.h"



void UROS2MagneticFieldMsg::Init()
{
	sensor_msgs__msg__MagneticField__init(&magnetic_field_msg);
}

void UROS2MagneticFieldMsg::Fini()
{
	sensor_msgs__msg__MagneticField__fini(&magnetic_field_msg);
}

const rosidl_message_type_support_t* UROS2MagneticFieldMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, MagneticField);
}

void UROS2MagneticFieldMsg::SetMsg(const FROSMagneticField& Inputs)
{
    Inputs.SetROS2(magnetic_field_msg);
}

void UROS2MagneticFieldMsg::GetMsg(FROSMagneticField& Outputs) const
{
    Outputs.SetFromROS2(magnetic_field_msg);
}

void* UROS2MagneticFieldMsg::Get()
{
	return &magnetic_field_msg;
}

FString UROS2MagneticFieldMsg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}
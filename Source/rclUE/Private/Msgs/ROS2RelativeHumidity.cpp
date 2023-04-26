// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/RelativeHumidity.msg - do not modify

#include "Msgs/ROS2RelativeHumidity.h"

#include "Kismet/GameplayStatics.h"



void UROS2RelativeHumidityMsg::Init()
{
	sensor_msgs__msg__RelativeHumidity__init(&relative_humidity_msg);
}

void UROS2RelativeHumidityMsg::Fini()
{
	sensor_msgs__msg__RelativeHumidity__fini(&relative_humidity_msg);
}

const rosidl_message_type_support_t* UROS2RelativeHumidityMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, RelativeHumidity);
}

void UROS2RelativeHumidityMsg::SetMsg(const FROSRelativeHumidity& Inputs)
{
    Inputs.SetROS2(relative_humidity_msg);
}

void UROS2RelativeHumidityMsg::GetMsg(FROSRelativeHumidity& Outputs) const
{
    Outputs.SetFromROS2(relative_humidity_msg);
}

void* UROS2RelativeHumidityMsg::Get()
{
	return &relative_humidity_msg;
}

FString UROS2RelativeHumidityMsg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}
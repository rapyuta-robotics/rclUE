// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from visualization_msgs/msg/Marker.msg - do not modify

#include "Msgs/ROS2MarkerMsg.h"

#include "Kismet/GameplayStatics.h"

void UROS2MarkerMsg::Init()
{
	visualization_msgs__msg__Marker__init(&marker_msg);
}

void UROS2MarkerMsg::Fini()
{
	visualization_msgs__msg__Marker__fini(&marker_msg);
}

const rosidl_message_type_support_t* UROS2MarkerMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(visualization_msgs, msg, Marker);
}

void UROS2MarkerMsg::SetMsg(const FROSMarker& Inputs)
{
    Inputs.SetROS2(marker_msg);
}

void UROS2MarkerMsg::GetMsg(FROSMarker& Outputs) const
{
    Outputs.SetFromROS2(marker_msg);
}

void* UROS2MarkerMsg::Get()
{
	return &marker_msg;
}

FString UROS2MarkerMsg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}
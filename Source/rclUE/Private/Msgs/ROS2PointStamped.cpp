// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/PointStamped.msg - do not modify

#include "Msgs/ROS2PointStamped.h"

#include "Kismet/GameplayStatics.h"



void UROS2PointStampedMsg::Init()
{
	geometry_msgs__msg__PointStamped__init(&point_stamped_msg);
}

void UROS2PointStampedMsg::Fini()
{
	geometry_msgs__msg__PointStamped__fini(&point_stamped_msg);
}

const rosidl_message_type_support_t* UROS2PointStampedMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, PointStamped);
}

void UROS2PointStampedMsg::SetMsg(const FROSPointStamped& Inputs)
{
    Inputs.SetROS2(point_stamped_msg);
}

void UROS2PointStampedMsg::GetMsg(FROSPointStamped& Outputs) const
{
    Outputs.SetFromROS2(point_stamped_msg);
}

void* UROS2PointStampedMsg::Get()
{
	return &point_stamped_msg;
}

FString UROS2PointStampedMsg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}
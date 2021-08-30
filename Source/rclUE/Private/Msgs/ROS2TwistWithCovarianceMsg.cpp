// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/TwistWithCovariance.msg - do not modify

#include "Msgs/ROS2TwistWithCovarianceMsg.h"

#include "Kismet/GameplayStatics.h"

void UROS2TwistWithCovarianceMsg::Init()
{
	geometry_msgs__msg__TwistWithCovariance__init(&twist_with_covariance_msg);
}

void UROS2TwistWithCovarianceMsg::Fini()
{
	geometry_msgs__msg__TwistWithCovariance__fini(&twist_with_covariance_msg);
}

const rosidl_message_type_support_t* UROS2TwistWithCovarianceMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, TwistWithCovariance);
}

void UROS2TwistWithCovarianceMsg::SetMsg(const FROSTwistWithCovariance& Inputs)
{
    Inputs.SetROS2(twist_with_covariance_msg);
}

void UROS2TwistWithCovarianceMsg::GetMsg(FROSTwistWithCovariance& Outputs) const
{
    Outputs.SetFromROS2(twist_with_covariance_msg);
}

void* UROS2TwistWithCovarianceMsg::Get()
{
	return &twist_with_covariance_msg;
}

FString UROS2TwistWithCovarianceMsg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}
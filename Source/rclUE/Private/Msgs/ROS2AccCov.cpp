// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/AccelWithCovariance.msg - do not modify

#include "Msgs/ROS2AccCov.h"

#include "Kismet/GameplayStatics.h"

void UROS2AccCovMsg::Init()
{
    geometry_msgs__msg__AccelWithCovariance__init(&accel_with_covariance_msg);
}

void UROS2AccCovMsg::Fini()
{
    geometry_msgs__msg__AccelWithCovariance__fini(&accel_with_covariance_msg);
}

const rosidl_message_type_support_t* UROS2AccCovMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, AccelWithCovariance);
}

void UROS2AccCovMsg::SetMsg(const FROSAccCov& Inputs)
{
    Inputs.SetROS2(accel_with_covariance_msg);
}

void UROS2AccCovMsg::GetMsg(FROSAccCov& Outputs) const
{
    Outputs.SetFromROS2(accel_with_covariance_msg);
}

void* UROS2AccCovMsg::Get()
{
    return &accel_with_covariance_msg;
}

FString UROS2AccCovMsg::MsgToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}

// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/PoseWithCovarianceStamped.msg - do not modify

#include "Msgs/ROS2PoseCovStamped.h"

#include "Kismet/GameplayStatics.h"

void UROS2PoseCovStampedMsg::Init()
{
    geometry_msgs__msg__PoseWithCovarianceStamped__init(&pose_with_covariance_stamped_msg);
}

void UROS2PoseCovStampedMsg::Fini()
{
    geometry_msgs__msg__PoseWithCovarianceStamped__fini(&pose_with_covariance_stamped_msg);
}

const rosidl_message_type_support_t* UROS2PoseCovStampedMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, PoseWithCovarianceStamped);
}

void UROS2PoseCovStampedMsg::SetMsg(const FROSPoseCovStamped& Inputs)
{
    Inputs.SetROS2(pose_with_covariance_stamped_msg);
}

void UROS2PoseCovStampedMsg::GetMsg(FROSPoseCovStamped& Outputs) const
{
    Outputs.SetFromROS2(pose_with_covariance_stamped_msg);
}

void* UROS2PoseCovStampedMsg::Get()
{
    return &pose_with_covariance_stamped_msg;
}

FString UROS2PoseCovStampedMsg::MsgToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}

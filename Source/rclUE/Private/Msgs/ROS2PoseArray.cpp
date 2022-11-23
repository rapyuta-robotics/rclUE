// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/PoseArray.msg - do not modify

#include "Msgs/ROS2PoseArray.h"

#include "Kismet/GameplayStatics.h"

void UROS2PoseArrayMsg::Init()
{
    geometry_msgs__msg__PoseArray__init(&pose_array_msg);
}

void UROS2PoseArrayMsg::Fini()
{
    geometry_msgs__msg__PoseArray__fini(&pose_array_msg);
}

const rosidl_message_type_support_t* UROS2PoseArrayMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, PoseArray);
}

void UROS2PoseArrayMsg::SetMsg(const FROSPoseArray& Inputs)
{
    Inputs.SetROS2(pose_array_msg);
}

void UROS2PoseArrayMsg::GetMsg(FROSPoseArray& Outputs) const
{
    Outputs.SetFromROS2(pose_array_msg);
}

void* UROS2PoseArrayMsg::Get()
{
    return &pose_array_msg;
}

FString UROS2PoseArrayMsg::MsgToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}

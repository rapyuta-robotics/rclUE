// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from visualization_msgs/msg/InteractiveMarkerControl.msg - do not modify

#include "Msgs/ROS2IMCtrl.h"

#include "Kismet/GameplayStatics.h"

void UROS2IMCtrlMsg::Init()
{
    visualization_msgs__msg__InteractiveMarkerControl__init(&interactive_marker_control_msg);
}

void UROS2IMCtrlMsg::Fini()
{
    visualization_msgs__msg__InteractiveMarkerControl__fini(&interactive_marker_control_msg);
}

const rosidl_message_type_support_t* UROS2IMCtrlMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(visualization_msgs, msg, InteractiveMarkerControl);
}

void UROS2IMCtrlMsg::SetMsg(const FROSIMCtrl& Inputs)
{
    Inputs.SetROS2(interactive_marker_control_msg);
}

void UROS2IMCtrlMsg::GetMsg(FROSIMCtrl& Outputs) const
{
    Outputs.SetFromROS2(interactive_marker_control_msg);
}

void* UROS2IMCtrlMsg::Get()
{
    return &interactive_marker_control_msg;
}

FString UROS2IMCtrlMsg::MsgToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}

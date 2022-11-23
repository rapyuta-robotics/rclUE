// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from visualization_msgs/msg/InteractiveMarkerFeedback.msg - do not modify

#include "Msgs/ROS2IMFeedback.h"

#include "Kismet/GameplayStatics.h"

void UROS2IMFeedbackMsg::Init()
{
    visualization_msgs__msg__InteractiveMarkerFeedback__init(&interactive_marker_feedback_msg);
}

void UROS2IMFeedbackMsg::Fini()
{
    visualization_msgs__msg__InteractiveMarkerFeedback__fini(&interactive_marker_feedback_msg);
}

const rosidl_message_type_support_t* UROS2IMFeedbackMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(visualization_msgs, msg, InteractiveMarkerFeedback);
}

void UROS2IMFeedbackMsg::SetMsg(const FROSIMFeedback& Inputs)
{
    Inputs.SetROS2(interactive_marker_feedback_msg);
}

void UROS2IMFeedbackMsg::GetMsg(FROSIMFeedback& Outputs) const
{
    Outputs.SetFromROS2(interactive_marker_feedback_msg);
}

void* UROS2IMFeedbackMsg::Get()
{
    return &interactive_marker_feedback_msg;
}

FString UROS2IMFeedbackMsg::MsgToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}

// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/JoyFeedback.msg - do not modify

#include "Msgs/ROS2JoyFeedback.h"

#include "Kismet/GameplayStatics.h"

void UROS2JoyFeedbackMsg::Init()
{
    sensor_msgs__msg__JoyFeedback__init(&joy_feedback_msg);
}

void UROS2JoyFeedbackMsg::Fini()
{
    sensor_msgs__msg__JoyFeedback__fini(&joy_feedback_msg);
}

const rosidl_message_type_support_t* UROS2JoyFeedbackMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, JoyFeedback);
}

void UROS2JoyFeedbackMsg::SetMsg(const FROSJoyFeedback& Inputs)
{
    Inputs.SetROS2(joy_feedback_msg);
}

void UROS2JoyFeedbackMsg::GetMsg(FROSJoyFeedback& Outputs) const
{
    Outputs.SetFromROS2(joy_feedback_msg);
}

void* UROS2JoyFeedbackMsg::Get()
{
    return &joy_feedback_msg;
}

FString UROS2JoyFeedbackMsg::MsgToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}

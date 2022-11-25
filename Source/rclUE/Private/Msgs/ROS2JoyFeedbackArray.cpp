// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/JoyFeedbackArray.msg - do not modify

#include "Msgs/ROS2JoyFeedbackArray.h"

#include "Kismet/GameplayStatics.h"

void UROS2JoyFeedbackArrayMsg::Init()
{
    sensor_msgs__msg__JoyFeedbackArray__init(&joy_feedback_array_msg);
}

void UROS2JoyFeedbackArrayMsg::Fini()
{
    sensor_msgs__msg__JoyFeedbackArray__fini(&joy_feedback_array_msg);
}

const rosidl_message_type_support_t* UROS2JoyFeedbackArrayMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, JoyFeedbackArray);
}

void UROS2JoyFeedbackArrayMsg::SetMsg(const FROSJoyFeedbackArray& Inputs)
{
    Inputs.SetROS2(joy_feedback_array_msg);
}

void UROS2JoyFeedbackArrayMsg::GetMsg(FROSJoyFeedbackArray& Outputs) const
{
    Outputs.SetFromROS2(joy_feedback_array_msg);
}

void* UROS2JoyFeedbackArrayMsg::Get()
{
    return &joy_feedback_array_msg;
}

FString UROS2JoyFeedbackArrayMsg::MsgToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}

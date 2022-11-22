// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from diagnostic_msgs/msg/DiagnosticStatus.msg - do not modify

#include "Msgs/ROS2DiagnosticStatus.h"

#include "Kismet/GameplayStatics.h"

void UROS2DiagnosticStatusMsg::Init()
{
    diagnostic_msgs__msg__DiagnosticStatus__init(&diagnostic_status_msg);
}

void UROS2DiagnosticStatusMsg::Fini()
{
    diagnostic_msgs__msg__DiagnosticStatus__fini(&diagnostic_status_msg);
}

const rosidl_message_type_support_t* UROS2DiagnosticStatusMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(diagnostic_msgs, msg, DiagnosticStatus);
}

void UROS2DiagnosticStatusMsg::SetMsg(const FROSDiagnosticStatus& Inputs)
{
    Inputs.SetROS2(diagnostic_status_msg);
}

void UROS2DiagnosticStatusMsg::GetMsg(FROSDiagnosticStatus& Outputs) const
{
    Outputs.SetFromROS2(diagnostic_status_msg);
}

void* UROS2DiagnosticStatusMsg::Get()
{
    return &diagnostic_status_msg;
}

FString UROS2DiagnosticStatusMsg::MsgToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}

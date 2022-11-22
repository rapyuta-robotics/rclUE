// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from rosgraph_msgs/msg/Clock.msg - do not
// modify

#include "Msgs/ROS2Clock.h"

#include "Kismet/GameplayStatics.h"

void UROS2ClockMsg::Init() { rosgraph_msgs__msg__Clock__init(&clock_msg); }

void UROS2ClockMsg::Fini() { rosgraph_msgs__msg__Clock__fini(&clock_msg); }

const rosidl_message_type_support_t *UROS2ClockMsg::GetTypeSupport() const {
  return ROSIDL_GET_MSG_TYPE_SUPPORT(rosgraph_msgs, msg, Clock);
}

void UROS2ClockMsg::SetMsg(const FROSClock &Inputs) {
  Inputs.SetROS2(clock_msg);
}

void UROS2ClockMsg::GetMsg(FROSClock &Outputs) const {
  Outputs.SetFromROS2(clock_msg);
}

void *UROS2ClockMsg::Get() { return &clock_msg; }

FString UROS2ClockMsg::MsgToString() const {
  /* TODO: Fill here */
  checkNoEntry();
  return FString();
}
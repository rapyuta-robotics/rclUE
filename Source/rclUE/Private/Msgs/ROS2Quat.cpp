// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/Quaternion.msg - do
// not modify

#include "Msgs/ROS2Quat.h"

#include "Kismet/GameplayStatics.h"

void UROS2QuatMsg::Init() {
  geometry_msgs__msg__Quaternion__init(&quaternion_msg);
}

void UROS2QuatMsg::Fini() {
  geometry_msgs__msg__Quaternion__fini(&quaternion_msg);
}

const rosidl_message_type_support_t *UROS2QuatMsg::GetTypeSupport() const {
  return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Quaternion);
}

void UROS2QuatMsg::SetMsg(const FROSQuat &Inputs) {
  Inputs.SetROS2(quaternion_msg);
}

void UROS2QuatMsg::GetMsg(FROSQuat &Outputs) const {
  Outputs.SetFromROS2(quaternion_msg);
}

void *UROS2QuatMsg::Get() { return &quaternion_msg; }

FString UROS2QuatMsg::MsgToString() const {
  /* TODO: Fill here */
  checkNoEntry();
  return FString();
}
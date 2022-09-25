// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/Vector3Stamped.msg -
// do not modify

#include "Msgs/ROS2Vec3Stamped.h"

#include "Kismet/GameplayStatics.h"

void UROS2Vec3StampedMsg::Init() {
  geometry_msgs__msg__Vector3Stamped__init(&vector3_stamped_msg);
}

void UROS2Vec3StampedMsg::Fini() {
  geometry_msgs__msg__Vector3Stamped__fini(&vector3_stamped_msg);
}

const rosidl_message_type_support_t *
UROS2Vec3StampedMsg::GetTypeSupport() const {
  return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Vector3Stamped);
}

void UROS2Vec3StampedMsg::SetMsg(const FROSVec3Stamped &Inputs) {
  Inputs.SetROS2(vector3_stamped_msg);
}

void UROS2Vec3StampedMsg::GetMsg(FROSVec3Stamped &Outputs) const {
  Outputs.SetFromROS2(vector3_stamped_msg);
}

void *UROS2Vec3StampedMsg::Get() { return &vector3_stamped_msg; }

FString UROS2Vec3StampedMsg::MsgToString() const {
  /* TODO: Fill here */
  checkNoEntry();
  return FString();
}
// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/NavSatStatus.msg - do
// not modify

#include "Msgs/ROS2NavSatStatus.h"

#include "Kismet/GameplayStatics.h"

void UROS2NavSatStatusMsg::Init() {
  sensor_msgs__msg__NavSatStatus__init(&nav_sat_status_msg);
}

void UROS2NavSatStatusMsg::Fini() {
  sensor_msgs__msg__NavSatStatus__fini(&nav_sat_status_msg);
}

const rosidl_message_type_support_t *
UROS2NavSatStatusMsg::GetTypeSupport() const {
  return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, NavSatStatus);
}

void UROS2NavSatStatusMsg::SetMsg(const FROSNavSatStatus &Inputs) {
  Inputs.SetROS2(nav_sat_status_msg);
}

void UROS2NavSatStatusMsg::GetMsg(FROSNavSatStatus &Outputs) const {
  Outputs.SetFromROS2(nav_sat_status_msg);
}

void *UROS2NavSatStatusMsg::Get() { return &nav_sat_status_msg; }

FString UROS2NavSatStatusMsg::MsgToString() const {
  /* TODO: Fill here */
  checkNoEntry();
  return FString();
}
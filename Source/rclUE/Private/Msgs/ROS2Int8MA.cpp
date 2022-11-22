// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/msg/Int8MultiArray.msg - do not modify

#include "Msgs/ROS2Int8MA.h"

#include "Kismet/GameplayStatics.h"

void UROS2Int8MAMsg::Init()
{
    example_interfaces__msg__Int8MultiArray__init(&int8_multi_array_msg);
}

void UROS2Int8MAMsg::Fini()
{
    example_interfaces__msg__Int8MultiArray__fini(&int8_multi_array_msg);
}

const rosidl_message_type_support_t* UROS2Int8MAMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(example_interfaces, msg, Int8MultiArray);
}

void UROS2Int8MAMsg::SetMsg(const FROSInt8MA& Inputs)
{
    Inputs.SetROS2(int8_multi_array_msg);
}

void UROS2Int8MAMsg::GetMsg(FROSInt8MA& Outputs) const
{
    Outputs.SetFromROS2(int8_multi_array_msg);
}

void* UROS2Int8MAMsg::Get()
{
    return &int8_multi_array_msg;
}

FString UROS2Int8MAMsg::MsgToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}

// Copyright 2020-2021 Rapyuta Robotics Co., Ltd.

#include "Msgs/ROS2StringMsg.h"

void UROS2StringMsg::Init()
{
    example_interfaces__msg__String__init(&string_pub_msg);
}

void UROS2StringMsg::Fini()
{
    example_interfaces__msg__String__fini(&string_pub_msg);
}

const rosidl_message_type_support_t* UROS2StringMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(example_interfaces, msg, String);
}

void UROS2StringMsg::Update(const FString& stringData)
{
    UEToROS2Msg::Set(stringData, string_pub_msg.data);
}

void* UROS2StringMsg::Get()
{
    return &string_pub_msg;
}

FString UROS2StringMsg::MsgToString() const
{
    return ROS2MsgToUE::From(string_pub_msg.data);
}

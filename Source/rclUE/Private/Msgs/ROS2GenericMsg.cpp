// Copyright 2020-2023 Rapyuta Robotics Co., Ltd.

#include "Msgs/ROS2GenericMsg.h"

// Add default functionality here for any IROS2MsgInterface functions that are not pure virtual.

const rosidl_message_type_support_t* UROS2GenericMsg::GetTypeSupport() const
{
    checkNoEntry();
    return nullptr;
}

void UROS2GenericMsg::Init()
{
    checkNoEntry();
}

void UROS2GenericMsg::Fini()
{
    checkNoEntry();
}

void* UROS2GenericMsg::Get()
{
    checkNoEntry();
    return nullptr;
}

FString UROS2GenericMsg::MsgToString() const
{
    checkNoEntry();
    return FString();
}

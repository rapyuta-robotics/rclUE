// Copyright 2020-2023 Rapyuta Robotics Co., Ltd.

#include "Srvs/ROS2GenericSrv.h"

const rosidl_service_type_support_t* UROS2GenericSrv::GetTypeSupport() const
{
    checkNoEntry();
    return nullptr;
}

void UROS2GenericSrv::Init()
{
    checkNoEntry();
}

void UROS2GenericSrv::Fini()
{
    checkNoEntry();
}

void* UROS2GenericSrv::GetRequest()
{
    checkNoEntry();
    return nullptr;
}

void* UROS2GenericSrv::GetResponse()
{
    checkNoEntry();
    return nullptr;
}

FString UROS2GenericSrv::SrvRequestToString() const
{
    checkNoEntry();
    return FString();
}

FString UROS2GenericSrv::SrvResponseToString() const
{
    checkNoEntry();
    return FString();
}

// Copyright 2020-2021 Rapyuta Robotics Co., Ltd.

#include "ROS2Service.h"

DEFINE_LOG_CATEGORY(LogROS2Srv);

bool UROS2Service::InitializeWithROS2(UROS2NodeComponent* InROS2Node)
{
    OwnerNode = InROS2Node;
    return Init();
}

bool UROS2Service::Init()
{
    bool res = true;
    IS_ROS2NODE_INITED(OwnerNode, GetName(), res);
    if (!res)
    {
        return false;
    }

    if (State == UROS2State::Created)
    {
        if (!InitializeService())
        {
            return false;
        }

        InitializeServiceComponent();

        State = UROS2State::Initialized;
    }

    Ready = false;

    return true;
}

bool UROS2Service::InitializeService()
{
    if (ServiceName.IsEmpty())
    {
        UE_LOG_WITH_INFO(LogROS2Srv, Warning, TEXT("[%s] ServiceName can\'t be empty."), *GetName());
        return false;
    }

    if (!IsValid(SrvClass) || SrvClass == UROS2GenericSrv::StaticClass())
    {
        UE_LOG_WITH_INFO(
            LogROS2Srv, Warning, TEXT("[%s] SrvClass is empty or UROS2GenericSrv. Please set valid class."), *GetName());
        return false;
    }

    Service = NewObject<UROS2GenericSrv>(this, SrvClass);

    if (!IsValid(Service))
    {
        UE_LOG_WITH_INFO(LogROS2Srv, Warning, TEXT("[%s] Failed to create Service"), *GetName());
        return false;
    }

    Service->Init();
    return true;
}

void UROS2Service::Destroy()
{
    if (IsValid(Service))
    {
        Service->Fini();
    }
}

void UROS2Service::ProcessReady()
{
    checkNoEntry();
}

void UROS2Service::InitializeServiceComponent()
{
    checkNoEntry();
}

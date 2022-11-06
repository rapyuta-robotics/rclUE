// Copyright 2020-2021 Rapyuta Robotics Co., Ltd.

#include "ROS2Service.h"

// Sets default values for this component's properties
UROS2Service::UROS2Service()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UROS2Service::InitializeWithROS2(UROS2NodeComponent* InROS2Node)
{
    OwnerNode = InROS2Node;
    Init();
}

void UROS2Service::Init()
{
    check(OwnerNode != nullptr);
    check(OwnerNode->State == UROS2State::Initialized);
    if (State == UROS2State::Created)
    {
        InitializeService();

        check(IsValid(Service));

        InitializeServiceComponent();

        State = UROS2State::Initialized;
    }

    Ready = false;
}

void UROS2Service::InitializeService()
{
    check(ServiceName != FString());
    check(SrvClass);

    Service = NewObject<UROS2GenericSrv>(this, SrvClass);

    check(IsValid(Service));

    Service->Init();
}

void UROS2Service::Destroy()
{
    if (Service != nullptr)
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

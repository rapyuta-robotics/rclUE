// Copyright 2020-2021 Rapyuta Robotics Co., Ltd.

#include "ROS2Service.h"

// Sets default values for this component's properties
UROS2Service::UROS2Service()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UROS2Service::Init(TEnumAsByte<UROS2QoS> QoS)
{
    check(OwnerNode != nullptr);
    check(OwnerNode->State == UROS2State::Initialized);
    if (State == UROS2State::Created)
    {
        InitializeService();

        check(IsValid(Service));

        InitializeServiceComponent(QoS);

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

void UROS2Service::InitializeServiceComponent(const TEnumAsByte<UROS2QoS> QoS)
{
    checkNoEntry();
}

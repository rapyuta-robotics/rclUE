// Copyright (c) 2020-2021 Rapyuta Robotics Co., Ltd.

#include "ROS2ServiceClient.h"

DEFINE_LOG_CATEGORY(LogROS2Service);

// Sets default values for this component's properties
UROS2ServiceClient::UROS2ServiceClient()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UROS2ServiceClient::Init(TEnumAsByte<UROS2QoS> QoS)
{
    check(OwnerNode != nullptr);
    check(OwnerNode->State == UROS2State::Initialized);
    if (State == UROS2State::Created)
    {
        InitializeService();

        check(IsValid(Service));

        const rosidl_service_type_support_t* srv_type_support = Service->GetTypeSupport();

        client = rcl_get_zero_initialized_client();
        rcl_client_options_t client_opt = rcl_client_get_default_options();

        client_opt.qos = QoS_LUT[QoS];

        RCSOFTCHECK(rcl_client_init(&client, OwnerNode->GetNode(), srv_type_support, TCHAR_TO_UTF8(*ServiceName), &client_opt));

        State = UROS2State::Initialized;
    }

    Ready = false;
}

void UROS2ServiceClient::InitializeService()
{
    check(ServiceName != FString());
    check(SrvClass);

    Service = NewObject<UROS2GenericSrv>(this, SrvClass);

    check(IsValid(Service));

    Service->Init();
}

void UROS2ServiceClient::Destroy()
{
    if (Service != nullptr)
    {
        Service->Fini();
    }

    if (OwnerNode != nullptr)
    {
        UE_LOG(LogROS2Service, Log, TEXT("Client Destroy - rcl_client_fini (%s)"), *__LOG_INFO__);
        RCSOFTCHECK(rcl_client_fini(&client, OwnerNode->GetNode()));
    }
}

void UROS2ServiceClient::UpdateAndSendRequest()
{
    UE_LOG(LogROS2Service, Log, TEXT("%s"), *__LOG_INFO__);
    check(State == UROS2State::Initialized);
    check(IsValid(OwnerNode));

    RequestDelegate.ExecuteIfBound(Service);
    SendRequest();
}

void UROS2ServiceClient::SendRequest()
{
    UE_LOG(LogROS2Service, Log, TEXT("%s"), *__LOG_INFO__);
    check(State == UROS2State::Initialized);
    check(OwnerNode != nullptr);

    req = Service->GetRequest();

    int64_t Seq;
    RCSOFTCHECK(rcl_send_request(&client, req, &Seq));
}
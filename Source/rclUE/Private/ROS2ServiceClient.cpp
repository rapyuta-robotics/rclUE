// Copyright 2020-2021 Rapyuta Robotics Co., Ltd.

#include "ROS2ServiceClient.h"

void UROS2ServiceClient::InitializeServiceComponent()
{
    const rosidl_service_type_support_t* srv_type_support = Service->GetTypeSupport();

    client = rcl_get_zero_initialized_client();
    rcl_client_options_t client_opt = rcl_client_get_default_options();

    client_opt.qos = QoS_LUT[QoS];

    RCSOFTCHECK(rcl_client_init(&client, OwnerNode->GetNode(), srv_type_support, TCHAR_TO_UTF8(*ServiceName), &client_opt));
}

void UROS2ServiceClient::Destroy()
{
    Super::Destroy();

    if (OwnerNode != nullptr)
    {
        UE_LOG(LogROS2Srv, Log, TEXT("Client Destroy - rcl_client_fini (%s)"), *__LOG_INFO__);
        RCSOFTCHECK(rcl_client_fini(&client, OwnerNode->GetNode()));
    }
}

void UROS2ServiceClient::ProcessReady()
{
    if (Ready == true)
    {
        rmw_service_info_t req_info;
        void* data = Service->GetResponse();
        RCSOFTCHECK(rcl_take_response_with_info(&client, &req_info, data));

        UE_LOG(
            LogROS2Srv, Log, TEXT("[%s] ROS2Node Executing Response delegate for Service Client (%s)"), *GetName(), *__LOG_INFO__);

        ResponseDelegate.ExecuteIfBound(Service);

        Ready = false;
    }
}

void UROS2ServiceClient::UpdateAndSendRequest()
{
    UE_LOG(LogROS2Srv, Log, TEXT("%s"), *__LOG_INFO__);
    check(State == UROS2State::Initialized);
    check(IsValid(OwnerNode));
    if (!IsServiceReady())
    {
        UE_LOG(LogROS2Srv, Error, TEXT("Service named %s is not ready yet (%s)"), *ServiceName, *__LOG_INFO__);
        return;
    }
    RequestDelegate.ExecuteIfBound(Service);
    SendRequest();
}

void UROS2ServiceClient::SendRequest()
{
    UE_LOG(LogROS2Srv, Log, TEXT("%s"), *__LOG_INFO__);
    check(State == UROS2State::Initialized);
    check(OwnerNode != nullptr);

    req = Service->GetRequest();

    int64_t Seq;
    RCSOFTCHECK(rcl_send_request(&client, req, &Seq));
}

bool UROS2ServiceClient::IsServiceReady()
{
    bool is_ready;
    rcl_ret_t ret = rcl_service_server_is_available(OwnerNode->GetNode(), &client, &is_ready);
    if (RCL_RET_NODE_INVALID == ret)
    {
        const rcl_node_t* node_handle = OwnerNode->GetNode();
        if (node_handle && !rcl_context_is_valid(node_handle->context))
        {
            // context is shutdown, do a soft failure
            return false;
        }
    }
    if (ret != RCL_RET_OK)
    {
        UE_LOG(LogROS2Srv, Error, TEXT("rcl_service_server_is_available failed (%s)"), *__LOG_INFO__);
    }
    return is_ready;
}

void UROS2ServiceClient::SetDelegates(const FServiceCallback& InRequestDelegate, const FServiceCallback& InResponseDelegate)
{
    if (!InRequestDelegate.IsBound())
    {
        UE_LOG(LogROS2Srv, Warning, TEXT("RequestDelegate is not set - is this on purpose? (%s)"), *__LOG_INFO__);
    }

    if (!InResponseDelegate.IsBound())
    {
        UE_LOG(LogROS2Srv, Warning, TEXT("ResponseDelegate is not set - is this on purpose? (%s)"), *__LOG_INFO__);
    }

    RequestDelegate = InRequestDelegate;
    ResponseDelegate = InResponseDelegate;
}

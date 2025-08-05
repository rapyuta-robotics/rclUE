// Copyright 2020-2023 Rapyuta Robotics Co., Ltd.

#include "ROS2ServiceClient.h"

UROS2ServiceClient* UROS2ServiceClient::CreateServiceClient(UObject* InOwner,
                                                            const FString& InServiceName,
                                                            const TSubclassOf<UROS2GenericSrv>& InSrvClass,
                                                            const FServiceCallback& InResponseDelegate,
                                                            const UROS2QoS InQoS)
{
    UROS2ServiceClient* client = NewObject<UROS2ServiceClient>(InOwner);
    client->SrvClass = InSrvClass;
    client->ServiceName = InServiceName;
    client->QoS = InQoS;
    client->SetDelegates(InResponseDelegate);
    return client;
}

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

    bool result = true;
    IS_ROS2NODE_INITED(OwnerNode, GetName(), result);
    if (result)
    {
        UE_LOG_WITH_INFO(LogROS2Srv, Log, TEXT("Client Destroy - rcl_client_fini "));
        RCSOFTCHECK(rcl_client_fini(&client, OwnerNode->GetNode()));
    }

    ResponseDelegate.Unbind();
}

void UROS2ServiceClient::ProcessReady()
{
    bool result = true;
    IS_SRV_INITED(OwnerNode, GetName(), result);
    if (!result)
    {
        return;
    }

    if (Ready == true)
    {
        rmw_service_info_t req_info;
        void* data = Service->GetResponse();
        RCSOFTCHECK(rcl_take_response_with_info(&client, &req_info, data));

        UE_LOG_WITH_INFO_NAMED(LogROS2Srv, Log, TEXT("ROS2Node Executing Response delegate for Service Client"));

        ResponseDelegate.ExecuteIfBound(Service);

        Ready = false;
    }
}

void UROS2ServiceClient::SendRequest()
{
    bool result = true;
    IS_SRV_INITED(OwnerNode, GetName(), result);
    if (!result)
    {
        return;
    }

    if (!IsServiceReady())
    {
        UE_LOG_WITH_INFO(LogROS2Srv, Error, TEXT("Service named %s is not ready yet"), *ServiceName);
        return;
    }

    req = Service->GetRequest();

    int64_t Seq;
    RCSOFTCHECK(rcl_send_request(&client, req, &Seq));
}

bool UROS2ServiceClient::IsServiceReady()
{
    bool result = true;
    IS_SRV_INITED(OwnerNode, GetName(), result);
    if (!result)
    {
        return false;
    }

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
        UE_LOG_WITH_INFO(LogROS2Srv, Error, TEXT("rcl_service_server_is_available failed "));
    }
    return is_ready;
}

void UROS2ServiceClient::SetDelegates(const FServiceCallback& InResponseDelegate)
{
    if (!InResponseDelegate.IsBound())
    {
        UE_LOG_WITH_INFO(LogROS2Srv, Warning, TEXT("ResponseDelegate is not set - is this on purpose? "));
    }
    ResponseDelegate.Unbind();
    ResponseDelegate = InResponseDelegate;
}

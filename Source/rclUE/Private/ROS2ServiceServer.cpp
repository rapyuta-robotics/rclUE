// Copyright 2020-2023 Rapyuta Robotics Co., Ltd.

#include "ROS2ServiceServer.h"

UROS2ServiceServer* UROS2ServiceServer::CreateServiceServer(UObject* InOwner,
                                                            const FString& InServiceName,
                                                            const TSubclassOf<UROS2GenericSrv>& InSrvClass,
                                                            const FServiceCallback& InCallback,
                                                            const UROS2QoS InQoS)
{
    UROS2ServiceServer* server = NewObject<UROS2ServiceServer>(InOwner);
    server->SrvClass = InSrvClass;
    server->ServiceName = InServiceName;
    server->QoS = InQoS;
    server->SetDelegates(InCallback);
    return server;
}

void UROS2ServiceServer::InitializeServiceComponent()
{
    rcl_service = rcl_get_zero_initialized_service();
    const rosidl_service_type_support_t* type_support = Service->GetTypeSupport();
    rcl_service_options_t srv_opt = rcl_service_get_default_options();
    srv_opt.qos = QoS_LUT[QoS];
    RCSOFTCHECK(rcl_service_init(&rcl_service, OwnerNode->GetNode(), type_support, TCHAR_TO_UTF8(*ServiceName), &srv_opt));
}

void UROS2ServiceServer::Destroy()
{
    Super::Destroy();

    bool res = true;
    IS_ROS2NODE_INITED(OwnerNode, GetName(), res);
    if (res)
    {
        UE_LOG_WITH_INFO(LogROS2Srv, Log, TEXT("Service server Destroy - rcl_service_fini "));
        RCSOFTCHECK(rcl_service_fini(&rcl_service, OwnerNode->GetNode()));
    }
}

void UROS2ServiceServer::ProcessReady()
{
    bool res = true;
    IS_SRV_INITED(OwnerNode, GetName(), res);
    if (!res)
    {
        return;
    }

    if (Ready == true)
    {
        rmw_service_info_t req_info;
        void* data = Service->GetRequest();
        RCSOFTCHECK(rcl_take_request_with_info(&rcl_service, &req_info, data));

        if (bRejectConsecutiveIdenticalRequest && UROS2Utils::IsEqualWMSrvInfo(req_info, LastReqInfo, true))
        {
            UE_LOG_WITH_INFO(LogROS2Srv, Warning, TEXT("Rejecting consecutive identical request"));
            return;
        }
        LastReqInfo = req_info;

        UE_LOG_WITH_INFO_NAMED(LogROS2Node, Log, TEXT("ROS2Node Executing Service server callback"));

        SrvCallback.ExecuteIfBound(Service);

        RCSOFTCHECK(rcl_send_response(&rcl_service, &req_info.request_id, Service->GetResponse()));

        Ready = false;
    }
}

void UROS2ServiceServer::SetDelegates(const FServiceCallback& InSrvCallback)
{
    if (!InSrvCallback.IsBound())
    {
        UE_LOG_WITH_INFO(LogROS2Srv, Warning, TEXT("SrvCallback is not set - is this on purpose? "));
    }

    SrvCallback = InSrvCallback;
}

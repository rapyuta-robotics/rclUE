// Copyright 2020-2021 Rapyuta Robotics Co., Ltd.

#include "ROS2ServiceServer.h"

UROS2ServiceServer* UROS2ServiceServer::CreateServiceServer(UObject* InOwner,
                                                    const FString& InSrvName,
                                                    const TSubclassOf<UROS2GenericSrv>& InSrvClass,
                                                    const FServiceCallback& InCallback)
{
    UROS2ServiceServer* serviceserver = NewObject<UROS2ServiceServer>(InOwner);
    serviceserver->SrvClass = InSrvClass;
    serviceserver->ServiceName = InSrvName;
    serviceserver->SrvCallback = InCallback;
    return serviceserver;
}

void UROS2ServiceServer::InitializeServiceComponent()
{
    rcl_service = rcl_get_zero_initialized_service();
    const rosidl_service_type_support_t* type_support = Service->GetTypeSupport();
    rcl_service_options_t srv_opt = rcl_service_get_default_options();
    RCSOFTCHECK(rcl_service_init(&rcl_service, OwnerNode->GetNode(), type_support, TCHAR_TO_UTF8(*ServiceName), &srv_opt));
}

void UROS2ServiceServer::Destroy()
{
    Super::Destroy();

    if (OwnerNode != nullptr)
    {
        UE_LOG(LogROS2Srv, Log, TEXT("Service server Destroy - rcl_service_fini (%s)"), *__LOG_INFO__);
        RCSOFTCHECK(rcl_service_fini(&rcl_service, OwnerNode->GetNode()));
    }
}

void UROS2ServiceServer::ProcessReady()
{
    if (Ready == true)
    {
        rmw_service_info_t req_info;
        void* data = Service->GetRequest();
        RCSOFTCHECK(rcl_take_request_with_info(&rcl_service, &req_info, data));

        UE_LOG(LogROS2Node, Log, TEXT("[%s] ROS2Node Executing Service server callback (%s)"), *GetName(), *__LOG_INFO__);

        SrvCallback.ExecuteIfBound(Service);

        RCSOFTCHECK(rcl_send_response(&rcl_service, &req_info.request_id, Service->GetResponse()));

        Ready = false;
    }
}

void UROS2ServiceServer::SetDelegates(const FServiceCallback& InSrvCallback)
{
    if (!InSrvCallback.IsBound())
    {
        UE_LOG(LogROS2Srv, Warning, TEXT("SrvCallback is not set - is this on purpose? (%s)"), *__LOG_INFO__);
    }

    SrvCallback = InSrvCallback;
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "Srvs/ROS2DeleteEntitySrv.h"


const rosidl_service_type_support_t* UROS2DeleteEntitySrv::GetTypeSupport() const
{
    return ROSIDL_GET_SRV_TYPE_SUPPORT(ue_msgs, srv, DeleteEntity);
}

void UROS2DeleteEntitySrv::Init()
{
    ue_msgs__srv__DeleteEntity_Request__init(&delete_entity_req);
    ue_msgs__srv__DeleteEntity_Response__init(&delete_entity_res);
}

void UROS2DeleteEntitySrv::Fini()
{
    ue_msgs__srv__DeleteEntity_Request__fini(&delete_entity_req);
    ue_msgs__srv__DeleteEntity_Response__fini(&delete_entity_res);
}

void UROS2DeleteEntitySrv::SetInputs(FString Name)
{
    if (delete_entity_req.name.data != nullptr)
    {
        free(delete_entity_req.name.data);
    }
    delete_entity_req.name.data = (char*)malloc((Name.Len()+1)*sizeof(char));
    memcpy(delete_entity_req.name.data, TCHAR_TO_ANSI(*Name), (Name.Len()+1)*sizeof(char));
}

void UROS2DeleteEntitySrv::GetInputs(FString& Name)
{
    Name.AppendChars(delete_entity_req.name.data, delete_entity_req.name.size);
}

void UROS2DeleteEntitySrv::SetOutput(bool Success, FString status_message)
{
    delete_entity_res.success = Success;

    if (delete_entity_res.status_message.data != nullptr)
    {
        free(delete_entity_res.status_message.data);
    }
    delete_entity_res.status_message.data = (char*)malloc((status_message.Len()+1)*sizeof(char));
    memcpy(delete_entity_res.status_message.data, TCHAR_TO_ANSI(*status_message), (status_message.Len()+1)*sizeof(char));
}
void UROS2DeleteEntitySrv::GetOutput(bool& Success, FString& status_message)
{
    Success = delete_entity_res.success;
    
    status_message.AppendChars(delete_entity_res.status_message.data, delete_entity_res.status_message.size);
}

void* UROS2DeleteEntitySrv::GetRequest()
{
    return &delete_entity_req;
}

void* UROS2DeleteEntitySrv::GetResponse()
{
    return &delete_entity_res;
}

FString UROS2DeleteEntitySrv::SrvRequestToString() const
{
    FString Name;
    Name.AppendChars(delete_entity_req.name.data, delete_entity_req.name.size);
	
    return FString::Printf(TEXT("Delete %s"), *Name);
}

FString UROS2DeleteEntitySrv::SrvResponseToString() const
{
    FString status;
    status.AppendChars(delete_entity_res.status_message.data, delete_entity_res.status_message.size);
    return FString::Printf(TEXT("DeleteEntity: %s %s"), *status, delete_entity_res.success ? "true" : "false");
}
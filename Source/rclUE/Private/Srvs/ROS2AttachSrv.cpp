// Fill out your copyright notice in the Description page of Project Settings.


#include "Srvs/ROS2AttachSrv.h"


const rosidl_service_type_support_t* UROS2AttachSrv::GetTypeSupport() const
{
    return ROSIDL_GET_SRV_TYPE_SUPPORT(ue_msgs, srv, Attach);
}

void UROS2AttachSrv::Init()
{
    ue_msgs__srv__Attach_Request__init(&attach_req);
    ue_msgs__srv__Attach_Response__init(&attach_res);
}

void UROS2AttachSrv::Fini()
{
    ue_msgs__srv__Attach_Request__fini(&attach_req);
    ue_msgs__srv__Attach_Response__fini(&attach_res);
}

void UROS2AttachSrv::SetInputs(FString Name1, FString Name2)
{
    FMemory::Free(attach_req.name1.data);
    attach_req.name1.data = (char*)FMemory::Malloc((Name1.Len()+1)*sizeof(char));
    FMemory::Memcpy(attach_req.name1.data, TCHAR_TO_ANSI(*Name1), (Name1.Len()+1)*sizeof(char));

    FMemory::Free(attach_req.name2.data);
    attach_req.name2.data = (char*)FMemory::Malloc((Name2.Len()+1)*sizeof(char));
    FMemory::Memcpy(attach_req.name2.data, TCHAR_TO_ANSI(*Name2), (Name2.Len()+1)*sizeof(char));
}

void UROS2AttachSrv::GetInputs(FString& Name1, FString& Name2)
{
    Name1.AppendChars(attach_req.name1.data, attach_req.name1.size);
    Name2.AppendChars(attach_req.name2.data, attach_req.name2.size);
}

void UROS2AttachSrv::SetOutput(bool Success)
{
    attach_res.success = Success;
}

void UROS2AttachSrv::GetOutput(bool& Success)
{
    Success = attach_res.success;
}

void* UROS2AttachSrv::GetRequest()
{
    return &attach_req;
}

void* UROS2AttachSrv::GetResponse()
{
    return &attach_res;
}

FString UROS2AttachSrv::SrvRequestToString() const
{
    FString Name1;
    FString Name2;
    Name1.AppendChars(attach_req.name1.data, attach_req.name1.size);
    Name2.AppendChars(attach_req.name2.data, attach_req.name2.size);
	
    return FString::Printf(TEXT("Attach %s, %s"), *Name1, *Name2);
}

FString UROS2AttachSrv::SrvResponseToString() const
{
	return FString::Printf(TEXT("Attach EntityState: %s"), attach_res.success ? "true" : "false");
}
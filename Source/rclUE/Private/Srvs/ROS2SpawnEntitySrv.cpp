// Fill out your copyright notice in the Description page of Project Settings.


#include "Srvs/ROS2SpawnEntitySrv.h"


const rosidl_service_type_support_t* UROS2SpawnEntitySrv::GetTypeSupport() const
{
    return ROSIDL_GET_SRV_TYPE_SUPPORT(ue_msgs, srv, SpawnEntity);
}

void UROS2SpawnEntitySrv::Init()
{
    ue_msgs__srv__SpawnEntity_Request__init(&spawn_entity_req);
    ue_msgs__srv__SpawnEntity_Response__init(&spawn_entity_res);
}

void UROS2SpawnEntitySrv::Fini()
{
    ue_msgs__srv__SpawnEntity_Request__fini(&spawn_entity_req);
    ue_msgs__srv__SpawnEntity_Response__fini(&spawn_entity_res);
}

void UROS2SpawnEntitySrv::SetInputs(FString xml, FString RobotNamespace, FEntityStateData data)
{
    FMemory::Free(spawn_entity_req.xml.data);
    spawn_entity_req.xml.data = (char*)FMemory::Malloc((xml.Len()+1)*sizeof(char));
    FMemory::Memcpy(spawn_entity_req.xml.data, TCHAR_TO_ANSI(*xml), (xml.Len()+1)*sizeof(char));

    FMemory::Free(spawn_entity_req.robot_namespace.data);
    spawn_entity_req.robot_namespace.data = (char*)FMemory::Malloc((RobotNamespace.Len()+1)*sizeof(char));
    FMemory::Memcpy(spawn_entity_req.robot_namespace.data, TCHAR_TO_ANSI(*RobotNamespace), (RobotNamespace.Len()+1)*sizeof(char));

    data.SetROS2(spawn_entity_req.state);
}

void UROS2SpawnEntitySrv::GetInputs(FString& xml, FString& RobotNamespace, FEntityStateData& data)
{
    xml.AppendChars(spawn_entity_req.xml.data, spawn_entity_req.xml.size);
    RobotNamespace.AppendChars(spawn_entity_req.robot_namespace.data, spawn_entity_req.robot_namespace.size);

    data.SetFromROS2(spawn_entity_req.state);
}

void UROS2SpawnEntitySrv::SetOutput(bool Success, FString status_message)
{
    spawn_entity_res.success = Success;

    FMemory::Free(spawn_entity_res.status_message.data);
    spawn_entity_res.status_message.data = (char*)FMemory::Malloc((status_message.Len()+1)*sizeof(char));
    FMemory::Memcpy(spawn_entity_res.status_message.data, TCHAR_TO_ANSI(*status_message), (status_message.Len()+1)*sizeof(char));
}

void UROS2SpawnEntitySrv::GetOutput(bool& Success, FString& status_message)
{
    Success = spawn_entity_res.success;
    
    status_message.AppendChars(spawn_entity_res.status_message.data, spawn_entity_res.status_message.size);
}

void* UROS2SpawnEntitySrv::GetRequest()
{
    return &spawn_entity_req;
}

void* UROS2SpawnEntitySrv::GetResponse()
{
    return &spawn_entity_res;
}

FString UROS2SpawnEntitySrv::SrvRequestToString() const
{
    FString xml, RobotNamespace;
    xml.AppendChars(spawn_entity_req.xml.data, spawn_entity_req.xml.size);
    RobotNamespace.AppendChars(spawn_entity_req.robot_namespace.data, spawn_entity_req.robot_namespace.size);
	
	return FString::Printf(TEXT("SpawnEntity: (%s %s)"), *xml, *RobotNamespace);
}

FString UROS2SpawnEntitySrv::SrvResponseToString() const
{
    FString status;
    status.AppendChars(spawn_entity_res.status_message.data, spawn_entity_res.status_message.size);
    return FString::Printf(TEXT("SpawnEntity: %s %s"), *status, spawn_entity_res.success ? "true" : "false");
}
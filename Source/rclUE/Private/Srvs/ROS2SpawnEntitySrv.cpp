// Copyright 2021 Rapyuta Robotics Co., Ltd.

#include "Srvs/ROS2SpawnEntitySrv.h"

const rosidl_service_type_support_t* UROS2SpawnEntitySrv::GetTypeSupport() const
{
    return ROSIDL_GET_SRV_TYPE_SUPPORT(ue_msgs, srv, SpawnEntity);
}

void UROS2SpawnEntitySrv::Init()
{
    ue_msgs__srv__SpawnEntity_Request__init(&SpawnEntity_req);
    ue_msgs__srv__SpawnEntity_Response__init(&SpawnEntity_res);
}

void UROS2SpawnEntitySrv::Fini()
{
    ue_msgs__srv__SpawnEntity_Request__fini(&SpawnEntity_req);
    ue_msgs__srv__SpawnEntity_Response__fini(&SpawnEntity_res);
}

void UROS2SpawnEntitySrv::SetInputs(const FSpawnEntity_Request Input)
{
    Input.SetROS2(SpawnEntity_req);
}

void UROS2SpawnEntitySrv::GetInputs(FSpawnEntity_Request& Input) const
{
    Input.SetFromROS2(SpawnEntity_req);
}

void UROS2SpawnEntitySrv::SetOutput(const FSpawnEntity_Response Output)
{
    Output.SetROS2(SpawnEntity_res);
}

void UROS2SpawnEntitySrv::GetOutput(FSpawnEntity_Response& Output) const
{
    Output.SetFromROS2(SpawnEntity_res);
}

void UROS2SpawnEntitySrv::SetRequest(const FSpawnEntity_Request Request)
{
    Request.SetROS2(SpawnEntity_req);
}

void UROS2SpawnEntitySrv::GetRequest(FSpawnEntity_Request& Request) const
{
    Request.SetFromROS2(SpawnEntity_req);
}

void UROS2SpawnEntitySrv::SetResponse(const FSpawnEntity_Response Response)
{
    Response.SetROS2(SpawnEntity_res);
}

void UROS2SpawnEntitySrv::GetResponse(FSpawnEntity_Response& Response) const
{
    Response.SetFromROS2(SpawnEntity_res);
}

void* UROS2SpawnEntitySrv::GetRequest()
{
    return &SpawnEntity_req;
}

void* UROS2SpawnEntitySrv::GetResponse()
{
    return &SpawnEntity_res;
}

FString UROS2SpawnEntitySrv::SrvRequestToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
    return FString();
}

FString UROS2SpawnEntitySrv::SrvResponseToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
    return FString();
}
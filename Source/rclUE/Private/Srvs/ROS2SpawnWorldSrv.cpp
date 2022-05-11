// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from ue_msgs/SpawnWorld.srv - do not modify

#include "Srvs/ROS2SpawnWorldSrv.h"

const rosidl_service_type_support_t* UROS2SpawnWorldSrv::GetTypeSupport() const
{
    return ROSIDL_GET_SRV_TYPE_SUPPORT(ue_msgs, srv, SpawnWorld);
}

void UROS2SpawnWorldSrv::Init()
{
    ue_msgs__srv__SpawnWorld_Request__init(&SpawnWorld_req);
    ue_msgs__srv__SpawnWorld_Response__init(&SpawnWorld_res);
}

void UROS2SpawnWorldSrv::Fini()
{
    ue_msgs__srv__SpawnWorld_Request__fini(&SpawnWorld_req);
    ue_msgs__srv__SpawnWorld_Response__fini(&SpawnWorld_res);
}

void UROS2SpawnWorldSrv::SetRequest(const FROSSpawnWorldRequest& Request)
{
    Request.SetROS2(SpawnWorld_req);
}

void UROS2SpawnWorldSrv::GetRequest(FROSSpawnWorldRequest& Request) const
{
    Request.SetFromROS2(SpawnWorld_req);
}

void UROS2SpawnWorldSrv::SetResponse(const FROSSpawnWorldResponse& Response)
{
    Response.SetROS2(SpawnWorld_res);
}

void UROS2SpawnWorldSrv::GetResponse(FROSSpawnWorldResponse& Response) const
{
    Response.SetFromROS2(SpawnWorld_res);
}

void* UROS2SpawnWorldSrv::GetRequest()
{
    return &SpawnWorld_req;
}

void* UROS2SpawnWorldSrv::GetResponse()
{
    return &SpawnWorld_res;
}

FString UROS2SpawnWorldSrv::SrvRequestToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
    return FString();
}

FString UROS2SpawnWorldSrv::SrvResponseToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
    return FString();
}

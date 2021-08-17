// Copyright 2021 Rapyuta Robotics Co., Ltd.

#include "Srvs/ROS2SetEntityStateSrv.h"

const rosidl_service_type_support_t* UROS2SetEntityStateSrv::GetTypeSupport() const
{
    return ROSIDL_GET_SRV_TYPE_SUPPORT(ue_msgs, srv, SetEntityState);
}

void UROS2SetEntityStateSrv::Init()
{
    ue_msgs__srv__SetEntityState_Request__init(&SetEntityState_req);
    ue_msgs__srv__SetEntityState_Response__init(&SetEntityState_res);
}

void UROS2SetEntityStateSrv::Fini()
{
    ue_msgs__srv__SetEntityState_Request__fini(&SetEntityState_req);
    ue_msgs__srv__SetEntityState_Response__fini(&SetEntityState_res);
}

void UROS2SetEntityStateSrv::SetRequest(const FSetEntityState_Request Request)
{
    Request.SetROS2(SetEntityState_req);
}

void UROS2SetEntityStateSrv::GetRequest(FSetEntityState_Request& Request) const
{
    Request.SetFromROS2(SetEntityState_req);
}

void UROS2SetEntityStateSrv::SetResponse(const FSetEntityState_Response Response)
{
    Response.SetROS2(SetEntityState_res);
}

void UROS2SetEntityStateSrv::GetResponse(FSetEntityState_Response& Response) const
{
    Response.SetFromROS2(SetEntityState_res);
}

void* UROS2SetEntityStateSrv::GetRequest()
{
    return &SetEntityState_req;
}

void* UROS2SetEntityStateSrv::GetResponse()
{
    return &SetEntityState_res;
}

FString UROS2SetEntityStateSrv::SrvRequestToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
    return FString();
}

FString UROS2SetEntityStateSrv::SrvResponseToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
    return FString();
}
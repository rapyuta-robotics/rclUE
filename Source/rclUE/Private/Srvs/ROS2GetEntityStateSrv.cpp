// Copyright 2021 Rapyuta Robotics Co., Ltd.

#include "Srvs/ROS2GetEntityStateSrv.h"

const rosidl_service_type_support_t* UROS2GetEntityStateSrv::GetTypeSupport() const
{
    return ROSIDL_GET_SRV_TYPE_SUPPORT(ue_msgs, srv, GetEntityState);
}

void UROS2GetEntityStateSrv::Init()
{
    ue_msgs__srv__GetEntityState_Request__init(&GetEntityState_req);
    ue_msgs__srv__GetEntityState_Response__init(&GetEntityState_res);
}

void UROS2GetEntityStateSrv::Fini()
{
    ue_msgs__srv__GetEntityState_Request__fini(&GetEntityState_req);
    ue_msgs__srv__GetEntityState_Response__fini(&GetEntityState_res);
}

void UROS2GetEntityStateSrv::SetInputs(const FGetEntityState_Request Input)
{
    Input.SetROS2(GetEntityState_req);
}

void UROS2GetEntityStateSrv::GetInputs(FGetEntityState_Request& Input) const
{
    Input.SetFromROS2(GetEntityState_req);
}

void UROS2GetEntityStateSrv::SetOutput(const FGetEntityState_Response Output)
{
    Output.SetROS2(GetEntityState_res);
}

void UROS2GetEntityStateSrv::GetOutput(FGetEntityState_Response& Output) const
{
    Output.SetFromROS2(GetEntityState_res);
}

void UROS2GetEntityStateSrv::SetRequest(const FGetEntityState_Request Request)
{
    Request.SetROS2(GetEntityState_req);
}

void UROS2GetEntityStateSrv::GetRequest(FGetEntityState_Request& Request) const
{
    Request.SetFromROS2(GetEntityState_req);
}

void UROS2GetEntityStateSrv::SetResponse(const FGetEntityState_Response Response)
{
    Response.SetROS2(GetEntityState_res);
}

void UROS2GetEntityStateSrv::GetResponse(FGetEntityState_Response& Response) const
{
    Response.SetFromROS2(GetEntityState_res);
}

void* UROS2GetEntityStateSrv::GetRequest()
{
    return &GetEntityState_req;
}

void* UROS2GetEntityStateSrv::GetResponse()
{
    return &GetEntityState_res;
}

FString UROS2GetEntityStateSrv::SrvRequestToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
    return FString();
}

FString UROS2GetEntityStateSrv::SrvResponseToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
    return FString();
}
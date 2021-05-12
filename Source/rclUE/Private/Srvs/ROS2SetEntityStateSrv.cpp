// Fill out your copyright notice in the Description page of Project Settings.


#include "Srvs/ROS2SetEntityStateSrv.h"


const rosidl_service_type_support_t* UROS2SetEntityStateSrv::GetTypeSupport() const
{
    return ROSIDL_GET_SRV_TYPE_SUPPORT(ue_msgs, srv, SetEntityState);
}

void UROS2SetEntityStateSrv::Init()
{
    ue_msgs__srv__SetEntityState_Request__init(&entity_state_req);
    ue_msgs__srv__SetEntityState_Response__init(&entity_state_res);
}

void UROS2SetEntityStateSrv::Fini()
{
    ue_msgs__srv__SetEntityState_Request__fini(&entity_state_req);
    ue_msgs__srv__SetEntityState_Response__fini(&entity_state_res);
}

void UROS2SetEntityStateSrv::SetInputs(FEntityStateData data)
{
    data.SetROS2(entity_state_req.state);
}

void UROS2SetEntityStateSrv::GetInputs(FEntityStateData& data)
{
    data.SetFromROS2(entity_state_req.state);
}

void UROS2SetEntityStateSrv::SetOutput(bool Success)
{
    entity_state_res.success = Success;
}

void UROS2SetEntityStateSrv::GetOutput(bool& Success)
{
    Success = entity_state_res.success;
}

void* UROS2SetEntityStateSrv::GetRequest()
{
    return &entity_state_req;
}

void* UROS2SetEntityStateSrv::GetResponse()
{
    return &entity_state_res;
}

FString UROS2SetEntityStateSrv::SrvRequestToString() const
{
    FString name, reference_frame;
    name.AppendChars(entity_state_req.state.name.data, entity_state_req.state.name.size);
    reference_frame.AppendChars(entity_state_req.state.reference_frame.data, entity_state_req.state.reference_frame.size);
	
	return FString::Printf(TEXT("SetEntityState EntityState: (%s %s), (%f %f %f, %f %f %f %f)"),
                            *name, *reference_frame,
                            entity_state_req.state.pose.position.x, entity_state_req.state.pose.position.y, entity_state_req.state.pose.position.z,
							entity_state_req.state.pose.orientation.x, entity_state_req.state.pose.orientation.y, entity_state_req.state.pose.orientation.z, entity_state_req.state.pose.orientation.w);
}

FString UROS2SetEntityStateSrv::SrvResponseToString() const
{
    return FString::Printf(TEXT("SetEntityState Success: %s"), entity_state_res.success ? "true" : "false");
}
// Fill out your copyright notice in the Description page of Project Settings.


#include "Srvs/ROS2GetEntityStateSrv.h"


const rosidl_service_type_support_t* UROS2GetEntityStateSrv::GetTypeSupport() const
{
    return ROSIDL_GET_SRV_TYPE_SUPPORT(ue_msgs, srv, GetEntityState);
}

void UROS2GetEntityStateSrv::Init()
{
    ue_msgs__srv__GetEntityState_Request__init(&entity_state_req);
    ue_msgs__srv__GetEntityState_Response__init(&entity_state_res);
}

void UROS2GetEntityStateSrv::Fini()
{
    ue_msgs__srv__GetEntityState_Request__fini(&entity_state_req);
    ue_msgs__srv__GetEntityState_Response__fini(&entity_state_res);
}

void UROS2GetEntityStateSrv::SetInputs(FString Name, FString ReferenceFrame)
{
    if (entity_state_req.name.data != nullptr)
    {
        FMemory::Free(entity_state_req.name.data);
    }
    entity_state_req.name.data = (char*)FMemory::Malloc((Name.Len()+1)*sizeof(char));
    FMemory::Memcpy(entity_state_req.name.data, TCHAR_TO_ANSI(*Name), (Name.Len()+1)*sizeof(char));

    if (entity_state_req.reference_frame.data != nullptr)
    {
        FMemory::Free(entity_state_req.reference_frame.data);
    }
    entity_state_req.reference_frame.data = (char*)FMemory::Malloc((ReferenceFrame.Len()+1)*sizeof(char));
    FMemory::Memcpy(entity_state_req.reference_frame.data, TCHAR_TO_ANSI(*ReferenceFrame), (ReferenceFrame.Len()+1)*sizeof(char));
}

void UROS2GetEntityStateSrv::GetInputs(FString& Name, FString& ReferenceFrame)
{
    Name.AppendChars(entity_state_req.name.data, entity_state_req.name.size);
    ReferenceFrame.AppendChars(entity_state_req.reference_frame.data, entity_state_req.reference_frame.size);
}

void UROS2GetEntityStateSrv::SetOutput(FEntityStateData data, bool Success)
{
    data.SetROS2(entity_state_res.state);

    entity_state_res.success = Success;
}

void UROS2GetEntityStateSrv::GetOutput(FEntityStateData& data, bool& Success)
{
    data.SetFromROS2(entity_state_res.state);

    Success = entity_state_res.success;
}

void* UROS2GetEntityStateSrv::GetRequest()
{
    return &entity_state_req;
}

void* UROS2GetEntityStateSrv::GetResponse()
{
    return &entity_state_res;
}

FString UROS2GetEntityStateSrv::SrvRequestToString() const
{
    FString Name;
    FString ReferenceFrame;
    Name.AppendChars(entity_state_req.name.data, entity_state_req.name.size);
    ReferenceFrame.AppendChars(entity_state_req.reference_frame.data, entity_state_req.reference_frame.size);
	
    return FString::Printf(TEXT("GetEntityState %s, %s"), *Name, *ReferenceFrame);
}

FString UROS2GetEntityStateSrv::SrvResponseToString() const
{
    FString name, reference_frame;
    name.AppendChars(entity_state_res.state.name.data, entity_state_res.state.name.size);
    reference_frame.AppendChars(entity_state_res.state.reference_frame.data, entity_state_res.state.reference_frame.size);
	return FString::Printf(TEXT("GetEntityState EntityState: (%s %s), (%f %f %f, %f %f %f %f)"),
                            *name, *reference_frame,
                            entity_state_res.state.pose.position.x, entity_state_res.state.pose.position.y, entity_state_res.state.pose.position.z,
							entity_state_res.state.pose.orientation.x, entity_state_res.state.pose.orientation.y, entity_state_res.state.pose.orientation.z, entity_state_res.state.pose.orientation.w);
}
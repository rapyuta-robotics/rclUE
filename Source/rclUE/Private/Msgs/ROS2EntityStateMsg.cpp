// Copyright 2021 Rapyuta Robotics Co., Ltd.

#include "Msgs/ROS2EntityStateMsg.h"

#include "Kismet/GameplayStatics.h"

void UROS2EntityStateMsg::Init()
{
	ue_msgs__msg__EntityState__init(&entity_state_msg);
}

void UROS2EntityStateMsg::Fini()
{
	ue_msgs__msg__EntityState__fini(&entity_state_msg);
}

const rosidl_message_type_support_t* UROS2EntityStateMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(ue_msgs, msg, EntityState);
}

void UROS2EntityStateMsg::SetMsg(const FEntityState Inputs)
{
    Inputs.SetROS2(entity_state_msg);
}

void UROS2EntityStateMsg::GetMsg(FEntityState& Outputs)
{
    Outputs.SetFromROS2(entity_state_msg);
}

void* UROS2EntityStateMsg::Get()
{
	return &entity_state_msg;
}

FString UROS2EntityStateMsg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}
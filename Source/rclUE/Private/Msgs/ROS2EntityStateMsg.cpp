// Fill out your copyright notice in the Description page of Project Settings.


#include "Msgs/ROS2EntityStateMsg.h"

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

void UROS2EntityStateMsg::Update(FEntityStateData data)
{
    data.SetROS2(entity_state_msg);
}

void* UROS2EntityStateMsg::Get()
{
    return &entity_state_msg;
}

FString UROS2EntityStateMsg::MsgToString() const
{
    FString name, reference_frame;
    name.AppendChars(entity_state_msg.name.data, entity_state_msg.name.size);
    reference_frame.AppendChars(entity_state_msg.reference_frame.data, entity_state_msg.reference_frame.size);
	return FString::Printf(TEXT("EntityState: (%s %s), (%f %f %f, %f %f %f %f)"),
                            *name, *reference_frame,
                            entity_state_msg.pose.position.x, entity_state_msg.pose.position.y, entity_state_msg.pose.position.z,
							entity_state_msg.pose.orientation.x, entity_state_msg.pose.orientation.y, entity_state_msg.pose.orientation.z, entity_state_msg.pose.orientation.w);
}

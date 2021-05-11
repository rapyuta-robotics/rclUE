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
    free(entity_state_msg.name.data);
    entity_state_msg.name.data = (char*)malloc((data.name.Len()+1)*sizeof(char));
    strcpy(entity_state_msg.name.data, TCHAR_TO_ANSI(*data.name));
    entity_state_msg.name.size = data.name.Len();
    entity_state_msg.name.capacity = data.name.Len()+1;

	entity_state_msg.pose.position.x = data.position.X;
	entity_state_msg.pose.position.y = data.position.Y;
	entity_state_msg.pose.position.z = data.position.Z;
	entity_state_msg.pose.orientation.x = data.orientation.X;
	entity_state_msg.pose.orientation.y = data.orientation.Y;
	entity_state_msg.pose.orientation.z = data.orientation.Z;
	entity_state_msg.pose.orientation.w = data.orientation.W;

	
	entity_state_msg.twist.linear.x = data.linear.X;
	entity_state_msg.twist.linear.y = data.linear.Y;
	entity_state_msg.twist.linear.z = data.linear.Z;
	entity_state_msg.twist.angular.x = data.angular.X;
	entity_state_msg.twist.angular.y = data.angular.Y;
	entity_state_msg.twist.angular.z = data.angular.Z;

    free(entity_state_msg.reference_frame.data);
    entity_state_msg.reference_frame.data = (char*)malloc((data.reference_frame.Len()+1)*sizeof(char));
    strcpy(entity_state_msg.reference_frame.data, TCHAR_TO_ANSI(*data.reference_frame));
    entity_state_msg.reference_frame.size = data.reference_frame.Len();
    entity_state_msg.reference_frame.capacity = data.reference_frame.Len()+1;
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

// Fill out your copyright notice in the Description page of Project Settings.


#include "Msgs/ROS2StringMsg.h"
#include "Kismet/GameplayStatics.h"

void UROS2StringMsg::Init()
{
	std_msgs__msg__String__init(&string_pub_msg);
}

void UROS2StringMsg::Fini()
{
	std_msgs__msg__String__fini(&string_pub_msg);
}

const rosidl_message_type_support_t* UROS2StringMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, String);
}

void UROS2StringMsg::Update(const FString &stringData)
{
	const unsigned int PUB_MSG_CAPACITY = stringData.Len()+1;
	string_pub_msg.data.data = (char*)malloc(PUB_MSG_CAPACITY);
	string_pub_msg.data.capacity = PUB_MSG_CAPACITY;
	snprintf(string_pub_msg.data.data, string_pub_msg.data.capacity, "%s", TCHAR_TO_ANSI(*stringData));
	string_pub_msg.data.size = strlen(string_pub_msg.data.data);
}

void* UROS2StringMsg::Get()
{
	return &string_pub_msg;
}

FString UROS2StringMsg::MsgToString() const
{
	return FString(string_pub_msg.data.data);
}

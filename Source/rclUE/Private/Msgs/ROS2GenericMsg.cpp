// Fill out your copyright notice in the Description page of Project Settings.


#include "Msgs/ROS2GenericMsg.h"

DEFINE_LOG_CATEGORY(LogROS2Msg);


// Add default functionality here for any IROS2MsgInterface functions that are not pure virtual.

const rosidl_message_type_support_t* UROS2GenericMsg::GetTypeSupport() const
{
	ensureMsgf(false, TEXT("This should not be called (%s)"), *__LOG_INFO__);
    return nullptr;
}

void UROS2GenericMsg::Init()
{
	ensureMsgf(false, TEXT("This should not be called (%s)"), *__LOG_INFO__);
}

void UROS2GenericMsg::Fini()
{
	ensureMsgf(false, TEXT("This should not be called (%s)"), *__LOG_INFO__);
}

void* UROS2GenericMsg::Get()
{
	ensureMsgf(false, TEXT("This should not be called (%s)"), *__LOG_INFO__);
	return nullptr;
}

FString UROS2GenericMsg::MsgToString() const
{
	ensureMsgf(false, TEXT("This should not be called (%s)"), *__LOG_INFO__);
	return FString();
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "ROS2GenericMsg.h"


// Add default functionality here for any IROS2MsgInterface functions that are not pure virtual.

const rosidl_message_type_support_t* UROS2GenericMsg::GetTypeSupport() const
{
    return nullptr;
}

void UROS2GenericMsg::Init()
{
	ensureMsgf(false, TEXT("%s should not be called"), *FString(__FUNCTION__));
}

void UROS2GenericMsg::Fini()
{
	ensureMsgf(false, TEXT("%s should not be called"), *FString(__FUNCTION__));
}

void* UROS2GenericMsg::Get()
{
	return nullptr;
}

void UROS2GenericMsg::PrintPubToLog(rcl_ret_t rc) const
{
	ensureMsgf(false, TEXT("%s should not be called"), *FString(__FUNCTION__));
}

void UROS2GenericMsg::PrintSubToLog(rcl_ret_t rc) const
{
	ensureMsgf(false, TEXT("%s should not be called"), *FString(__FUNCTION__));
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "Msgs/ROS2GenericMsg.h"


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

void UROS2GenericMsg::PrintPubToLog(rcl_ret_t rc, FName NodeName) const
{
	if (rc == RCL_RET_OK)
	{
		UE_LOG(LogTemp, Log, TEXT("Published (node %s) message %s"), *NodeName.ToString(), *MsgToString());
	} 
	else 
	{
		UE_LOG(LogTemp, Log, TEXT("timer_callback: Error publishing message (node %s) %s"), *NodeName.ToString(), *MsgToString());
	}
}

void UROS2GenericMsg::PrintSubToLog(rcl_ret_t rc, FName NodeName) const
{
	if (rc == RCL_RET_OK)
	{
		UE_LOG(LogTemp, Log, TEXT("Subscriber (node %s) received message message %s"), *NodeName.ToString(), *MsgToString());
	} 
	else 
	{
		UE_LOG(LogTemp, Log, TEXT("timer_callback: Error receiving message (node %s) %s"), *NodeName.ToString(), *MsgToString());
	}
}

FString UROS2GenericMsg::MsgToString() const
{
	ensureMsgf(false, TEXT("%s should not be called"), *FString(__FUNCTION__));
	return FString();
}

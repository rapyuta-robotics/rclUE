// Fill out your copyright notice in the Description page of Project Settings.


#include "Msgs/ROS2GenericMsg.h"

DEFINE_LOG_CATEGORY(LogROS2Msg);


// Add default functionality here for any IROS2MsgInterface functions that are not pure virtual.

const rosidl_message_type_support_t* UROS2GenericMsg::GetTypeSupport() const
{
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

void UROS2GenericMsg::PrintPubToLog(rcl_ret_t rc, FString NodeName) const
{
	if (rc == RCL_RET_OK)
	{
		UE_LOG(LogROS2Msg, Log, TEXT("Published  (node %s) message %s"), *NodeName, *MsgToString());
	} 
	else 
	{
		UE_LOG(LogROS2Msg, Log, TEXT("timer_callback: Error publishing message (node %s) %s"), *NodeName, *MsgToString());
	}
}

void UROS2GenericMsg::PrintSubToLog(rcl_ret_t rc, FString NodeName) const
{
	if (rc == RCL_RET_OK)
	{
		UE_LOG(LogROS2Msg, Log, TEXT("Subscriber (node %s) message %s"), *NodeName, *MsgToString());
	} 
	else 
	{
		UE_LOG(LogROS2Msg, Log, TEXT("timer_callback: Error receiving message (node %s) %s"), *NodeName, *MsgToString());
	}
}

FString UROS2GenericMsg::MsgToString() const
{
	ensureMsgf(false, TEXT("This should not be called (%s)"), *__LOG_INFO__);
	return FString();
}

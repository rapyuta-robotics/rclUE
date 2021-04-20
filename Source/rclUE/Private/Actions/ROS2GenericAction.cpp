// Fill out your copyright notice in the Description page of Project Settings.


#include "Actions/ROS2GenericAction.h"

DEFINE_LOG_CATEGORY(LogROS2Action);

const rosidl_action_type_support_t* UROS2GenericAction::GetTypeSupport() const
{
	ensureMsgf(false, TEXT("%s should not be called"), *FString(__FUNCTION__));
	return nullptr;
}

void UROS2GenericAction::Init()
{
	ensureMsgf(false, TEXT("%s should not be called"), *FString(__FUNCTION__));
}

void UROS2GenericAction::Fini()
{
	ensureMsgf(false, TEXT("%s should not be called"), *FString(__FUNCTION__));
}

void* UROS2GenericAction::GetGoalRequest()
{
	ensureMsgf(false, TEXT("%s should not be called"), *FString(__FUNCTION__));
	return nullptr;
}

void* UROS2GenericAction::GetGoalResponse()
{
	ensureMsgf(false, TEXT("%s should not be called"), *FString(__FUNCTION__));
	return nullptr;
}

void* UROS2GenericAction::GetResultRequest()
{
	ensureMsgf(false, TEXT("%s should not be called"), *FString(__FUNCTION__));
	return nullptr;
}

void* UROS2GenericAction::GetResultResponse()
{
	ensureMsgf(false, TEXT("%s should not be called"), *FString(__FUNCTION__));
	return nullptr;
}

void* UROS2GenericAction::GetFeedbackMessage()
{
	ensureMsgf(false, TEXT("%s should not be called"), *FString(__FUNCTION__));
	return nullptr;
}

void* UROS2GenericAction::GetCancelRequest()
{
	return &cancel_request;
}

void* UROS2GenericAction::GetCancelResponse()
{
	return &cancel_response;
}

void UROS2GenericAction::PrintGoalToLog(rcl_ret_t rc, FString NodeName) const
{
	if (rc == RCL_RET_OK)
	{
		UE_LOG(LogROS2Action, Log, TEXT("Goal (node %s) message %s"), *NodeName, *ActionGoalToString());
	} 
	else 
	{
		UE_LOG(LogROS2Action, Log, TEXT("timer_callback: Error with goal (node %s) %s"), *NodeName, *ActionGoalToString());
	}
}

void UROS2GenericAction::PrintResultToLog(rcl_ret_t rc, FString NodeName) const
{
	if (rc == RCL_RET_OK)
	{
		UE_LOG(LogROS2Action, Log, TEXT("Result (node %s) message %s"), *NodeName, *ActionResultToString());
	} 
	else 
	{
		UE_LOG(LogROS2Action, Log, TEXT("timer_callback: Error with result (node %s) %s"), *NodeName, *ActionResultToString());
	}
}

void UROS2GenericAction::PrintFeedbackToLog(rcl_ret_t rc, FString NodeName) const
{
	if (rc == RCL_RET_OK)
	{
		UE_LOG(LogROS2Action, Log, TEXT("Feedback (node %s) message %s"), *NodeName, *ActionFeedbackToString());
	} 
	else 
	{
		UE_LOG(LogROS2Action, Log, TEXT("timer_callback: Error with feedback (node %s) %s"), *NodeName, *ActionFeedbackToString());
	}
}

FString UROS2GenericAction::ActionGoalToString() const
{
	ensureMsgf(false, TEXT("%s should not be called"), *FString(__FUNCTION__));
	return FString();
}

FString UROS2GenericAction::ActionResultToString() const
{
	ensureMsgf(false, TEXT("%s should not be called"), *FString(__FUNCTION__));
	return FString();
}

FString UROS2GenericAction::ActionFeedbackToString() const
{
	ensureMsgf(false, TEXT("%s should not be called"), *FString(__FUNCTION__));
	return FString();
}

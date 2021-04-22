// Fill out your copyright notice in the Description page of Project Settings.


#include "Actions/ROS2GenericAction.h"

DEFINE_LOG_CATEGORY(LogROS2Action);

const rosidl_action_type_support_t* UROS2GenericAction::GetTypeSupport() const
{
	ensureMsgf(false, TEXT("This should not be called (%s)"), *__LOG_INFO__);
	return nullptr;
}

void UROS2GenericAction::Init()
{
	action_msgs__srv__CancelGoal_Request__init(&cancel_request);
	action_msgs__srv__CancelGoal_Response__init(&cancel_response);
}

void UROS2GenericAction::Fini()
{
	action_msgs__srv__CancelGoal_Request__fini(&cancel_request);
	action_msgs__srv__CancelGoal_Response__fini(&cancel_response);
}

void* UROS2GenericAction::GetGoalRequest()
{
	ensureMsgf(false, TEXT("This should not be called (%s)"), *__LOG_INFO__);
	return nullptr;
}

void* UROS2GenericAction::GetGoalResponse()
{
	ensureMsgf(false, TEXT("This should not be called (%s)"), *__LOG_INFO__);
	return nullptr;
}

void* UROS2GenericAction::GetResultRequest()
{
	ensureMsgf(false, TEXT("This should not be called (%s)"), *__LOG_INFO__);
	return nullptr;
}

void* UROS2GenericAction::GetResultResponse()
{
	ensureMsgf(false, TEXT("This should not be called (%s)"), *__LOG_INFO__);
	return nullptr;
}

void* UROS2GenericAction::GetFeedbackMessage()
{
	ensureMsgf(false, TEXT("This should not be called (%s)"), *__LOG_INFO__);
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

FString UROS2GenericAction::ActionGoalToString() const
{
	ensureMsgf(false, TEXT("This should not be called (%s)"), *__LOG_INFO__);
	return FString();
}

FString UROS2GenericAction::ActionResultToString() const
{
	ensureMsgf(false, TEXT("This should not be called (%s)"), *__LOG_INFO__);
	return FString();
}

FString UROS2GenericAction::ActionFeedbackToString() const
{
	ensureMsgf(false, TEXT("This should not be called (%s)"), *__LOG_INFO__);
	return FString();
}

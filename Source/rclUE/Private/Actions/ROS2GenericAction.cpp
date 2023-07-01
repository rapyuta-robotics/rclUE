// Copyright 2020-2023 Rapyuta Robotics Co., Ltd.

#include "Actions/ROS2GenericAction.h"

const rosidl_action_type_support_t* UROS2GenericAction::GetTypeSupport() const
{
    checkNoEntry();
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
    checkNoEntry();
    return nullptr;
}

void* UROS2GenericAction::GetGoalResponse()
{
    checkNoEntry();
    return nullptr;
}

void* UROS2GenericAction::GetResultRequest()
{
    checkNoEntry();
    return nullptr;
}

void* UROS2GenericAction::GetResultResponse()
{
    checkNoEntry();
    return nullptr;
}

void* UROS2GenericAction::GetFeedbackMessage()
{
    checkNoEntry();
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

const FString UROS2GenericAction::ActionGoalToString() const
{
    checkNoEntry();
    return FString();
}

const FString UROS2GenericAction::ActionResultToString() const
{
    checkNoEntry();
    return FString();
}

const FString UROS2GenericAction::ActionFeedbackToString() const
{
    checkNoEntry();
    return FString();
}

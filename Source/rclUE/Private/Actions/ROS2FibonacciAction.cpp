// Copyright 2021 Rapyuta Robotics Co., Ltd.

#include "Actions/ROS2FibonacciAction.h"


const rosidl_action_type_support_t* UROS2FibonacciAction::GetTypeSupport() const
{
    return ROSIDL_GET_ACTION_TYPE_SUPPORT(ue4_interfaces, Fibonacci);
}

void UROS2FibonacciAction::Init()
{
    Super::Init();
    ue4_interfaces__action__Fibonacci_SendGoal_Request__init(&ue4_goal_request);
    ue4_interfaces__action__Fibonacci_SendGoal_Response__init(&ue4_goal_response);
    ue4_interfaces__action__Fibonacci_GetResult_Request__init(&ue4_result_request);
    ue4_interfaces__action__Fibonacci_GetResult_Response__init(&ue4_result_response);
    ue4_interfaces__action__Fibonacci_FeedbackMessage__init(&ue4_feedback_message);
}

void UROS2FibonacciAction::Fini()
{
    ue4_interfaces__action__Fibonacci_SendGoal_Request__fini(&ue4_goal_request);
    ue4_interfaces__action__Fibonacci_SendGoal_Response__fini(&ue4_goal_response);
    ue4_interfaces__action__Fibonacci_GetResult_Request__fini(&ue4_result_request);
    ue4_interfaces__action__Fibonacci_GetResult_Response__fini(&ue4_result_response);
    ue4_interfaces__action__Fibonacci_FeedbackMessage__fini(&ue4_feedback_message);
    Super::Fini();
}

void UROS2FibonacciAction::SetOrder(int order)
{
    ue4_goal_request.goal.order = order;
}

void UROS2FibonacciAction::GetOrder(int& order)
{
    order = ue4_goal_request.goal.order;
}

void UROS2FibonacciAction::SetSequence(TArray<int> sequence)
{
    ue4_result_response.result.sequence.size = sequence.Num();
    ue4_result_response.result.sequence.capacity = sequence.Num();
    ue4_result_response.result.sequence.data = (int*)malloc(sequence.Num()*sizeof(int));
    for (int i=0; i<sequence.Num(); i++)
    {
        ue4_result_response.result.sequence.data[i] = sequence[i];
    }
}

void UROS2FibonacciAction::GetSequence(TArray<int>& sequence)
{
    sequence.SetNum(ue4_result_response.result.sequence.size);
    for (int i=0; i<ue4_result_response.result.sequence.size; i++)
    {
        sequence[i] = ue4_result_response.result.sequence.data[i];
    }
}

void UROS2FibonacciAction::SetPartialSequence(TArray<int> partial_sequence)
{
    ue4_feedback_message.feedback.partial_sequence.size = partial_sequence.Num();
    ue4_feedback_message.feedback.partial_sequence.capacity = partial_sequence.Num();
    ue4_feedback_message.feedback.partial_sequence.data = (int*)malloc(partial_sequence.Num()*sizeof(int));
    for (int i=0; i<partial_sequence.Num(); i++)
    {
        ue4_feedback_message.feedback.partial_sequence.data[i] = partial_sequence[i];
    }
}

void UROS2FibonacciAction::GetPartialSequence(TArray<int>& partial_sequence)
{
    partial_sequence.SetNum(ue4_feedback_message.feedback.partial_sequence.size);
    for (int i=0; i<ue4_feedback_message.feedback.partial_sequence.size; i++)
    {
        partial_sequence[i] = ue4_feedback_message.feedback.partial_sequence.data[i];
    }
}

void* UROS2FibonacciAction::GetGoalRequest()
{
	return &ue4_goal_request;
}

void* UROS2FibonacciAction::GetGoalResponse()
{
	return &ue4_goal_response;
}

void* UROS2FibonacciAction::GetResultRequest()
{
	return &ue4_result_request;
}

void* UROS2FibonacciAction::GetResultResponse()
{
	return &ue4_result_response;
}

void* UROS2FibonacciAction::GetFeedbackMessage()
{
	return &ue4_feedback_message;
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "Actions/ROS2FibonacciAction.h"


const rosidl_action_type_support_t* UROS2FibonacciAction::GetTypeSupport() const
{
    return ROSIDL_GET_ACTION_TYPE_SUPPORT(ue4_interfaces, Fibonacci);
}

void UROS2FibonacciAction::Init()
{
	UE_LOG(LogROS2Action, Warning, TEXT("UROS2FibonacciAction::Init"));
    ue4_interfaces__action__Fibonacci_Goal__init(&ue4_goal);
    ue4_interfaces__action__Fibonacci_Result__init(&ue4_result);
    ue4_interfaces__action__Fibonacci_Feedback__init(&ue4_feedback);
}

void UROS2FibonacciAction::Fini()
{
	UE_LOG(LogROS2Action, Warning, TEXT("UROS2FibonacciAction::Fini"));
    ue4_interfaces__action__Fibonacci_Goal__fini(&ue4_goal);
    ue4_interfaces__action__Fibonacci_Result__fini(&ue4_result);
    ue4_interfaces__action__Fibonacci_Feedback__fini(&ue4_feedback);
}

void UROS2FibonacciAction::SetOrder(int order)
{
    ue4_goal.order = order;
}

void UROS2FibonacciAction::GetOrder(int& order)
{
    order = ue4_goal.order;
}

void UROS2FibonacciAction::SetSequence(TArray<int> sequence)
{
    ue4_result.sequence.size = sequence.Num();
    ue4_result.sequence.capacity = sequence.Num();
    ue4_result.sequence.data = (int*)malloc(sequence.Num()*sizeof(int));
    for (int i=0; i<sequence.Num(); i++)
    {
        ue4_result.sequence.data[i] = sequence[i];
    }
}

void UROS2FibonacciAction::GetSequence(TArray<int>& sequence)
{
    sequence.SetNum(ue4_result.sequence.size);
    for (int i=0; i<ue4_result.sequence.size; i++)
    {
        sequence[i] = ue4_result.sequence.data[i];
    }
}

void UROS2FibonacciAction::SetPartialSequence(TArray<int> partial_sequence)
{
    ue4_feedback.partial_sequence.size = partial_sequence.Num();
    ue4_feedback.partial_sequence.capacity = partial_sequence.Num();
    ue4_feedback.partial_sequence.data = (int*)malloc(partial_sequence.Num()*sizeof(int));
    for (int i=0; i<partial_sequence.Num(); i++)
    {
        ue4_feedback.partial_sequence.data[i] = partial_sequence[i];
    }
}

void UROS2FibonacciAction::GetPartialSequence(TArray<int>& partial_sequence)
{
    partial_sequence.SetNum(ue4_feedback.partial_sequence.size);
    for (int i=0; i<ue4_feedback.partial_sequence.size; i++)
    {
        partial_sequence[i] = ue4_feedback.partial_sequence.data[i];
    }
}

const ue4_interfaces__action__Fibonacci_Goal* UROS2FibonacciAction::GetGoal() const
{
    return &ue4_goal;
}

const ue4_interfaces__action__Fibonacci_Result* UROS2FibonacciAction::GetResult() const
{
    return &ue4_result;
}

const ue4_interfaces__action__Fibonacci_Feedback* UROS2FibonacciAction::GetFeedback() const
{
    return &ue4_feedback;
}

void* UROS2FibonacciAction::GetGoal()
{
    return &ue4_goal;
}

void* UROS2FibonacciAction::GetResult()
{
    return &ue4_result;
}

void* UROS2FibonacciAction::GetFeedback()
{
    return &ue4_feedback;
}

FString UROS2FibonacciAction::ActionGoalToString() const
{
	return FString::Printf(TEXT("order: %d"), ue4_goal.order);
}

FString UROS2FibonacciAction::ActionResultToString() const
{
	return FString();
}

FString UROS2FibonacciAction::ActionFeedbackToString() const
{
	return FString();
}

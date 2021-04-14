// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actions/ROS2GenericAction.h"
#include "rclcUtilities.h"
#include <ue4_interfaces/action/fibonacci.h>

#include "ROS2FibonacciAction.generated.h"

/**
 * 
 */
UCLASS()
class RCLUE_API UROS2FibonacciAction : public UROS2GenericAction
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	virtual void Init() override;

	UFUNCTION(BlueprintCallable)
	virtual void Fini() override;

	virtual const rosidl_action_type_support_t* GetTypeSupport() const override;
	
	UFUNCTION(BlueprintCallable)
	void SetOrder(int order);
	
	UFUNCTION(BlueprintCallable)
	void GetOrder(int& order);

	UFUNCTION(BlueprintCallable)
	void SetSequence(TArray<int> sequence);

	UFUNCTION(BlueprintCallable)
	void GetSequence(TArray<int>& sequence);

	UFUNCTION(BlueprintCallable)
	void SetPartialSequence(TArray<int> partial_sequence);

	UFUNCTION(BlueprintCallable)
	void GetPartialSequence(TArray<int>& partial_sequence);

	// is there even a point to these?
	const ue4_interfaces__action__Fibonacci_Goal* GetGoal() const;
	const ue4_interfaces__action__Fibonacci_Result* GetResult() const;
	const ue4_interfaces__action__Fibonacci_Feedback* GetFeedback() const;

	virtual void* GetGoal() override;
	virtual void* GetResult() override;
	virtual void* GetFeedback() override;


private:
	virtual FString ActionGoalToString() const override;
	virtual FString ActionResultToString() const override;
	virtual FString ActionFeedbackToString() const override;

	ue4_interfaces__action__Fibonacci_Goal ue4_goal;
	ue4_interfaces__action__Fibonacci_Result ue4_result;
	ue4_interfaces__action__Fibonacci_Feedback ue4_feedback;

	ue4_interfaces__action__Fibonacci_SendGoal_Request ue4_goal_request;
	ue4_interfaces__action__Fibonacci_SendGoal_Response ue4_goal_response;
	ue4_interfaces__action__Fibonacci_GetResult_Request ue4_result_request;
	ue4_interfaces__action__Fibonacci_GetResult_Response ue4_result_response;
	ue4_interfaces__action__Fibonacci_FeedbackMessage ue4_feedback_message;
};

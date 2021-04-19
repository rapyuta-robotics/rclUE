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
	
	// is the uuid set automatically?
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
	

	virtual void* GetGoalRequest() override;
	virtual void* GetGoalResponse() override;
	virtual void* GetResultRequest() override;
	virtual void* GetResultResponse() override;
	virtual void* GetFeedbackMessage() override;


private:
	virtual FString ActionGoalToString() const override;
	virtual FString ActionResultToString() const override;
	virtual FString ActionFeedbackToString() const override;

	ue4_interfaces__action__Fibonacci_SendGoal_Request ue4_goal_request;
	ue4_interfaces__action__Fibonacci_SendGoal_Response ue4_goal_response;
	ue4_interfaces__action__Fibonacci_GetResult_Request ue4_result_request;
	ue4_interfaces__action__Fibonacci_GetResult_Response ue4_result_response;
	ue4_interfaces__action__Fibonacci_FeedbackMessage ue4_feedback_message;
};

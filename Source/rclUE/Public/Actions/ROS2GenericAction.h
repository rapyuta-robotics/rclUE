// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "rclcUtilities.h"
#include <rosidl_runtime_c/action_type_support_struct.h>

#include "ROS2GenericAction.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogROS2Action, Log, All);

/**
 * This should be refactored with other generic ROS2 types (Msgs, Sensors, Actions)
 * Need to have a common class
 * Get/Print/ToString methods should be merged into a single of each with a parameter to switch versions (these are not bottlenecks and control flow inside them should be fine)
 */
UCLASS()
class RCLUE_API UROS2GenericAction : public UObject
{
	GENERATED_BODY()
	
public:
	virtual void Init();
	virtual void Fini();

	virtual void* GetGoalRequest();
	virtual void* GetGoalResponse();
	virtual void* GetResultRequest();
	virtual void* GetResultResponse();
	virtual void* GetFeedbackMessage();

	virtual void PrintGoalToLog(rcl_ret_t rc, FString NodeName) const;
	virtual void PrintResultToLog(rcl_ret_t rc, FString NodeName) const;
	virtual void PrintFeedbackToLog(rcl_ret_t rc, FString NodeName) const;
	
	virtual const rosidl_action_type_support_t* GetTypeSupport() const;

private:
	UFUNCTION(BlueprintCallable)
	virtual FString ActionGoalToString() const;

	UFUNCTION(BlueprintCallable)
	virtual FString ActionResultToString() const;

	UFUNCTION(BlueprintCallable)
	virtual FString ActionFeedbackToString() const;
};

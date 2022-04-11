// Copyright 2020-2021 Rapyuta Robotics Co., Ltd.

#pragma once

#include <CoreMinimal.h>
#include "rclcUtilities.h"
#include <rosidl_runtime_c/action_type_support_struct.h>

#include "ROS2GenericAction.generated.h"

/**
 * @brief This should be refactored with other generic ROS2 types (Msgs, Sensors, Actions)
 * Need to have a common class
 * Get/Print/ToString methods should be merged into a single of each with a parameter to switch versions (these are not bottlenecks and control flow inside them should be fine)
 */
UCLASS(Blueprintable)
class RCLUE_API UROS2GenericAction : public UObject
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	virtual void Init();
	
	UFUNCTION(BlueprintCallable)
	virtual void Fini();

	virtual void* GetGoalRequest();
	virtual void* GetGoalResponse();
	virtual void* GetResultRequest();
	virtual void* GetResultResponse();
	virtual void* GetFeedbackMessage();

	void* GetCancelRequest();
	void* GetCancelResponse();
	
	virtual const rosidl_action_type_support_t* GetTypeSupport() const;
	
	UFUNCTION(BlueprintCallable)
	virtual const FString ActionGoalToString() const;

	UFUNCTION(BlueprintCallable)
	virtual const FString ActionResultToString() const;

	UFUNCTION(BlueprintCallable)
	virtual const FString ActionFeedbackToString() const;

private:
	action_msgs__srv__CancelGoal_Request cancel_request;
	action_msgs__srv__CancelGoal_Response cancel_response;
};

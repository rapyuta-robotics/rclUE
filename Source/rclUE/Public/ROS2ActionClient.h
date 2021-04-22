// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ROS2Action.h"
#include <rcl_action/action_client.h>
#include "ROS2ActionClient.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RCLUE_API UROS2ActionClient : public UROS2Action
{
	GENERATED_BODY()

public:	
	virtual void Destroy() override;

	virtual void ProcessReady(rcl_wait_set_t* wait_set) override;


	UFUNCTION(BlueprintCallable)
	void UpdateAndSendGoal();

	UFUNCTION(BlueprintCallable)
	void GetResultRequest();

	UFUNCTION(BlueprintCallable)
	void CancelActionRequest();

	UFUNCTION(BlueprintCallable)
	void SetDelegates(FActionCallback SetGoal, 
					  FActionCallback Feedback, 
					  FActionCallback Result, 
					  FSimpleCallback GoalResponse, 
					  FSimpleCallback Cancel);

					  
	rcl_action_client_t client;

private:
	rmw_request_id_t goal_res_id;
	rmw_request_id_t result_res_id;
	rmw_request_id_t cancel_res_id;

	UPROPERTY()
	FActionCallback SetGoalDelegate;
	
	UPROPERTY()
	FActionCallback FeedbackDelegate;
	
	UPROPERTY()
	FActionCallback ResultDelegate;

	UPROPERTY()
	FSimpleCallback GoalResponseDelegate;
	
	UPROPERTY()
	FSimpleCallback CancelDelegate;


	virtual void InitializeActionComponent() override;
};

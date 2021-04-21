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
	// Sets default values for this component's properties
	UROS2ActionClient();
	
	
	virtual void Destroy() override;

	virtual void ProcessReady(rcl_wait_set_t* wait_set) override;


	UFUNCTION(BlueprintCallable)
	void UpdateAndSendGoal();

	UFUNCTION(BlueprintCallable)
	void GetResultRequest();

	UFUNCTION(BlueprintCallable)
	void CancelActionRequest();

	UFUNCTION()
	void HandleResponseReady();

	UFUNCTION()
	void HandleFeedbackReady();

	UFUNCTION()
	void HandleResultResponseReady();

	UFUNCTION()
	void HandleCancelResponseReady();

	UFUNCTION(BlueprintCallable)
	void SetDelegates(FActionCallback SetGoal, 
					  FActionCallback Feedback, 
					  FActionCallback Result, 
					  FSimpleCallback GoalResponse, 
					  FSimpleCallback Cancel);

					  
	rcl_action_client_t client;

private:
	rmw_request_id_t cancel_req_id;

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
	
	UPROPERTY()
	bool FeedbackReady;
	
	UPROPERTY()
	bool StatusReady;
	
	UPROPERTY()
	bool GoalResponseReady;
	
	UPROPERTY()
	bool CancelResponseReady;
	
	UPROPERTY()
	bool ResultResponseReady;


	UFUNCTION(BlueprintCallable)
	void SendGoal();

	virtual void InitializeActionComponent() override;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ROS2Action.h"
#include <rcl_action/action_server.h>
#include "ROS2ActionServer.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RCLUE_API UROS2ActionServer : public UROS2Action
{
	GENERATED_BODY()

public:	
	virtual void Destroy() override;

	virtual void ProcessReady(rcl_wait_set_t* wait_set) override;


	UFUNCTION(BlueprintCallable)
	void SendGoalResponse();

	UFUNCTION(BlueprintCallable)
	void ProcessAndSendCancelResponse();
	
	UFUNCTION(BlueprintCallable)
	void UpdateAndSendFeedback();
	
	UFUNCTION(BlueprintCallable)
	void UpdateAndSendResult();


	UFUNCTION(BlueprintCallable)
	void SetDelegates(const FActionCallback UpdateFeedback,
	                  const FActionCallback UpdateResult, 
					  const FActionCallback HandleGoal, 
					  const FSimpleCallback HandleCancel, 
					  const FSimpleCallback HandleAccepted);

					  
	rcl_action_server_t server;	


private:
	rcl_clock_t ros_clock;
	rmw_request_id_t goal_req_id;
	rmw_request_id_t result_req_id;
	rmw_request_id_t cancel_req_id;

	UPROPERTY()
	FActionCallback UpdateFeedbackDelegate;

	UPROPERTY()
	FActionCallback UpdateResultDelegate;

	UPROPERTY()
	FActionCallback HandleGoalDelegate;

	UPROPERTY()
	FSimpleCallback HandleCancelDelegate;

	UPROPERTY()
	FSimpleCallback HandleAcceptedDelegate;

	virtual void InitializeActionComponent(const TEnumAsByte<UROS2QoS> QoS) override;
};

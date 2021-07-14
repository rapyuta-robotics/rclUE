// Copyright 2021 Rapyuta Robotics Co., Ltd.

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
	void SetDelegates(FActionCallback UpdateFeedback,
	                  FActionCallback UpdateResult, 
					  FActionCallback HandleGoal, 
					  FSimpleCallback HandleCancel, 
					  FSimpleCallback HandleAccepted);

					  
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

	virtual void InitializeActionComponent(TEnumAsByte<UROS2QoS> QoS) override;
};

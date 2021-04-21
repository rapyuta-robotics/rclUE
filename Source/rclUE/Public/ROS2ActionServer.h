// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ROS2Node.h"
#include "Actions/ROS2GenericAction.h"
#include <rcl_action/action_server.h>
#include "ROS2ActionServer.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RCLUE_API UROS2ActionServer : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UROS2ActionServer();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void Init();
	
	UFUNCTION(BlueprintCallable)
	void InitializeAction();
	
	UFUNCTION()
	void Destroy();

	UFUNCTION(BlueprintCallable)
	void SendGoalResponse();

	UFUNCTION(BlueprintCallable)
	void ProcessAndSendCancelResponse();
	
	UFUNCTION(BlueprintCallable)
	void UpdateAndSendFeedback();
	
	UFUNCTION(BlueprintCallable)
	void UpdateAndSendResult();

	void ProcessReady(rcl_wait_set_t* wait_set);

	UFUNCTION()
	void HandleGoalRequestReady();

	UFUNCTION()
	void HandleResultRequestReady();

	UFUNCTION()
	void HandleCancelRequestReady();


	UFUNCTION(BlueprintCallable)
	void SetDelegates(FActionCallback UpdateFeedback,
	                  FActionCallback UpdateResult, 
					  FActionCallback HandleGoal, 
					  FSimpleCallback HandleCancel, 
					  FSimpleCallback HandleAccepted);


	rcl_clock_t ros_clock;
	rcl_action_server_t server;	
	rmw_request_id_t goal_req_id;
	rmw_request_id_t result_req_id;
	rmw_request_id_t cancel_req_id;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ActionName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UROS2GenericAction> ActionClass;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UROS2GenericAction *Action;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FActionCallback UpdateFeedbackDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FActionCallback UpdateResultDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FActionCallback HandleGoalDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSimpleCallback HandleCancelDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSimpleCallback HandleAcceptedDelegate;
	

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	AROS2Node* ownerNode;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TEnumAsByte<UROS2State> State = UROS2State::Created;

	
	bool GoalRequestReady;
	bool CancelRequestReady;
	bool ResultRequestReady;
	bool GoalExpired;
};

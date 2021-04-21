// Fill out your copyright notice in the Description page of Project Settings.


#include "ROS2ActionClient.h"


// Sets default values for this component's properties
UROS2ActionClient::UROS2ActionClient() : Super()
{
}

void UROS2ActionClient::InitializeActionComponent()
{
	const rosidl_action_type_support_t * action_type_support = Action->GetTypeSupport();

	client = rcl_action_get_zero_initialized_client();
	rcl_action_client_options_t client_opt = rcl_action_client_get_default_options();
	rcl_ret_t rc = rcl_action_client_init(&client, ownerNode->GetNode(), action_type_support, TCHAR_TO_ANSI(*ActionName), &client_opt);
	
	if (rc != RCL_RET_OK)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed status on line %d: %d (ROS2ActionClient). Terminating."),__LINE__,(int)rc);
		UKismetSystemLibrary::QuitGame(GetOwner()->GetWorld(), nullptr, EQuitPreference::Quit, true);
	}

	ensure(rcl_action_client_is_valid(&client));
}

void UROS2ActionClient::Destroy()
{
	Super::Destroy();
	
	if (ownerNode != nullptr)
	{
		RCSOFTCHECK(rcl_action_client_fini(&client, ownerNode->GetNode()));
	}
}


void UROS2ActionClient::ProcessReady(rcl_wait_set_t* wait_set)
{
	RCSOFTCHECK(rcl_action_client_wait_set_get_entities_ready(wait_set, &client,
		&FeedbackReady,
		&StatusReady,
		&GoalResponseReady,
		&CancelResponseReady,
		&ResultResponseReady));

	if (GoalResponseReady)
	{
		HandleResponseReady();
	}

	if (FeedbackReady)
	{
		HandleFeedbackReady();
	}

	if (ResultResponseReady)
	{
		HandleResultResponseReady();
	}

	if (CancelResponseReady)
	{
		HandleCancelResponseReady();
	}

	if (StatusReady)
	{
		UE_LOG(LogTemp, Error, TEXT("Action Client take status not implemented yet"));
		StatusReady = false;
	}
}


void UROS2ActionClient::UpdateAndSendGoal()
{
    UE_LOG(LogTemp, Warning, TEXT("%s"), *FString(__FUNCTION__));
	check(State == UROS2State::Initialized);
	check(IsValid(ownerNode));

	bool ActionServerIsAvailable = false;
	rcl_ret_t rc = rcl_action_server_is_available(ownerNode->GetNode(), &client, &ActionServerIsAvailable);
	if (ActionServerIsAvailable)
	{
		SetGoalDelegate.ExecuteIfBound(Action);
		SendGoal();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Action Server Unavailable"));
	}
}

void UROS2ActionClient::SendGoal()
{
    UE_LOG(LogROS2Action, Warning, TEXT("1. Action Client - Send goal"));
	const void* goal = Action->GetGoalRequest();

	int64_t seq;
	rcl_ret_t rc = rcl_action_send_goal_request(&client, goal, &seq);
}

void UROS2ActionClient::GetResultRequest()
{	
    UE_LOG(LogROS2Action, Warning, TEXT("5. Action Client - Send result request"));
	const void* result = Action->GetResultRequest();

	int64_t seq;
	rcl_ret_t rc = rcl_action_send_result_request(&client, result, &seq);
}

void UROS2ActionClient::CancelActionRequest()
{
    UE_LOG(LogROS2Action, Warning, TEXT("A. Action Client - Send cancel action request"));
	action_msgs__srv__CancelGoal_Request* cancel_request = (action_msgs__srv__CancelGoal_Request*) Action->GetCancelRequest();
	float CancelTime = UGameplayStatics::GetTimeSeconds(GWorld);
	cancel_request->goal_info.stamp.sec = (int32_t)CancelTime;
	unsigned long long ns = (unsigned long long)(CancelTime * 1000000000.0f);
	cancel_request->goal_info.stamp.nanosec = (uint32_t)(ns - (cancel_request->goal_info.stamp.sec * 1000000000ul));

	int64_t seq;
	rcl_ret_t rc = rcl_action_send_cancel_request(&client, Action->GetCancelRequest(), &seq);
}

void UROS2ActionClient::HandleResponseReady()
{
	UE_LOG(LogROS2Action, Warning, TEXT("4. Action Client - Received goal response"));
	rmw_request_id_t req_id;
	void* data = Action->GetGoalResponse();
	rcl_ret_t rc = rcl_action_take_goal_response(&client, &req_id, data);
	GoalResponseDelegate.ExecuteIfBound();
	GoalResponseReady = false;
}

void UROS2ActionClient::HandleFeedbackReady()
{
	UE_LOG(LogROS2Action, Warning, TEXT("8. Action Client - Received feedback"));
	void* data = Action->GetFeedbackMessage();
	rcl_ret_t rc = rcl_action_take_feedback(&client, data);
	FeedbackDelegate.ExecuteIfBound(Action);
	FeedbackReady = false;
}

void UROS2ActionClient::HandleResultResponseReady()
{
	UE_LOG(LogROS2Action, Warning, TEXT("10. Action Client - Received result response"));
	rmw_request_id_t req_id;
	void* data = Action->GetResultResponse();
	rcl_ret_t rc = rcl_action_take_result_response(&client, &req_id, data);
	ResultDelegate.ExecuteIfBound(Action);
	ResultResponseReady = false;
}

void UROS2ActionClient::HandleCancelResponseReady()
{
	UE_LOG(LogROS2Action, Warning, TEXT("D. Action Client - Received cancel response"));
	void* data = Action->GetCancelResponse();
	RCSOFTCHECK(rcl_action_take_cancel_response(&client, &cancel_req_id, data));
	CancelDelegate.ExecuteIfBound();
	CancelResponseReady = false;
}

void UROS2ActionClient::SetDelegates(FActionCallback SetGoal, 
									 FActionCallback Feedback, 
									 FActionCallback Result, 
									 FSimpleCallback GoalResponse, 
									 FSimpleCallback Cancel)
{
	SetGoalDelegate = SetGoal;
	GoalResponseDelegate = GoalResponse;
	FeedbackDelegate = Feedback;
	ResultDelegate = Result;
	CancelDelegate = Cancel;
}
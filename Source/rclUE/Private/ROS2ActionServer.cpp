// Copyright (c) 2020 Rapyuta Robotics Co., Ltd.

#include "ROS2ActionServer.h"

void UROS2ActionServer::InitializeActionComponent(const TEnumAsByte<UROS2QoS> QoS)
{
	const rosidl_action_type_support_t* action_type_support = Action->GetTypeSupport();

	server = rcl_action_get_zero_initialized_server();
	rcl_action_server_options_t server_opt = rcl_action_server_get_default_options();

	server_opt.goal_service_qos = QoS_LUT[QoS];
	server_opt.result_service_qos = QoS_LUT[QoS];
	server_opt.cancel_service_qos = QoS_LUT[QoS];
	server_opt.feedback_topic_qos = QoS_LUT[QoS];
	server_opt.status_topic_qos = QoS_LUT[QoS];

	rcl_allocator_t allocator = rcl_get_default_allocator();
	RCSOFTCHECK(rcl_ros_clock_init(&ros_clock, &allocator));
	rcl_ret_t rc = rcl_action_server_init(
		&server, OwnerNode->GetNode(), &ros_clock, action_type_support, TCHAR_TO_UTF8(*ActionName), &server_opt);

	check(rc == RCL_RET_OK);
}

void UROS2ActionServer::Destroy()
{
	Super::Destroy();

	if (OwnerNode != nullptr)
	{
		RCSOFTCHECK(rcl_action_server_fini(&server, OwnerNode->GetNode()));
		RCSOFTCHECK(rcl_ros_clock_fini(&ros_clock));
	}
}

void UROS2ActionServer::ProcessReady(rcl_wait_set_t* wait_set)
{
	TArray<bool, TFixedAllocator<4>> IsReady = {false, false, false, false};
	RCSOFTCHECK(
		rcl_action_server_wait_set_get_entities_ready(wait_set, &server, &IsReady[0], &IsReady[1], &IsReady[2], &IsReady[3]));

	if (IsReady[0])
	{
		UE_LOG(LogROS2Action, Log, TEXT("2. Action Server - Received goal request (%s)"), *__LOG_INFO__);
		void* data = Action->GetGoalRequest();
		RCSOFTCHECK(rcl_action_take_goal_request(&server, &goal_req_id, data));
		HandleAcceptedDelegate.ExecuteIfBound();
	}

	if (IsReady[1])
	{
		UE_LOG(LogROS2Action, Log, TEXT("B. Action Server - Received cancel action request (%s)"), *__LOG_INFO__);
		void* data = Action->GetCancelRequest();
		RCSOFTCHECK(rcl_action_take_cancel_request(&server, &cancel_req_id, data));
		HandleCancelDelegate.ExecuteIfBound();
	}

	if (IsReady[2])
	{
		UE_LOG(LogROS2Action, Log, TEXT("6. Action Server - Received result request (%s)"), *__LOG_INFO__);
		void* data = Action->GetResultRequest();
		RCSOFTCHECK(rcl_action_take_result_request(&server, &result_req_id, data));
		HandleGoalDelegate.ExecuteIfBound(Action);
	}

	if (IsReady[3])
	{
		ensureMsgf(false, TEXT("Action Server goal expired not implemented yet (%s)"), *__LOG_INFO__);
	}
}

void UROS2ActionServer::SendGoalResponse()
{
	UE_LOG(LogROS2Action, Log, TEXT("3. Action Server - Send goal response (%s)"), *__LOG_INFO__);
	check(State == UROS2State::Initialized);
	check(IsValid(OwnerNode));

	ue4_interfaces__action__Fibonacci_SendGoal_Response* GoalResponse =
		(ue4_interfaces__action__Fibonacci_SendGoal_Response*)Action->GetGoalResponse();
	GoalResponse->accepted = true;
	float TimeOfResponse = UGameplayStatics::GetTimeSeconds(GWorld);
	GoalResponse->stamp.sec = (int32)TimeOfResponse;
	uint64 ns = (uint64)(TimeOfResponse * 1000000000.0f);
	GoalResponse->stamp.nanosec = (uint32)(ns - (GoalResponse->stamp.sec * 1000000000ul));

	RCSOFTCHECK(rcl_action_send_goal_response(&server, &goal_req_id, Action->GetGoalResponse()));
}

void UROS2ActionServer::ProcessAndSendCancelResponse()
{
	UE_LOG(LogROS2Action, Log, TEXT("C. Action Server - Send cancel response (%s)"), *__LOG_INFO__);
	check(State == UROS2State::Initialized);
	check(IsValid(OwnerNode));

	rcl_action_cancel_request_t cancel_request = rcl_action_get_zero_initialized_cancel_request();
	float TimeOfCancelProcess = UGameplayStatics::GetTimeSeconds(GWorld);
	cancel_request.goal_info.stamp.sec = (int32)TimeOfCancelProcess;
	uint64 ns = (uint64)(TimeOfCancelProcess * 1000000000.0f);
	cancel_request.goal_info.stamp.nanosec = (uint32)(ns - (cancel_request.goal_info.stamp.sec * 1000000000ul));
	rcl_action_cancel_response_t cancel_response = rcl_action_get_zero_initialized_cancel_response();
	RCSOFTCHECK(rcl_action_process_cancel_request(&server, &cancel_request, &cancel_response));

	action_msgs__srv__CancelGoal_Response* CancelResponse = (action_msgs__srv__CancelGoal_Response*)Action->GetCancelResponse();
	CancelResponse = &cancel_response.msg;
	RCSOFTCHECK(rcl_action_send_cancel_response(&server, &cancel_req_id, Action->GetCancelResponse()));
}

void UROS2ActionServer::UpdateAndSendFeedback()
{
	UE_LOG(LogROS2Action, Log, TEXT("7. Action Server - Publish feedback (%s)"), *__LOG_INFO__);
	check(State == UROS2State::Initialized);
	check(IsValid(OwnerNode));

	UpdateFeedbackDelegate.ExecuteIfBound(Action);

	RCSOFTCHECK(rcl_action_publish_feedback(&server, Action->GetFeedbackMessage()));
}

void UROS2ActionServer::UpdateAndSendResult()
{
	UE_LOG(LogROS2Action, Log, TEXT("9. Action Server - Send result response (%s)"), *__LOG_INFO__);
	check(State == UROS2State::Initialized);
	check(IsValid(OwnerNode));

	UpdateResultDelegate.ExecuteIfBound(Action);

	RCSOFTCHECK(rcl_action_send_result_response(&server, &result_req_id, Action->GetResultResponse()));
}

void UROS2ActionServer::SetDelegates(const FActionCallback UpdateFeedback,
									 const FActionCallback UpdateResult,
									 const FActionCallback HandleGoal,
									 const FSimpleCallback HandleCancel,
									 const FSimpleCallback HandleAccepted)
{
	if (!UpdateFeedbackDelegate.IsBound())
	{
		UE_LOG(LogROS2Action, Warning, TEXT("UpdateFeedbackDelegate is not set - is this on purpose? (%s)"), *__LOG_INFO__);
	}

	if (!UpdateResultDelegate.IsBound())
	{
		UE_LOG(LogROS2Action, Warning, TEXT("UpdateResultDelegate is not set - is this on purpose? (%s)"), *__LOG_INFO__);
	}

	if (!HandleGoalDelegate.IsBound())
	{
		UE_LOG(LogROS2Action, Warning, TEXT("HandleGoalDelegate is not set - is this on purpose? (%s)"), *__LOG_INFO__);
	}

	if (!HandleCancelDelegate.IsBound())
	{
		UE_LOG(LogROS2Action, Warning, TEXT("HandleCancelDelegate is not set - is this on purpose? (%s)"), *__LOG_INFO__);
	}

	if (!HandleAcceptedDelegate.IsBound())
	{
		UE_LOG(LogROS2Action, Warning, TEXT("HandleAcceptedDelegate is not set - is this on purpose? (%s)"), *__LOG_INFO__);
	}

	UpdateFeedbackDelegate = UpdateFeedback;
	UpdateResultDelegate = UpdateResult;
	HandleGoalDelegate = HandleGoal;
	HandleCancelDelegate = HandleCancel;
	HandleAcceptedDelegate = HandleAccepted;
}
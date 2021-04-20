// Fill out your copyright notice in the Description page of Project Settings.


#include "ROS2ActionServer.h"


// Sets default values for this component's properties
UROS2ActionServer::UROS2ActionServer()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UROS2ActionServer::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UROS2ActionServer::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UROS2ActionServer::Init()
{
	check(ownerNode != nullptr);
	if (State == UROS2State::Created && ownerNode->State == UROS2State::Initialized)
	{
		InitializeAction();

		check(IsValid(Action));

		const rosidl_action_type_support_t * action_type_support = Action->GetTypeSupport();

		server = rcl_action_get_zero_initialized_server();
		rcl_action_server_options_t server_opt = rcl_action_server_get_default_options();
		rcl_allocator_t allocator = rcl_get_default_allocator();
		rcl_ret_t rc = rcl_ros_clock_init(&ros_clock, &allocator);
		rc = rcl_action_server_init(&server, ownerNode->GetNode(), &ros_clock, action_type_support, TCHAR_TO_ANSI(*ActionName), &server_opt);
		
		if (rc != RCL_RET_OK)
		{
			UE_LOG(LogTemp, Error, TEXT("Failed status on line %d: %d (ROS2ActionClient). Terminating."),__LINE__,(int)rc);
			UKismetSystemLibrary::QuitGame(GetOwner()->GetWorld(), nullptr, EQuitPreference::Quit, true);
		}

		ensure(rcl_action_server_is_valid(&server));
		
		State = UROS2State::Initialized;
	}
	else if (State == UROS2State::Initialized && ownerNode->State == UROS2State::Initialized)
	{
		UE_LOG(LogTemp, Error, TEXT("Server Init - already initialized!"));
	}
	else if (ownerNode->State == UROS2State::Created)
	{
		UE_LOG(LogTemp, Error, TEXT("Server Init (%s) - Node needs to be initialized before server!"), *ActionName);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Server Init - this shouldn't happen!"));
	}
}

void UROS2ActionServer::InitializeAction()
{
	UE_LOG(LogTemp, Log, TEXT("Initializing Action"));
	if (ActionName != FString() && ActionClass)
	{
		Action = NewObject<UROS2GenericAction>(this, ActionClass);

		if (ensure(IsValid(Action)))
		{
			Action->Init();
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Topic (%s) is nullptr!"), *ActionName);
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("ActionName or ActionClass uninitialized!"));
	}
}

void UROS2ActionServer::Destroy()
{
	UE_LOG(LogTemp, Warning, TEXT("Server Destroy"));
	if (Action != nullptr)
	{
		Action->Fini();
	}

	if (ownerNode != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Server Destroy - rcl_action_server_fini"));
		RCSOFTCHECK(rcl_action_server_fini(&server, ownerNode->GetNode()));
	}
	UE_LOG(LogTemp, Warning, TEXT("Server Destroy - Done"));	
}

void UROS2ActionServer::SendGoalResponse()
{
	UE_LOG(LogROS2Action, Warning, TEXT("3. Action Server - Send goal response"));
	check(State == UROS2State::Initialized);
	check(IsValid(ownerNode));
	
	ue4_interfaces__action__Fibonacci_SendGoal_Response* GoalResponse = (ue4_interfaces__action__Fibonacci_SendGoal_Response*) Action->GetGoalResponse();
	GoalResponse->accepted = true;
	float TimeOfResponse = UGameplayStatics::GetTimeSeconds(GWorld);
	GoalResponse->stamp.sec = (int32_t)TimeOfResponse;
	unsigned long long ns = (unsigned long long)(TimeOfResponse * 1000000000.0f);
	GoalResponse->stamp.nanosec = (uint32_t)(ns - (GoalResponse->stamp.sec * 1000000000ul));

	RCSOFTCHECK(rcl_action_send_goal_response(&server, &goal_req_id, Action->GetGoalResponse()));
}

void UROS2ActionServer::ProcessAndSendCancelResponse()
{
	UE_LOG(LogROS2Action, Warning, TEXT("C. Action Server - Send cancel response"));
	check(State == UROS2State::Initialized);
	check(IsValid(ownerNode));

	rcl_action_cancel_request_t cancel_request = rcl_action_get_zero_initialized_cancel_request();
	float TimeOfCancelProcess = UGameplayStatics::GetTimeSeconds(GWorld);
	cancel_request.goal_info.stamp.sec = (int32_t)TimeOfCancelProcess;
	unsigned long long ns = (unsigned long long)(TimeOfCancelProcess * 1000000000.0f);
	cancel_request.goal_info.stamp.nanosec = (uint32_t)(ns - (cancel_request.goal_info.stamp.sec * 1000000000ul));
	rcl_action_cancel_response_t cancel_response = rcl_action_get_zero_initialized_cancel_response();
	RCSOFTCHECK(rcl_action_process_cancel_request(&server, &cancel_request, &cancel_response));
	
	action_msgs__srv__CancelGoal_Response* CancelResponse = (action_msgs__srv__CancelGoal_Response*) Action->GetCancelResponse();
	CancelResponse = &cancel_response.msg;
	RCSOFTCHECK(rcl_action_send_cancel_response(&server, &cancel_req_id, Action->GetCancelResponse()));
}

void UROS2ActionServer::UpdateAndSendFeedback()
{
	UE_LOG(LogROS2Action, Warning, TEXT("7. Action Server - Publish feedback"));
	check(State == UROS2State::Initialized);
	check(IsValid(ownerNode));

	UpdateFeedbackDelegate.ExecuteIfBound(Action);

	rcl_ret_t rc = rcl_action_publish_feedback(&server, Action->GetFeedbackMessage());
}

void UROS2ActionServer::UpdateAndSendResult()
{
	UE_LOG(LogROS2Action, Warning, TEXT("9. Action Server - Send result response"));
	check(State == UROS2State::Initialized);
	check(IsValid(ownerNode));

	UpdateResultDelegate.ExecuteIfBound(Action);

	rcl_ret_t rc = rcl_action_send_result_response(&server, &result_req_id, Action->GetResultResponse());
}

void UROS2ActionServer::HandleGoalRequestReady()
{
	UE_LOG(LogROS2Action, Warning, TEXT("2. Action Server - Received goal request"));
	void* data = Action->GetGoalRequest();
	rcl_ret_t rc = rcl_action_take_goal_request(&server, &goal_req_id, data);
	HandleAcceptedDelegate.ExecuteIfBound();
	GoalRequestReady = false;
}

void UROS2ActionServer::HandleResultRequestReady()
{
	UE_LOG(LogROS2Action, Warning, TEXT("6. Action Server (Node) - Received result request"));
	void* data = Action->GetResultRequest();
	rcl_ret_t rc = rcl_action_take_result_request(&server, &result_req_id, data);
	HandleGoalDelegate.ExecuteIfBound(Action);
	ResultRequestReady = false;
}

void UROS2ActionServer::HandleCancelRequestReady()
{
	UE_LOG(LogROS2Action, Warning, TEXT("B. Action Server (Node) - Received cancel action request"));
	void* data = Action->GetCancelRequest();
	rcl_ret_t rc = rcl_action_take_cancel_request(&server, &cancel_req_id, data);
	HandleCancelDelegate.ExecuteIfBound();
	CancelRequestReady = false;
}


void UROS2ActionServer::SetDelegates(FActionServerCallback UpdateFeedback,
									 FActionServerCallback UpdateResult, 
									 FActionServerCallback HandleGoal, 
									 FSimpleCallback HandleCancel, 
									 FSimpleCallback HandleAccepted)
{
	UpdateFeedbackDelegate = UpdateFeedback;
	UpdateResultDelegate = UpdateResult;
	HandleGoalDelegate = HandleGoal;
	HandleCancelDelegate = HandleCancel;
	HandleAcceptedDelegate = HandleAccepted;
}
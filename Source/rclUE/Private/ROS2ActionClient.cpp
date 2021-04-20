// Fill out your copyright notice in the Description page of Project Settings.


#include "ROS2ActionClient.h"


// Sets default values for this component's properties
UROS2ActionClient::UROS2ActionClient()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UROS2ActionClient::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UROS2ActionClient::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UROS2ActionClient::Init()
{
	check(ownerNode != nullptr);
	if (State == UROS2State::Created && ownerNode->State == UROS2State::Initialized)
	{
		InitializeAction();

		check(IsValid(Action));

		const rosidl_action_type_support_t * action_type_support = Action->GetTypeSupport();

		client = rcl_action_get_zero_initialized_client();
		rcl_action_client_options_t client_opt = rcl_action_client_get_default_options();
		rcl_ret_t rc = rcl_action_client_init(&client, ownerNode->GetNode(), action_type_support, TCHAR_TO_ANSI(*ActionName), &client_opt);
		if (rc == RCL_RET_INVALID_ARGUMENT)
		{
			UE_LOG(LogTemp, Error, TEXT("Action client - Invalid Argument"));
		}
		else if (rc == RCL_RET_NODE_INVALID)
		{
			UE_LOG(LogTemp, Error, TEXT("Action client - Invalid Node"));
		}
		else if (rc == RCL_RET_ALREADY_INIT)
		{
			UE_LOG(LogTemp, Error, TEXT("Action client - Already Initialized"));
		}
		else if (rc == RCL_RET_BAD_ALLOC)
		{
			UE_LOG(LogTemp, Error, TEXT("Action client - Bad Alloc"));
		}
		else if (rc == RCL_RET_ACTION_NAME_INVALID)
		{
			UE_LOG(LogTemp, Error, TEXT("Action client - Action Name Invalid"));
		}
		else if (rc == RCL_RET_ERROR)
		{
			UE_LOG(LogTemp, Error, TEXT("Action client - Unknown Error"));
		}
		else
		{
			RCSOFTCHECK(rc);
		}
		
		ensure(rcl_action_client_is_valid(&client));

		if (rc != RCL_RET_OK)
		{
			UE_LOG(LogTemp, Error, TEXT("Failed status on line %d: %d (ROS2ActionClient). Terminating."),__LINE__,(int)rc);
			UKismetSystemLibrary::QuitGame(GetOwner()->GetWorld(), nullptr, EQuitPreference::Quit, true);
		}

		State = UROS2State::Initialized;
	}
	else if (State == UROS2State::Initialized && ownerNode->State == UROS2State::Initialized)
	{
		UE_LOG(LogTemp, Error, TEXT("Client Init - already initialized!"));
	}
	else if (ownerNode->State == UROS2State::Created)
	{
		UE_LOG(LogTemp, Error, TEXT("Client Init (%s) - Node needs to be initialized before client!"), *ActionName);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Client Init - this shouldn't happen!"));
	}
}

void UROS2ActionClient::InitializeAction()
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

void UROS2ActionClient::Destroy()
{
	UE_LOG(LogTemp, Warning, TEXT("Client Destroy"));
	if (Action != nullptr)
	{
		Action->Fini();
	}

	if (ownerNode != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Client Destroy - rcl_action_client_fini"));
		RCSOFTCHECK(rcl_action_client_fini(&client, ownerNode->GetNode()));
	}
	UE_LOG(LogTemp, Warning, TEXT("Client Destroy - Done"));	
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
	goal = Action->GetGoalRequest();

	int64_t seq;
	rcl_ret_t rc = rcl_action_send_goal_request(&client, goal, &seq);
}

void UROS2ActionClient::GetResultRequest()
{	
    UE_LOG(LogROS2Action, Warning, TEXT("5. Action Client - Send result request"));
	result = Action->GetResultRequest();

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

void UROS2ActionClient::SetDelegates(FActionClientCallback SetGoal, 
									 FActionClientCallback Feedback, 
									 FActionClientCallback Result, 
									 FSimpleCallback GoalResponse, 
									 FSimpleCallback Cancel)
{
	SetGoalDelegate = SetGoal;
	GoalResponseDelegate = GoalResponse;
	FeedbackDelegate = Feedback;
	ResultDelegate = Result;
	CancelDelegate = Cancel;
}
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
	goal = Action->GetGoal();

	int64_t seq;
	rcl_ret_t rc = rcl_action_send_goal_request(&client, goal, &seq);
}
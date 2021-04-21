// Fill out your copyright notice in the Description page of Project Settings.


#include "ROS2Action.h"


// Sets default values for this component's properties
UROS2Action::UROS2Action()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UROS2Action::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UROS2Action::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UROS2Action::Init()
{
	check(ownerNode != nullptr);
	if (State == UROS2State::Created && ownerNode->State == UROS2State::Initialized)
	{
		InitializeAction();

		check(IsValid(Action));

		InitializeActionComponent();
		
		State = UROS2State::Initialized;
	}
	else if (State == UROS2State::Initialized && ownerNode->State == UROS2State::Initialized)
	{
		UE_LOG(LogROS2Action, Error, TEXT("Server Init - already initialized!"));
	}
	else if (ownerNode->State == UROS2State::Created)
	{
		UE_LOG(LogROS2Action, Error, TEXT("Server Init (%s) - Node needs to be initialized before server!"), *ActionName);
	}
	else
	{
		UE_LOG(LogROS2Action, Error, TEXT("Server Init - this shouldn't happen!"));
	}
}

void UROS2Action::InitializeAction()
{
	UE_LOG(LogROS2Action, Log, TEXT("Initializing Action"));
	if (ActionName != FString() && ActionClass)
	{
		Action = NewObject<UROS2GenericAction>(this, ActionClass);

		if (ensure(IsValid(Action)))
		{
			Action->Init();
		}
		else
		{
			UE_LOG(LogROS2Action, Error, TEXT("Topic (%s) is nullptr!"), *ActionName);
		}
	}
	else
	{
		UE_LOG(LogROS2Action, Error, TEXT("ActionName or ActionClass uninitialized!"));
	}
}

void UROS2Action::Destroy()
{
	if (Action != nullptr)
	{
		Action->Fini();
	}
}

void UROS2Action::ProcessReady(rcl_wait_set_t* wait_set)
{
	ensureMsgf(false, TEXT("%s should not be called"), *FString(__FUNCTION__));
}

void UROS2Action::InitializeActionComponent()
{
	ensureMsgf(false, TEXT("%s should not be called"), *FString(__FUNCTION__));
}
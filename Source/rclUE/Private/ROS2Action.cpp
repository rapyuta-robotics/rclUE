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

void UROS2Action::Init(TEnumAsByte<UROS2QoS> QoS)
{
	check(ownerNode != nullptr);
	check(ownerNode->State == UROS2State::Initialized);
	if (State == UROS2State::Created)
	{
		InitializeAction();

		check(IsValid(Action));

		InitializeActionComponent(QoS);
		
		State = UROS2State::Initialized;
	}
}

void UROS2Action::InitializeAction()
{
	check(ActionName != FString());
	check(ActionClass);
	
	Action = NewObject<UROS2GenericAction>(this, ActionClass);

	check(IsValid(Action));
	
	Action->Init();
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
	checkNoEntry();
}

void UROS2Action::InitializeActionComponent(TEnumAsByte<UROS2QoS> QoS)
{
	checkNoEntry();
}
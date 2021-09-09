// Copyright (c) 2020 Rapyuta Robotics Co., Ltd.

#include "ROS2Action.h"

UROS2Action::UROS2Action()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UROS2Action::Init(const TEnumAsByte<UROS2QoS> QoS)
{
	check(OwnerNode != nullptr);
	check(OwnerNode->State == UROS2State::Initialized);
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

void UROS2Action::InitializeActionComponent(const TEnumAsByte<UROS2QoS> QoS)
{
	checkNoEntry();
}
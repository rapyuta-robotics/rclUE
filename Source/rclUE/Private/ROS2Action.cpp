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

void UROS2Action::SetQoS(rmw_qos_profile_t &profile, TEnumAsByte<UROS2QoS> QoS)
{
	if (QoS == UROS2QoS::Default)
	{
		profile = rmw_qos_profile_default;
	}
	else if (QoS == UROS2QoS::SensorData)
	{
		profile = rmw_qos_profile_sensor_data;
	}
	else if (QoS == UROS2QoS::TFStatic)
	{
		profile = rmw_qos_profile_default;
		profile.durability = RMW_QOS_POLICY_DURABILITY_TRANSIENT_LOCAL;
	}
	else if (QoS == UROS2QoS::Parameters)
	{
		profile = rmw_qos_profile_parameters;
	}
	else if (QoS == UROS2QoS::Services)
	{
		profile = rmw_qos_profile_services_default;
	}
	else if (QoS == UROS2QoS::ParameterEvents)
	{
		profile = rmw_qos_profile_parameter_events;
	}
	else if (QoS == UROS2QoS::System)
	{
		profile = rmw_qos_profile_system_default;
	}
	else if (QoS == UROS2QoS::Unknown)
	{
		profile = rmw_qos_profile_unknown;
	}
}
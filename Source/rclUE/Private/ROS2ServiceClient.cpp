// Copyright 2021 Rapyuta Robotics Co., Ltd.

#include "ROS2ServiceClient.h"


DEFINE_LOG_CATEGORY(LogROS2Service);


// Sets default values for this component's properties
UROS2ServiceClient::UROS2ServiceClient()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UROS2ServiceClient::Init(TEnumAsByte<UROS2QoS> QoS)
{
	check(ownerNode != nullptr);
	check(ownerNode->State == UROS2State::Initialized);
	if (State == UROS2State::Created)
	{
		InitializeService();

		check(IsValid(Service));

		const rosidl_service_type_support_t * srv_type_support = Service->GetTypeSupport(); // this should be a parameter, but for the moment we leave it fixed

		client = rcl_get_zero_initialized_client();
  		rcl_client_options_t client_opt = rcl_client_get_default_options();

		if (QoS == UROS2QoS::Default)
		{
			client_opt.qos = rmw_qos_profile_default;
		}
		else if (QoS == UROS2QoS::SensorData)
		{
			client_opt.qos = rmw_qos_profile_sensor_data;
		}
		else if (QoS == UROS2QoS::TFStatic)
		{
			client_opt.qos = rmw_qos_profile_default;
			client_opt.qos.durability = RMW_QOS_POLICY_DURABILITY_TRANSIENT_LOCAL;
		}
		else if (QoS == UROS2QoS::Parameters)
		{
			client_opt.qos = rmw_qos_profile_parameters;
		}
		else if (QoS == UROS2QoS::Services)
		{
			client_opt.qos = rmw_qos_profile_services_default;
		}
		else if (QoS == UROS2QoS::ParameterEvents)
		{
			client_opt.qos = rmw_qos_profile_parameter_events;
		}
		else if (QoS == UROS2QoS::System)
		{
			client_opt.qos = rmw_qos_profile_system_default;
		}
		else if (QoS == UROS2QoS::Unknown)
		{
			client_opt.qos = rmw_qos_profile_unknown;
		}

		RCSOFTCHECK(rcl_client_init(&client, ownerNode->GetNode(), srv_type_support, TCHAR_TO_ANSI(*ServiceName), &client_opt));
			
		State = UROS2State::Initialized;
	}

	Ready = false;
}

void UROS2ServiceClient::InitializeService()
{
	check(ServiceName != FString());
	check(SrvClass);
	
	Service = NewObject<UROS2GenericSrv>(this, SrvClass);

	check(IsValid(Service));
	
	Service->Init();
}

void UROS2ServiceClient::Destroy()
{
	if (Service != nullptr)
	{
		Service->Fini();
	}

	if (ownerNode != nullptr)
	{
		UE_LOG(LogROS2Service, Log, TEXT("Client Destroy - rcl_client_fini (%s)"), *__LOG_INFO__);
		RCSOFTCHECK(rcl_client_fini(&client, ownerNode->GetNode()));
	}
}

void UROS2ServiceClient::UpdateAndSendRequest()
{
    UE_LOG(LogROS2Service, Log, TEXT("%s"), *__LOG_INFO__);
	check(State == UROS2State::Initialized);
	check(IsValid(ownerNode));
	
	RequestDelegate.ExecuteIfBound(Service);
	SendRequest();
}

void UROS2ServiceClient::SendRequest()
{
    UE_LOG(LogROS2Service, Log, TEXT("%s"), *__LOG_INFO__);
	check(State == UROS2State::Initialized);
	check(ownerNode != nullptr);

	req = Service->GetRequest();

	int64_t seq;
	RCSOFTCHECK(rcl_send_request(&client, req, &seq));
}
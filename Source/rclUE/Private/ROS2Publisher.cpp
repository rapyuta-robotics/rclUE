// Copyright 2021 Rapyuta Robotics Co., Ltd.

#include "ROS2Publisher.h"

DEFINE_LOG_CATEGORY(LogROS2Publisher);

UROS2Publisher::UROS2Publisher()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UROS2Publisher::Init(TEnumAsByte<UROS2QoS> QoS)
{
	check(OwnerNode != nullptr);
	check(OwnerNode->State == UROS2State::Initialized);

	if (State == UROS2State::Created)
	{
		InitializeMessage(); // needed to get type support

		check(IsValid(TopicMessage));

		const rosidl_message_type_support_t* msg_type_support = TopicMessage->GetTypeSupport(); // this should be a parameter, but for the moment we leave it fixed

		OwnerNode->Init();
		UE_LOG(LogROS2Publisher, Log, TEXT("Publisher Init - rclc_publisher_init_default (%s)"), *__LOG_INFO__);

		pub = rcl_get_zero_initialized_publisher();
		rcl_publisher_options_t pub_opt = rcl_publisher_get_default_options();

		if (QoS == UROS2QoS::Default)
		{
			pub_opt.qos = rmw_qos_profile_default;
		}
		else if (QoS == UROS2QoS::KeepLast)
		{
			pub_opt.qos = rmw_qos_profile_default;
			pub_opt.qos.history = RMW_QOS_POLICY_HISTORY_KEEP_LAST;
			pub_opt.qos.depth = 1;
			//pub_opt.qos.reliability = RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT;
		}
		else if (QoS == UROS2QoS::DynamicBroadcaster)
		{
			pub_opt.qos = rmw_qos_profile_default;
			pub_opt.qos.history = RMW_QOS_POLICY_HISTORY_KEEP_LAST;
			pub_opt.qos.depth = 100;
		}
		else if (QoS == UROS2QoS::StaticBroadcaster || QoS == UROS2QoS::TFStatic)
		{
			pub_opt.qos = rmw_qos_profile_default;
			pub_opt.qos.history = RMW_QOS_POLICY_HISTORY_KEEP_LAST;
			pub_opt.qos.depth = 1;
			pub_opt.qos.durability = RMW_QOS_POLICY_DURABILITY_TRANSIENT_LOCAL;
		}
		else if (QoS == UROS2QoS::ClockPub)
		{
			pub_opt.qos = rmw_qos_profile_default;
			pub_opt.qos.history = RMW_QOS_POLICY_HISTORY_KEEP_LAST;
			pub_opt.qos.depth = 10;
			pub_opt.qos.durability = RMW_QOS_POLICY_DURABILITY_TRANSIENT_LOCAL;
		}
		else if (QoS == UROS2QoS::SensorData)
		{
			pub_opt.qos = rmw_qos_profile_sensor_data;
			pub_opt.qos.reliability = RMW_QOS_POLICY_RELIABILITY_RELIABLE;
		}
		else if (QoS == UROS2QoS::Parameters)
		{
			pub_opt.qos = rmw_qos_profile_parameters;
		}
		else if (QoS == UROS2QoS::Services)
		{
			pub_opt.qos = rmw_qos_profile_services_default;
		}
		else if (QoS == UROS2QoS::ParameterEvents)
		{
			pub_opt.qos = rmw_qos_profile_parameter_events;
		}
		else if (QoS == UROS2QoS::System)
		{
			pub_opt.qos = rmw_qos_profile_system_default;
		}
		else if (QoS == UROS2QoS::Unknown)
		{
			pub_opt.qos = rmw_qos_profile_unknown;
		}

		rcl_ret_t rc = rcl_publisher_init(
			&pub,
			OwnerNode->GetNode(),
			msg_type_support,
			TCHAR_TO_ANSI(*TopicName),
			&pub_opt);

		if (rc != RCL_RET_OK)
		{
			UE_LOG(LogROS2Publisher, Error, TEXT("Failed status : %d (%s). Terminating."), (int)rc, *__LOG_INFO__);
			UKismetSystemLibrary::QuitGame(GetOwner()->GetWorld(), nullptr, EQuitPreference::Quit, true);
		}

		GWorld->GetGameInstance()->GetTimerManager().SetTimer(TimerHandle, this, &UROS2Publisher::UpdateAndPublishMessage, 1.f / (float)PublicationFrequencyHz, true);

		State = UROS2State::Initialized;
	}
}

void UROS2Publisher::Destroy()
{
	UE_LOG(LogROS2Publisher, Log, TEXT("Publisher Destroy (%s)"), *__LOG_INFO__);
	if (TopicMessage != nullptr)
	{
		TopicMessage->Fini();
	}

	if (OwnerNode != nullptr)
	{
		UE_LOG(LogROS2Publisher, Log, TEXT("Publisher Destroy - rcl_publisher_fini (%s)"), *__LOG_INFO__);
		RCSOFTCHECK(rcl_publisher_fini(&pub, OwnerNode->GetNode()));
	}
	UE_LOG(LogROS2Publisher, Log, TEXT("Publisher Destroy - Done (%s)"), *__LOG_INFO__);
}

void UROS2Publisher::InitializeMessage()
{
	check(TopicName != FString());
	check(MsgClass)

		TopicMessage = NewObject<UROS2GenericMsg>(this, MsgClass);

	check(IsValid(TopicMessage));

	TopicMessage->Init();
}

void UROS2Publisher::UpdateAndPublishMessage_Implementation()
{
	check(State == UROS2State::Initialized);
	check(IsValid(OwnerNode));

	UpdateDelegate.ExecuteIfBound(TopicMessage);
	Publish();
}

void UROS2Publisher::Publish()
{
	check(State == UROS2State::Initialized);
	check(OwnerNode != nullptr);

	pub_msg = TopicMessage->Get();

	RCSOFTCHECK(rcl_publish(&pub, pub_msg, nullptr));
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "ROS2Publisher.h"

DEFINE_LOG_CATEGORY(LogROS2Publisher);

// Sets default values for this component's properties
UROS2Publisher::UROS2Publisher()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}

void UROS2Publisher::Init(TEnumAsByte<UROS2QoS> QoS)
{
	check(ownerNode != nullptr);
	check(ownerNode->State == UROS2State::Initialized);
	
	if (State == UROS2State::Created)
	{
		InitializeMessage(); // needed to get type support
		
		check(IsValid(TopicMessage));
		
		const rosidl_message_type_support_t * msg_type_support = TopicMessage->GetTypeSupport(); // this should be a parameter, but for the moment we leave it fixed

		ownerNode->Init();
		UE_LOG(LogROS2Publisher, Log, TEXT("Publisher Init - rclc_publisher_init_default (%s)"), *__LOG_INFO__);
		
		pub = rcl_get_zero_initialized_publisher();
		rcl_publisher_options_t pub_opt = rcl_publisher_get_default_options();

		pub_opt.qos = QoS_LUT[QoS];

		RCSOFTCHECK(rcl_publisher_init(&pub, ownerNode->GetNode(), msg_type_support, TCHAR_TO_ANSI(*TopicName), &pub_opt));

		GWorld->GetGameInstance()->GetTimerManager().SetTimer(timerHandle, this, &UROS2Publisher::UpdateAndPublishMessage, 1.f/(float)PublicationFrequencyHz, true);

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

	if (ownerNode != nullptr)
	{
		UE_LOG(LogROS2Publisher, Log, TEXT("Publisher Destroy - rcl_publisher_fini (%s)"), *__LOG_INFO__);
		RCSOFTCHECK(rcl_publisher_fini(&pub, ownerNode->GetNode()));
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
	check(IsValid(ownerNode));
	
	UpdateDelegate.ExecuteIfBound(TopicMessage);
	Publish();
}

void UROS2Publisher::Publish()
{
	check(State == UROS2State::Initialized);
	check(ownerNode != nullptr);

	pub_msg = TopicMessage->Get();
	
    RCSOFTCHECK(rcl_publish(&pub, pub_msg, NULL));
}

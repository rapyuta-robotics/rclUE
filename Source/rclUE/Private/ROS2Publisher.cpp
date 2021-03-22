// Fill out your copyright notice in the Description page of Project Settings.


#include "ROS2Publisher.h"

// Sets default values for this component's properties
UROS2Publisher::UROS2Publisher()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts
void UROS2Publisher::BeginPlay()
{
	UE_LOG(LogTemp, Warning, TEXT("Publisher BeginPlay"));

	if (ownerNode == nullptr)
	{
		ownerNode = Cast<AROS2Node>(GetOwner());
	}

	Super::BeginPlay();

	if (ownerNode != nullptr)
	{
		Init();
	}
	else
	{
	UE_LOG(LogTemp, Error, TEXT("Publisher BeginPlay - Owner not set"));
	}
	
	UE_LOG(LogTemp, Warning, TEXT("Publisher BeginPlay - Done"));
}

void UROS2Publisher::Init()
{
	check(ownerNode != nullptr);
	if (State == UROS2State::Created && ownerNode->State == UROS2State::Initialized)
	{
		InitializeMessage(); // needed to get type support
		
		check(IsValid(TopicMessage));
		
		const rosidl_message_type_support_t * my_type_support = TopicMessage->GetTypeSupport(); // this should be a parameter, but for the moment we leave it fixed

		//UE_LOG(LogTemp, Warning, TEXT("Calling Owner Init from Pub"));
		ownerNode->Init();
		UE_LOG(LogTemp, Warning, TEXT("Publisher Init - rclc_publisher_init_default"));
		rcl_ret_t rc = rclc_publisher_init_default(&pub, ownerNode->GetNode(), my_type_support, TCHAR_TO_ANSI(*TopicName));
		if (rc != RCL_RET_OK)
		{
			UE_LOG(LogTemp, Error, TEXT("Failed status on line %d: %d (ROS2Publisher). Terminating."),__LINE__,(int)rc);
			UKismetSystemLibrary::QuitGame(GetOwner()->GetWorld(), nullptr, EQuitPreference::Quit, true);
		}
		//UE_LOG(LogTemp, Warning, TEXT("Publisher Init Done"));

		GWorld->GetGameInstance()->GetTimerManager().SetTimer(timerHandle, this, &UROS2Publisher::UpdateAndPublishMessage, 1.f/(float)PublicationFrequencyHz, true);

		State = UROS2State::Initialized;
	}
	else if (State == UROS2State::Initialized && ownerNode->State == UROS2State::Initialized)
	{
		UE_LOG(LogTemp, Error, TEXT("Publisher Init - already initialized!"));
	}
	else if (ownerNode->State == UROS2State::Created)
	{
		UE_LOG(LogTemp, Error, TEXT("Publisher Init (%s) - Node needs to be initialized before publisher!"), *TopicName);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Publisher Init - this shouldn't happen!"));
	}
}

void UROS2Publisher::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	UE_LOG(LogTemp, Warning, TEXT("Publisher EndPlay"));

	Super::EndPlay(EndPlayReason);
	
	UE_LOG(LogTemp, Warning, TEXT("Publisher EndPlay - Done"));
}

// Called every frame
void UROS2Publisher::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UROS2Publisher::Destroy()
{
	UE_LOG(LogTemp, Warning, TEXT("Publisher Destroy"));
	if (TopicMessage != nullptr)
	{
		TopicMessage->Fini();
	}

	if (ownerNode != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Publisher Destroy - rcl_publisher_fini"));
		RCSOFTCHECK(rcl_publisher_fini(&pub, ownerNode->GetNode()));
	}
	UE_LOG(LogTemp, Warning, TEXT("Publisher Destroy - Done"));
}

void UROS2Publisher::InitializeMessage()
{
	if (TopicName != FString() && MsgClass)
	{
		TopicMessage = NewObject<UROS2GenericMsg>(this, MsgClass);

		if (ensure(IsValid(TopicMessage)))
		{
			TopicMessage->Init();
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Topic (%s) is nullptr!"), *TopicName);
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("TopicName or MsgClass uninitialized!"));
	}
}

void UROS2Publisher::UpdateAndPublishMessage_Implementation()
{
	ensureMsgf(false, TEXT("%s should not be called"), *FString(__FUNCTION__));
}

void UROS2Publisher::Publish()
{
	check(State == UROS2State::Initialized);
	check(ownerNode != nullptr);

	pub_msg = TopicMessage->Get();
	
    rcl_ret_t rc = rcl_publish(&pub, pub_msg, NULL);

	//Topic->Msg->PrintPubToLog(rc, ownerNode->Name);
}

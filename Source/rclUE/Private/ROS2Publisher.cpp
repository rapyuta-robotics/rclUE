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

	ensure(ownerNode != nullptr);

	Super::BeginPlay();

	Init();	
	
	UE_LOG(LogTemp, Warning, TEXT("Publisher BeginPlay - Done"));
}

void UROS2Publisher::Init()
{
	ensure(ownerNode != nullptr);
	if (State == UROS2State::Created && ownerNode->State == UROS2State::Initialized)
	{
		InitializeMessage(); // needed to get type support
		
		ensure(Topic != nullptr);
		ensure(Topic->Msg != nullptr);
		
		const rosidl_message_type_support_t * my_type_support = Topic->Msg->GetTypeSupport(); // this should be a parameter, but for the moment we leave it fixed

		//UE_LOG(LogTemp, Warning, TEXT("Calling Owner Init from Pub"));
		ownerNode->Init();
		UE_LOG(LogTemp, Warning, TEXT("Publisher Init - rclc_publisher_init_default"));
		rcl_ret_t rc = rclc_publisher_init_default(&pub, ownerNode->GetNode(), my_type_support, TCHAR_TO_ANSI(*Topic->Name.ToString()));
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
		UE_LOG(LogTemp, Error, TEXT("Publisher Init - Node needs to be initialized before publisher!"));
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
	//UE_LOG(LogTemp, Warning, TEXT("Publisher TickComponent"));
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	//UE_LOG(LogTemp, Warning, TEXT("Publisher TickComponent - Done"));
}

void UROS2Publisher::Destroy()
{
	UE_LOG(LogTemp, Warning, TEXT("Publisher Destroy"));
	if (Topic != nullptr)
	{
		Topic->Fini();
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
	if (TopicName != FName() && MsgClass)
	{
		Topic = NewObject<UROS2Topic>();
		Topic->Name = TopicName;
		Topic->Msg = NewObject<UROS2GenericMsg>(this, MsgClass);
		if (Topic != nullptr && Topic->Msg != nullptr)
		{
			Topic->Msg->Init();
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Topic (%s) or Msg (%s) is nullptr!"), Topic != nullptr, Topic->Msg != nullptr);
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
	ensure(State == UROS2State::Initialized);
	ensure(ownerNode != nullptr);

	pub_msg = Topic->Msg->Get();
	
    rcl_ret_t rc = rcl_publish(&pub, pub_msg, NULL);

	Topic->Msg->PrintPubToLog(rc, ownerNode->Name);
}
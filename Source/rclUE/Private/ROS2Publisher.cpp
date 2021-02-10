// Fill out your copyright notice in the Description page of Project Settings.


#include "ROS2Publisher.h"


rcl_publisher_t UROS2Publisher::pub;
const void * UROS2Publisher::pub_msg;

// Sets default values for this component's properties
UROS2Publisher::UROS2Publisher()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UROS2Publisher::BeginPlay()
{
	UE_LOG(LogTemp, Warning, TEXT("Publisher BeginPlay"));

	Super::BeginPlay();

  	const rosidl_message_type_support_t * my_type_support = GetTypeSupport(); // this should be a parameter, but for the moment we leave it fixed
	ownerNode = Cast<AROS2Node>(GetOwner());
	if (ownerNode != nullptr)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Calling Owner Init from Pub"));
		ownerNode->Init();
		UE_LOG(LogTemp, Warning, TEXT("Publisher BeginPlay - rclc_publisher_init_default"));
		rcl_ret_t rc = rclc_publisher_init_default(&pub, ownerNode->GetNode(), my_type_support, TCHAR_TO_ANSI(*TopicName));
		if (rc != RCL_RET_OK)
		{
			UE_LOG(LogTemp, Error, TEXT("Failed status on line %d: %d (ROS2Publisher). Terminating."),__LINE__,(int)rc);
			UKismetSystemLibrary::QuitGame(GetOwner()->GetWorld(), nullptr, EQuitPreference::Quit, true);
		}
		//UE_LOG(LogTemp, Warning, TEXT("Publisher Init Done"));
	}

	PublisherThread = new FROS2PublisherThread(this);
	UE_LOG(LogTemp, Warning, TEXT("Publisher BeginPlay - Done"));
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

void UROS2Publisher::InitializeMessage()
{
	
}

void UROS2Publisher::UpdateMessage()
{
	
}

void UROS2Publisher::SetTopicName(FString Topic)
{
	TopicName = Topic;
}

FString UROS2Publisher::GetTopicName()
{
	return TopicName;
}

void UROS2Publisher::SetPubFrequency(int32 PubFrequencyHz)
{
	PublicationFrequencyHz = PubFrequencyHz;
}

int32 UROS2Publisher::GetPubFrequency()
{
	return PublicationFrequencyHz;
}

// this should go in a common space as Node will need it too
const rosidl_message_type_support_t* UROS2Publisher::GetTypeSupport()
{
	UE_LOG(LogTemp, Warning, TEXT("No message type"));
    return nullptr;
}

AROS2Node* UROS2Publisher::GetOwnerNode()
{
	return ownerNode;
}

void UROS2Publisher::Destroy()
{
	UE_LOG(LogTemp, Warning, TEXT("Publisher Destroy"));
	if (RunningThread && PublisherThread)
	{
		RunningThread->Suspend(true);
		PublisherThread->bSpin = false;
		RunningThread->Suspend(false);
		RunningThread->Kill(true);
		RunningThread->WaitForCompletion();
		delete PublisherThread;
	}

	if (ownerNode != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Publisher Destroy - rcl_publisher_fini"));
		RCSOFTCHECK(rcl_publisher_fini(&pub, ownerNode->GetNode()));
	}
	UE_LOG(LogTemp, Warning, TEXT("Publisher Destroy - Done"));
}
// Fill out your copyright notice in the Description page of Project Settings.


#include "ROS2Publisher.h"


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
	Super::BeginPlay();

  	const rosidl_message_type_support_t * my_type_support = GetTypeSupport(TEXT("String")); // this should be a parameter, but for the moment we leave it fixed
	ownerNode = Cast<AROS2Node>(GetOwner());
	if (ownerNode != nullptr)
	{
		RCSOFTCHECK(rclc_publisher_init_default(&pub, ownerNode->GetNode(), my_type_support, TCHAR_TO_ANSI(*TopicName)));
	}
	PublisherThread = new FROS2PublisherThread(this);
	
}

void UROS2Publisher::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

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
		RCSOFTCHECK(rcl_publisher_fini(&pub, ownerNode->GetNode()));
	}
}

// Called every frame
void UROS2Publisher::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
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

// this should go in a common space as Node will need it too
const rosidl_message_type_support_t* UROS2Publisher::GetTypeSupport(FString MsgType)
{
    // a quick google search suggests that switch-case might not be supported for FString
    if (MsgType.Equals(TEXT("String")))
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, String);
    }
    else
    {
        return nullptr;
    }
}
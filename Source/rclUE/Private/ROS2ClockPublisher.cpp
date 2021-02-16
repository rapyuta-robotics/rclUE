// Fill out your copyright notice in the Description page of Project Settings.


#include "ROS2ClockPublisher.h"
#include "TimerManager.h"
#include "rclcUtilities.h"

// Sets default values for this component's properties
UROS2ClockPublisher::UROS2ClockPublisher() : UROS2Publisher()
{
}


// Called when the game starts
void UROS2ClockPublisher::BeginPlay()
{
	UE_LOG(LogTemp, Warning, TEXT("ClockPublisher BeginPlay"));
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("ClockPublisher BeginPlay - Done"));
}

void UROS2ClockPublisher::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	UE_LOG(LogTemp, Warning, TEXT("ClockPublisher EndPlay"));
	Super::EndPlay(EndPlayReason);
	UE_LOG(LogTemp, Warning, TEXT("ClockPublisher EndPlay - Done"));
}

void UROS2ClockPublisher::Destroy()
{
	UE_LOG(LogTemp, Warning, TEXT("ClockPublisher Destroy"));
	Super::Destroy();
	UE_LOG(LogTemp, Warning, TEXT("ClockPublisher Destroy - Done"));
}

// Called every frame
void UROS2ClockPublisher::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UROS2ClockPublisher::InitializeMessage_Implementation()
{
	Topic = NewObject<UROS2Topic>();
	Topic->Name = TEXT("clock");
	Topic->Msg = NewObject<UROS2ClockMsg>();
	if (Topic != nullptr && Topic->Msg != nullptr)
	{
		Topic->Msg->Init();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Topic (%s) or Msg (%s) is nullptr!"), Topic != nullptr, Topic->Msg != nullptr);
	}
}

void UROS2ClockPublisher::UpdateAndPublishMessage_Implementation()
{
	float elapsedTime = UGameplayStatics::GetTimeSeconds(GetWorld()); // other variations are available in UGameplayStatics - this one accounts for time dilation and pause
	UROS2ClockMsg* Message = Cast<UROS2ClockMsg>(Topic->Msg);
	//if (Message->IsValid())
	{
		Message->Update(elapsedTime);
		Publish();
	}
	// else
	// {
	// 	ensureMsgf(false, TEXT("%s should not be here"), *FString(__FUNCTION__));
	// }
}
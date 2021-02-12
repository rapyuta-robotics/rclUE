// Fill out your copyright notice in the Description page of Project Settings.


#include "ROS2ClockPublisher.h"
#include "TimerManager.h"
#include "rclcUtilities.h"

// Sets default values for this component's properties
UROS2ClockPublisher::UROS2ClockPublisher() : UROS2Publisher()
{
	TopicName = TEXT("clock");
	ClockMsg = NewObject<ROS2ClockMsg>();
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

void UROS2ClockPublisher::InitializeMessage()
{
	ClockMsg->Init();
}

void UROS2ClockPublisher::UpdateAndPublishMessage()
{
	float elapsedTime = UGameplayStatics::GetTimeSeconds(GetWorld()); // other variations are available in UGameplayStatics - this one accounts for time dilation and pause
	ClockMsg->Update(&elapsedTime);
	pub_msg = ClockMsg->Get();

    rcl_ret_t rc = rcl_publish(&pub, pub_msg, NULL);

	ClockMsg->PrintToLog(rc);
}

const rosidl_message_type_support_t* UROS2ClockPublisher::GetTypeSupport()
{
	UE_LOG(LogTemp, Warning, TEXT("Clock message type"));
    return ClockMsg->GetTypeSupport();
}
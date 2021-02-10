// Fill out your copyright notice in the Description page of Project Settings.


#include "ROS2ClockPublisher.h"
#include "Kismet/GameplayStatics.h"
#include "rclcUtilities.h"


// Sets default values for this component's properties
UROS2ClockPublisher::UROS2ClockPublisher() : UROS2Publisher()
{
	TopicName = TEXT("clock");
}


// Called when the game starts
void UROS2ClockPublisher::BeginPlay()
{
	UE_LOG(LogTemp, Warning, TEXT("ClockPublisher BeginPlay"));

	Super::BeginPlay();

	RunningThread = FRunnableThread::Create(PublisherThread, TEXT("Clock Thread"));

	UE_LOG(LogTemp, Warning, TEXT("ClockPublisher BeginPlay - Done"));
}

void UROS2ClockPublisher::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	UE_LOG(LogTemp, Warning, TEXT("ClockPublisher EndPlay"));
	Super::EndPlay(EndPlayReason);
	UE_LOG(LogTemp, Warning, TEXT("ClockPublisher EndPlay - Done"));
}

// Called every frame
void UROS2ClockPublisher::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	//UE_LOG(LogTemp, Warning, TEXT("ClockPublisher TickComponent"));
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	//UE_LOG(LogTemp, Warning, TEXT("ClockPublisher TickComponent - Done"));
}

void UROS2ClockPublisher::InitializeMessage()
{
	rosgraph_msgs__msg__Clock__init(&pub_msg);
}

void UROS2ClockPublisher::UpdateMessage()
{
	float elapsedTime = UGameplayStatics::GetTimeSeconds(GetWorld()); // other variations are available in UGameplayStatics - this one accounts for time dilation and pause
	pub_msg.clock.sec = (int32_t)elapsedTime;
	unsigned long long ns = (unsigned long long)(elapsedTime * 1000000000.0f);
	pub_msg.clock.nanosec = (uint32_t)(ns - (pub_msg.clock.sec * 1000000000ul));
}

const rosidl_message_type_support_t* UROS2ClockPublisher::GetTypeSupport()
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(rosgraph_msgs, msg, Clock);
}

void UROS2ClockPublisher::Destroy()
{
	UE_LOG(LogTemp, Warning, TEXT("ClockPublisher Destroy"));
	Super::Destroy();
	UE_LOG(LogTemp, Warning, TEXT("ClockPublisher Destroy - Done"));
}
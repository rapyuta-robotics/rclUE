// Fill out your copyright notice in the Description page of Project Settings.


#include "ROS2ClockPublisher.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"
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

	GetOwner()->GetWorld()->GetGameInstance()->GetTimerManager().SetTimer(timerHandle, this, &UROS2ClockPublisher::UpdateAndPublishMessage, 1.f/(float)PublicationFrequencyHz, true);

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
	rosgraph_msgs__msg__Clock__init(&clock_pub_msg);
}

void UROS2ClockPublisher::UpdateMessage()
{
	float elapsedTime = UGameplayStatics::GetTimeSeconds(GetWorld()); // other variations are available in UGameplayStatics - this one accounts for time dilation and pause
	clock_pub_msg.clock.sec = (int32_t)elapsedTime;
	unsigned long long ns = (unsigned long long)(elapsedTime * 1000000000.0f);
	clock_pub_msg.clock.nanosec = (uint32_t)(ns - (clock_pub_msg.clock.sec * 1000000000ul));
	pub_msg = &clock_pub_msg;
}

void UROS2ClockPublisher::UpdateAndPublishMessage()
{
	float elapsedTime = UGameplayStatics::GetTimeSeconds(GetWorld()); // other variations are available in UGameplayStatics - this one accounts for time dilation and pause
	clock_pub_msg.clock.sec = (int32_t)elapsedTime;
	unsigned long long ns = (unsigned long long)(elapsedTime * 1000000000.0f);
	clock_pub_msg.clock.nanosec = (uint32_t)(ns - (clock_pub_msg.clock.sec * 1000000000ul));
	pub_msg = &clock_pub_msg;

    rcl_ret_t rc = rcl_publish(&pub, pub_msg, NULL);
	if (rc == RCL_RET_OK)
	{
		UE_LOG(LogTemp, Log, TEXT("Published message %ds %dns"), clock_pub_msg.clock.sec, clock_pub_msg.clock.nanosec);
	} 
	else 
	{
		UE_LOG(LogTemp, Log, TEXT("timer_callback: Error publishing message %ds %dns"), clock_pub_msg.clock.sec, clock_pub_msg.clock.nanosec);
	}
}

const rosidl_message_type_support_t* UROS2ClockPublisher::GetTypeSupport()
{
	UE_LOG(LogTemp, Warning, TEXT("Clock message type"));
    return ROSIDL_GET_MSG_TYPE_SUPPORT(rosgraph_msgs, msg, Clock);
}

void UROS2ClockPublisher::Destroy()
{
	UE_LOG(LogTemp, Warning, TEXT("ClockPublisher Destroy"));
	Super::Destroy();
	UE_LOG(LogTemp, Warning, TEXT("ClockPublisher Destroy - Done"));
}
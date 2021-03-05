// Fill out your copyright notice in the Description page of Project Settings.


#include "ROS2ClockPublisher.h"
#include "TimerManager.h"
#include "rclcUtilities.h"
#include "Msgs/ROS2ClockMsg.h"

// Sets default values for this component's properties
UROS2ClockPublisher::UROS2ClockPublisher() : UROS2Publisher()
{
}

void UROS2ClockPublisher::UpdateAndPublishMessage_Implementation()
{
	ensure(State == UROS2State::Initialized);
	ensure(ownerNode != nullptr);
	
	float elapsedTime = UGameplayStatics::GetTimeSeconds(GetWorld()); // other variations are available in UGameplayStatics - this one accounts for time dilation and pause
	UROS2ClockMsg* Message = Cast<UROS2ClockMsg>(Topic->Msg);
	Message->Update(elapsedTime);
	Publish();
}
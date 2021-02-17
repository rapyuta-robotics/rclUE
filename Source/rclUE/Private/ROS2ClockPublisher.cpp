// Fill out your copyright notice in the Description page of Project Settings.


#include "ROS2ClockPublisher.h"
#include "TimerManager.h"
#include "rclcUtilities.h"

// Sets default values for this component's properties
UROS2ClockPublisher::UROS2ClockPublisher() : UROS2Publisher()
{
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
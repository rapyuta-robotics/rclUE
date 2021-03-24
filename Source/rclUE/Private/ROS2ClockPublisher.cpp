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
	check(State == UROS2State::Initialized);
	check(ownerNode != nullptr);

	UpdateDelegate.ExecuteIfBound(TopicMessage);
	Publish();
}
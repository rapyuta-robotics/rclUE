// Fill out your copyright notice in the Description page of Project Settings.


#include "ROS2LidarPublisher.h"
#include "rclcUtilities.h"
#include "Msgs/ROS2LaserScanMsg.h"
#include "Sensors/SensorLidar.h"

// Sets default values for this component's properties
UROS2LidarPublisher::UROS2LidarPublisher() : UROS2Publisher()
{
}

void UROS2LidarPublisher::UpdateAndPublishMessage_Implementation()
{
	check(State == UROS2State::Initialized);
	check(ownerNode != nullptr);
	check(Lidar != nullptr);

	if (ownerNode == nullptr || Lidar == nullptr || State != UROS2State::Initialized)
	{
		UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit, true);
	}
	
	UpdateDelegate.ExecuteIfBound(TopicMessage);
	Publish();
}
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
    FLaserScanData LidarData = Lidar->GetROS2Data();
	UROS2LaserScanMsg* Message = Cast<UROS2LaserScanMsg>(Topic->Msg);
	Message->Update(LidarData);
	Publish();
}
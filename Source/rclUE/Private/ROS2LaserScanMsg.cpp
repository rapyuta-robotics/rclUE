// Fill out your copyright notice in the Description page of Project Settings.


#include "Msgs/ROS2LaserScanMsg.h"
#include "Kismet/GameplayStatics.h"


UROS2LaserScanMsg::UROS2LaserScanMsg()
{
}

UROS2LaserScanMsg::~UROS2LaserScanMsg()
{
}

void UROS2LaserScanMsg::Init()
{
	UE_LOG(LogTemp, Warning, TEXT("UROS2LaserScanMsg::Init"));
	sensor_msgs__msg__LaserScan__init(&laserscan_pub_msg);
}

void UROS2LaserScanMsg::Fini()
{
	UE_LOG(LogTemp, Warning, TEXT("UROS2LaserScanMsg::Fini"));
	sensor_msgs__msg__LaserScan__fini(&laserscan_pub_msg);
}

const rosidl_message_type_support_t* UROS2LaserScanMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, LaserScan);
}

void UROS2LaserScanMsg::Update(FLaserScanData data)
{
    laserscan_pub_msg.header.stamp.sec = data.sec;
    laserscan_pub_msg.header.stamp.nanosec = data.nanosec;
    laserscan_pub_msg.header.frame_id.data = TCHAR_TO_ANSI(*data.frame_id);
    laserscan_pub_msg.header.frame_id.size = data.frame_id.Len();
    laserscan_pub_msg.header.frame_id.capacity = data.frame_id.Len()+1;

    laserscan_pub_msg.angle_min = data.angle_min;
    laserscan_pub_msg.angle_max = data.angle_max;
    laserscan_pub_msg.angle_increment = data.angle_increment;
    laserscan_pub_msg.time_increment = data.time_increment;
    laserscan_pub_msg.scan_time = data.scan_time;
    laserscan_pub_msg.range_min = data.range_min;
    laserscan_pub_msg.range_max = data.range_max;

    // are these the same size?
    laserscan_pub_msg.ranges.data = data.ranges.GetData();
    laserscan_pub_msg.ranges.size = data.ranges.Num();
    laserscan_pub_msg.ranges.capacity = data.ranges.Num();
    laserscan_pub_msg.intensities.data = data.intensities.GetData();
    laserscan_pub_msg.intensities.size = data.intensities.Num();
    laserscan_pub_msg.intensities.capacity = data.intensities.Num();
}

const sensor_msgs__msg__LaserScan* UROS2LaserScanMsg::Get() const
{
	return &laserscan_pub_msg;
}

void* UROS2LaserScanMsg::Get()
{
	return &laserscan_pub_msg;
}

FString UROS2LaserScanMsg::MsgToString() const
{
    return FString();
}

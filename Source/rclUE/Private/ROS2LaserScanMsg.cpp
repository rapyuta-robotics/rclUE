// Fill out your copyright notice in the Description page of Project Settings.


#include "ROS2LaserScanMsg.h"
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

void UROS2LaserScanMsg::Update()
{
    // laserscan_pub_msg.header = ;
    // laserscan_pub_msg.angle_min = ;
    // laserscan_pub_msg.angle_max = ;
    // laserscan_pub_msg.angle_increment = ;
    // laserscan_pub_msg.time_increment = ;
    // laserscan_pub_msg.scan_time = ;
    // laserscan_pub_msg.range_min = ;
    // laserscan_pub_msg.range_max = ;

    // are these the same size?
    // for ()
    // laserscan_pub_msg.ranges = ;
    // laserscan_pub_msg.intensities = ;
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

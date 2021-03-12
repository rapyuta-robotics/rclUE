// Fill out your copyright notice in the Description page of Project Settings.


#include "Msgs/ROS2LaserScanMsg.h"
#include "Kismet/GameplayStatics.h"


UROS2LaserScanMsg::UROS2LaserScanMsg()
{
}

UROS2LaserScanMsg::~UROS2LaserScanMsg()
{
	UE_LOG(LogROS2Msg, Error, TEXT("UROS2LaserScanMsg::~UROS2LaserScanMsg"));
}

void UROS2LaserScanMsg::Init()
{
	UE_LOG(LogROS2Msg, Warning, TEXT("UROS2LaserScanMsg::Init"));
	ensureMsgf(sensor_msgs__msg__LaserScan__init(&laserscan_pub_msg), TEXT("%s failed for LaserScan"), *FString(__FUNCTION__));
}

void UROS2LaserScanMsg::Fini()
{
    // somehow this crashes UE4 - double free error? why? 
    // and why not the others? is it somehow because this contains other msgs?
    // seems to crash on rosidl_runtime_c__float__Sequence__fini
	UE_LOG(LogROS2Msg, Warning, TEXT("UROS2LaserScanMsg::Fini"));
	//sensor_msgs__msg__LaserScan__fini(&laserscan_pub_msg);
}

const rosidl_message_type_support_t* UROS2LaserScanMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, LaserScan);
}

void UROS2LaserScanMsg::Update(FLaserScanData data)
{
    laserscan_pub_msg.header.stamp.sec = data.sec;
    laserscan_pub_msg.header.stamp.nanosec = data.nanosec;

    // reason for this:
    //  TCHAR_TO_ANSI(*data.frame_id.ToString()) returns a temp object
    //  stringCast<ANSICHAR>(*data.frame_id.ToString()).Get() does not seem to work here
    free(laserscan_pub_msg.header.frame_id.data);
    laserscan_pub_msg.header.frame_id.data = (char*)malloc((data.frame_id.GetStringLength()+1)*sizeof(char)); // sizeof(char) is just to clarify the type
    strcpy(laserscan_pub_msg.header.frame_id.data, TCHAR_TO_ANSI(*data.frame_id.ToString()));
    laserscan_pub_msg.header.frame_id.size = data.frame_id.GetStringLength(); // GetStringLength excludes nullterm char
    laserscan_pub_msg.header.frame_id.capacity = data.frame_id.GetStringLength()+1;

    laserscan_pub_msg.angle_min = data.angle_min;
    laserscan_pub_msg.angle_max = data.angle_max;
    laserscan_pub_msg.angle_increment = data.angle_increment;
    laserscan_pub_msg.time_increment = data.time_increment;
    laserscan_pub_msg.scan_time = data.scan_time;
    laserscan_pub_msg.range_min = data.range_min;
    laserscan_pub_msg.range_max = data.range_max;

    // should free every time as the length of the array can vary
    if (laserscan_pub_msg.ranges.data != nullptr)
    {
        free(laserscan_pub_msg.ranges.data);
    }
    laserscan_pub_msg.ranges.data = (float*)malloc(data.ranges.Num()*sizeof(float));
    for (int i=0; i<data.ranges.Num(); i++)
    {
        laserscan_pub_msg.ranges.data[i] = data.ranges[i];
    }
    laserscan_pub_msg.ranges.size = data.ranges.Num();
    laserscan_pub_msg.ranges.capacity = data.ranges.Num();

    if (laserscan_pub_msg.intensities.data)
    {
        free(laserscan_pub_msg.intensities.data);
    }
    laserscan_pub_msg.intensities.data = (float*)malloc(data.intensities.Num()*sizeof(float));
    for (int i=0; i<data.intensities.Num(); i++)
    {
        laserscan_pub_msg.intensities.data[i] = data.intensities[i];
    }
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
    FString frame_id;
    frame_id.AppendChars(laserscan_pub_msg.header.frame_id.data, laserscan_pub_msg.header.frame_id.size);
    FString data;
    for (int i=0; i<FGenericPlatformMath::Min(5,(int)laserscan_pub_msg.ranges.size); i++)
    {
        data.Append(FString::SanitizeFloat(laserscan_pub_msg.ranges.data[i]));
        data.Append("\t");
    }
	return FString::Printf(TEXT("Lidar (%ds %dns %s), (%f %f %f, %f %f, %f %f) %d, %d - data (up to 5 values): %s"),
                            laserscan_pub_msg.header.stamp.sec, laserscan_pub_msg.header.stamp.nanosec, *frame_id, 
                            laserscan_pub_msg.angle_min, laserscan_pub_msg.angle_max, laserscan_pub_msg.angle_increment, laserscan_pub_msg.time_increment, laserscan_pub_msg.scan_time, laserscan_pub_msg.range_min, laserscan_pub_msg.range_max,
                            laserscan_pub_msg.ranges.size, laserscan_pub_msg.intensities.size, *data);
}

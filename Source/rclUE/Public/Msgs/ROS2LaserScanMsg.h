// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ROS2GenericMsg.h"
#include "rclcUtilities.h"
#include <sensor_msgs/msg/laser_scan.h>

#include "ROS2LaserScanMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FLaserScanData
{
	GENERATED_BODY()

public:
	// planar range finder

    // header - stamp
    int sec; // time of the scan [s]
    uint nanosec; // time of the scan - sec [ns]

    // header - frame_id
    FString frame_id; // robot link associated with lidar

    float angle_min; // start angle of the scan [rad]
    float angle_max; // end angle of the scan [rad]
    float angle_increment; // angular distance between measurements [rad]
    float time_increment; //  time between measurements [s] (especially important for moving sensors)
    float scan_time; // time between scans [s]
    float range_min; // [m]
    float range_max; // [m]

    TArray<float> ranges; // range data [m] (values <range_min and >range_max should be discarded: are they discarded later? if they are discarded before, information is lost as which sample was discarded cannot be inferred - are they just set to inf?)
    TArray<float> intensities; // intensity data [device specific units] - could be empty
};

/**
 * 
 */
UCLASS()
class RCLUE_API UROS2LaserScanMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void Update(FLaserScanData data);
	
	virtual void* Get() override;

	virtual FString MsgToString() const override;

private:	
	sensor_msgs__msg__LaserScan laserscan_pub_msg;
};

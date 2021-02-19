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
    // header - stamp
    int sec;
    uint nanosec;

    // header - frame_id
    FString frame_id;

    float angle_min;
    float angle_max;
    float angle_increment;
    float time_increment;
    float scan_time;
    float range_min;
    float range_max;

    TArray<float> ranges;
    TArray<float> intensities;
};

/**
 * 
 */
UCLASS()
class RCLUE_API UROS2LaserScanMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	UROS2LaserScanMsg();
	~UROS2LaserScanMsg();

  	UFUNCTION(BlueprintCallable)
	virtual void Init() override;

  	UFUNCTION(BlueprintCallable)
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void Update(FLaserScanData data);
	
	const sensor_msgs__msg__LaserScan* Get() const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;
	sensor_msgs__msg__LaserScan laserscan_pub_msg;
};

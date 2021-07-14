// Copyright 2021 Rapyuta Robotics Co., Ltd.

#pragma once

#include "CoreMinimal.h"
#include "ROS2GenericMsg.h"
#include "rclcUtilities.h"
#include <nav_msgs/msg/odometry.h>

#include "ROS2OdometryMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FOdometryData
{
	GENERATED_BODY()

public:
    // header - stamp
    int sec;
    uint nanosec;

    // header - frame_id
    FString frame_id;

	// child_frame_id
	FString child_frame_id;

	// pose with covariance - are floats enough? type is double
	FVector position;
	FQuat orientation;
  	TArray<double, TFixedAllocator<36>> pose_covariance;

	// twist with covariance
	FVector linear;
	FVector angular;
  	TArray<double, TFixedAllocator<36>> twist_covariance;
};

/**
 * 
 */
UCLASS(Blueprintable)
class RCLUE_API UROS2OdometryMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void Update(const FOdometryData data);
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;
	
	nav_msgs__msg__Odometry odometry_pub_msg;
};

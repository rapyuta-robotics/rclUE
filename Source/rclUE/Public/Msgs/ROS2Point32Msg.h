// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/Point32.msg - do not modify

#pragma once

#include <CoreMinimal.h>

#include "geometry_msgs/msg/point32.h"

#include "ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2Point32Msg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSPoint32
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float x;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float y;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float z;

	

	void SetFromROS2(const geometry_msgs__msg__Point32& in_ros_data)
	{
    	x = in_ros_data.x;

		y = in_ros_data.y;

		z = in_ros_data.z;

		
	}

	void SetROS2(geometry_msgs__msg__Point32& out_ros_data) const
	{
    	out_ros_data.x = x;

		out_ros_data.y = y;

		out_ros_data.z = z;

		
	}
};

UCLASS()
class RCLUE_API UROS2Point32Msg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSPoint32& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSPoint32& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	geometry_msgs__msg__Point32 point32_msg;
};
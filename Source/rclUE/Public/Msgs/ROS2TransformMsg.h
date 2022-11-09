// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/Transform.msg - do not modify

#pragma once

#include <CoreMinimal.h>

#include "geometry_msgs/msg/transform.h"

#include "ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2TransformMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSTransform
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector translation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FQuat rotation;

	

	void SetFromROS2(const geometry_msgs__msg__Transform& in_ros_data)
	{
    	translation.X = in_ros_data.translation.x;
		translation.Y = in_ros_data.translation.y;
		translation.Z = in_ros_data.translation.z;

		rotation.X = in_ros_data.rotation.x;
		rotation.Y = in_ros_data.rotation.y;
		rotation.Z = in_ros_data.rotation.z;
		rotation.W = in_ros_data.rotation.w;

		
	}

	void SetROS2(geometry_msgs__msg__Transform& out_ros_data) const
	{
    	out_ros_data.translation.x = translation.X;
		out_ros_data.translation.y = translation.Y;
		out_ros_data.translation.z = translation.Z;

		out_ros_data.rotation.x = rotation.X;
		out_ros_data.rotation.y = rotation.Y;
		out_ros_data.rotation.z = rotation.Z;
		out_ros_data.rotation.w = rotation.W;

		
	}
};

UCLASS()
class RCLUE_API UROS2TransformMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSTransform& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSTransform& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	geometry_msgs__msg__Transform transform_msg;
};
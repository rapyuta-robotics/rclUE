// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/Accel.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "geometry_msgs/msg/accel.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)


// Generated
#include "ROS2Acc.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSAcc
{
	GENERATED_BODY()

public:
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Linear = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Angular = FVector::ZeroVector;

	

	FROSAcc()
	{
		
	}

	void SetFromROS2(const geometry_msgs__msg__Accel& in_ros_data)
	{
    	Linear = UROS2Utils::VectorROSToUE<geometry_msgs__msg__Vector3>(in_ros_data.linear);

		Angular = UROS2Utils::VectorROSToUE<geometry_msgs__msg__Vector3>(in_ros_data.angular);

		
	}

	void SetROS2(geometry_msgs__msg__Accel& out_ros_data) const
	{
    	out_ros_data.linear = UROS2Utils::VectorUEToROS<geometry_msgs__msg__Vector3>(Linear);

		out_ros_data.angular = UROS2Utils::VectorUEToROS<geometry_msgs__msg__Vector3>(Angular);

		
	}
};

UCLASS()
class RCLUE_API UROS2AccMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSAcc& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSAcc& Output) const;
	
	virtual void* Get() override;

	


private:
	virtual FString MsgToString() const override;

	geometry_msgs__msg__Accel accel_msg;
};
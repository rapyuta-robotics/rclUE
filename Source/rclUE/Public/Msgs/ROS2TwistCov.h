// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/TwistWithCovariance.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "geometry_msgs/msg/twist_with_covariance.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Twist.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


// Generated
#include "ROS2TwistCov.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSTwistCov
{
	GENERATED_BODY()

public:
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FROSTwist Twist;

	UPROPERTY(EditAnywhere)
	TArray<double> Covariance;

	

	FROSTwistCov()
	{
		Covariance.SetNumZeroed(36);

		
	}

	void SetFromROS2(const geometry_msgs__msg__TwistWithCovariance& in_ros_data)
	{
    	Twist.SetFromROS2(in_ros_data.twist);

		UROS2Utils::SequenceROSToUEArray<double, double>(in_ros_data.covariance, Covariance, 36);

		
	}

	void SetROS2(geometry_msgs__msg__TwistWithCovariance& out_ros_data) const
	{
    	Twist.SetROS2(out_ros_data.twist);

		UROS2Utils::ArrayUEToROSSequence<double, double>(Covariance, out_ros_data.covariance, 36);

		
	}
};

UCLASS()
class RCLUE_API UROS2TwistCovMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSTwistCov& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSTwistCov& Output) const;
	
	virtual void* Get() override;

	


private:
	virtual FString MsgToString() const override;

	geometry_msgs__msg__TwistWithCovariance twist_with_covariance_msg;
};
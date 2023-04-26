// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/LaserScan.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "sensor_msgs/msg/laser_scan.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Header.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


// Generated
#include "ROS2LaserScan.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSLaserScan
{
	GENERATED_BODY()

public:
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FROSHeader Header;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AngleMin = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AngleMax = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AngleIncrement = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeIncrement = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ScanTime = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RangeMin = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RangeMax = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> Ranges;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> Intensities;

	

	FROSLaserScan()
	{
		
	}

	void SetFromROS2(const sensor_msgs__msg__LaserScan& in_ros_data)
	{
    	Header.SetFromROS2(in_ros_data.header);

		AngleMin = in_ros_data.angle_min;

		AngleMax = in_ros_data.angle_max;

		AngleIncrement = in_ros_data.angle_increment;

		TimeIncrement = in_ros_data.time_increment;

		ScanTime = in_ros_data.scan_time;

		RangeMin = in_ros_data.range_min;

		RangeMax = in_ros_data.range_max;

		UROS2Utils::SequenceROSToUEArray<float, float>(in_ros_data.ranges.data, Ranges, in_ros_data.ranges.size);

		UROS2Utils::SequenceROSToUEArray<float, float>(in_ros_data.intensities.data, Intensities, in_ros_data.intensities.size);

		
	}

	void SetROS2(sensor_msgs__msg__LaserScan& out_ros_data) const
	{
    	Header.SetROS2(out_ros_data.header);

		out_ros_data.angle_min = AngleMin;

		out_ros_data.angle_max = AngleMax;

		out_ros_data.angle_increment = AngleIncrement;

		out_ros_data.time_increment = TimeIncrement;

		out_ros_data.scan_time = ScanTime;

		out_ros_data.range_min = RangeMin;

		out_ros_data.range_max = RangeMax;

		if (out_ros_data.ranges.data) {
		rosidl_runtime_c__float32__Sequence__fini(&out_ros_data.ranges);
		}
		if (!rosidl_runtime_c__float32__Sequence__init(&out_ros_data.ranges, Ranges.Num())) {UE_LOG(LogTemp, Error, TEXT("failed to create array for field out_ros_data.ranges  "));}
		UROS2Utils::ArrayUEToROSSequence<float, float>(Ranges, out_ros_data.ranges.data, Ranges.Num());

		if (out_ros_data.intensities.data) {
		rosidl_runtime_c__float32__Sequence__fini(&out_ros_data.intensities);
		}
		if (!rosidl_runtime_c__float32__Sequence__init(&out_ros_data.intensities, Intensities.Num())) {UE_LOG(LogTemp, Error, TEXT("failed to create array for field out_ros_data.intensities  "));}
		UROS2Utils::ArrayUEToROSSequence<float, float>(Intensities, out_ros_data.intensities.data, Intensities.Num());

		
	}
};

UCLASS()
class RCLUE_API UROS2LaserScanMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSLaserScan& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSLaserScan& Output) const;
	
	virtual void* Get() override;

	


private:
	virtual FString MsgToString() const override;

	sensor_msgs__msg__LaserScan laser_scan_msg;
};
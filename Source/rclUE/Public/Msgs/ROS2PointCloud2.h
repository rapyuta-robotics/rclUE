// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/PointCloud2.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "sensor_msgs/msg/point_cloud2.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2PointField.h"
#include "sensor_msgs/msg/detail/point_field__functions.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


// Generated
#include "ROS2PointCloud2.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSPointCloud2
{
	GENERATED_BODY()

public:
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FROSHeader Header;

	UPROPERTY(EditAnywhere)
	unsigned int Height = 0;

	UPROPERTY(EditAnywhere)
	unsigned int Width = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FROSPointField> Fields;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsBigendian = false;

	UPROPERTY(EditAnywhere)
	unsigned int PointStep = 0;

	UPROPERTY(EditAnywhere)
	unsigned int RowStep = 0;

	UPROPERTY(EditAnywhere)
	TArray<uint8> Data;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsDense = false;

	

	FROSPointCloud2()
	{
		
	}

	void SetFromROS2(const sensor_msgs__msg__PointCloud2& in_ros_data)
	{
    	Header.SetFromROS2(in_ros_data.header);

		Height = in_ros_data.height;

		Width = in_ros_data.width;

		UROS2Utils::SequenceROSToUEArray<sensor_msgs__msg__PointField, FROSPointField>(in_ros_data.fields.data, Fields, in_ros_data.fields.size);

		bIsBigendian = in_ros_data.is_bigendian;

		PointStep = in_ros_data.point_step;

		RowStep = in_ros_data.row_step;

		UROS2Utils::SequenceROSToUEArray<uint8, uint8>(in_ros_data.data.data, Data, in_ros_data.data.size);

		bIsDense = in_ros_data.is_dense;

		
	}

	void SetROS2(sensor_msgs__msg__PointCloud2& out_ros_data) const
	{
    	Header.SetROS2(out_ros_data.header);

		out_ros_data.height = Height;

		out_ros_data.width = Width;

		if (out_ros_data.fields.data) {
		sensor_msgs__msg__PointField__Sequence__fini(&out_ros_data.fields);
		}
		if (!sensor_msgs__msg__PointField__Sequence__init(&out_ros_data.fields, Fields.Num())) {UE_LOG(LogTemp, Error, TEXT("failed to create array for field out_ros_data.fields  "));}
		UROS2Utils::ArrayUEToROSSequence<sensor_msgs__msg__PointField, FROSPointField>(Fields, out_ros_data.fields.data, Fields.Num());

		out_ros_data.is_bigendian = bIsBigendian;

		out_ros_data.point_step = PointStep;

		out_ros_data.row_step = RowStep;

		if (out_ros_data.data.data) {
		rosidl_runtime_c__uint8__Sequence__fini(&out_ros_data.data);
		}
		if (!rosidl_runtime_c__uint8__Sequence__init(&out_ros_data.data, Data.Num())) {UE_LOG(LogTemp, Error, TEXT("failed to create array for field out_ros_data.data  "));}
		UROS2Utils::ArrayUEToROSSequence<uint8, uint8>(Data, out_ros_data.data.data, Data.Num());

		out_ros_data.is_dense = bIsDense;

		
	}
};

UCLASS()
class RCLUE_API UROS2PointCloud2Msg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSPointCloud2& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSPointCloud2& Output) const;
	
	virtual void* Get() override;

	


private:
	virtual FString MsgToString() const override;

	sensor_msgs__msg__PointCloud2 point_cloud2_msg;
};
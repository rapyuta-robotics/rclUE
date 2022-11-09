// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/JoyFeedbackArray.msg - do not modify

#pragma once

#include <CoreMinimal.h>

#include "sensor_msgs/msg/joy_feedback_array.h"

#include "ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2JoyFeedbackArrayMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSJoyFeedbackArray
{
	GENERATED_BODY()

public:
	TArray<uint8> array_type;

	TArray<uint8> array_id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> array_intensity;

	

	void SetFromROS2(const sensor_msgs__msg__JoyFeedbackArray& in_ros_data)
	{
    	for (int i = 0; i < in_ros_data.array.size; i++)
		{
			array_type.Add(in_ros_data.array.data[i].type);
		}

		for (int i = 0; i < in_ros_data.array.size; i++)
		{
			array_id.Add(in_ros_data.array.data[i].id);
		}

		for (int i = 0; i < in_ros_data.array.size; i++)
		{
			array_intensity.Add(in_ros_data.array.data[i].intensity);
		}

		
	}

	void SetROS2(sensor_msgs__msg__JoyFeedbackArray& out_ros_data) const
	{
    	if (out_ros_data.array.data != nullptr)
		{
			free(out_ros_data.array.data);
		}
		out_ros_data.array.data = (decltype(out_ros_data.array.data))malloc(array_type.Num() * (sizeof(array_type) + sizeof(array_id) + sizeof(array_intensity)));
		out_ros_data.array.size = array_type.Num();
		out_ros_data.array.capacity = array_type.Num();
		for (int i = 0; i < array_type.Num(); i++)
		{
			out_ros_data.array.data[i].type = array_type[i];

			out_ros_data.array.data[i].id = array_id[i];

			out_ros_data.array.data[i].intensity = array_intensity[i];

			}
	
	}
};

UCLASS()
class RCLUE_API UROS2JoyFeedbackArrayMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSJoyFeedbackArray& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSJoyFeedbackArray& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	sensor_msgs__msg__JoyFeedbackArray joy_feedback_array_msg;
};
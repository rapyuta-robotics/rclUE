#pragma once

#include <CoreMinimal.h>

#include "sensor_msgs/msg/imu.h"

#include "Msgs/ROS2GenericMsg.h"
#include "Msgs/ROS2HeaderMsg.h"
// #include "Msgs/ROS2QuaternionMsg.h"
#include "rclcUtilities.h"

#include "ROS2ImuMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSImu
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FROSHeader header;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FQuat orientation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> orientation_covariance; // TODO implement as 3x3 Matrix

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector angular_velocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> angular_velocity_covariance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector linear_acceleration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> linear_acceleration_covariance;

	void SetFromROS2(const sensor_msgs__msg__Imu& in_ros_data)
	{
    	header.SetFromROS2(in_ros_data.header);

		orientation.X = in_ros_data.orientation.x;
		orientation.Y = in_ros_data.orientation.y;
		orientation.Z = in_ros_data.orientation.z;
		orientation.W = in_ros_data.orientation.w;

		for (int i = 0; i < 9; i++)
		{
			orientation_covariance.Add(in_ros_data.orientation_covariance[i]);
		}

		angular_velocity.Set(in_ros_data.angular_velocity.x,
					in_ros_data.angular_velocity.y,
					in_ros_data.angular_velocity.z);

		for (int i = 0; i < 9; i++)
		{
			angular_velocity_covariance.Add(in_ros_data.angular_velocity_covariance[i]);
		}

		linear_acceleration.Set(in_ros_data.linear_acceleration.x,
					in_ros_data.linear_acceleration.y,
					in_ros_data.linear_acceleration.z);

		for (int i = 0; i < 9; i++)
		{
			linear_acceleration_covariance.Add(in_ros_data.linear_acceleration_covariance[i]);
		}

	}

	void SetROS2(sensor_msgs__msg__Imu& out_ros_data) const
	{
		header.SetROS2(out_ros_data.header);

		out_ros_data.orientation.x = orientation.X;
		out_ros_data.orientation.y = orientation.Y;
		out_ros_data.orientation.z = orientation.Z;
		out_ros_data.orientation.w = orientation.W;

		for (int i = 0; i < 9; i++)
		{
			out_ros_data.orientation_covariance[i] = orientation_covariance[i];
		}

		out_ros_data.angular_velocity.x = angular_velocity.X;
		out_ros_data.angular_velocity.y = angular_velocity.Y;
		out_ros_data.angular_velocity.z = angular_velocity.Z;

		for (int i = 0; i < 9; i++)
		{
			out_ros_data.angular_velocity_covariance[i] = angular_velocity_covariance[i];
		}

		out_ros_data.linear_acceleration.x = linear_acceleration.X;
		out_ros_data.linear_acceleration.y = linear_acceleration.Y;
		out_ros_data.linear_acceleration.z = linear_acceleration.Z;

		for (int i = 0; i < 9; i++)
		{
			out_ros_data.linear_acceleration_covariance[i] = linear_acceleration_covariance[i];
		}
	}
};

UCLASS()
class RCLUE_API UROS2ImuMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSImu& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSImu& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	sensor_msgs__msg__Imu imu_msg;
};
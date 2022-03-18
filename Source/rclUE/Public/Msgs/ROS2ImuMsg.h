#pragma once

#include <CoreMinimal.h>

#include "Conversions.h"
#include "sensor_msgs/msg/imu.h"
#include "Msgs/ROS2GenericMsg.h"
#include "Msgs/ROS2HeaderMsg.h"

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

	// TODO: Don't downsample to float when using UE5
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> orientation_covariance; // TODO implement as 3x3 Matrix

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector angular_velocity;

	// TODO: Don't downsample to float when using UE5
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> angular_velocity_covariance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector linear_acceleration;

	// TODO: Don't downsample to float when using UE5
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> linear_acceleration_covariance;

	void SetFromROS2(const sensor_msgs__msg__Imu& in_ros_data)
	{
    	header.SetFromROS2(in_ros_data.header);
		orientation = ROS2MsgToUE::FromQuaternion(in_ros_data.orientation);
		orientation_covariance = ROS2MsgToUE::FromArray(in_ros_data.orientation_covariance);
		angular_velocity = ROS2MsgToUE::FromVector3(in_ros_data.angular_velocity);
		angular_velocity_covariance = ROS2MsgToUE::FromArray(in_ros_data.angular_velocity_covariance);
		linear_acceleration = ROS2MsgToUE::FromVector3(in_ros_data.linear_acceleration);
		linear_acceleration_covariance = ROS2MsgToUE::FromArray(in_ros_data.linear_acceleration_covariance);
	}

	void SetROS2(sensor_msgs__msg__Imu& out_ros_data) const
	{
		header.SetROS2(out_ros_data.header);
		UEToROS2Msg::SetQuaternion(orientation, out_ros_data.orientation);
		UEToROS2Msg::SetSequence(orientation_covariance, out_ros_data.orientation_covariance);
		UEToROS2Msg::SetVector3(angular_velocity, out_ros_data.angular_velocity);
		UEToROS2Msg::SetSequence(angular_velocity_covariance, out_ros_data.angular_velocity_covariance);
		UEToROS2Msg::SetVector3(linear_acceleration, out_ros_data.linear_acceleration);
		UEToROS2Msg::SetSequence(linear_acceleration_covariance, out_ros_data.linear_acceleration_covariance);
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
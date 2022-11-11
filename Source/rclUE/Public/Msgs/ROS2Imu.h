#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "sensor_msgs/msg/imu.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2Quaternion.h"
#include "Msgs/ROS2Vector3.h"

#include "ROS2Imu.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSImu
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__Imu;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FQuat orientation = FQuat(EForceInit::ForceInitToZero);
    // rclc type: geometry_msgs__msg__Quaternion orientation

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<float> orientation_covariance = ArrayInitialisers::FloatArray(9);
    // rclc type: double orientation_covariance[9]

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector angular_velocity = FVector(EForceInit::ForceInitToZero);
    // rclc type: geometry_msgs__msg__Vector3 angular_velocity

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<float> angular_velocity_covariance = ArrayInitialisers::FloatArray(9);
    // rclc type: double angular_velocity_covariance[9]

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector linear_acceleration = FVector(EForceInit::ForceInitToZero);
    // rclc type: geometry_msgs__msg__Vector3 linear_acceleration

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<float> linear_acceleration_covariance = ArrayInitialisers::FloatArray(9);
    // rclc type: double linear_acceleration_covariance[9]

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        orientation = ROS2MsgToUE::From(in_ros_data.orientation);
        orientation_covariance = ROS2MsgToUE::FromArray(in_ros_data.orientation_covariance);
        angular_velocity = ROS2MsgToUE::From(in_ros_data.angular_velocity);
        angular_velocity_covariance = ROS2MsgToUE::FromArray(in_ros_data.angular_velocity_covariance);
        linear_acceleration = ROS2MsgToUE::From(in_ros_data.linear_acceleration);
        linear_acceleration_covariance = ROS2MsgToUE::FromArray(in_ros_data.linear_acceleration_covariance);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        UEToROS2Msg::Set(orientation, out_ros_data.orientation);
        UEToROS2Msg::SetSequence(orientation_covariance, out_ros_data.orientation_covariance);
        UEToROS2Msg::Set(angular_velocity, out_ros_data.angular_velocity);
        UEToROS2Msg::SetSequence(angular_velocity_covariance, out_ros_data.angular_velocity_covariance);
        UEToROS2Msg::Set(linear_acceleration, out_ros_data.linear_acceleration);
        UEToROS2Msg::SetSequence(linear_acceleration_covariance, out_ros_data.linear_acceleration_covariance);
    }
};

UCLASS()
class RCLUE_API UROS2Imu : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__Imu;

public:
    virtual void Init() override
    {
        sensor_msgs__msg__Imu__init(&imu_msg);
    }

    virtual void Fini() override
    {
        sensor_msgs__msg__Imu__fini(&imu_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, Imu);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSImu& Input)
    {
        Input.SetROS2(imu_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSImu& Output) const
    {
        Output.SetFromROS2(imu_msg);
    }

    virtual void* Get() override
    {
        return &imu_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename imu_msg;
};

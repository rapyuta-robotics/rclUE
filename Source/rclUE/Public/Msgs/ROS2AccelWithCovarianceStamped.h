#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geometry_msgs/msg/accel_with_covariance_stamped.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2AccelWithCovariance.h"

#include "ROS2AccelWithCovarianceStamped.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSAccelWithCovarianceStamped
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__AccelWithCovarianceStamped;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSAccelWithCovariance accel;
    // rclc type: geometry_msgs__msg__AccelWithCovariance accel

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        accel.SetFromROS2(in_ros_data.accel);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        accel.SetROS2(out_ros_data.accel);
    }
};

UCLASS()
class RCLUE_API UROS2AccelWithCovarianceStamped : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__AccelWithCovarianceStamped;

public:
    virtual void Init() override
    {
        geometry_msgs__msg__AccelWithCovarianceStamped__init(&accel_with_covariance_stamped_msg);
    }

    virtual void Fini() override
    {
        geometry_msgs__msg__AccelWithCovarianceStamped__fini(&accel_with_covariance_stamped_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, AccelWithCovarianceStamped);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSAccelWithCovarianceStamped& Input)
    {
        Input.SetROS2(accel_with_covariance_stamped_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSAccelWithCovarianceStamped& Output) const
    {
        Output.SetFromROS2(accel_with_covariance_stamped_msg);
    }

    virtual void* Get() override
    {
        return &accel_with_covariance_stamped_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename accel_with_covariance_stamped_msg;
};

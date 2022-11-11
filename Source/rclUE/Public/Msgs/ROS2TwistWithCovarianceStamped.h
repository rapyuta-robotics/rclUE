#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geometry_msgs/msg/twist_with_covariance_stamped.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2TwistWithCovariance.h"

#include "ROS2TwistWithCovarianceStamped.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSTwistWithCovarianceStamped
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__TwistWithCovarianceStamped;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSTwistWithCovariance twist;
    // rclc type: geometry_msgs__msg__TwistWithCovariance twist

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        twist.SetFromROS2(in_ros_data.twist);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        twist.SetROS2(out_ros_data.twist);
    }
};

UCLASS()
class RCLUE_API UROS2TwistWithCovarianceStamped : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__TwistWithCovarianceStamped;

public:
    virtual void Init() override
    {
        geometry_msgs__msg__TwistWithCovarianceStamped__init(&twist_with_covariance_stamped_msg);
    }

    virtual void Fini() override
    {
        geometry_msgs__msg__TwistWithCovarianceStamped__fini(&twist_with_covariance_stamped_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, TwistWithCovarianceStamped);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSTwistWithCovarianceStamped& Input)
    {
        Input.SetROS2(twist_with_covariance_stamped_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSTwistWithCovarianceStamped& Output) const
    {
        Output.SetFromROS2(twist_with_covariance_stamped_msg);
    }

    virtual void* Get() override
    {
        return &twist_with_covariance_stamped_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename twist_with_covariance_stamped_msg;
};

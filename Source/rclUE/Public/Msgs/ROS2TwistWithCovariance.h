#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geometry_msgs/msg/twist_with_covariance.h"


// Include directives for member types
#include "Msgs/ROS2Twist.h"

#include "ROS2TwistWithCovariance.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSTwistWithCovariance
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__TwistWithCovariance;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSTwist twist;
    // rclc type: geometry_msgs__msg__Twist twist

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<float> covariance = ArrayInitialisers::FloatArray(36);
    // rclc type: double covariance[36]

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        twist.SetFromROS2(in_ros_data.twist);
        covariance = ROS2MsgToUE::FromArray(in_ros_data.covariance);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        twist.SetROS2(out_ros_data.twist);
        UEToROS2Msg::SetSequence(covariance, out_ros_data.covariance);
    }
};

UCLASS()
class RCLUE_API UROS2TwistWithCovariance : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__TwistWithCovariance;

public:
    virtual void Init() override
    {
        geometry_msgs__msg__TwistWithCovariance__init(&twist_with_covariance_msg);
    }

    virtual void Fini() override
    {
        geometry_msgs__msg__TwistWithCovariance__fini(&twist_with_covariance_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, TwistWithCovariance);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSTwistWithCovariance& Input)
    {
        Input.SetROS2(twist_with_covariance_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSTwistWithCovariance& Output) const
    {
        Output.SetFromROS2(twist_with_covariance_msg);
    }

    virtual void* Get() override
    {
        return &twist_with_covariance_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename twist_with_covariance_msg;
};

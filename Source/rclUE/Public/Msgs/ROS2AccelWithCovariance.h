#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geometry_msgs/msg/accel_with_covariance.h"


// Include directives for member types
#include "Msgs/ROS2Accel.h"

#include "ROS2AccelWithCovariance.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSAccelWithCovariance
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__AccelWithCovariance;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSAccel accel;
    // rclc type: geometry_msgs__msg__Accel accel

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<float> covariance = ArrayInitialisers::FloatArray(36);
    // rclc type: double covariance[36]

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        accel.SetFromROS2(in_ros_data.accel);
        covariance = ROS2MsgToUE::FromArray(in_ros_data.covariance);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        accel.SetROS2(out_ros_data.accel);
        UEToROS2Msg::SetSequence(covariance, out_ros_data.covariance);
    }
};

UCLASS()
class RCLUE_API UROS2AccelWithCovariance : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__AccelWithCovariance;

public:
    virtual void Init() override
    {
        geometry_msgs__msg__AccelWithCovariance__init(&accel_with_covariance_msg);
    }

    virtual void Fini() override
    {
        geometry_msgs__msg__AccelWithCovariance__fini(&accel_with_covariance_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, AccelWithCovariance);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSAccelWithCovariance& Input)
    {
        Input.SetROS2(accel_with_covariance_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSAccelWithCovariance& Output) const
    {
        Output.SetFromROS2(accel_with_covariance_msg);
    }

    virtual void* Get() override
    {
        return &accel_with_covariance_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename accel_with_covariance_msg;
};

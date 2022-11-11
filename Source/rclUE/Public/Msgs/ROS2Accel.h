#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geometry_msgs/msg/accel.h"


// Include directives for member types
#include "Msgs/ROS2Vector3.h"

#include "ROS2Accel.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSAccel
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__Accel;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector linear = FVector(EForceInit::ForceInitToZero);
    // rclc type: geometry_msgs__msg__Vector3 linear

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector angular = FVector(EForceInit::ForceInitToZero);
    // rclc type: geometry_msgs__msg__Vector3 angular

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        linear = ROS2MsgToUE::From(in_ros_data.linear);
        angular = ROS2MsgToUE::From(in_ros_data.angular);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        UEToROS2Msg::Set(linear, out_ros_data.linear);
        UEToROS2Msg::Set(angular, out_ros_data.angular);
    }
};

UCLASS()
class RCLUE_API UROS2Accel : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__Accel;

public:
    virtual void Init() override
    {
        geometry_msgs__msg__Accel__init(&accel_msg);
    }

    virtual void Fini() override
    {
        geometry_msgs__msg__Accel__fini(&accel_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Accel);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSAccel& Input)
    {
        Input.SetROS2(accel_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSAccel& Output) const
    {
        Output.SetFromROS2(accel_msg);
    }

    virtual void* Get() override
    {
        return &accel_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename accel_msg;
};

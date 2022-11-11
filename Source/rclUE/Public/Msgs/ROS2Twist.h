#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geometry_msgs/msg/twist.h"


// Include directives for member types
#include "Msgs/ROS2Vector3.h"

#include "ROS2Twist.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSTwist
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__Twist;

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
class RCLUE_API UROS2Twist : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__Twist;

public:
    virtual void Init() override
    {
        geometry_msgs__msg__Twist__init(&twist_msg);
    }

    virtual void Fini() override
    {
        geometry_msgs__msg__Twist__fini(&twist_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Twist);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSTwist& Input)
    {
        Input.SetROS2(twist_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSTwist& Output) const
    {
        Output.SetFromROS2(twist_msg);
    }

    virtual void* Get() override
    {
        return &twist_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename twist_msg;
};

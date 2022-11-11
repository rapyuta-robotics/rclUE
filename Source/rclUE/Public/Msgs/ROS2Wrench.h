#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geometry_msgs/msg/wrench.h"


// Include directives for member types
#include "Msgs/ROS2Vector3.h"

#include "ROS2Wrench.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSWrench
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__Wrench;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector force = FVector(EForceInit::ForceInitToZero);
    // rclc type: geometry_msgs__msg__Vector3 force

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector torque = FVector(EForceInit::ForceInitToZero);
    // rclc type: geometry_msgs__msg__Vector3 torque

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        force = ROS2MsgToUE::From(in_ros_data.force);
        torque = ROS2MsgToUE::From(in_ros_data.torque);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        UEToROS2Msg::Set(force, out_ros_data.force);
        UEToROS2Msg::Set(torque, out_ros_data.torque);
    }
};

UCLASS()
class RCLUE_API UROS2Wrench : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__Wrench;

public:
    virtual void Init() override
    {
        geometry_msgs__msg__Wrench__init(&wrench_msg);
    }

    virtual void Fini() override
    {
        geometry_msgs__msg__Wrench__fini(&wrench_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Wrench);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSWrench& Input)
    {
        Input.SetROS2(wrench_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSWrench& Output) const
    {
        Output.SetFromROS2(wrench_msg);
    }

    virtual void* Get() override
    {
        return &wrench_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename wrench_msg;
};

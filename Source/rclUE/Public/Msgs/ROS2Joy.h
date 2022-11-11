#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "sensor_msgs/msg/joy.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"

#include "ROS2Joy.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSJoy
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__Joy;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<float> axes;
    // rclc type: rosidl_runtime_c__float__Sequence axes

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<int> buttons;
    // rclc type: rosidl_runtime_c__int32__Sequence buttons

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        axes = ROS2MsgToUE::FromSequence<float>(in_ros_data.axes);
        buttons = ROS2MsgToUE::FromSequence<int>(in_ros_data.buttons);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        UEToROS2Msg::SetSequence(axes, out_ros_data.axes);
        UEToROS2Msg::SetSequence(buttons, out_ros_data.buttons);
    }
};

UCLASS()
class RCLUE_API UROS2Joy : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__Joy;

public:
    virtual void Init() override
    {
        sensor_msgs__msg__Joy__init(&joy_msg);
    }

    virtual void Fini() override
    {
        sensor_msgs__msg__Joy__fini(&joy_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, Joy);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSJoy& Input)
    {
        Input.SetROS2(joy_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSJoy& Output) const
    {
        Output.SetFromROS2(joy_msg);
    }

    virtual void* Get() override
    {
        return &joy_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename joy_msg;
};

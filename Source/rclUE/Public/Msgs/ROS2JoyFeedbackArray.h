#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "sensor_msgs/msg/joy_feedback_array.h"


// Include directives for member types
#include "Msgs/ROS2JoyFeedback.h"

#include "ROS2JoyFeedbackArray.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSJoyFeedbackArray
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__JoyFeedbackArray;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSJoyFeedback> array;
    // rclc type: sensor_msgs__msg__JoyFeedback__Sequence array

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        array = ROS2MsgToUE::FromStructSequence<FROSJoyFeedback>(in_ros_data.array);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        UEToROS2Msg::SetStructSequence(array, out_ros_data.array);
    }
};

UCLASS()
class RCLUE_API UROS2JoyFeedbackArray : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__JoyFeedbackArray;

public:
    virtual void Init() override
    {
        sensor_msgs__msg__JoyFeedbackArray__init(&joy_feedback_array_msg);
    }

    virtual void Fini() override
    {
        sensor_msgs__msg__JoyFeedbackArray__fini(&joy_feedback_array_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, JoyFeedbackArray);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSJoyFeedbackArray& Input)
    {
        Input.SetROS2(joy_feedback_array_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSJoyFeedbackArray& Output) const
    {
        Output.SetFromROS2(joy_feedback_array_msg);
    }

    virtual void* Get() override
    {
        return &joy_feedback_array_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename joy_feedback_array_msg;
};

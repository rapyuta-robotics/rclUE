#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "tf2_msgs/msg/tf_message.h"


// Include directives for member types
#include "Msgs/ROS2TransformStamped.h"

#include "ROS2TFMessage.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSTFMessage
{
    GENERATED_BODY()

    using ros_msg_c_typename = tf2_msgs__msg__TFMessage;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSTransformStamped> transforms;
    // rclc type: geometry_msgs__msg__TransformStamped__Sequence transforms

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        transforms = ROS2MsgToUE::FromStructSequence<FROSTransformStamped>(in_ros_data.transforms);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        UEToROS2Msg::SetStructSequence(transforms, out_ros_data.transforms);
    }
};

UCLASS()
class RCLUE_API UROS2TFMessage : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = tf2_msgs__msg__TFMessage;

public:
    virtual void Init() override
    {
        tf2_msgs__msg__TFMessage__init(&tf_message_msg);
    }

    virtual void Fini() override
    {
        tf2_msgs__msg__TFMessage__fini(&tf_message_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(tf2_msgs, msg, TFMessage);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSTFMessage& Input)
    {
        Input.SetROS2(tf_message_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSTFMessage& Output) const
    {
        Output.SetFromROS2(tf_message_msg);
    }

    virtual void* Get() override
    {
        return &tf_message_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename tf_message_msg;
};

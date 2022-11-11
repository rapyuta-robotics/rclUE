#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "sensor_msgs/msg/channel_float32.h"



#include "ROS2ChannelFloat32.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSChannelFloat32
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__ChannelFloat32;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString name;
    // rclc type: rosidl_runtime_c__String name

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<float> values;
    // rclc type: rosidl_runtime_c__float__Sequence values

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        name = ROS2MsgToUE::From(in_ros_data.name);
        values = ROS2MsgToUE::FromSequence<float>(in_ros_data.values);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        UEToROS2Msg::Set(name, out_ros_data.name);
        UEToROS2Msg::SetSequence(values, out_ros_data.values);
    }
};

UCLASS()
class RCLUE_API UROS2ChannelFloat32 : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__ChannelFloat32;

public:
    virtual void Init() override
    {
        sensor_msgs__msg__ChannelFloat32__init(&channel_float32_msg);
    }

    virtual void Fini() override
    {
        sensor_msgs__msg__ChannelFloat32__fini(&channel_float32_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, ChannelFloat32);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSChannelFloat32& Input)
    {
        Input.SetROS2(channel_float32_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSChannelFloat32& Output) const
    {
        Output.SetFromROS2(channel_float32_msg);
    }

    virtual void* Get() override
    {
        return &channel_float32_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename channel_float32_msg;
};

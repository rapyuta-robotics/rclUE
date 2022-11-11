#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "sensor_msgs/msg/time_reference.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2Time.h"

#include "ROS2TimeReference.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSTimeReference
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__TimeReference;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FDateTime time_ref;
    // rclc type: builtin_interfaces__msg__Time time_ref

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString source;
    // rclc type: rosidl_runtime_c__String source

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        time_ref = ROS2MsgToUE::From(in_ros_data.time_ref);
        source = ROS2MsgToUE::From(in_ros_data.source);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        UEToROS2Msg::Set(time_ref, out_ros_data.time_ref);
        UEToROS2Msg::Set(source, out_ros_data.source);
    }
};

UCLASS()
class RCLUE_API UROS2TimeReference : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__TimeReference;

public:
    virtual void Init() override
    {
        sensor_msgs__msg__TimeReference__init(&time_reference_msg);
    }

    virtual void Fini() override
    {
        sensor_msgs__msg__TimeReference__fini(&time_reference_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, TimeReference);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSTimeReference& Input)
    {
        Input.SetROS2(time_reference_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSTimeReference& Output) const
    {
        Output.SetFromROS2(time_reference_msg);
    }

    virtual void* Get() override
    {
        return &time_reference_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename time_reference_msg;
};

#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geographic_msgs/msg/key_value.h"



#include "ROS2KeyValue.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSKeyValue
{
    GENERATED_BODY()

    using ros_msg_c_typename = geographic_msgs__msg__KeyValue;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString key;
    // rclc type: rosidl_runtime_c__String key

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString value;
    // rclc type: rosidl_runtime_c__String value

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        key = ROS2MsgToUE::From(in_ros_data.key);
        value = ROS2MsgToUE::From(in_ros_data.value);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        UEToROS2Msg::Set(key, out_ros_data.key);
        UEToROS2Msg::Set(value, out_ros_data.value);
    }
};

UCLASS()
class RCLUE_API UROS2KeyValue : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geographic_msgs__msg__KeyValue;

public:
    virtual void Init() override
    {
        geographic_msgs__msg__KeyValue__init(&key_value_msg);
    }

    virtual void Fini() override
    {
        geographic_msgs__msg__KeyValue__fini(&key_value_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geographic_msgs, msg, KeyValue);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSKeyValue& Input)
    {
        Input.SetROS2(key_value_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSKeyValue& Output) const
    {
        Output.SetFromROS2(key_value_msg);
    }

    virtual void* Get() override
    {
        return &key_value_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename key_value_msg;
};

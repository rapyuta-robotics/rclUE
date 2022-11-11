#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "example_interfaces/msg/string.h"



#include "ROS2String.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSString
{
    GENERATED_BODY()

    using ros_msg_c_typename = example_interfaces__msg__String;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString data;
    // rclc type: rosidl_runtime_c__String data

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        data = ROS2MsgToUE::From(in_ros_data.data);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        UEToROS2Msg::Set(data, out_ros_data.data);
    }
};

UCLASS()
class RCLUE_API UROS2String : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = example_interfaces__msg__String;

public:
    virtual void Init() override
    {
        example_interfaces__msg__String__init(&string_msg);
    }

    virtual void Fini() override
    {
        example_interfaces__msg__String__fini(&string_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(example_interfaces, msg, String);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSString& Input)
    {
        Input.SetROS2(string_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSString& Output) const
    {
        Output.SetFromROS2(string_msg);
    }

    virtual void* Get() override
    {
        return &string_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename string_msg;
};

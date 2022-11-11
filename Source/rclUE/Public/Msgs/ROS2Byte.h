#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "example_interfaces/msg/byte.h"



#include "ROS2Byte.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSByte
{
    GENERATED_BODY()

    using ros_msg_c_typename = example_interfaces__msg__Byte;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int data;
    // rclc type: uint8_t data

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        data = in_ros_data.data;
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        out_ros_data.data = data;
    }
};

UCLASS()
class RCLUE_API UROS2Byte : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = example_interfaces__msg__Byte;

public:
    virtual void Init() override
    {
        example_interfaces__msg__Byte__init(&byte_msg);
    }

    virtual void Fini() override
    {
        example_interfaces__msg__Byte__fini(&byte_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(example_interfaces, msg, Byte);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSByte& Input)
    {
        Input.SetROS2(byte_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSByte& Output) const
    {
        Output.SetFromROS2(byte_msg);
    }

    virtual void* Get() override
    {
        return &byte_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename byte_msg;
};

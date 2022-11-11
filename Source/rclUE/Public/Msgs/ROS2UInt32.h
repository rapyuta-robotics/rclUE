#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "example_interfaces/msg/u_int32.h"



#include "ROS2UInt32.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSUInt32
{
    GENERATED_BODY()

    using ros_msg_c_typename = example_interfaces__msg__UInt32;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int data;
    // rclc type: uint32_t data

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
class RCLUE_API UROS2UInt32 : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = example_interfaces__msg__UInt32;

public:
    virtual void Init() override
    {
        example_interfaces__msg__UInt32__init(&u_int32_msg);
    }

    virtual void Fini() override
    {
        example_interfaces__msg__UInt32__fini(&u_int32_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(example_interfaces, msg, UInt32);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSUInt32& Input)
    {
        Input.SetROS2(u_int32_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSUInt32& Output) const
    {
        Output.SetFromROS2(u_int32_msg);
    }

    virtual void* Get() override
    {
        return &u_int32_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename u_int32_msg;
};

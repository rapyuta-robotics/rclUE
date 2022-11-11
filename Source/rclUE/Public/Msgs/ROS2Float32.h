#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "example_interfaces/msg/float32.h"



#include "ROS2Float32.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSFloat32
{
    GENERATED_BODY()

    using ros_msg_c_typename = example_interfaces__msg__Float32;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float data;
    // rclc type: float data

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
class RCLUE_API UROS2Float32 : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = example_interfaces__msg__Float32;

public:
    virtual void Init() override
    {
        example_interfaces__msg__Float32__init(&float32_msg);
    }

    virtual void Fini() override
    {
        example_interfaces__msg__Float32__fini(&float32_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(example_interfaces, msg, Float32);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSFloat32& Input)
    {
        Input.SetROS2(float32_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSFloat32& Output) const
    {
        Output.SetFromROS2(float32_msg);
    }

    virtual void* Get() override
    {
        return &float32_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename float32_msg;
};

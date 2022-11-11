#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "example_interfaces/msg/float64.h"



#include "ROS2Float64.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSFloat64
{
    GENERATED_BODY()

    using ros_msg_c_typename = example_interfaces__msg__Float64;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float data;
    // rclc type: double data

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
class RCLUE_API UROS2Float64 : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = example_interfaces__msg__Float64;

public:
    virtual void Init() override
    {
        example_interfaces__msg__Float64__init(&float64_msg);
    }

    virtual void Fini() override
    {
        example_interfaces__msg__Float64__fini(&float64_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(example_interfaces, msg, Float64);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSFloat64& Input)
    {
        Input.SetROS2(float64_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSFloat64& Output) const
    {
        Output.SetFromROS2(float64_msg);
    }

    virtual void* Get() override
    {
        return &float64_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename float64_msg;
};

#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "std_msgs/msg/color_rgba.h"



#include "ROS2ColorRGBA.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSColorRGBA
{
    GENERATED_BODY()

    using ros_msg_c_typename = std_msgs__msg__ColorRGBA;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float r;
    // rclc type: float r

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float g;
    // rclc type: float g

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float b;
    // rclc type: float b

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float a;
    // rclc type: float a

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        r = in_ros_data.r;
        g = in_ros_data.g;
        b = in_ros_data.b;
        a = in_ros_data.a;
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        out_ros_data.r = r;
        out_ros_data.g = g;
        out_ros_data.b = b;
        out_ros_data.a = a;
    }
};

UCLASS()
class RCLUE_API UROS2ColorRGBA : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = std_msgs__msg__ColorRGBA;

public:
    virtual void Init() override
    {
        std_msgs__msg__ColorRGBA__init(&color_rgba_msg);
    }

    virtual void Fini() override
    {
        std_msgs__msg__ColorRGBA__fini(&color_rgba_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, ColorRGBA);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSColorRGBA& Input)
    {
        Input.SetROS2(color_rgba_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSColorRGBA& Output) const
    {
        Output.SetFromROS2(color_rgba_msg);
    }

    virtual void* Get() override
    {
        return &color_rgba_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename color_rgba_msg;
};

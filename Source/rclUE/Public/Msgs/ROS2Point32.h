#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geometry_msgs/msg/point32.h"



#include "ROS2Point32.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSPoint32
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__Point32;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float x;
    // rclc type: float x

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float y;
    // rclc type: float y

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float z;
    // rclc type: float z

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        x = in_ros_data.x;
        y = in_ros_data.y;
        z = in_ros_data.z;
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        out_ros_data.x = x;
        out_ros_data.y = y;
        out_ros_data.z = z;
    }
};

UCLASS()
class RCLUE_API UROS2Point32 : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__Point32;

public:
    virtual void Init() override
    {
        geometry_msgs__msg__Point32__init(&point32_msg);
    }

    virtual void Fini() override
    {
        geometry_msgs__msg__Point32__fini(&point32_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Point32);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSPoint32& Input)
    {
        Input.SetROS2(point32_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSPoint32& Output) const
    {
        Output.SetFromROS2(point32_msg);
    }

    virtual void* Get() override
    {
        return &point32_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename point32_msg;
};

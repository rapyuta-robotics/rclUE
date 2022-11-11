#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "builtin_interfaces/msg/duration.h"



#include "ROS2Duration.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSDuration
{
    GENERATED_BODY()

    using ros_msg_c_typename = builtin_interfaces__msg__Duration;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int sec;
    // rclc type: int32_t sec

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int nanosec;
    // rclc type: uint32_t nanosec

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        sec = in_ros_data.sec;
        nanosec = in_ros_data.nanosec;
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        out_ros_data.sec = sec;
        out_ros_data.nanosec = nanosec;
    }
};

UCLASS()
class RCLUE_API UROS2Duration : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = builtin_interfaces__msg__Duration;

public:
    virtual void Init() override
    {
        builtin_interfaces__msg__Duration__init(&duration_msg);
    }

    virtual void Fini() override
    {
        builtin_interfaces__msg__Duration__fini(&duration_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(builtin_interfaces, msg, Duration);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSDuration& Input)
    {
        Input.SetROS2(duration_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSDuration& Output) const
    {
        Output.SetFromROS2(duration_msg);
    }

    virtual void* Get() override
    {
        return &duration_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename duration_msg;
};

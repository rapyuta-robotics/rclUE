#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "builtin_interfaces/msg/time.h"



#include "ROS2Time.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSTime
{
    GENERATED_BODY()

    using ros_msg_c_typename = builtin_interfaces__msg__Time;

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
class RCLUE_API UROS2Time : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = builtin_interfaces__msg__Time;

public:
    virtual void Init() override
    {
        builtin_interfaces__msg__Time__init(&time_msg);
    }

    virtual void Fini() override
    {
        builtin_interfaces__msg__Time__fini(&time_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(builtin_interfaces, msg, Time);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSTime& Input)
    {
        Input.SetROS2(time_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSTime& Output) const
    {
        Output.SetFromROS2(time_msg);
    }

    virtual void* Get() override
    {
        return &time_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename time_msg;
};

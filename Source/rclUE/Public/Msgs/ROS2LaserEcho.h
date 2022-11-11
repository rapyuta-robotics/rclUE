#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "sensor_msgs/msg/laser_echo.h"



#include "ROS2LaserEcho.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSLaserEcho
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__LaserEcho;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<float> echoes;
    // rclc type: rosidl_runtime_c__float__Sequence echoes

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        echoes = ROS2MsgToUE::FromSequence<float>(in_ros_data.echoes);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        UEToROS2Msg::SetSequence(echoes, out_ros_data.echoes);
    }
};

UCLASS()
class RCLUE_API UROS2LaserEcho : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__LaserEcho;

public:
    virtual void Init() override
    {
        sensor_msgs__msg__LaserEcho__init(&laser_echo_msg);
    }

    virtual void Fini() override
    {
        sensor_msgs__msg__LaserEcho__fini(&laser_echo_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, LaserEcho);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSLaserEcho& Input)
    {
        Input.SetROS2(laser_echo_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSLaserEcho& Output) const
    {
        Output.SetFromROS2(laser_echo_msg);
    }

    virtual void* Get() override
    {
        return &laser_echo_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename laser_echo_msg;
};

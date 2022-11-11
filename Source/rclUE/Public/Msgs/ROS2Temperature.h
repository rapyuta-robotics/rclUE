#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "sensor_msgs/msg/temperature.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"

#include "ROS2Temperature.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSTemperature
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__Temperature;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float temperature;
    // rclc type: double temperature

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float variance;
    // rclc type: double variance

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        temperature = in_ros_data.temperature;
        variance = in_ros_data.variance;
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        out_ros_data.temperature = temperature;
        out_ros_data.variance = variance;
    }
};

UCLASS()
class RCLUE_API UROS2Temperature : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__Temperature;

public:
    virtual void Init() override
    {
        sensor_msgs__msg__Temperature__init(&temperature_msg);
    }

    virtual void Fini() override
    {
        sensor_msgs__msg__Temperature__fini(&temperature_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, Temperature);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSTemperature& Input)
    {
        Input.SetROS2(temperature_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSTemperature& Output) const
    {
        Output.SetFromROS2(temperature_msg);
    }

    virtual void* Get() override
    {
        return &temperature_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename temperature_msg;
};

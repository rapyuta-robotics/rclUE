#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "sensor_msgs/msg/relative_humidity.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"

#include "ROS2RelativeHumidity.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSRelativeHumidity
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__RelativeHumidity;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float relative_humidity;
    // rclc type: double relative_humidity

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float variance;
    // rclc type: double variance

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        relative_humidity = in_ros_data.relative_humidity;
        variance = in_ros_data.variance;
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        out_ros_data.relative_humidity = relative_humidity;
        out_ros_data.variance = variance;
    }
};

UCLASS()
class RCLUE_API UROS2RelativeHumidity : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__RelativeHumidity;

public:
    virtual void Init() override
    {
        sensor_msgs__msg__RelativeHumidity__init(&relative_humidity_msg);
    }

    virtual void Fini() override
    {
        sensor_msgs__msg__RelativeHumidity__fini(&relative_humidity_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, RelativeHumidity);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSRelativeHumidity& Input)
    {
        Input.SetROS2(relative_humidity_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSRelativeHumidity& Output) const
    {
        Output.SetFromROS2(relative_humidity_msg);
    }

    virtual void* Get() override
    {
        return &relative_humidity_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename relative_humidity_msg;
};

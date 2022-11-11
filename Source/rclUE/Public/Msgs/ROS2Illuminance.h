#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "sensor_msgs/msg/illuminance.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"

#include "ROS2Illuminance.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSIlluminance
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__Illuminance;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float illuminance;
    // rclc type: double illuminance

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float variance;
    // rclc type: double variance

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        illuminance = in_ros_data.illuminance;
        variance = in_ros_data.variance;
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        out_ros_data.illuminance = illuminance;
        out_ros_data.variance = variance;
    }
};

UCLASS()
class RCLUE_API UROS2Illuminance : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__Illuminance;

public:
    virtual void Init() override
    {
        sensor_msgs__msg__Illuminance__init(&illuminance_msg);
    }

    virtual void Fini() override
    {
        sensor_msgs__msg__Illuminance__fini(&illuminance_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, Illuminance);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSIlluminance& Input)
    {
        Input.SetROS2(illuminance_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSIlluminance& Output) const
    {
        Output.SetFromROS2(illuminance_msg);
    }

    virtual void* Get() override
    {
        return &illuminance_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename illuminance_msg;
};

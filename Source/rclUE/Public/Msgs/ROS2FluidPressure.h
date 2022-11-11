#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "sensor_msgs/msg/fluid_pressure.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"

#include "ROS2FluidPressure.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSFluidPressure
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__FluidPressure;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float fluid_pressure;
    // rclc type: double fluid_pressure

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float variance;
    // rclc type: double variance

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        fluid_pressure = in_ros_data.fluid_pressure;
        variance = in_ros_data.variance;
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        out_ros_data.fluid_pressure = fluid_pressure;
        out_ros_data.variance = variance;
    }
};

UCLASS()
class RCLUE_API UROS2FluidPressure : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__FluidPressure;

public:
    virtual void Init() override
    {
        sensor_msgs__msg__FluidPressure__init(&fluid_pressure_msg);
    }

    virtual void Fini() override
    {
        sensor_msgs__msg__FluidPressure__fini(&fluid_pressure_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, FluidPressure);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSFluidPressure& Input)
    {
        Input.SetROS2(fluid_pressure_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSFluidPressure& Output) const
    {
        Output.SetFromROS2(fluid_pressure_msg);
    }

    virtual void* Get() override
    {
        return &fluid_pressure_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename fluid_pressure_msg;
};

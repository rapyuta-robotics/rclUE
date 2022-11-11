#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "sensor_msgs/msg/range.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"

#include "ROS2Range.generated.h"


UENUM(BlueprintType)
enum class UROSRadiationType : uint8
{
    ULTRASOUND = 0,
    INFRARED = 1
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSRange
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__Range;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UROSRadiationType radiation_type;
    // rclc type: uint8_t radiation_type

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float field_of_view;
    // rclc type: float field_of_view

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float min_range;
    // rclc type: float min_range

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float max_range;
    // rclc type: float max_range

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float range;
    // rclc type: float range

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        radiation_type = static_cast<UROSRadiationType>(in_ros_data.radiation_type);
        field_of_view = in_ros_data.field_of_view;
        min_range = in_ros_data.min_range;
        max_range = in_ros_data.max_range;
        range = in_ros_data.range;
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        out_ros_data.radiation_type = static_cast<uint8>(radiation_type);
        out_ros_data.field_of_view = field_of_view;
        out_ros_data.min_range = min_range;
        out_ros_data.max_range = max_range;
        out_ros_data.range = range;
    }
};

UCLASS()
class RCLUE_API UROS2Range : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__Range;

public:
    virtual void Init() override
    {
        sensor_msgs__msg__Range__init(&range_msg);
    }

    virtual void Fini() override
    {
        sensor_msgs__msg__Range__fini(&range_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, Range);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSRange& Input)
    {
        Input.SetROS2(range_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSRange& Output) const
    {
        Output.SetFromROS2(range_msg);
    }

    virtual void* Get() override
    {
        return &range_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename range_msg;
};

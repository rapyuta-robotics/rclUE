#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "sensor_msgs/msg/point_field.h"



#include "ROS2PointField.generated.h"

// TODO - Cannot use enum for datatype in PointField

USTRUCT(Blueprintable)
struct RCLUE_API FROSPointField
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__PointField;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString name;
    // rclc type: rosidl_runtime_c__String name

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int offset;
    // rclc type: uint32_t offset

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int datatype;
    // rclc type: uint8_t datatype

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int count;
    // rclc type: uint32_t count

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        name = ROS2MsgToUE::From(in_ros_data.name);
        offset = in_ros_data.offset;
        datatype = in_ros_data.datatype;
        count = in_ros_data.count;
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        UEToROS2Msg::Set(name, out_ros_data.name);
        out_ros_data.offset = offset;
        out_ros_data.datatype = datatype;
        out_ros_data.count = count;
    }
};

UCLASS()
class RCLUE_API UROS2PointField : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__PointField;

public:
    virtual void Init() override
    {
        sensor_msgs__msg__PointField__init(&point_field_msg);
    }

    virtual void Fini() override
    {
        sensor_msgs__msg__PointField__fini(&point_field_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, PointField);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSPointField& Input)
    {
        Input.SetROS2(point_field_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSPointField& Output) const
    {
        Output.SetFromROS2(point_field_msg);
    }

    virtual void* Get() override
    {
        return &point_field_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename point_field_msg;
};

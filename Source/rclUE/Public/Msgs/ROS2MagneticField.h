#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "sensor_msgs/msg/magnetic_field.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2Vector3.h"

#include "ROS2MagneticField.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSMagneticField
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__MagneticField;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector magnetic_field = FVector(EForceInit::ForceInitToZero);
    // rclc type: geometry_msgs__msg__Vector3 magnetic_field

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<float> magnetic_field_covariance = ArrayInitialisers::FloatArray(9);
    // rclc type: double magnetic_field_covariance[9]

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        magnetic_field = ROS2MsgToUE::From(in_ros_data.magnetic_field);
        magnetic_field_covariance = ROS2MsgToUE::FromArray(in_ros_data.magnetic_field_covariance);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        UEToROS2Msg::Set(magnetic_field, out_ros_data.magnetic_field);
        UEToROS2Msg::SetSequence(magnetic_field_covariance, out_ros_data.magnetic_field_covariance);
    }
};

UCLASS()
class RCLUE_API UROS2MagneticField : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__MagneticField;

public:
    virtual void Init() override
    {
        sensor_msgs__msg__MagneticField__init(&magnetic_field_msg);
    }

    virtual void Fini() override
    {
        sensor_msgs__msg__MagneticField__fini(&magnetic_field_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, MagneticField);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSMagneticField& Input)
    {
        Input.SetROS2(magnetic_field_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSMagneticField& Output) const
    {
        Output.SetFromROS2(magnetic_field_msg);
    }

    virtual void* Get() override
    {
        return &magnetic_field_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename magnetic_field_msg;
};

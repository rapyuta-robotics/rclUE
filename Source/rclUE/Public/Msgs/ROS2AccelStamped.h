#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geometry_msgs/msg/accel_stamped.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2Accel.h"

#include "ROS2AccelStamped.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSAccelStamped
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__AccelStamped;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSAccel accel;
    // rclc type: geometry_msgs__msg__Accel accel

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        accel.SetFromROS2(in_ros_data.accel);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        accel.SetROS2(out_ros_data.accel);
    }
};

UCLASS()
class RCLUE_API UROS2AccelStamped : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__AccelStamped;

public:
    virtual void Init() override
    {
        geometry_msgs__msg__AccelStamped__init(&accel_stamped_msg);
    }

    virtual void Fini() override
    {
        geometry_msgs__msg__AccelStamped__fini(&accel_stamped_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, AccelStamped);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSAccelStamped& Input)
    {
        Input.SetROS2(accel_stamped_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSAccelStamped& Output) const
    {
        Output.SetFromROS2(accel_stamped_msg);
    }

    virtual void* Get() override
    {
        return &accel_stamped_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename accel_stamped_msg;
};

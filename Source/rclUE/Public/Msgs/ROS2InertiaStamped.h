#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geometry_msgs/msg/inertia_stamped.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2Inertia.h"

#include "ROS2InertiaStamped.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSInertiaStamped
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__InertiaStamped;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSInertia inertia;
    // rclc type: geometry_msgs__msg__Inertia inertia

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        inertia.SetFromROS2(in_ros_data.inertia);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        inertia.SetROS2(out_ros_data.inertia);
    }
};

UCLASS()
class RCLUE_API UROS2InertiaStamped : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__InertiaStamped;

public:
    virtual void Init() override
    {
        geometry_msgs__msg__InertiaStamped__init(&inertia_stamped_msg);
    }

    virtual void Fini() override
    {
        geometry_msgs__msg__InertiaStamped__fini(&inertia_stamped_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, InertiaStamped);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSInertiaStamped& Input)
    {
        Input.SetROS2(inertia_stamped_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSInertiaStamped& Output) const
    {
        Output.SetFromROS2(inertia_stamped_msg);
    }

    virtual void* Get() override
    {
        return &inertia_stamped_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename inertia_stamped_msg;
};

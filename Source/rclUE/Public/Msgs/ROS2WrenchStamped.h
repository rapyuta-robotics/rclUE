#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geometry_msgs/msg/wrench_stamped.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2Wrench.h"

#include "ROS2WrenchStamped.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSWrenchStamped
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__WrenchStamped;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSWrench wrench;
    // rclc type: geometry_msgs__msg__Wrench wrench

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        wrench.SetFromROS2(in_ros_data.wrench);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        wrench.SetROS2(out_ros_data.wrench);
    }
};

UCLASS()
class RCLUE_API UROS2WrenchStamped : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__WrenchStamped;

public:
    virtual void Init() override
    {
        geometry_msgs__msg__WrenchStamped__init(&wrench_stamped_msg);
    }

    virtual void Fini() override
    {
        geometry_msgs__msg__WrenchStamped__fini(&wrench_stamped_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, WrenchStamped);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSWrenchStamped& Input)
    {
        Input.SetROS2(wrench_stamped_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSWrenchStamped& Output) const
    {
        Output.SetFromROS2(wrench_stamped_msg);
    }

    virtual void* Get() override
    {
        return &wrench_stamped_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename wrench_stamped_msg;
};

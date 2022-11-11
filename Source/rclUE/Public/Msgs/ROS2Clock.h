#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "rosgraph_msgs/msg/clock.h"


// Include directives for member types
#include "Msgs/ROS2Time.h"

#include "ROS2Clock.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSClock
{
    GENERATED_BODY()

    using ros_msg_c_typename = rosgraph_msgs__msg__Clock;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FDateTime clock;
    // rclc type: builtin_interfaces__msg__Time clock

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        clock = ROS2MsgToUE::From(in_ros_data.clock);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        UEToROS2Msg::Set(clock, out_ros_data.clock);
    }
};

UCLASS()
class RCLUE_API UROS2Clock : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = rosgraph_msgs__msg__Clock;

public:
    virtual void Init() override
    {
        rosgraph_msgs__msg__Clock__init(&clock_msg);
    }

    virtual void Fini() override
    {
        rosgraph_msgs__msg__Clock__fini(&clock_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(rosgraph_msgs, msg, Clock);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSClock& Input)
    {
        Input.SetROS2(clock_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSClock& Output) const
    {
        Output.SetFromROS2(clock_msg);
    }

    virtual void* Get() override
    {
        return &clock_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename clock_msg;
};

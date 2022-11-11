#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "std_msgs/msg/header.h"


// Include directives for member types
#include "Msgs/ROS2Time.h"

#include "ROS2Header.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSHeader
{
    GENERATED_BODY()

    using ros_msg_c_typename = std_msgs__msg__Header;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FDateTime stamp;
    // rclc type: builtin_interfaces__msg__Time stamp

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString frame_id;
    // rclc type: rosidl_runtime_c__String frame_id

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        stamp = ROS2MsgToUE::From(in_ros_data.stamp);
        frame_id = ROS2MsgToUE::From(in_ros_data.frame_id);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        UEToROS2Msg::Set(stamp, out_ros_data.stamp);
        UEToROS2Msg::Set(frame_id, out_ros_data.frame_id);
    }
};

UCLASS()
class RCLUE_API UROS2Header : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = std_msgs__msg__Header;

public:
    virtual void Init() override
    {
        std_msgs__msg__Header__init(&header_msg);
    }

    virtual void Fini() override
    {
        std_msgs__msg__Header__fini(&header_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Header);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSHeader& Input)
    {
        Input.SetROS2(header_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSHeader& Output) const
    {
        Output.SetFromROS2(header_msg);
    }

    virtual void* Get() override
    {
        return &header_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename header_msg;
};

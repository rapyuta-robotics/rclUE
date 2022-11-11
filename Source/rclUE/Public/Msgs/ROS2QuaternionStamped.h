#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geometry_msgs/msg/quaternion_stamped.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2Quaternion.h"

#include "ROS2QuaternionStamped.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSQuaternionStamped
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__QuaternionStamped;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FQuat quaternion = FQuat(EForceInit::ForceInitToZero);
    // rclc type: geometry_msgs__msg__Quaternion quaternion

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        quaternion = ROS2MsgToUE::From(in_ros_data.quaternion);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        UEToROS2Msg::Set(quaternion, out_ros_data.quaternion);
    }
};

UCLASS()
class RCLUE_API UROS2QuaternionStamped : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__QuaternionStamped;

public:
    virtual void Init() override
    {
        geometry_msgs__msg__QuaternionStamped__init(&quaternion_stamped_msg);
    }

    virtual void Fini() override
    {
        geometry_msgs__msg__QuaternionStamped__fini(&quaternion_stamped_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, QuaternionStamped);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSQuaternionStamped& Input)
    {
        Input.SetROS2(quaternion_stamped_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSQuaternionStamped& Output) const
    {
        Output.SetFromROS2(quaternion_stamped_msg);
    }

    virtual void* Get() override
    {
        return &quaternion_stamped_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename quaternion_stamped_msg;
};

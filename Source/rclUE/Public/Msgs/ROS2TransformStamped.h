#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geometry_msgs/msg/transform_stamped.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2Transform.h"

#include "ROS2TransformStamped.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSTransformStamped
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__TransformStamped;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString child_frame_id;
    // rclc type: rosidl_runtime_c__String child_frame_id

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSTransform transform;
    // rclc type: geometry_msgs__msg__Transform transform

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        child_frame_id = ROS2MsgToUE::From(in_ros_data.child_frame_id);
        transform.SetFromROS2(in_ros_data.transform);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        UEToROS2Msg::Set(child_frame_id, out_ros_data.child_frame_id);
        transform.SetROS2(out_ros_data.transform);
    }
};

UCLASS()
class RCLUE_API UROS2TransformStamped : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__TransformStamped;

public:
    virtual void Init() override
    {
        geometry_msgs__msg__TransformStamped__init(&transform_stamped_msg);
    }

    virtual void Fini() override
    {
        geometry_msgs__msg__TransformStamped__fini(&transform_stamped_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, TransformStamped);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSTransformStamped& Input)
    {
        Input.SetROS2(transform_stamped_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSTransformStamped& Output) const
    {
        Output.SetFromROS2(transform_stamped_msg);
    }

    virtual void* Get() override
    {
        return &transform_stamped_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename transform_stamped_msg;
};

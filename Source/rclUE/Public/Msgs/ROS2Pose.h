#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geometry_msgs/msg/pose.h"


// Include directives for member types
#include "Msgs/ROS2Point.h"
#include "Msgs/ROS2Quaternion.h"

#include "ROS2Pose.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSPose
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__Pose;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector position = FVector(EForceInit::ForceInitToZero);
    // rclc type: geometry_msgs__msg__Point position

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FQuat orientation = FQuat(EForceInit::ForceInitToZero);
    // rclc type: geometry_msgs__msg__Quaternion orientation

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        position = ROS2MsgToUE::From(in_ros_data.position);
        orientation = ROS2MsgToUE::From(in_ros_data.orientation);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        UEToROS2Msg::Set(position, out_ros_data.position);
        UEToROS2Msg::Set(orientation, out_ros_data.orientation);
    }
};

UCLASS()
class RCLUE_API UROS2Pose : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__Pose;

public:
    virtual void Init() override
    {
        geometry_msgs__msg__Pose__init(&pose_msg);
    }

    virtual void Fini() override
    {
        geometry_msgs__msg__Pose__fini(&pose_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Pose);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSPose& Input)
    {
        Input.SetROS2(pose_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSPose& Output) const
    {
        Output.SetFromROS2(pose_msg);
    }

    virtual void* Get() override
    {
        return &pose_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename pose_msg;
};

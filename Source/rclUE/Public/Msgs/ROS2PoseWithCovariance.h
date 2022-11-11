#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geometry_msgs/msg/pose_with_covariance.h"


// Include directives for member types
#include "Msgs/ROS2Pose.h"

#include "ROS2PoseWithCovariance.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSPoseWithCovariance
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__PoseWithCovariance;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSPose pose;
    // rclc type: geometry_msgs__msg__Pose pose

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<float> covariance = ArrayInitialisers::FloatArray(36);
    // rclc type: double covariance[36]

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        pose.SetFromROS2(in_ros_data.pose);
        covariance = ROS2MsgToUE::FromArray(in_ros_data.covariance);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        pose.SetROS2(out_ros_data.pose);
        UEToROS2Msg::SetSequence(covariance, out_ros_data.covariance);
    }
};

UCLASS()
class RCLUE_API UROS2PoseWithCovariance : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__PoseWithCovariance;

public:
    virtual void Init() override
    {
        geometry_msgs__msg__PoseWithCovariance__init(&pose_with_covariance_msg);
    }

    virtual void Fini() override
    {
        geometry_msgs__msg__PoseWithCovariance__fini(&pose_with_covariance_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, PoseWithCovariance);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSPoseWithCovariance& Input)
    {
        Input.SetROS2(pose_with_covariance_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSPoseWithCovariance& Output) const
    {
        Output.SetFromROS2(pose_with_covariance_msg);
    }

    virtual void* Get() override
    {
        return &pose_with_covariance_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename pose_with_covariance_msg;
};

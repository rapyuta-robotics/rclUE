#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geometry_msgs/msg/pose_with_covariance_stamped.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2PoseWithCovariance.h"

#include "ROS2PoseWithCovarianceStamped.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSPoseWithCovarianceStamped
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__PoseWithCovarianceStamped;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSPoseWithCovariance pose;
    // rclc type: geometry_msgs__msg__PoseWithCovariance pose

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        pose.SetFromROS2(in_ros_data.pose);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        pose.SetROS2(out_ros_data.pose);
    }
};

UCLASS()
class RCLUE_API UROS2PoseWithCovarianceStamped : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__PoseWithCovarianceStamped;

public:
    virtual void Init() override
    {
        geometry_msgs__msg__PoseWithCovarianceStamped__init(&pose_with_covariance_stamped_msg);
    }

    virtual void Fini() override
    {
        geometry_msgs__msg__PoseWithCovarianceStamped__fini(&pose_with_covariance_stamped_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, PoseWithCovarianceStamped);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSPoseWithCovarianceStamped& Input)
    {
        Input.SetROS2(pose_with_covariance_stamped_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSPoseWithCovarianceStamped& Output) const
    {
        Output.SetFromROS2(pose_with_covariance_stamped_msg);
    }

    virtual void* Get() override
    {
        return &pose_with_covariance_stamped_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename pose_with_covariance_stamped_msg;
};

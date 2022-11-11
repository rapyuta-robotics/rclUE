#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "nav_msgs/msg/odometry.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2PoseWithCovariance.h"
#include "Msgs/ROS2TwistWithCovariance.h"

#include "ROS2Odometry.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSOdometry
{
    GENERATED_BODY()

    using ros_msg_c_typename = nav_msgs__msg__Odometry;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString child_frame_id;
    // rclc type: rosidl_runtime_c__String child_frame_id

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSPoseWithCovariance pose;
    // rclc type: geometry_msgs__msg__PoseWithCovariance pose

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSTwistWithCovariance twist;
    // rclc type: geometry_msgs__msg__TwistWithCovariance twist

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        child_frame_id = ROS2MsgToUE::From(in_ros_data.child_frame_id);
        pose.SetFromROS2(in_ros_data.pose);
        twist.SetFromROS2(in_ros_data.twist);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        UEToROS2Msg::Set(child_frame_id, out_ros_data.child_frame_id);
        pose.SetROS2(out_ros_data.pose);
        twist.SetROS2(out_ros_data.twist);
    }
};

UCLASS()
class RCLUE_API UROS2Odometry : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = nav_msgs__msg__Odometry;

public:
    virtual void Init() override
    {
        nav_msgs__msg__Odometry__init(&odometry_msg);
    }

    virtual void Fini() override
    {
        nav_msgs__msg__Odometry__fini(&odometry_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(nav_msgs, msg, Odometry);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSOdometry& Input)
    {
        Input.SetROS2(odometry_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSOdometry& Output) const
    {
        Output.SetFromROS2(odometry_msg);
    }

    virtual void* Get() override
    {
        return &odometry_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename odometry_msg;
};

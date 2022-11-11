#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geometry_msgs/msg/pose_array.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2Pose.h"

#include "ROS2PoseArray.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSPoseArray
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__PoseArray;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSPose> poses;
    // rclc type: geometry_msgs__msg__Pose__Sequence poses

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        poses = ROS2MsgToUE::FromStructSequence<FROSPose>(in_ros_data.poses);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        UEToROS2Msg::SetStructSequence(poses, out_ros_data.poses);
    }
};

UCLASS()
class RCLUE_API UROS2PoseArray : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__PoseArray;

public:
    virtual void Init() override
    {
        geometry_msgs__msg__PoseArray__init(&pose_array_msg);
    }

    virtual void Fini() override
    {
        geometry_msgs__msg__PoseArray__fini(&pose_array_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, PoseArray);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSPoseArray& Input)
    {
        Input.SetROS2(pose_array_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSPoseArray& Output) const
    {
        Output.SetFromROS2(pose_array_msg);
    }

    virtual void* Get() override
    {
        return &pose_array_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename pose_array_msg;
};

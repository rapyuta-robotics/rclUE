#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geometry_msgs/msg/pose2_d.h"



#include "ROS2Pose2D.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSPose2D
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__Pose2D;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float x;
    // rclc type: double x

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float y;
    // rclc type: double y

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float theta;
    // rclc type: double theta

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        x = in_ros_data.x;
        y = in_ros_data.y;
        theta = in_ros_data.theta;
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        out_ros_data.x = x;
        out_ros_data.y = y;
        out_ros_data.theta = theta;
    }
};

UCLASS()
class RCLUE_API UROS2Pose2D : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__Pose2D;

public:
    virtual void Init() override
    {
        geometry_msgs__msg__Pose2D__init(&pose2_d_msg);
    }

    virtual void Fini() override
    {
        geometry_msgs__msg__Pose2D__fini(&pose2_d_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Pose2D);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSPose2D& Input)
    {
        Input.SetROS2(pose2_d_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSPose2D& Output) const
    {
        Output.SetFromROS2(pose2_d_msg);
    }

    virtual void* Get() override
    {
        return &pose2_d_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename pose2_d_msg;
};

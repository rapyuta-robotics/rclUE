// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/Pose2D.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "geometry_msgs/msg/pose2_d.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)

// Generated
#include "ROS2Pose2D.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSPose2D
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere)
    double X = 0.f;

    UPROPERTY(EditAnywhere)
    double Y = 0.f;

    UPROPERTY(EditAnywhere)
    double Theta = 0.f;

    FROSPose2D()
    {
    }

    void SetFromROS2(const geometry_msgs__msg__Pose2D& in_ros_data)
    {
        X = in_ros_data.x;

        Y = in_ros_data.y;

        Theta = in_ros_data.theta;
    }

    void SetROS2(geometry_msgs__msg__Pose2D& out_ros_data) const
    {
        out_ros_data.x = X;

        out_ros_data.y = Y;

        out_ros_data.theta = Theta;
    }
};

UCLASS()
class RCLUE_API UROS2Pose2DMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSPose2D& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSPose2D& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    geometry_msgs__msg__Pose2D pose2_d_msg;
};

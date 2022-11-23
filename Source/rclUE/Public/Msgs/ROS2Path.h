// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from nav_msgs/msg/Path.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "nav_msgs/msg/path.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2PoseStamped.h"
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

// Generated
#include "ROS2Path.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSPath
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader Header;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSPoseStamped> Poses;

    FROSPath()
    {
    }

    void SetFromROS2(const nav_msgs__msg__Path& in_ros_data)
    {
        Header.SetFromROS2(in_ros_data.header);

        UROS2Utils::SequenceROSToUEArray<geometry_msgs__msg__PoseStamped, FROSPoseStamped>(
            in_ros_data.poses.data, Poses, in_ros_data.poses.size);
    }

    void SetROS2(nav_msgs__msg__Path& out_ros_data) const
    {
        Header.SetROS2(out_ros_data.header);

        if (out_ros_data.poses.data)
        {
            geometry_msgs__msg__PoseStamped__Sequence__fini(&out_ros_data.poses);
        }
        if (!geometry_msgs__msg__PoseStamped__Sequence__init(&out_ros_data.poses, Poses.Num()))
        {
            UE_LOG(LogTemp, Error, TEXT("failed to create array for field out_ros_data.poses  "));
        }
        UROS2Utils::ArrayUEToROSSequence<geometry_msgs__msg__PoseStamped, FROSPoseStamped>(
            Poses, out_ros_data.poses.data, Poses.Num());
    }
};

UCLASS()
class RCLUE_API UROS2PathMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSPath& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSPath& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    nav_msgs__msg__Path path_msg;
};

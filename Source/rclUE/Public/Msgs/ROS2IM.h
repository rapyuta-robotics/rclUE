// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from visualization_msgs/msg/InteractiveMarker.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "visualization_msgs/msg/interactive_marker.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2IMCtrl.h"
#include "Msgs/ROS2MenuEntry.h"
#include "Msgs/ROS2Pose.h"
#include "visualization_msgs/msg/detail/interactive_marker_control__functions.h"
#include "visualization_msgs/msg/detail/menu_entry__functions.h"

// Generated
#include "ROS2IM.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSIM
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader Header;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSPose Pose;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Description;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Scale = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSMenuEntry> MenuEntries;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSIMCtrl> Controls;

    FROSIM()
    {
    }

    void SetFromROS2(const visualization_msgs__msg__InteractiveMarker& in_ros_data)
    {
        Header.SetFromROS2(in_ros_data.header);

        Pose.SetFromROS2(in_ros_data.pose);

        Name = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.name);

        Description = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.description);

        Scale = in_ros_data.scale;

        UROS2Utils::SequenceROSToUEArray<visualization_msgs__msg__MenuEntry, FROSMenuEntry>(
            in_ros_data.menu_entries.data, MenuEntries, in_ros_data.menu_entries.size);

        UROS2Utils::SequenceROSToUEArray<visualization_msgs__msg__InteractiveMarkerControl, FROSIMCtrl>(
            in_ros_data.controls.data, Controls, in_ros_data.controls.size);
    }

    void SetROS2(visualization_msgs__msg__InteractiveMarker& out_ros_data) const
    {
        Header.SetROS2(out_ros_data.header);

        Pose.SetROS2(out_ros_data.pose);

        UROS2Utils::StringUEToROS<rosidl_runtime_c__String>(Name, out_ros_data.name);

        UROS2Utils::StringUEToROS<rosidl_runtime_c__String>(Description, out_ros_data.description);

        out_ros_data.scale = Scale;

        visualization_msgs__msg__MenuEntry__Sequence__init(&out_ros_data.menu_entries, MenuEntries.Num());
        UROS2Utils::ArrayUEToROSSequence<visualization_msgs__msg__MenuEntry, FROSMenuEntry>(
            MenuEntries, out_ros_data.menu_entries.data, MenuEntries.Num());

        visualization_msgs__msg__InteractiveMarkerControl__Sequence__init(&out_ros_data.controls, Controls.Num());
        UROS2Utils::ArrayUEToROSSequence<visualization_msgs__msg__InteractiveMarkerControl, FROSIMCtrl>(
            Controls, out_ros_data.controls.data, Controls.Num());
    }
};

UCLASS()
class RCLUE_API UROS2IMMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSIM& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSIM& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    visualization_msgs__msg__InteractiveMarker interactive_marker_msg;
};

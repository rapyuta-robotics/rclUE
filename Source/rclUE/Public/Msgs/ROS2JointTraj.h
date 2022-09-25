// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from trajectory_msgs/msg/JointTrajectory.msg
// - do not modify

#pragma once

// UE
#include <CoreMinimal.h>

// ROS
#include "trajectory_msgs/msg/joint_trajectory.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2JointTrajPoint.h"

// Generated
#include "ROS2JointTraj.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSJointTraj {
  GENERATED_BODY()

public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FROSHeader Header;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  TArray<FString> JointNames;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  TArray<FROSJointTrajPoint> Points;

  FROSJointTraj() {}

  void SetFromROS2(const trajectory_msgs__msg__JointTrajectory &in_ros_data) {
    Header.SetFromROS2(in_ros_data.header);

    for (auto i = 0; i < in_ros_data.joint_names.size; ++i) {
      JointNames.Emplace("");
      JointNames[i].AppendChars(in_ros_data.joint_names.data[i].data,
                                in_ros_data.joint_names.data[i].size);
    }

    for (auto i = 0; i < in_ros_data.points.size; ++i) {
      Points[i].SetFromROS2(in_ros_data.points.data[i]);
    }
  }

  void SetROS2(trajectory_msgs__msg__JointTrajectory &out_ros_data) const {
    Header.SetROS2(out_ros_data.header);

    if (out_ros_data.joint_names.data != nullptr) {
      free(out_ros_data.joint_names.data);
    }
    out_ros_data.joint_names.data =
        (decltype(out_ros_data.joint_names.data))malloc(
            (JointNames.Num()) *
            sizeof(decltype(*out_ros_data.joint_names.data)));
    for (auto i = 0; i < JointNames.Num(); ++i) {
      {
        FTCHARToUTF8 strUtf8(*JointNames[i]);
        int32 strLength = strUtf8.Length();
        if (out_ros_data.joint_names.data[i].data != nullptr) {
          free(out_ros_data.joint_names.data[i].data);
        }
        out_ros_data.joint_names.data[i].data =
            (char *)malloc((strLength + 1) * sizeof(char));
        memcpy(out_ros_data.joint_names.data[i].data,
               TCHAR_TO_UTF8(*JointNames[i]), (strLength + 1) * sizeof(char));
        out_ros_data.joint_names.data[i].size = strLength;
        out_ros_data.joint_names.data[i].capacity = strLength + 1;
      }
    }

    if (out_ros_data.points.data != nullptr) {
      free(out_ros_data.points.data);
    }
    out_ros_data.points.data = (decltype(out_ros_data.points.data))malloc(
        (Points.Num()) * sizeof(decltype(*out_ros_data.points.data)));

    for (auto i = 0; i < Points.Num(); ++i) {
      Points[i].SetROS2(out_ros_data.points.data[i]);
    }

    out_ros_data.points.size = Points.Num();
    out_ros_data.points.capacity = Points.Num();
  }
};

UCLASS()
class RCLUE_API UROS2JointTrajMsg : public UROS2GenericMsg {
  GENERATED_BODY()

public:
  virtual void Init() override;
  virtual void Fini() override;

  virtual const rosidl_message_type_support_t *GetTypeSupport() const override;

  UFUNCTION(BlueprintCallable)
  void SetMsg(const FROSJointTraj &Input);

  UFUNCTION(BlueprintCallable)
  void GetMsg(FROSJointTraj &Output) const;

  virtual void *Get() override;

private:
  virtual FString MsgToString() const override;

  trajectory_msgs__msg__JointTrajectory joint_trajectory_msg;
};
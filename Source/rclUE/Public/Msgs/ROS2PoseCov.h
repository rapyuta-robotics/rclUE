// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from
// geometry_msgs/msg/PoseWithCovariance.msg - do not modify

#pragma once

// UE
#include <CoreMinimal.h>

// ROS
#include "geometry_msgs/msg/pose_with_covariance.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Pose.h"

// Generated
#include "ROS2PoseCov.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSPoseCov {
  GENERATED_BODY()

public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FROSPose Pose;

  UPROPERTY(EditAnywhere)
  TArray<double> Covariance;

  FROSPoseCov() { Covariance.SetNumZeroed(36); }

  void SetFromROS2(const geometry_msgs__msg__PoseWithCovariance &in_ros_data) {
    Pose.SetFromROS2(in_ros_data.pose);

    UROS2Utils::SequenceROSToUEArray<double, double>(in_ros_data.covariance,
                                                     Covariance, 36);
  }

  void SetROS2(geometry_msgs__msg__PoseWithCovariance &out_ros_data) const {
    Pose.SetROS2(out_ros_data.pose);

    UROS2Utils::ArrayUEToROSSequence<double, double>(
        Covariance, out_ros_data.covariance, 36);
  }
};

UCLASS()
class RCLUE_API UROS2PoseCovMsg : public UROS2GenericMsg {
  GENERATED_BODY()

public:
  virtual void Init() override;
  virtual void Fini() override;

  virtual const rosidl_message_type_support_t *GetTypeSupport() const override;

  UFUNCTION(BlueprintCallable)
  void SetMsg(const FROSPoseCov &Input);

  UFUNCTION(BlueprintCallable)
  void GetMsg(FROSPoseCov &Output) const;

  virtual void *Get() override;

private:
  virtual FString MsgToString() const override;

  geometry_msgs__msg__PoseWithCovariance pose_with_covariance_msg;
};
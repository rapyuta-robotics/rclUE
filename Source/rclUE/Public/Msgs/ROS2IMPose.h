// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from
// visualization_msgs/msg/InteractiveMarkerPose.msg - do not modify

#pragma once

// UE
#include <CoreMinimal.h>

// ROS
#include "visualization_msgs/msg/interactive_marker_pose.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2Pose.h"

// Generated
#include "ROS2IMPose.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSIMPose {
  GENERATED_BODY()

public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FROSHeader Header;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FROSPose Pose;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FString Name;

  FROSIMPose() {}

  void SetFromROS2(
      const visualization_msgs__msg__InteractiveMarkerPose &in_ros_data) {
    Header.SetFromROS2(in_ros_data.header);

    Pose.SetFromROS2(in_ros_data.pose);

    Name.AppendChars(in_ros_data.name.data, in_ros_data.name.size);
  }

  void
  SetROS2(visualization_msgs__msg__InteractiveMarkerPose &out_ros_data) const {
    Header.SetROS2(out_ros_data.header);

    Pose.SetROS2(out_ros_data.pose);

    {
      FTCHARToUTF8 strUtf8(*Name);
      int32 strLength = strUtf8.Length();
      if (out_ros_data.name.data != nullptr) {
        free(out_ros_data.name.data);
      }
      out_ros_data.name.data = (decltype(out_ros_data.name.data))malloc(
          (strLength + 1) * sizeof(decltype(*out_ros_data.name.data)));
      memcpy(out_ros_data.name.data, TCHAR_TO_UTF8(*Name),
             (strLength + 1) * sizeof(char));
      out_ros_data.name.size = strLength;
      out_ros_data.name.capacity = strLength + 1;
    }
  }
};

UCLASS()
class RCLUE_API UROS2IMPoseMsg : public UROS2GenericMsg {
  GENERATED_BODY()

public:
  virtual void Init() override;
  virtual void Fini() override;

  virtual const rosidl_message_type_support_t *GetTypeSupport() const override;

  UFUNCTION(BlueprintCallable)
  void SetMsg(const FROSIMPose &Input);

  UFUNCTION(BlueprintCallable)
  void GetMsg(FROSIMPose &Output) const;

  virtual void *Get() override;

private:
  virtual FString MsgToString() const override;

  visualization_msgs__msg__InteractiveMarkerPose interactive_marker_pose_msg;
};
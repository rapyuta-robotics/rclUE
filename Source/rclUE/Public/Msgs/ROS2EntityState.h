// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from ue_msgs/msg/EntityState.msg - do not
// modify

#pragma once

// UE
#include <CoreMinimal.h>

// ROS
#include "ue_msgs/msg/entity_state.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Pose.h"
#include "Msgs/ROS2Twist.h"

// Generated
#include "ROS2EntityState.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSEntityState {
  GENERATED_BODY()

public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FString Name;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FROSPose Pose;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FROSTwist Twist;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FString ReferenceFrame;

  FROSEntityState() {}

  void SetFromROS2(const ue_msgs__msg__EntityState &in_ros_data) {
    Name.AppendChars(in_ros_data.name.data, in_ros_data.name.size);

    Pose.SetFromROS2(in_ros_data.pose);

    Twist.SetFromROS2(in_ros_data.twist);

    ReferenceFrame.AppendChars(in_ros_data.reference_frame.data,
                               in_ros_data.reference_frame.size);
  }

  void SetROS2(ue_msgs__msg__EntityState &out_ros_data) const {
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

    Pose.SetROS2(out_ros_data.pose);

    Twist.SetROS2(out_ros_data.twist);

    {
      FTCHARToUTF8 strUtf8(*ReferenceFrame);
      int32 strLength = strUtf8.Length();
      if (out_ros_data.reference_frame.data != nullptr) {
        free(out_ros_data.reference_frame.data);
      }
      out_ros_data.reference_frame.data =
          (decltype(out_ros_data.reference_frame.data))malloc(
              (strLength + 1) *
              sizeof(decltype(*out_ros_data.reference_frame.data)));
      memcpy(out_ros_data.reference_frame.data, TCHAR_TO_UTF8(*ReferenceFrame),
             (strLength + 1) * sizeof(char));
      out_ros_data.reference_frame.size = strLength;
      out_ros_data.reference_frame.capacity = strLength + 1;
    }
  }
};

UCLASS()
class RCLUE_API UROS2EntityStateMsg : public UROS2GenericMsg {
  GENERATED_BODY()

public:
  virtual void Init() override;
  virtual void Fini() override;

  virtual const rosidl_message_type_support_t *GetTypeSupport() const override;

  UFUNCTION(BlueprintCallable)
  void SetMsg(const FROSEntityState &Input);

  UFUNCTION(BlueprintCallable)
  void GetMsg(FROSEntityState &Output) const;

  virtual void *Get() override;

private:
  virtual FString MsgToString() const override;

  ue_msgs__msg__EntityState entity_state_msg;
};
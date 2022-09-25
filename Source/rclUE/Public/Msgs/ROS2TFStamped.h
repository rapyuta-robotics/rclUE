// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/TransformStamped.msg
// - do not modify

#pragma once

// UE
#include <CoreMinimal.h>

// ROS
#include "geometry_msgs/msg/transform_stamped.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2TF.h"

// Generated
#include "ROS2TFStamped.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSTFStamped {
  GENERATED_BODY()

public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FROSHeader Header;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FString ChildFrameId;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FROSTF Transform;

  FROSTFStamped() {}

  void SetFromROS2(const geometry_msgs__msg__TransformStamped &in_ros_data) {
    Header.SetFromROS2(in_ros_data.header);

    ChildFrameId.AppendChars(in_ros_data.child_frame_id.data,
                             in_ros_data.child_frame_id.size);

    Transform.SetFromROS2(in_ros_data.transform);
  }

  void SetROS2(geometry_msgs__msg__TransformStamped &out_ros_data) const {
    Header.SetROS2(out_ros_data.header);

    {
      FTCHARToUTF8 strUtf8(*ChildFrameId);
      int32 strLength = strUtf8.Length();
      if (out_ros_data.child_frame_id.data != nullptr) {
        free(out_ros_data.child_frame_id.data);
      }
      out_ros_data.child_frame_id.data =
          (decltype(out_ros_data.child_frame_id.data))malloc(
              (strLength + 1) *
              sizeof(decltype(*out_ros_data.child_frame_id.data)));
      memcpy(out_ros_data.child_frame_id.data, TCHAR_TO_UTF8(*ChildFrameId),
             (strLength + 1) * sizeof(char));
      out_ros_data.child_frame_id.size = strLength;
      out_ros_data.child_frame_id.capacity = strLength + 1;
    }

    Transform.SetROS2(out_ros_data.transform);
  }
};

UCLASS()
class RCLUE_API UROS2TFStampedMsg : public UROS2GenericMsg {
  GENERATED_BODY()

public:
  virtual void Init() override;
  virtual void Fini() override;

  virtual const rosidl_message_type_support_t *GetTypeSupport() const override;

  UFUNCTION(BlueprintCallable)
  void SetMsg(const FROSTFStamped &Input);

  UFUNCTION(BlueprintCallable)
  void GetMsg(FROSTFStamped &Output) const;

  virtual void *Get() override;

private:
  virtual FString MsgToString() const override;

  geometry_msgs__msg__TransformStamped transform_stamped_msg;
};
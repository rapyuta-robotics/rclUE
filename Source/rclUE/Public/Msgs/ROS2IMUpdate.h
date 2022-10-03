// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from
// visualization_msgs/msg/InteractiveMarkerUpdate.msg - do not modify

#pragma once

// UE
#include <CoreMinimal.h>

// ROS
#include "visualization_msgs/msg/interactive_marker_update.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2IM.h"
#include "Msgs/ROS2IMPose.h"

// Generated
#include "ROS2IMUpdate.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSIMUpdate {
  GENERATED_BODY()

public:
  static constexpr uint8 KEEP_ALIVE = 0;
  static constexpr uint8 UPDATE = 1;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FString ServerId;

  UPROPERTY(EditAnywhere)
  uint64 SeqNum = 0;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  uint8 Type = 0;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  TArray<FROSIM> Markers;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  TArray<FROSIMPose> Poses;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  TArray<FString> Erases;

  FROSIMUpdate() {}

  void SetFromROS2(
      const visualization_msgs__msg__InteractiveMarkerUpdate &in_ros_data) {
    ServerId.AppendChars(in_ros_data.server_id.data,
                         in_ros_data.server_id.size);

    SeqNum = in_ros_data.seq_num;

    Type = in_ros_data.type;

    for (auto i = 0; i < in_ros_data.markers.size; ++i) {
      Markers[i].SetFromROS2(in_ros_data.markers.data[i]);
    }

    for (auto i = 0; i < in_ros_data.poses.size; ++i) {
      Poses[i].SetFromROS2(in_ros_data.poses.data[i]);
    }

    for (auto i = 0; i < in_ros_data.erases.size; ++i) {
      Erases.Emplace("");
      Erases[i].AppendChars(in_ros_data.erases.data[i].data,
                            in_ros_data.erases.data[i].size);
    }
  }

  void SetROS2(
      visualization_msgs__msg__InteractiveMarkerUpdate &out_ros_data) const {
    {
      FTCHARToUTF8 strUtf8(*ServerId);
      int32 strLength = strUtf8.Length();
      out_ros_data.server_id.data =
          (decltype(out_ros_data.server_id.data))malloc(
              (strLength + 1) * sizeof(decltype(*out_ros_data.server_id.data)));
      memcpy(out_ros_data.server_id.data, TCHAR_TO_UTF8(*ServerId),
             (strLength + 1) * sizeof(char));
      out_ros_data.server_id.size = strLength;
      out_ros_data.server_id.capacity = strLength + 1;
    }

    out_ros_data.seq_num = SeqNum;

    out_ros_data.type = Type;

    out_ros_data.markers.data = (decltype(out_ros_data.markers.data))malloc(
        (Markers.Num()) * sizeof(decltype(*out_ros_data.markers.data)));

    for (auto i = 0; i < Markers.Num(); ++i) {
      Markers[i].SetROS2(out_ros_data.markers.data[i]);
    }

    out_ros_data.markers.size = Markers.Num();
    out_ros_data.markers.capacity = Markers.Num();

    out_ros_data.poses.data = (decltype(out_ros_data.poses.data))malloc(
        (Poses.Num()) * sizeof(decltype(*out_ros_data.poses.data)));

    for (auto i = 0; i < Poses.Num(); ++i) {
      Poses[i].SetROS2(out_ros_data.poses.data[i]);
    }

    out_ros_data.poses.size = Poses.Num();
    out_ros_data.poses.capacity = Poses.Num();

    out_ros_data.erases.data = (decltype(out_ros_data.erases.data))malloc(
        (Erases.Num()) * sizeof(decltype(*out_ros_data.erases.data)));
    for (auto i = 0; i < Erases.Num(); ++i) {
      {
        FTCHARToUTF8 strUtf8(*Erases[i]);
        int32 strLength = strUtf8.Length();
        if (out_ros_data.erases.data[i].data != nullptr) {
          free(out_ros_data.erases.data[i].data);
        }
        out_ros_data.erases.data[i].data =
            (char *)malloc((strLength + 1) * sizeof(char));
        memcpy(out_ros_data.erases.data[i].data, TCHAR_TO_UTF8(*Erases[i]),
               (strLength + 1) * sizeof(char));
        out_ros_data.erases.data[i].size = strLength;
        out_ros_data.erases.data[i].capacity = strLength + 1;
      }
    }
  }
};

UCLASS()
class RCLUE_API UROS2IMUpdateMsg : public UROS2GenericMsg {
  GENERATED_BODY()

public:
  virtual void Init() override;
  virtual void Fini() override;

  virtual const rosidl_message_type_support_t *GetTypeSupport() const override;

  UFUNCTION(BlueprintCallable)
  void SetMsg(const FROSIMUpdate &Input);

  UFUNCTION(BlueprintCallable)
  void GetMsg(FROSIMUpdate &Output) const;

  virtual void *Get() override;

  UFUNCTION(BlueprintCallable)
  static uint8 CONST_KEEP_ALIVE() { return FROSIMUpdate::KEEP_ALIVE; }
  UFUNCTION(BlueprintCallable)
  static uint8 CONST_UPDATE() { return FROSIMUpdate::UPDATE; }

private:
  virtual FString MsgToString() const override;

  visualization_msgs__msg__InteractiveMarkerUpdate
      interactive_marker_update_msg;
};
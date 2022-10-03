// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from visualization_msgs/msg/MenuEntry.msg -
// do not modify

#pragma once

// UE
#include <CoreMinimal.h>

// ROS
#include "visualization_msgs/msg/menu_entry.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)

// Generated
#include "ROS2MenuEntry.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSMenuEntry {
  GENERATED_BODY()

public:
  static constexpr uint8 FEEDBACK = 0;
  static constexpr uint8 ROSRUN = 1;
  static constexpr uint8 ROSLAUNCH = 2;

  UPROPERTY(EditAnywhere)
  unsigned int Id = 0;

  UPROPERTY(EditAnywhere)
  unsigned int ParentId = 0;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FString Title;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FString Command;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  uint8 CommandType = 0;

  FROSMenuEntry() {}

  void SetFromROS2(const visualization_msgs__msg__MenuEntry &in_ros_data) {
    Id = in_ros_data.id;

    ParentId = in_ros_data.parent_id;

    Title.AppendChars(in_ros_data.title.data, in_ros_data.title.size);

    Command.AppendChars(in_ros_data.command.data, in_ros_data.command.size);

    CommandType = in_ros_data.command_type;
  }

  void SetROS2(visualization_msgs__msg__MenuEntry &out_ros_data) const {
    out_ros_data.id = Id;

    out_ros_data.parent_id = ParentId;

    {
      FTCHARToUTF8 strUtf8(*Title);
      int32 strLength = strUtf8.Length();
      out_ros_data.title.data = (decltype(out_ros_data.title.data))malloc(
          (strLength + 1) * sizeof(decltype(*out_ros_data.title.data)));
      memcpy(out_ros_data.title.data, TCHAR_TO_UTF8(*Title),
             (strLength + 1) * sizeof(char));
      out_ros_data.title.size = strLength;
      out_ros_data.title.capacity = strLength + 1;
    }

    {
      FTCHARToUTF8 strUtf8(*Command);
      int32 strLength = strUtf8.Length();
      out_ros_data.command.data = (decltype(out_ros_data.command.data))malloc(
          (strLength + 1) * sizeof(decltype(*out_ros_data.command.data)));
      memcpy(out_ros_data.command.data, TCHAR_TO_UTF8(*Command),
             (strLength + 1) * sizeof(char));
      out_ros_data.command.size = strLength;
      out_ros_data.command.capacity = strLength + 1;
    }

    out_ros_data.command_type = CommandType;
  }
};

UCLASS()
class RCLUE_API UROS2MenuEntryMsg : public UROS2GenericMsg {
  GENERATED_BODY()

public:
  virtual void Init() override;
  virtual void Fini() override;

  virtual const rosidl_message_type_support_t *GetTypeSupport() const override;

  UFUNCTION(BlueprintCallable)
  void SetMsg(const FROSMenuEntry &Input);

  UFUNCTION(BlueprintCallable)
  void GetMsg(FROSMenuEntry &Output) const;

  virtual void *Get() override;

  UFUNCTION(BlueprintCallable)
  static uint8 CONST_FEEDBACK() { return FROSMenuEntry::FEEDBACK; }
  UFUNCTION(BlueprintCallable)
  static uint8 CONST_ROSRUN() { return FROSMenuEntry::ROSRUN; }
  UFUNCTION(BlueprintCallable)
  static uint8 CONST_ROSLAUNCH() { return FROSMenuEntry::ROSLAUNCH; }

private:
  virtual FString MsgToString() const override;

  visualization_msgs__msg__MenuEntry menu_entry_msg;
};
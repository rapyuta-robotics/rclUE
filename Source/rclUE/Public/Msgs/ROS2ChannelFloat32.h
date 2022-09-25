// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/ChannelFloat32.msg - do
// not modify

#pragma once

// UE
#include <CoreMinimal.h>

// ROS
#include "sensor_msgs/msg/channel_float32.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)

// Generated
#include "ROS2ChannelFloat32.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSChannelFloat32 {
  GENERATED_BODY()

public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FString Name;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  TArray<float> Values;

  FROSChannelFloat32() {}

  void SetFromROS2(const sensor_msgs__msg__ChannelFloat32 &in_ros_data) {
    Name.AppendChars(in_ros_data.name.data, in_ros_data.name.size);

    for (auto i = 0; i < in_ros_data.values.size; ++i) {
      Values.Emplace(in_ros_data.values.data[i]);
    }
  }

  void SetROS2(sensor_msgs__msg__ChannelFloat32 &out_ros_data) const {
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

    if (out_ros_data.values.data != nullptr) {
      free(out_ros_data.values.data);
    }
    out_ros_data.values.data = (decltype(out_ros_data.values.data))malloc(
        (Values.Num()) * sizeof(decltype(*out_ros_data.values.data)));

    for (auto i = 0; i < Values.Num(); ++i) {
      out_ros_data.values.data[i] = Values[i];
    }

    out_ros_data.values.size = Values.Num();
    out_ros_data.values.capacity = Values.Num();
  }
};

UCLASS()
class RCLUE_API UROS2ChannelFloat32Msg : public UROS2GenericMsg {
  GENERATED_BODY()

public:
  virtual void Init() override;
  virtual void Fini() override;

  virtual const rosidl_message_type_support_t *GetTypeSupport() const override;

  UFUNCTION(BlueprintCallable)
  void SetMsg(const FROSChannelFloat32 &Input);

  UFUNCTION(BlueprintCallable)
  void GetMsg(FROSChannelFloat32 &Output) const;

  virtual void *Get() override;

private:
  virtual FString MsgToString() const override;

  sensor_msgs__msg__ChannelFloat32 channel_float32_msg;
};
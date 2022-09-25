// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/Image.msg - do not
// modify

#pragma once

// UE
#include <CoreMinimal.h>

// ROS
#include "sensor_msgs/msg/image.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Header.h"

// Generated
#include "ROS2Img.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSImg {
  GENERATED_BODY()

public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FROSHeader Header;

  UPROPERTY(EditAnywhere)
  unsigned int Height = 0;

  UPROPERTY(EditAnywhere)
  unsigned int Width = 0;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FString Encoding;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  uint8 IsBigendian = 0;

  UPROPERTY(EditAnywhere)
  unsigned int Step = 0;

  UPROPERTY(EditAnywhere)
  TArray<uint8> Data;

  FROSImg() {}

  void SetFromROS2(const sensor_msgs__msg__Image &in_ros_data) {
    Header.SetFromROS2(in_ros_data.header);

    Height = in_ros_data.height;

    Width = in_ros_data.width;

    Encoding.AppendChars(in_ros_data.encoding.data, in_ros_data.encoding.size);

    IsBigendian = in_ros_data.is_bigendian;

    Step = in_ros_data.step;

    for (auto i = 0; i < in_ros_data.data.size; ++i) {
      Data.Emplace(in_ros_data.data.data[i]);
    }
  }

  void SetROS2(sensor_msgs__msg__Image &out_ros_data) const {
    Header.SetROS2(out_ros_data.header);

    out_ros_data.height = Height;

    out_ros_data.width = Width;

    {
      FTCHARToUTF8 strUtf8(*Encoding);
      int32 strLength = strUtf8.Length();
      if (out_ros_data.encoding.data != nullptr) {
        free(out_ros_data.encoding.data);
      }
      out_ros_data.encoding.data = (decltype(out_ros_data.encoding.data))malloc(
          (strLength + 1) * sizeof(decltype(*out_ros_data.encoding.data)));
      memcpy(out_ros_data.encoding.data, TCHAR_TO_UTF8(*Encoding),
             (strLength + 1) * sizeof(char));
      out_ros_data.encoding.size = strLength;
      out_ros_data.encoding.capacity = strLength + 1;
    }

    out_ros_data.is_bigendian = IsBigendian;

    out_ros_data.step = Step;

    if (out_ros_data.data.data != nullptr) {
      free(out_ros_data.data.data);
    }
    out_ros_data.data.data = (decltype(out_ros_data.data.data))malloc(
        (Data.Num()) * sizeof(decltype(*out_ros_data.data.data)));

    for (auto i = 0; i < Data.Num(); ++i) {
      out_ros_data.data.data[i] = Data[i];
    }

    out_ros_data.data.size = Data.Num();
    out_ros_data.data.capacity = Data.Num();
  }
};

UCLASS()
class RCLUE_API UROS2ImgMsg : public UROS2GenericMsg {
  GENERATED_BODY()

public:
  virtual void Init() override;
  virtual void Fini() override;

  virtual const rosidl_message_type_support_t *GetTypeSupport() const override;

  UFUNCTION(BlueprintCallable)
  void SetMsg(const FROSImg &Input);

  UFUNCTION(BlueprintCallable)
  void GetMsg(FROSImg &Output) const;

  virtual void *Get() override;

private:
  virtual FString MsgToString() const override;

  sensor_msgs__msg__Image image_msg;
};
// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from
// example_interfaces/msg/UInt32MultiArray.msg - do not modify

#pragma once

// UE
#include <CoreMinimal.h>

// ROS
#include "example_interfaces/msg/u_int32_multi_array.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2MALayout.h"

// Generated
#include "ROS2UInt32MA.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSUInt32MA {
  GENERATED_BODY()

public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FROSMALayout Layout;

  UPROPERTY(EditAnywhere)
  TArray<unsigned int> Data;

  FROSUInt32MA() {}

  void
  SetFromROS2(const example_interfaces__msg__UInt32MultiArray &in_ros_data) {
    Layout.SetFromROS2(in_ros_data.layout);

    for (auto i = 0; i < in_ros_data.data.size; ++i) {
      Data.Emplace(in_ros_data.data.data[i]);
    }
  }

  void SetROS2(example_interfaces__msg__UInt32MultiArray &out_ros_data) const {
    Layout.SetROS2(out_ros_data.layout);

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
class RCLUE_API UROS2UInt32MAMsg : public UROS2GenericMsg {
  GENERATED_BODY()

public:
  virtual void Init() override;
  virtual void Fini() override;

  virtual const rosidl_message_type_support_t *GetTypeSupport() const override;

  UFUNCTION(BlueprintCallable)
  void SetMsg(const FROSUInt32MA &Input);

  UFUNCTION(BlueprintCallable)
  void GetMsg(FROSUInt32MA &Output) const;

  virtual void *Get() override;

private:
  virtual FString MsgToString() const override;

  example_interfaces__msg__UInt32MultiArray u_int32_multi_array_msg;
};
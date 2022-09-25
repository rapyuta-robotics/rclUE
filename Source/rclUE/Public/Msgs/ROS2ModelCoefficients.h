// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from pcl_msgs/msg/ModelCoefficients.msg - do
// not modify

#pragma once

// UE
#include <CoreMinimal.h>

// ROS
#include "pcl_msgs/msg/model_coefficients.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Header.h"

// Generated
#include "ROS2ModelCoefficients.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSModelCoefficients {
  GENERATED_BODY()

public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FROSHeader Header;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  TArray<float> Values;

  FROSModelCoefficients() {}

  void SetFromROS2(const pcl_msgs__msg__ModelCoefficients &in_ros_data) {
    Header.SetFromROS2(in_ros_data.header);

    for (auto i = 0; i < in_ros_data.values.size; ++i) {
      Values.Emplace(in_ros_data.values.data[i]);
    }
  }

  void SetROS2(pcl_msgs__msg__ModelCoefficients &out_ros_data) const {
    Header.SetROS2(out_ros_data.header);

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
class RCLUE_API UROS2ModelCoefficientsMsg : public UROS2GenericMsg {
  GENERATED_BODY()

public:
  virtual void Init() override;
  virtual void Fini() override;

  virtual const rosidl_message_type_support_t *GetTypeSupport() const override;

  UFUNCTION(BlueprintCallable)
  void SetMsg(const FROSModelCoefficients &Input);

  UFUNCTION(BlueprintCallable)
  void GetMsg(FROSModelCoefficients &Output) const;

  virtual void *Get() override;

private:
  virtual FString MsgToString() const override;

  pcl_msgs__msg__ModelCoefficients model_coefficients_msg;
};
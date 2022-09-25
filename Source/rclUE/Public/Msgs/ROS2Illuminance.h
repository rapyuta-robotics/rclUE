// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/Illuminance.msg - do
// not modify

#pragma once

// UE
#include <CoreMinimal.h>

// ROS
#include "sensor_msgs/msg/illuminance.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Header.h"

// Generated
#include "ROS2Illuminance.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSIlluminance {
  GENERATED_BODY()

public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FROSHeader Header;

  UPROPERTY(EditAnywhere)
  double Illuminance = 0.f;

  UPROPERTY(EditAnywhere)
  double Variance = 0.f;

  FROSIlluminance() {}

  void SetFromROS2(const sensor_msgs__msg__Illuminance &in_ros_data) {
    Header.SetFromROS2(in_ros_data.header);

    Illuminance = in_ros_data.illuminance;

    Variance = in_ros_data.variance;
  }

  void SetROS2(sensor_msgs__msg__Illuminance &out_ros_data) const {
    Header.SetROS2(out_ros_data.header);

    out_ros_data.illuminance = Illuminance;

    out_ros_data.variance = Variance;
  }
};

UCLASS()
class RCLUE_API UROS2IlluminanceMsg : public UROS2GenericMsg {
  GENERATED_BODY()

public:
  virtual void Init() override;
  virtual void Fini() override;

  virtual const rosidl_message_type_support_t *GetTypeSupport() const override;

  UFUNCTION(BlueprintCallable)
  void SetMsg(const FROSIlluminance &Input);

  UFUNCTION(BlueprintCallable)
  void GetMsg(FROSIlluminance &Output) const;

  virtual void *Get() override;

private:
  virtual FString MsgToString() const override;

  sensor_msgs__msg__Illuminance illuminance_msg;
};
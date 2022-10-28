// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/Range.msg - do not
// modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "sensor_msgs/msg/range.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Header.h"

// Generated
#include "ROS2Range.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSRange {
  GENERATED_BODY()

public:
  static constexpr uint8 ULTRASOUND = 0;
  static constexpr uint8 INFRARED = 1;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FROSHeader Header;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  uint8 RadiationType = 0;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  float FieldOfView = 0.f;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  float MinRange = 0.f;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  float MaxRange = 0.f;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  float Range = 0.f;

  FROSRange() {}

  void SetFromROS2(const sensor_msgs__msg__Range &in_ros_data) {
    Header.SetFromROS2(in_ros_data.header);

    RadiationType = in_ros_data.radiation_type;

    FieldOfView = in_ros_data.field_of_view;

    MinRange = in_ros_data.min_range;

    MaxRange = in_ros_data.max_range;

    Range = in_ros_data.range;
  }

  void SetROS2(sensor_msgs__msg__Range &out_ros_data) const {
    Header.SetROS2(out_ros_data.header);

    out_ros_data.radiation_type = RadiationType;

    out_ros_data.field_of_view = FieldOfView;

    out_ros_data.min_range = MinRange;

    out_ros_data.max_range = MaxRange;

    out_ros_data.range = Range;
  }
};

UCLASS()
class RCLUE_API UROS2RangeMsg : public UROS2GenericMsg {
  GENERATED_BODY()

public:
  virtual void Init() override;
  virtual void Fini() override;

  virtual const rosidl_message_type_support_t *GetTypeSupport() const override;

  UFUNCTION(BlueprintCallable)
  void SetMsg(const FROSRange &Input);

  UFUNCTION(BlueprintCallable)
  void GetMsg(FROSRange &Output) const;

  virtual void *Get() override;

  UFUNCTION(BlueprintCallable)
  static uint8 CONST_ULTRASOUND() { return FROSRange::ULTRASOUND; }
  UFUNCTION(BlueprintCallable)
  static uint8 CONST_INFRARED() { return FROSRange::INFRARED; }

private:
  virtual FString MsgToString() const override;

  sensor_msgs__msg__Range range_msg;
};
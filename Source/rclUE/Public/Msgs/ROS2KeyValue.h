// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from diagnostic_msgs/msg/KeyValue.msg - do
// not modify

#pragma once

// UE
#include <CoreMinimal.h>

// ROS
#include "diagnostic_msgs/msg/key_value.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)

// Generated
#include "ROS2KeyValue.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSKeyValue {
  GENERATED_BODY()

public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FString Key;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FString Value;

  FROSKeyValue() {}

  void SetFromROS2(const diagnostic_msgs__msg__KeyValue &in_ros_data) {
    Key = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.key);

    Value =
        UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.value);
  }

  void SetROS2(diagnostic_msgs__msg__KeyValue &out_ros_data) const {
    UROS2Utils::StringUEToROS<rosidl_runtime_c__String>(Key, out_ros_data.key);

    UROS2Utils::StringUEToROS<rosidl_runtime_c__String>(Value,
                                                        out_ros_data.value);
  }
};

UCLASS()
class RCLUE_API UROS2KeyValueMsg : public UROS2GenericMsg {
  GENERATED_BODY()

public:
  virtual void Init() override;
  virtual void Fini() override;

  virtual const rosidl_message_type_support_t *GetTypeSupport() const override;

  UFUNCTION(BlueprintCallable)
  void SetMsg(const FROSKeyValue &Input);

  UFUNCTION(BlueprintCallable)
  void GetMsg(FROSKeyValue &Output) const;

  virtual void *Get() override;

private:
  virtual FString MsgToString() const override;

  diagnostic_msgs__msg__KeyValue key_value_msg;
};
// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/msg/String.msg - do
// not modify

#pragma once

// UE
#include <CoreMinimal.h>

// ROS
#include "example_interfaces/msg/string.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)

// Generated
#include "ROS2Str.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSStr {
  GENERATED_BODY()

public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FString Data;

  FROSStr() {}

  void SetFromROS2(const example_interfaces__msg__String &in_ros_data) {
    Data =
        UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.data);
  }

  void SetROS2(example_interfaces__msg__String &out_ros_data) const {
    UROS2Utils::StringUEToROS<rosidl_runtime_c__String>(Data,
                                                        out_ros_data.data);
  }
};

UCLASS()
class RCLUE_API UROS2StrMsg : public UROS2GenericMsg {
  GENERATED_BODY()

public:
  virtual void Init() override;
  virtual void Fini() override;

  virtual const rosidl_message_type_support_t *GetTypeSupport() const override;

  UFUNCTION(BlueprintCallable)
  void SetMsg(const FROSStr &Input);

  UFUNCTION(BlueprintCallable)
  void GetMsg(FROSStr &Output) const;

  virtual void *Get() override;

private:
  virtual FString MsgToString() const override;

  example_interfaces__msg__String string_msg;
};
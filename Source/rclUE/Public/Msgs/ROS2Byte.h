// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/msg/Byte.msg - do
// not modify

#pragma once

// UE
#include <CoreMinimal.h>

// ROS
#include "example_interfaces/msg/byte.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)

// Generated
#include "ROS2Byte.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSByte {
  GENERATED_BODY()

public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  uint8 Data = 0;

  FROSByte() {}

  void SetFromROS2(const example_interfaces__msg__Byte &in_ros_data) {
    Data = in_ros_data.data;
  }

  void SetROS2(example_interfaces__msg__Byte &out_ros_data) const {
    out_ros_data.data = Data;
  }
};

UCLASS()
class RCLUE_API UROS2ByteMsg : public UROS2GenericMsg {
  GENERATED_BODY()

public:
  virtual void Init() override;
  virtual void Fini() override;

  virtual const rosidl_message_type_support_t *GetTypeSupport() const override;

  UFUNCTION(BlueprintCallable)
  void SetMsg(const FROSByte &Input);

  UFUNCTION(BlueprintCallable)
  void GetMsg(FROSByte &Output) const;

  virtual void *Get() override;

private:
  virtual FString MsgToString() const override;

  example_interfaces__msg__Byte byte_msg;
};
// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from tf2_msgs/msg/TFMessage.msg - do not
// modify

#pragma once

// UE
#include <CoreMinimal.h>

// ROS
#include "tf2_msgs/msg/tf_message.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2TFStamped.h"

// Generated
#include "ROS2TFMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSTFMsg {
  GENERATED_BODY()

public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  TArray<FROSTFStamped> Transforms;

  FROSTFMsg() {}

  void SetFromROS2(const tf2_msgs__msg__TFMessage &in_ros_data) {
    UROS2Utils::SequenceROSToUEArray<geometry_msgs__msg__TransformStamped,
                                     FROSTFStamped>(
        in_ros_data.transforms.data, Transforms, in_ros_data.transforms.size);
  }

  void SetROS2(tf2_msgs__msg__TFMessage &out_ros_data) const {
    UROS2Utils::ROSSequenceResourceAllocation<
        geometry_msgs__msg__TransformStamped__Sequence>(out_ros_data.transforms,
                                                        Transforms.Num());
    UROS2Utils::ArrayUEToROSSequence<geometry_msgs__msg__TransformStamped,
                                     FROSTFStamped>(
        Transforms, out_ros_data.transforms.data, Transforms.Num());
  }
};

UCLASS()
class RCLUE_API UROS2TFMsgMsg : public UROS2GenericMsg {
  GENERATED_BODY()

public:
  virtual void Init() override;
  virtual void Fini() override;

  virtual const rosidl_message_type_support_t *GetTypeSupport() const override;

  UFUNCTION(BlueprintCallable)
  void SetMsg(const FROSTFMsg &Input);

  UFUNCTION(BlueprintCallable)
  void GetMsg(FROSTFMsg &Output) const;

  virtual void *Get() override;

private:
  virtual FString MsgToString() const override;

  tf2_msgs__msg__TFMessage tf_message_msg;
};
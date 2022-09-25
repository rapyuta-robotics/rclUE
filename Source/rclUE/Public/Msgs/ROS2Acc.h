// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/Accel.msg - do not
// modify

#pragma once

// UE
#include <CoreMinimal.h>

// ROS
#include "geometry_msgs/msg/accel.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)

// Generated
#include "ROS2Acc.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSAcc {
  GENERATED_BODY()

public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FVector Linear = FVector::ZeroVector;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FVector Angular = FVector::ZeroVector;

  FROSAcc() {}

  void SetFromROS2(const geometry_msgs__msg__Accel &in_ros_data) {
    Linear.X = in_ros_data.linear.x;
    Linear.Y = in_ros_data.linear.y;
    Linear.Z = in_ros_data.linear.z;

    Angular.X = in_ros_data.angular.x;
    Angular.Y = in_ros_data.angular.y;
    Angular.Z = in_ros_data.angular.z;
  }

  void SetROS2(geometry_msgs__msg__Accel &out_ros_data) const {
    out_ros_data.linear.x = Linear.X;
    out_ros_data.linear.y = Linear.Y;
    out_ros_data.linear.z = Linear.Z;

    out_ros_data.angular.x = Angular.X;
    out_ros_data.angular.y = Angular.Y;
    out_ros_data.angular.z = Angular.Z;
  }
};

UCLASS()
class RCLUE_API UROS2AccMsg : public UROS2GenericMsg {
  GENERATED_BODY()

public:
  virtual void Init() override;
  virtual void Fini() override;

  virtual const rosidl_message_type_support_t *GetTypeSupport() const override;

  UFUNCTION(BlueprintCallable)
  void SetMsg(const FROSAcc &Input);

  UFUNCTION(BlueprintCallable)
  void GetMsg(FROSAcc &Output) const;

  virtual void *Get() override;

private:
  virtual FString MsgToString() const override;

  geometry_msgs__msg__Accel accel_msg;
};
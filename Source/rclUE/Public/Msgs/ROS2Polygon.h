// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/Polygon.msg - do not
// modify

#pragma once

// UE
#include <CoreMinimal.h>

// ROS
#include "geometry_msgs/msg/polygon.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Point32.h"

// Generated
#include "ROS2Polygon.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSPolygon {
  GENERATED_BODY()

public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  TArray<FROSPoint32> Points;

  FROSPolygon() {}

  void SetFromROS2(const geometry_msgs__msg__Polygon &in_ros_data) {
    for (auto i = 0; i < in_ros_data.points.size; ++i) {
      Points[i].SetFromROS2(in_ros_data.points.data[i]);
    }
  }

  void SetROS2(geometry_msgs__msg__Polygon &out_ros_data) const {
    out_ros_data.points.data = (decltype(out_ros_data.points.data))malloc(
        (Points.Num()) * sizeof(decltype(*out_ros_data.points.data)));

    for (auto i = 0; i < Points.Num(); ++i) {
      Points[i].SetROS2(out_ros_data.points.data[i]);
    }

    out_ros_data.points.size = Points.Num();
    out_ros_data.points.capacity = Points.Num();
  }
};

UCLASS()
class RCLUE_API UROS2PolygonMsg : public UROS2GenericMsg {
  GENERATED_BODY()

public:
  virtual void Init() override;
  virtual void Fini() override;

  virtual const rosidl_message_type_support_t *GetTypeSupport() const override;

  UFUNCTION(BlueprintCallable)
  void SetMsg(const FROSPolygon &Input);

  UFUNCTION(BlueprintCallable)
  void GetMsg(FROSPolygon &Output) const;

  virtual void *Get() override;

private:
  virtual FString MsgToString() const override;

  geometry_msgs__msg__Polygon polygon_msg;
};
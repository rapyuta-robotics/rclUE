// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from visualization_msgs/msg/MarkerArray.msg
// - do not modify

#pragma once

// UE
#include <CoreMinimal.h>

// ROS
#include "visualization_msgs/msg/marker_array.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Marker.h"

// Generated
#include "ROS2MarkerArray.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSMarkerArray {
  GENERATED_BODY()

public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  TArray<FROSMarker> Markers;

  FROSMarkerArray() {}

  void SetFromROS2(const visualization_msgs__msg__MarkerArray &in_ros_data) {
    for (auto i = 0; i < in_ros_data.markers.size; ++i) {
      Markers[i].SetFromROS2(in_ros_data.markers.data[i]);
    }
  }

  void SetROS2(visualization_msgs__msg__MarkerArray &out_ros_data) const {
    out_ros_data.markers.data = (decltype(out_ros_data.markers.data))malloc(
        (Markers.Num()) * sizeof(decltype(*out_ros_data.markers.data)));

    for (auto i = 0; i < Markers.Num(); ++i) {
      Markers[i].SetROS2(out_ros_data.markers.data[i]);
    }

    out_ros_data.markers.size = Markers.Num();
    out_ros_data.markers.capacity = Markers.Num();
  }
};

UCLASS()
class RCLUE_API UROS2MarkerArrayMsg : public UROS2GenericMsg {
  GENERATED_BODY()

public:
  virtual void Init() override;
  virtual void Fini() override;

  virtual const rosidl_message_type_support_t *GetTypeSupport() const override;

  UFUNCTION(BlueprintCallable)
  void SetMsg(const FROSMarkerArray &Input);

  UFUNCTION(BlueprintCallable)
  void GetMsg(FROSMarkerArray &Output) const;

  virtual void *Get() override;

private:
  virtual FString MsgToString() const override;

  visualization_msgs__msg__MarkerArray marker_array_msg;
};
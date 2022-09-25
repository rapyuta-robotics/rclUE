// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/RegionOfInterest.msg -
// do not modify

#pragma once

// UE
#include <CoreMinimal.h>

// ROS
#include "sensor_msgs/msg/region_of_interest.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)

// Generated
#include "ROS2RegionOfInterest.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSRegionOfInterest {
  GENERATED_BODY()

public:
  UPROPERTY(EditAnywhere)
  unsigned int XOffset = 0;

  UPROPERTY(EditAnywhere)
  unsigned int YOffset = 0;

  UPROPERTY(EditAnywhere)
  unsigned int Height = 0;

  UPROPERTY(EditAnywhere)
  unsigned int Width = 0;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  bool bDoRectify = false;

  FROSRegionOfInterest() {}

  void SetFromROS2(const sensor_msgs__msg__RegionOfInterest &in_ros_data) {
    XOffset = in_ros_data.x_offset;

    YOffset = in_ros_data.y_offset;

    Height = in_ros_data.height;

    Width = in_ros_data.width;

    bDoRectify = in_ros_data.do_rectify;
  }

  void SetROS2(sensor_msgs__msg__RegionOfInterest &out_ros_data) const {
    out_ros_data.x_offset = XOffset;

    out_ros_data.y_offset = YOffset;

    out_ros_data.height = Height;

    out_ros_data.width = Width;

    out_ros_data.do_rectify = bDoRectify;
  }
};

UCLASS()
class RCLUE_API UROS2RegionOfInterestMsg : public UROS2GenericMsg {
  GENERATED_BODY()

public:
  virtual void Init() override;
  virtual void Fini() override;

  virtual const rosidl_message_type_support_t *GetTypeSupport() const override;

  UFUNCTION(BlueprintCallable)
  void SetMsg(const FROSRegionOfInterest &Input);

  UFUNCTION(BlueprintCallable)
  void GetMsg(FROSRegionOfInterest &Output) const;

  virtual void *Get() override;

private:
  virtual FString MsgToString() const override;

  sensor_msgs__msg__RegionOfInterest region_of_interest_msg;
};
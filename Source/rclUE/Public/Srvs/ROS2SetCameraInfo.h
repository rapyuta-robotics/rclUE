// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/srv/SetCameraInfo.srv - do
// not modify

#pragma once

// UE
#include <CoreMinimal.h>

// ROS
#include "sensor_msgs/srv/set_camera_info.h"

// rclUE
#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2CameraInfo.h"

// Generated
#include "ROS2SetCameraInfo.generated.h"

// potential problem: if this struct is defined multiple times!
USTRUCT(Blueprintable)
struct RCLUE_API FROSSetCameraInfoReq {
  GENERATED_BODY()

public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FROSCameraInfo CameraInfo;

  FROSSetCameraInfoReq() {}

  void SetFromROS2(const sensor_msgs__srv__SetCameraInfo_Request &in_ros_data) {
    CameraInfo.SetFromROS2(in_ros_data.camera_info);
  }

  void SetROS2(sensor_msgs__srv__SetCameraInfo_Request &out_ros_data) const {
    CameraInfo.SetROS2(out_ros_data.camera_info);
  }
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSSetCameraInfoRes {
  GENERATED_BODY()

public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  bool bSuccess = false;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FString StatusMessage;

  FROSSetCameraInfoRes() {}

  void
  SetFromROS2(const sensor_msgs__srv__SetCameraInfo_Response &in_ros_data) {
    bSuccess = in_ros_data.success;

    StatusMessage.AppendChars(in_ros_data.status_message.data,
                              in_ros_data.status_message.size);
  }

  void SetROS2(sensor_msgs__srv__SetCameraInfo_Response &out_ros_data) const {
    out_ros_data.success = bSuccess;

    {
      FTCHARToUTF8 strUtf8(*StatusMessage);
      int32 strLength = strUtf8.Length();
      out_ros_data.status_message.data =
          (decltype(out_ros_data.status_message.data))malloc(
              (strLength + 1) *
              sizeof(decltype(*out_ros_data.status_message.data)));
      memcpy(out_ros_data.status_message.data, TCHAR_TO_UTF8(*StatusMessage),
             (strLength + 1) * sizeof(char));
      out_ros_data.status_message.size = strLength;
      out_ros_data.status_message.capacity = strLength + 1;
    }
  }
};

UCLASS()
class RCLUE_API UROS2SetCameraInfoSrv : public UROS2GenericSrv {
  GENERATED_BODY()

public:
  UFUNCTION(BlueprintCallable)
  virtual void Init() override;

  UFUNCTION(BlueprintCallable)
  virtual void Fini() override;

  virtual const rosidl_service_type_support_t *GetTypeSupport() const override;

  // used by client
  UFUNCTION(BlueprintCallable)
  void SetRequest(const FROSSetCameraInfoReq &Request);

  // used by service
  UFUNCTION(BlueprintCallable)
  void GetRequest(FROSSetCameraInfoReq &Request) const;

  // used by service
  UFUNCTION(BlueprintCallable)
  void SetResponse(const FROSSetCameraInfoRes &Response);

  // used by client
  UFUNCTION(BlueprintCallable)
  void GetResponse(FROSSetCameraInfoRes &Response) const;

  virtual void *GetRequest() override;
  virtual void *GetResponse() override;

private:
  virtual FString SrvRequestToString() const override;
  virtual FString SrvResponseToString() const override;

  sensor_msgs__srv__SetCameraInfo_Request SetCameraInfo_req;
  sensor_msgs__srv__SetCameraInfo_Response SetCameraInfo_res;
};
// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from ue_msgs/srv/SetInt32.srv - do not
// modify

#pragma once

// UE
#include <CoreMinimal.h>

// ROS
#include "ue_msgs/srv/set_int32.h"

// rclUE
#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)

// Generated
#include "ROS2SetInt32.generated.h"

// potential problem: if this struct is defined multiple times!
USTRUCT(Blueprintable)
struct RCLUE_API FROSSetInt32Req {
  GENERATED_BODY()

public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  int Data = 0;

  FROSSetInt32Req() {}

  void SetFromROS2(const ue_msgs__srv__SetInt32_Request &in_ros_data) {
    Data = in_ros_data.data;
  }

  void SetROS2(ue_msgs__srv__SetInt32_Request &out_ros_data) const {
    out_ros_data.data = Data;
  }
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSSetInt32Res {
  GENERATED_BODY()

public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  bool bSuccess = false;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FString Remarks;

  FROSSetInt32Res() {}

  void SetFromROS2(const ue_msgs__srv__SetInt32_Response &in_ros_data) {
    bSuccess = in_ros_data.success;

    Remarks.AppendChars(in_ros_data.remarks.data, in_ros_data.remarks.size);
  }

  void SetROS2(ue_msgs__srv__SetInt32_Response &out_ros_data) const {
    out_ros_data.success = bSuccess;

    {
      FTCHARToUTF8 strUtf8(*Remarks);
      int32 strLength = strUtf8.Length();
      if (out_ros_data.remarks.data != nullptr) {
        free(out_ros_data.remarks.data);
      }
      out_ros_data.remarks.data = (decltype(out_ros_data.remarks.data))malloc(
          (strLength + 1) * sizeof(decltype(*out_ros_data.remarks.data)));
      memcpy(out_ros_data.remarks.data, TCHAR_TO_UTF8(*Remarks),
             (strLength + 1) * sizeof(char));
      out_ros_data.remarks.size = strLength;
      out_ros_data.remarks.capacity = strLength + 1;
    }
  }
};

UCLASS()
class RCLUE_API UROS2SetInt32Srv : public UROS2GenericSrv {
  GENERATED_BODY()

public:
  UFUNCTION(BlueprintCallable)
  virtual void Init() override;

  UFUNCTION(BlueprintCallable)
  virtual void Fini() override;

  virtual const rosidl_service_type_support_t *GetTypeSupport() const override;

  // used by client
  UFUNCTION(BlueprintCallable)
  void SetRequest(const FROSSetInt32Req &Request);

  // used by service
  UFUNCTION(BlueprintCallable)
  void GetRequest(FROSSetInt32Req &Request) const;

  // used by service
  UFUNCTION(BlueprintCallable)
  void SetResponse(const FROSSetInt32Res &Response);

  // used by client
  UFUNCTION(BlueprintCallable)
  void GetResponse(FROSSetInt32Res &Response) const;

  virtual void *GetRequest() override;
  virtual void *GetResponse() override;

private:
  virtual FString SrvRequestToString() const override;
  virtual FString SrvResponseToString() const override;

  ue_msgs__srv__SetInt32_Request SetInt32_req;
  ue_msgs__srv__SetInt32_Response SetInt32_res;
};
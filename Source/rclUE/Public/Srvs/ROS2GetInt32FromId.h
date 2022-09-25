// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from ue_msgs/srv/GetInt32FromId.srv - do not
// modify

#pragma once

// UE
#include <CoreMinimal.h>

// ROS
#include "ue_msgs/srv/get_int32_from_id.h"

// rclUE
#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)

// Generated
#include "ROS2GetInt32FromId.generated.h"

// potential problem: if this struct is defined multiple times!
USTRUCT(Blueprintable)
struct RCLUE_API FROSGetInt32FromIdReq {
  GENERATED_BODY()

public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  int Id = 0;

  FROSGetInt32FromIdReq() {}

  void SetFromROS2(const ue_msgs__srv__GetInt32FromId_Request &in_ros_data) {
    Id = in_ros_data.id;
  }

  void SetROS2(ue_msgs__srv__GetInt32FromId_Request &out_ros_data) const {
    out_ros_data.id = Id;
  }
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSGetInt32FromIdRes {
  GENERATED_BODY()

public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  bool bSuccess = false;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FString Remarks;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  int Data = 0;

  FROSGetInt32FromIdRes() {}

  void SetFromROS2(const ue_msgs__srv__GetInt32FromId_Response &in_ros_data) {
    bSuccess = in_ros_data.success;

    Remarks.AppendChars(in_ros_data.remarks.data, in_ros_data.remarks.size);

    Data = in_ros_data.data;
  }

  void SetROS2(ue_msgs__srv__GetInt32FromId_Response &out_ros_data) const {
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

    out_ros_data.data = Data;
  }
};

UCLASS()
class RCLUE_API UROS2GetInt32FromIdSrv : public UROS2GenericSrv {
  GENERATED_BODY()

public:
  UFUNCTION(BlueprintCallable)
  virtual void Init() override;

  UFUNCTION(BlueprintCallable)
  virtual void Fini() override;

  virtual const rosidl_service_type_support_t *GetTypeSupport() const override;

  // used by client
  UFUNCTION(BlueprintCallable)
  void SetRequest(const FROSGetInt32FromIdReq &Request);

  // used by service
  UFUNCTION(BlueprintCallable)
  void GetRequest(FROSGetInt32FromIdReq &Request) const;

  // used by service
  UFUNCTION(BlueprintCallable)
  void SetResponse(const FROSGetInt32FromIdRes &Response);

  // used by client
  UFUNCTION(BlueprintCallable)
  void GetResponse(FROSGetInt32FromIdRes &Response) const;

  virtual void *GetRequest() override;
  virtual void *GetResponse() override;

private:
  virtual FString SrvRequestToString() const override;
  virtual FString SrvResponseToString() const override;

  ue_msgs__srv__GetInt32FromId_Request GetInt32FromId_req;
  ue_msgs__srv__GetInt32FromId_Response GetInt32FromId_res;
};
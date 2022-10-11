// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from std_srvs/srv/Trigger.srv - do not
// modify

#pragma once

// UE
#include <CoreMinimal.h>

// ROS
#include "std_srvs/srv/trigger.h"

// rclUE
#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)

// Generated
#include "ROS2StdSrvTrigger.generated.h"

// potential problem: if this struct is defined multiple times!
USTRUCT(Blueprintable)
struct RCLUE_API FROSStdSrvTriggerReq {
  GENERATED_BODY()

public:
  FROSStdSrvTriggerReq() {}

  void SetFromROS2(const std_srvs__srv__Trigger_Request &in_ros_data) {}

  void SetROS2(std_srvs__srv__Trigger_Request &out_ros_data) const {}
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSStdSrvTriggerRes {
  GENERATED_BODY()

public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  bool bSuccess = false;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FString Message;

  FROSStdSrvTriggerRes() {}

  void SetFromROS2(const std_srvs__srv__Trigger_Response &in_ros_data) {
    bSuccess = in_ros_data.success;

    Message = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(
        in_ros_data.message);
  }

  void SetROS2(std_srvs__srv__Trigger_Response &out_ros_data) const {
    out_ros_data.success = bSuccess;

    UROS2Utils::StringUEToROS<rosidl_runtime_c__String>(Message,
                                                        out_ros_data.message);
  }
};

UCLASS()
class RCLUE_API UROS2StdSrvTriggerSrv : public UROS2GenericSrv {
  GENERATED_BODY()

public:
  UFUNCTION(BlueprintCallable)
  virtual void Init() override;

  UFUNCTION(BlueprintCallable)
  virtual void Fini() override;

  virtual const rosidl_service_type_support_t *GetTypeSupport() const override;

  // used by client
  UFUNCTION(BlueprintCallable)
  void SetRequest(const FROSStdSrvTriggerReq &Request);

  // used by service
  UFUNCTION(BlueprintCallable)
  void GetRequest(FROSStdSrvTriggerReq &Request) const;

  // used by service
  UFUNCTION(BlueprintCallable)
  void SetResponse(const FROSStdSrvTriggerRes &Response);

  // used by client
  UFUNCTION(BlueprintCallable)
  void GetResponse(FROSStdSrvTriggerRes &Response) const;

  virtual void *GetRequest() override;
  virtual void *GetResponse() override;

private:
  virtual FString SrvRequestToString() const override;
  virtual FString SrvResponseToString() const override;

  std_srvs__srv__Trigger_Request Trigger_req;
  std_srvs__srv__Trigger_Response Trigger_res;
};
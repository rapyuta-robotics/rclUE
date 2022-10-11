// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from diagnostic_msgs/srv/SelfTest.srv - do
// not modify

#pragma once

// UE
#include <CoreMinimal.h>

// ROS
#include "diagnostic_msgs/srv/self_test.h"

// rclUE
#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)

#include "Msgs/ROS2DiagnosticStatus.h"

// Generated
#include "ROS2SelfTest.generated.h"

// potential problem: if this struct is defined multiple times!
USTRUCT(Blueprintable)
struct RCLUE_API FROSSelfTestReq {
  GENERATED_BODY()

public:
  FROSSelfTestReq() {}

  void SetFromROS2(const diagnostic_msgs__srv__SelfTest_Request &in_ros_data) {}

  void SetROS2(diagnostic_msgs__srv__SelfTest_Request &out_ros_data) const {}
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSSelfTestRes {
  GENERATED_BODY()

public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FString Id;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  uint8 Passed = 0;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  TArray<FROSDiagnosticStatus> Status;

  FROSSelfTestRes() {}

  void SetFromROS2(const diagnostic_msgs__srv__SelfTest_Response &in_ros_data) {
    Id = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.id);

    Passed = in_ros_data.passed;

    UROS2Utils::SequenceROSToUEArray<diagnostic_msgs__msg__DiagnosticStatus,
                                     FROSDiagnosticStatus>(
        in_ros_data.status.data, Status, in_ros_data.status.size);
  }

  void SetROS2(diagnostic_msgs__srv__SelfTest_Response &out_ros_data) const {
    UROS2Utils::StringUEToROS<rosidl_runtime_c__String>(Id, out_ros_data.id);

    out_ros_data.passed = Passed;

    UROS2Utils::ROSSequenceResourceAllocation<
        diagnostic_msgs__msg__DiagnosticStatus__Sequence>(out_ros_data.status,
                                                          Status.Num());
    UROS2Utils::ArrayUEToROSSequence<diagnostic_msgs__msg__DiagnosticStatus,
                                     FROSDiagnosticStatus>(
        Status, out_ros_data.status.data, Status.Num());
  }
};

UCLASS()
class RCLUE_API UROS2SelfTestSrv : public UROS2GenericSrv {
  GENERATED_BODY()

public:
  UFUNCTION(BlueprintCallable)
  virtual void Init() override;

  UFUNCTION(BlueprintCallable)
  virtual void Fini() override;

  virtual const rosidl_service_type_support_t *GetTypeSupport() const override;

  // used by client
  UFUNCTION(BlueprintCallable)
  void SetRequest(const FROSSelfTestReq &Request);

  // used by service
  UFUNCTION(BlueprintCallable)
  void GetRequest(FROSSelfTestReq &Request) const;

  // used by service
  UFUNCTION(BlueprintCallable)
  void SetResponse(const FROSSelfTestRes &Response);

  // used by client
  UFUNCTION(BlueprintCallable)
  void GetResponse(FROSSelfTestRes &Response) const;

  virtual void *GetRequest() override;
  virtual void *GetResponse() override;

private:
  virtual FString SrvRequestToString() const override;
  virtual FString SrvResponseToString() const override;

  diagnostic_msgs__srv__SelfTest_Request SelfTest_req;
  diagnostic_msgs__srv__SelfTest_Response SelfTest_res;
};
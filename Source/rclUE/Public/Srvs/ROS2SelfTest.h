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
    Id.AppendChars(in_ros_data.id.data, in_ros_data.id.size);

    Passed = in_ros_data.passed;

    for (auto i = 0; i < in_ros_data.status.size; ++i) {
      Status[i].SetFromROS2(in_ros_data.status.data[i]);
    }
  }

  void SetROS2(diagnostic_msgs__srv__SelfTest_Response &out_ros_data) const {
    {
      FTCHARToUTF8 strUtf8(*Id);
      int32 strLength = strUtf8.Length();
      out_ros_data.id.data = (decltype(out_ros_data.id.data))malloc(
          (strLength + 1) * sizeof(decltype(*out_ros_data.id.data)));
      memcpy(out_ros_data.id.data, TCHAR_TO_UTF8(*Id),
             (strLength + 1) * sizeof(char));
      out_ros_data.id.size = strLength;
      out_ros_data.id.capacity = strLength + 1;
    }

    out_ros_data.passed = Passed;

    out_ros_data.status.data = (decltype(out_ros_data.status.data))malloc(
        (Status.Num()) * sizeof(decltype(*out_ros_data.status.data)));

    for (auto i = 0; i < Status.Num(); ++i) {
      Status[i].SetROS2(out_ros_data.status.data[i]);
    }

    out_ros_data.status.size = Status.Num();
    out_ros_data.status.capacity = Status.Num();
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
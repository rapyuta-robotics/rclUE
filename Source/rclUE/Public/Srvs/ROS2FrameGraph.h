// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from tf2_msgs/srv/FrameGraph.srv - do not
// modify

#pragma once

// UE
#include <CoreMinimal.h>

// ROS
#include "tf2_msgs/srv/frame_graph.h"

// rclUE
#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)

// Generated
#include "ROS2FrameGraph.generated.h"

// potential problem: if this struct is defined multiple times!
USTRUCT(Blueprintable)
struct RCLUE_API FROSFrameGraphReq {
  GENERATED_BODY()

public:
  FROSFrameGraphReq() {}

  void SetFromROS2(const tf2_msgs__srv__FrameGraph_Request &in_ros_data) {}

  void SetROS2(tf2_msgs__srv__FrameGraph_Request &out_ros_data) const {}
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSFrameGraphRes {
  GENERATED_BODY()

public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FString FrameYaml;

  FROSFrameGraphRes() {}

  void SetFromROS2(const tf2_msgs__srv__FrameGraph_Response &in_ros_data) {
    FrameYaml = UROS2Utils::StringROSToUE(in_ros_data.frame_yaml);
  }

  void SetROS2(tf2_msgs__srv__FrameGraph_Response &out_ros_data) const {
    UROS2Utils::StringUEToROS(FrameYaml, out_ros_data.frame_yaml);
  }
};

UCLASS()
class RCLUE_API UROS2FrameGraphSrv : public UROS2GenericSrv {
  GENERATED_BODY()

public:
  UFUNCTION(BlueprintCallable)
  virtual void Init() override;

  UFUNCTION(BlueprintCallable)
  virtual void Fini() override;

  virtual const rosidl_service_type_support_t *GetTypeSupport() const override;

  // used by client
  UFUNCTION(BlueprintCallable)
  void SetRequest(const FROSFrameGraphReq &Request);

  // used by service
  UFUNCTION(BlueprintCallable)
  void GetRequest(FROSFrameGraphReq &Request) const;

  // used by service
  UFUNCTION(BlueprintCallable)
  void SetResponse(const FROSFrameGraphRes &Response);

  // used by client
  UFUNCTION(BlueprintCallable)
  void GetResponse(FROSFrameGraphRes &Response) const;

  virtual void *GetRequest() override;
  virtual void *GetResponse() override;

private:
  virtual FString SrvRequestToString() const override;
  virtual FString SrvResponseToString() const override;

  tf2_msgs__srv__FrameGraph_Request FrameGraph_req;
  tf2_msgs__srv__FrameGraph_Response FrameGraph_res;
};
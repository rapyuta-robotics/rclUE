// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from ue_msgs/srv/GetEntityState.srv - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "ue_msgs/srv/get_entity_state.h"

// rclUE
#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)

#include "Msgs/ROS2EntityState.h"

// Generated
#include "ROS2GetEntityState.generated.h"

// potential problem: if this struct is defined multiple times!
USTRUCT(Blueprintable)
struct RCLUE_API FROSGetEntityStateReq
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString ReferenceFrame;

    FROSGetEntityStateReq()
    {
    }

    void SetFromROS2(const ue_msgs__srv__GetEntityState_Request& in_ros_data)
    {
        Name = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.name);

        ReferenceFrame = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.reference_frame);
    }

    void SetROS2(ue_msgs__srv__GetEntityState_Request& out_ros_data) const
    {
        UROS2Utils::StringUEToROS(Name, out_ros_data.name);

        UROS2Utils::StringUEToROS(ReferenceFrame, out_ros_data.reference_frame);
    }
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSGetEntityStateRes
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSEntityState State;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bSuccess = false;

    FROSGetEntityStateRes()
    {
    }

    void SetFromROS2(const ue_msgs__srv__GetEntityState_Response& in_ros_data)
    {
        State.SetFromROS2(in_ros_data.state);

        bSuccess = in_ros_data.success;
    }

    void SetROS2(ue_msgs__srv__GetEntityState_Response& out_ros_data) const
    {
        State.SetROS2(out_ros_data.state);

        out_ros_data.success = bSuccess;
    }
};

UCLASS()
class RCLUE_API UROS2GetEntityStateSrv : public UROS2GenericSrv
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable)
    virtual void Init() override;

    UFUNCTION(BlueprintCallable)
    virtual void Fini() override;

    virtual const rosidl_service_type_support_t* GetTypeSupport() const override;

    // used by client
    UFUNCTION(BlueprintCallable)
    void SetRequest(const FROSGetEntityStateReq& Request);

    // used by service
    UFUNCTION(BlueprintCallable)
    void GetRequest(FROSGetEntityStateReq& Request) const;

    // used by service
    UFUNCTION(BlueprintCallable)
    void SetResponse(const FROSGetEntityStateRes& Response);

    // used by client
    UFUNCTION(BlueprintCallable)
    void GetResponse(FROSGetEntityStateRes& Response) const;

    virtual void* GetRequest() override;
    virtual void* GetResponse() override;

private:
    virtual FString SrvRequestToString() const override;
    virtual FString SrvResponseToString() const override;

    ue_msgs__srv__GetEntityState_Request GetEntityState_req;
    ue_msgs__srv__GetEntityState_Response GetEntityState_res;
};

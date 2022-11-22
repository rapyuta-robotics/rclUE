// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/srv/SetBool.srv - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "example_interfaces/srv/set_bool.h"

// rclUE
#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)

// Generated
#include "ROS2SetBool.generated.h"

// potential problem: if this struct is defined multiple times!
USTRUCT(Blueprintable)
struct RCLUE_API FROSSetBoolReq
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bData = false;

    FROSSetBoolReq()
    {
    }

    void SetFromROS2(const example_interfaces__srv__SetBool_Request& in_ros_data)
    {
        bData = in_ros_data.data;
    }

    void SetROS2(example_interfaces__srv__SetBool_Request& out_ros_data) const
    {
        out_ros_data.data = bData;
    }
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSSetBoolRes
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bSuccess = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Message;

    FROSSetBoolRes()
    {
    }

    void SetFromROS2(const example_interfaces__srv__SetBool_Response& in_ros_data)
    {
        bSuccess = in_ros_data.success;

        Message = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.message);
    }

    void SetROS2(example_interfaces__srv__SetBool_Response& out_ros_data) const
    {
        out_ros_data.success = bSuccess;

        UROS2Utils::StringUEToROS<rosidl_runtime_c__String>(Message, out_ros_data.message);
    }
};

UCLASS()
class RCLUE_API UROS2SetBoolSrv : public UROS2GenericSrv
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
    void SetRequest(const FROSSetBoolReq& Request);

    // used by service
    UFUNCTION(BlueprintCallable)
    void GetRequest(FROSSetBoolReq& Request) const;

    // used by service
    UFUNCTION(BlueprintCallable)
    void SetResponse(const FROSSetBoolRes& Response);

    // used by client
    UFUNCTION(BlueprintCallable)
    void GetResponse(FROSSetBoolRes& Response) const;

    virtual void* GetRequest() override;
    virtual void* GetResponse() override;

private:
    virtual FString SrvRequestToString() const override;
    virtual FString SrvResponseToString() const override;

    example_interfaces__srv__SetBool_Request SetBool_req;
    example_interfaces__srv__SetBool_Response SetBool_res;
};

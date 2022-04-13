// Copyright 2020-2021 Rapyuta Robotics Co., Ltd.

// class that tracks rclc_support_t (see rclc/types.h)
// this object is used to initialized ROS2 nodes

#pragma once

#include "rclcUtilities.h"

#include <CoreMinimal.h>

#include "Conversions.h"
#include "Msgs/ROS2TimeMsg.h"
#include "ROS2Support.generated.h"

class AROS2Node;

UCLASS(Blueprintable)
class RCLUE_API UROS2Support : public UObject
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable)
    void Init();

    UFUNCTION(BlueprintCallable)
    void Fini();

    rclc_support_t& Get();

    void RegisterNode(AROS2Node* node);
    TArray<AROS2Node*> Nodes;

private:

    rcl_allocator_t allocator;
    rclc_support_t support;
};

static rmw_qos_profile_t BuildQoSProfile(UROS2QosHistoryPolicy QosHistoryPolicy, int32 QosDepth,
    UROS2QosReliabilityPolicy QosReliabilityPolicy, UROS2QosDurabilityPolicy QosDurabilityPolicy);

UCLASS()
class URCLUEBlueprintLibrary :
    public UBlueprintFunctionLibrary
{
    GENERATED_UCLASS_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Transforms")
    static FQuat RotatorToQuat(const FRotator& rotator) {
        return rotator.Quaternion();
    }

    UFUNCTION(BlueprintPure, Category="Utilities")
    static FROSTime ElapsedToTimestamp(const float elapsedTime)
    {
        FROSTime timemsg;
        timemsg.sec = static_cast<int32>(elapsedTime);
        uint64 ns = static_cast<uint64>(elapsedTime * 1e+09f);
        timemsg.nanosec = static_cast<uint32>(ns - (timemsg.sec * 1e+09));
        return timemsg;
    }

    UFUNCTION(BlueprintPure, Category="ROS2|Utilities")
    static FROSTime ToROSTime(const FDateTime DateTime)
    {
        FROSTime timemsg;
        UEToROS2Msg::SetTime(DateTime, timemsg);
        return timemsg;
    }
};

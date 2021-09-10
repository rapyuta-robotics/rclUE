// Copyright (c) 2020-2021 Rapyuta Robotics Co., Ltd.

// class that tracks rclc_support_t (see rclc/types.h)
// this object is used to initialized ROS2 nodes

#pragma once

#include "rclcUtilities.h"

#include <CoreMinimal.h>

#include "ROS2Support.generated.h"

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

private:
    rcl_allocator_t allocator;
    rclc_support_t support;
};

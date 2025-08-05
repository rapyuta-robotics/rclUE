/**
 * @file ROS2Support.h
 * @brief class that tracks rclc_support_t (see rclc/types.h)
 *  this object is used to initialized ROS2 nodes.
 * @copyright Copyright 2020-2022 Rapyuta Robotics Co., Ltd.
 * 
 */

#pragma once

#include "rclcUtilities.h"

#include <CoreMinimal.h>

#include "ROS2Support.generated.h"

/**
 * @brief  class that tracks rclc_support_t (see rclc/types.h)
 * this object is used to initialized ROS2 nodes.
 */
UCLASS(Blueprintable)
class RCLUE_API UROS2Support : public UObject
{
    GENERATED_BODY()

public:
    /**
    * @brief Wrapper of rclc_support_init
    * 
    */
    UFUNCTION(BlueprintCallable)
    void Init();

    /**
     * @brief Wrapper of rclc_support_fini
     * 
     */
    UFUNCTION(BlueprintCallable)
    void Fini();

    rclc_support_t& Get();

private:
    rcl_allocator_t allocator;

    rclc_support_t support;
};

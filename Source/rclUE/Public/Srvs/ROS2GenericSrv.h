/**
 * @file ROS2GenericSrv.h
 * @brief This should be refactored with other generic ROS2 types (Msgs, Sensors, Actions).
 * @todo  Get/Print/ToString methods should be merged into a single of each with a parameter to switch versions (these are not
 * bottlenecks and control flow inside them should be fine)
 * @copyright Copyright 2020-2022 Rapyuta Robotics Co., Ltd.
 *
 */

#pragma once

#include "rclcUtilities.h"

#include <CoreMinimal.h>

#include "ROS2GenericSrv.generated.h"

/**
 * @brief This should be refactored with other generic ROS2 types (Msgs, Sensors, Actions).
 * @todo  Get/Print/ToString methods should be merged into a single of each with a parameter to switch versions (these are not
 * bottlenecks and control flow inside them should be fine)
 */
UCLASS(Blueprintable)
class RCLUE_API UROS2GenericSrv : public UObject
{
    GENERATED_BODY()

    // Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
    virtual void Init();
    virtual void Fini();

    virtual void* GetRequest();
    virtual void* GetResponse();

    virtual const rosidl_service_type_support_t* GetTypeSupport() const;

    UFUNCTION(BlueprintCallable)
    virtual FString SrvRequestToString() const;

    UFUNCTION(BlueprintCallable)
    virtual FString SrvResponseToString() const;
};

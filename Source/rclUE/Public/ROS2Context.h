// Copyright (c) 2020 Rapyuta Robotics Co., Ltd.

#pragma once

#include "rclcUtilities.h"

#include <CoreMinimal.h>

#include "ROS2Context.generated.h"

/**
 * Do we need the full rclc_support_t? or is storing the rcl_context_t sufficient?
 * For reference:
typedef struct
{
  rcl_init_options_t init_options;
  rcl_context_t context;
  rcl_allocator_t * allocator;
  rcl_clock_t clock;
} rclc_support_t;
 */
UCLASS(Blueprintable)
class RCLUE_API UROS2Context : public UObject
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

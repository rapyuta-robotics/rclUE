// Copyright (c) 2020 Rapyuta Robotics Co., Ltd.

#pragma once

#include "rclcUtilities.h"

#include <CoreMinimal.h>

#include "ROS2Executor.generated.h"

/**
 *
 */
UCLASS(Blueprintable)
class RCLUE_API UROS2Executor : public UObject
{
	GENERATED_BODY()

public:
	UROS2Executor();
	~UROS2Executor();

	void Init();
	void Fini();

	void AddTimer();
	void AddSubscriber();
	void AddClient();

	void SpinSome();

private:
};

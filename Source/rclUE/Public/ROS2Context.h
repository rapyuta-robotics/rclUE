// Copyright (c) 2020 Rapyuta Robotics Co., Ltd.

#pragma once

#include "CoreMinimal.h"

#include "rclcUtilities.h"

#include "ROS2Context.generated.h"

UCLASS(Blueprintable)
class RCLUE_API UROS2Context : public UObject
{
	GENERATED_BODY()
	
public:	
	UROS2Context();
    ~UROS2Context();

	rclc_support_t Get();
	void Set(rclc_support_t supportContext);
	
private:

	rclc_support_t support;
};

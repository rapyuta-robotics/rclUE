// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "rclcUtilities.h"
#include "ROS2MsgInterface.h"

#include "ROS2Topic.generated.h"

/**
 * Is this overengineering?
 * It feels useful at the moment to keep some consistency
 */
UCLASS()
class RCLUE_API UROS2Topic : public UObject
{
	GENERATED_BODY()

public:
	UROS2Topic();
	~UROS2Topic();

	FString Name;
	IROS2MsgInterface* Msg;
};
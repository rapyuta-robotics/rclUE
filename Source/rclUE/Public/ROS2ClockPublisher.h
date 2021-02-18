// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ROS2Publisher.h"
#include "ROS2ClockMsg.h"
#include "ROS2ClockPublisher.generated.h"


UCLASS( ClassGroup=(Custom),  meta=(BlueprintSpawnableComponent) )
class RCLUE_API UROS2ClockPublisher : public UROS2Publisher
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UROS2ClockPublisher();

public:	
	virtual void UpdateAndPublishMessage_Implementation() override;
};

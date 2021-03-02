// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ROS2Publisher.h"
#include "ROS2LidarPublisher.generated.h"

class ASensorLidar;

/**
 * 
 */
UCLASS( ClassGroup=(Custom),  meta=(BlueprintSpawnableComponent) )
class RCLUE_API UROS2LidarPublisher : public UROS2Publisher
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UROS2LidarPublisher();

public:	
	virtual void UpdateAndPublishMessage_Implementation() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ASensorLidar* Lidar;
};

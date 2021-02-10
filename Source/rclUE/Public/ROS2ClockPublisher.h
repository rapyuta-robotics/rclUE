// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ROS2Publisher.h"
#include <rosgraph_msgs/msg/clock.h>
#include "ROS2ClockPublisher.generated.h"


UCLASS( ClassGroup=(Custom),  meta=(BlueprintSpawnableComponent) )
class RCLUE_API UROS2ClockPublisher : public UROS2Publisher
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UROS2ClockPublisher();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	virtual void InitializeMessage() override;
    virtual void UpdateMessage() override;
    virtual void UpdateAndPublishMessage() override;
	virtual const rosidl_message_type_support_t* GetTypeSupport();

	virtual void Destroy() override;
    
	rosgraph_msgs__msg__Clock clock_pub_msg;
};

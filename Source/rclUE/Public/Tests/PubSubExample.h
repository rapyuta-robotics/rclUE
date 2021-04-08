// Fill out your copyright notice in the Description page of Project Settings.

// code based on the rclc examples
// the purpose of this example is to just give a quick way to test if rcl/ros2 is setup correctly
// for actual implementation, please look at turtlebot3-UE repo

#pragma once

#include <rclc/rclc.h>
#include <rclc/executor.h>

#include <std_msgs/msg/string.h>

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PubSubExample.generated.h"

UCLASS()
class RCLUE_API APubSubExample : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APubSubExample();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	static rcl_publisher_t my_pub;
	static std_msgs__msg__String pub_msg;
	static std_msgs__msg__String sub_msg;
	
	rcl_node_t my_node;
	rcl_timer_t my_timer;
	rclc_executor_t executor;
	rcl_subscription_t my_sub;
	rclc_support_t support;
	rcl_allocator_t allocator;

	UPROPERTY(EditAnywhere)
	int frameMS = 100;

	static void my_subscriber_callback(const void * msgin);
	static void my_timer_callback(rcl_timer_t * timer, int64_t last_call_time);
};

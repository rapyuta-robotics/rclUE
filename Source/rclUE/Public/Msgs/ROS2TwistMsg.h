// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ROS2GenericMsg.h"
#include "rclcUtilities.h"
#include <geometry_msgs/msg/twist.h>

#include "ROS2TwistMsg.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class RCLUE_API UROS2TwistMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	UROS2TwistMsg();
	~UROS2TwistMsg();

  	UFUNCTION(BlueprintCallable)
	virtual void Init() override;

  	UFUNCTION(BlueprintCallable)
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void Update(const FVector Linear, const FVector Angular);

  	UFUNCTION(BlueprintCallable)
	FVector GetLinearVelocity() const;

  	UFUNCTION(BlueprintCallable)
	FVector GetAngularVelocity() const;
	
	const geometry_msgs__msg__Twist* Get() const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;
	
	geometry_msgs__msg__Twist twist_pub_msg;
};

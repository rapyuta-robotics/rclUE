// Copyright 2021 Rapyuta Robotics Co., Ltd.

#pragma once

#include "CoreMinimal.h"

#include "geometry_msgs/msg/twist.h"

#include "ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2TwistMsg.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class RCLUE_API UROS2TwistMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void Update(const FVector Linear, const FVector Angular);

  	UFUNCTION(BlueprintCallable)
	const FVector GetLinearVelocity() const;

  	UFUNCTION(BlueprintCallable)
	const FVector GetAngularVelocity() const;
	
	virtual void* Get() override;

private:
	virtual const FString MsgToString() const override;
	
	geometry_msgs__msg__Twist twist_pub_msg;
};

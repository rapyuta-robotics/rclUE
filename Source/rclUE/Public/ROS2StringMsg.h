// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ROS2GenericMsg.h"
#include "rclcUtilities.h"
#include <std_msgs/msg/string.h>

#include "ROS2StringMsg.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class RCLUE_API UROS2StringMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	UROS2StringMsg();
	~UROS2StringMsg();

  	UFUNCTION(BlueprintCallable)
	virtual void Init() override;

  	UFUNCTION(BlueprintCallable)
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
	void Update(const FString stringData);
	
	const std_msgs__msg__String* Get() const;
	
	void* Get();
	
	virtual void PrintPubToLog(rcl_ret_t rc) const override;
	
	virtual void PrintSubToLog(rcl_ret_t rc) const override;

private:
	std_msgs__msg__String string_pub_msg;
};

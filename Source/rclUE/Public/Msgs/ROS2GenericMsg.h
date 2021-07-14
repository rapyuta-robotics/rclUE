// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "rclcUtilities.h"

#include "ROS2GenericMsg.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogROS2Msg, Log, All);

/**
 * This should be refactored with other generic ROS2 types (Msgs, Sensors, Actions)
 * Need to have a common class
 * Get/Print/ToString methods should be merged into a single of each with a parameter to switch versions (these are not bottlenecks and control flow inside them should be fine)
 */
UCLASS(Blueprintable)
class UROS2GenericMsg : public UObject
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
  	UFUNCTION(BlueprintCallable)
	virtual void Init();
	
  	UFUNCTION(BlueprintCallable)
	virtual void Fini();

	virtual void* Get();
	
	virtual const rosidl_message_type_support_t* GetTypeSupport() const;

private:
	UFUNCTION(BlueprintCallable)
	virtual FString MsgToString() const;
};

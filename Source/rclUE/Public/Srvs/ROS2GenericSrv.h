// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "rclcUtilities.h"

#include "ROS2GenericSrv.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogROS2Srv, Log, All);

/**
 * This should be refactored with other generic ROS2 types (Msgs, Sensors, Actions)
 * Need to have a common class
 * Get/Print/ToString methods should be merged into a single of each with a parameter to switch versions (these are not bottlenecks and control flow inside them should be fine)
 */
UCLASS(Blueprintable)
class RCLUE_API UROS2GenericSrv : public UObject
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void Init();
	virtual void Fini();

	virtual void* GetRequest();
	virtual void* GetResponse();
	
	virtual const rosidl_service_type_support_t* GetTypeSupport() const;

	virtual void PrintRequestToLog(rcl_ret_t rc, FString NodeName) const;
	virtual void PrintResponseToLog(rcl_ret_t rc, FString NodeName) const;

private:
	UFUNCTION(BlueprintCallable)
	virtual FString SrvRequestToString() const;
	
	UFUNCTION(BlueprintCallable)
	virtual FString SrvResponseToString() const;
};

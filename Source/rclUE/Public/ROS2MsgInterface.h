// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"

#include "ROS2MsgInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UROS2MsgInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Having this as an abstract class allows the abstract ROS2Publisher class to have a pointer to this,
 * forcing its implementation to use it
 * However, not having ROS2Publisher storing a pointer allows for more flexibility (but: is it needed?)
 */
class RCLUE_API IROS2MsgInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual const rosidl_message_type_support_t* GetTypeSupport();

	virtual void Init();
	virtual void Update(const void* data);
	virtual const void* Get();
	virtual void PrintToLog(rcl_ret_t rc);
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "ROS2GenericMsg.generated.h"

// This class does not need to be modified.
UCLASS(Blueprintable)
class UROS2GenericMsg : public UObject
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual const rosidl_message_type_support_t* GetTypeSupport() const;

	virtual void Init();
	virtual void Fini();
	virtual void* Get();
	virtual void PrintPubToLog(rcl_ret_t rc) const;
	virtual void PrintSubToLog(rcl_ret_t rc) const;
};

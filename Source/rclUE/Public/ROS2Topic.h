// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "rclcUtilities.h"
#include "Msgs/ROS2GenericMsg.h"

#include "ROS2Topic.generated.h"

/**
 * Is this overengineering?
 * It feels useful at the moment to keep some consistency
 */
UCLASS(Blueprintable,EditInlineNew)
class RCLUE_API UROS2Topic : public UObject
{
	GENERATED_BODY()

public:

	UROS2Topic();

	UFUNCTION(BlueprintCallable)
	void Init(const FString &TopicName, TSubclassOf<UROS2GenericMsg> MessageType);

	UFUNCTION(BlueprintCallable)
	void Fini();

	UPROPERTY(BlueprintReadOnly)
	FString Name;
	
	UPROPERTY(BlueprintReadOnly)
	UROS2GenericMsg* Msg;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ROS2GenericMsg.h"
#include "rclcUtilities.h"
#include <tf2_msgs/msg/tf_message.h>

#include "ROS2TFMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FTFData
{
	GENERATED_BODY()

public:
    // header - stamp
    int sec;
    uint nanosec;

    // header - frame_id
    FString frame_id;

  	FString child_frame_id;

	FVector translation;
	FQuat rotation;
};

/**
 * 
 */
UCLASS(Blueprintable)
class RCLUE_API UROS2TFMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void Update(const TArray<FTFData> &data);
	
	virtual void* Get() override;
	
	virtual FString MsgToString() const override;

private:
	tf2_msgs__msg__TFMessage tf_pub_msg;
};

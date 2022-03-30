// Copyright 2020-2021 Rapyuta Robotics Co., Ltd.

#pragma once

#include <CoreMinimal.h>
#include "ROS2GenericMsg.h"
#include "rclcUtilities.h"
#include "example_interfaces/msg/string.h"

#include "ROS2StringMsg.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class RCLUE_API UROS2StringMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void Update(const FString &stringData);

	virtual void* Get() override;

	virtual FString MsgToString() const override;
	
private:
	example_interfaces__msg__String string_pub_msg;
};

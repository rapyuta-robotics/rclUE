// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/msg/Empty.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "example_interfaces/msg/empty.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)


// Generated
#include "ROS2Empty.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSEmpty
{
	GENERATED_BODY()

public:
	

	

	FROSEmpty()
	{
		
	}

	void SetFromROS2(const example_interfaces__msg__Empty& in_ros_data)
	{
    	
	}

	void SetROS2(example_interfaces__msg__Empty& out_ros_data) const
	{
    	
	}
};

UCLASS()
class RCLUE_API UROS2EmptyMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSEmpty& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSEmpty& Output) const;
	
	virtual void* Get() override;

	


private:
	virtual FString MsgToString() const override;

	example_interfaces__msg__Empty empty_msg;
};
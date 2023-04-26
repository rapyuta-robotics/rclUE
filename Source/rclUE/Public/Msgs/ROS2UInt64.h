// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/msg/UInt64.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "example_interfaces/msg/u_int64.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)


// Generated
#include "ROS2UInt64.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSUInt64
{
	GENERATED_BODY()

public:
	

	UPROPERTY(EditAnywhere)
	uint64 Data = 0;

	

	FROSUInt64()
	{
		
	}

	void SetFromROS2(const example_interfaces__msg__UInt64& in_ros_data)
	{
    	Data = in_ros_data.data;

		
	}

	void SetROS2(example_interfaces__msg__UInt64& out_ros_data) const
	{
    	out_ros_data.data = Data;

		
	}
};

UCLASS()
class RCLUE_API UROS2UInt64Msg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSUInt64& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSUInt64& Output) const;
	
	virtual void* Get() override;

	


private:
	virtual FString MsgToString() const override;

	example_interfaces__msg__UInt64 u_int64_msg;
};
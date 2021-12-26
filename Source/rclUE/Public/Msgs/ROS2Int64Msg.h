// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/Int64.msg - do not modify

#pragma once

#include <CoreMinimal.h>

#include "example_interfaces/msg/int64.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2Int64Msg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSInt64
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 data;

	

	void SetFromROS2(const example_interfaces__msg__Int64& in_ros_data)
	{
    	data = in_ros_data.data;

		
	}

	void SetROS2(example_interfaces__msg__Int64& out_ros_data) const
	{
    	out_ros_data.data = data;

		
	}
};

UCLASS()
class RCLUE_API UROS2Int64Msg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSInt64& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSInt64& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	example_interfaces__msg__Int64 int64_msg;
};
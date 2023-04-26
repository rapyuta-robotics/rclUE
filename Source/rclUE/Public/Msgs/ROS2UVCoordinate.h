// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from visualization_msgs/msg/UVCoordinate.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "visualization_msgs/msg/uv_coordinate.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)


// Generated
#include "ROS2UVCoordinate.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSUVCoordinate
{
	GENERATED_BODY()

public:
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float U = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float V = 0.f;

	

	FROSUVCoordinate()
	{
		
	}

	void SetFromROS2(const visualization_msgs__msg__UVCoordinate& in_ros_data)
	{
    	U = in_ros_data.u;

		V = in_ros_data.v;

		
	}

	void SetROS2(visualization_msgs__msg__UVCoordinate& out_ros_data) const
	{
    	out_ros_data.u = U;

		out_ros_data.v = V;

		
	}
};

UCLASS()
class RCLUE_API UROS2UVCoordinateMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSUVCoordinate& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSUVCoordinate& Output) const;
	
	virtual void* Get() override;

	


private:
	virtual FString MsgToString() const override;

	visualization_msgs__msg__UVCoordinate uv_coordinate_msg;
};
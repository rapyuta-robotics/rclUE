// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"
#include <ue_msgs/msg/entity_state.h>

#include "ROS2EntityStateMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FEntityStateData
{
	GENERATED_BODY()

public:
	FString name;
	
	// Pose
	FVector position;
	FQuat orientation;

	// Twist
	FVector linear;
	FVector angular;

	FString reference_frame;

	void SetFromROS2(ue_msgs__msg__EntityState data)
	{
		name.AppendChars(data.name.data, data.name.size);

		position.X = data.pose.position.x;
		position.Y = data.pose.position.y;
		position.Z = data.pose.position.z;
		orientation.X = data.pose.orientation.x;
		orientation.Y = data.pose.orientation.y;
		orientation.Z = data.pose.orientation.z;
		orientation.W = data.pose.orientation.w;
		
		linear.X = data.twist.linear.x;
		linear.Y = data.twist.linear.y;
		linear.Z = data.twist.linear.z;
		angular.X = data.twist.angular.x;
		angular.Y = data.twist.angular.y;
		angular.Z = data.twist.angular.z;

		reference_frame.AppendChars(data.reference_frame.data, data.reference_frame.size);
	}

	void SetROS2(ue_msgs__msg__EntityState& data) const
	{
		if (data.name.data != nullptr)
		{
			free(data.name.data);
		}
		data.name.data = (char*)malloc((name.Len()+1)*sizeof(char));
		memcpy(data.name.data, TCHAR_TO_ANSI(*name), (name.Len()+1)*sizeof(char));
		data.name.size = name.Len();
		data.name.capacity = name.Len()+1;

		data.pose.position.x = position.X;
		data.pose.position.y = position.Y;
		data.pose.position.z = position.Z;
		data.pose.orientation.x = orientation.X;
		data.pose.orientation.y = orientation.Y;
		data.pose.orientation.z = orientation.Z;
		data.pose.orientation.w = orientation.W;

		
		data.twist.linear.x = linear.X;
		data.twist.linear.y = linear.Y;
		data.twist.linear.z = linear.Z;
		data.twist.angular.x = angular.X;
		data.twist.angular.y = angular.Y;
		data.twist.angular.z = angular.Z;

		if (data.reference_frame.data != nullptr)
		{
			free(data.reference_frame.data);
		}
		data.reference_frame.data = (char*)malloc((reference_frame.Len()+1)*sizeof(char));
		memcpy(data.reference_frame.data, TCHAR_TO_ANSI(*reference_frame), (reference_frame.Len()+1)*sizeof(char));
		data.reference_frame.size = reference_frame.Len();
		data.reference_frame.capacity = reference_frame.Len()+1;
	}
};

/**
 * 
 */
UCLASS(Blueprintable)
class RCLUE_API UROS2EntityStateMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void Update(FEntityStateData data);
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;
	
	ue_msgs__msg__EntityState entity_state_msg;
};

// Copyright 2021 Rapyuta Robotics Co., Ltd.

#pragma once

#include "CoreMinimal.h"

#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"
#include "ue_msgs/srv/set_entity_state.h"

#include "ROS2SetEntityStateSrv.generated.h"

// potential problem: if this struct is defined multiple times!
USTRUCT(Blueprintable)
struct RCLUE_API FSetEntityState_Request
{
	GENERATED_BODY()

public:
	FString state_name;
	FVector state_pose_position;
	FQuat state_pose_orientation;
	FVector state_twist_linear;
	FVector state_twist_angular;
	FString state_reference_frame;
	

	void SetFromROS2(ue_msgs__srv__SetEntityState_Request data)
	{
    	state_name.AppendChars(data.state.name.data, data.state.name.size);

		state_pose_position.X = data.state.pose.position.x;
		state_pose_position.Y = data.state.pose.position.y;
		state_pose_position.Z = data.state.pose.position.z;

		state_pose_orientation.X = data.state.pose.orientation.x;
		state_pose_orientation.Y = data.state.pose.orientation.y;
		state_pose_orientation.Z = data.state.pose.orientation.z;
		state_pose_orientation.W = data.state.pose.orientation.w;

		state_twist_linear.X = data.state.twist.linear.x;
		state_twist_linear.Y = data.state.twist.linear.y;
		state_twist_linear.Z = data.state.twist.linear.z;

		state_twist_angular.X = data.state.twist.angular.x;
		state_twist_angular.Y = data.state.twist.angular.y;
		state_twist_angular.Z = data.state.twist.angular.z;

		state_reference_frame.AppendChars(data.state.reference_frame.data, data.state.reference_frame.size);

		
	}

	void SetROS2(ue_msgs__srv__SetEntityState_Request& data) const
	{
    	if (data.state.name.data != nullptr)
		{
			free(data.state.name.data);
		}
		data.state.name.data = (char*)malloc((state_name.Len()+1)*sizeof(char));
		memcpy(data.state.name.data, TCHAR_TO_ANSI(*state_name), (state_name.Len()+1)*sizeof(char));
		data.state.name.size = state_name.Len();
		data.state.name.capacity = state_name.Len() + 1;

		data.state.pose.position.x = state_pose_position.X;
		data.state.pose.position.y = state_pose_position.Y;
		data.state.pose.position.z = state_pose_position.Z;

		data.state.pose.orientation.x = state_pose_orientation.X;
		data.state.pose.orientation.y = state_pose_orientation.Y;
		data.state.pose.orientation.z = state_pose_orientation.Z;
		data.state.pose.orientation.w = state_pose_orientation.W;

		data.state.twist.linear.x = state_twist_linear.X;
		data.state.twist.linear.y = state_twist_linear.Y;
		data.state.twist.linear.z = state_twist_linear.Z;

		data.state.twist.angular.x = state_twist_angular.X;
		data.state.twist.angular.y = state_twist_angular.Y;
		data.state.twist.angular.z = state_twist_angular.Z;

		if (data.state.reference_frame.data != nullptr)
		{
			free(data.state.reference_frame.data);
		}
		data.state.reference_frame.data = (char*)malloc((state_reference_frame.Len()+1)*sizeof(char));
		memcpy(data.state.reference_frame.data, TCHAR_TO_ANSI(*state_reference_frame), (state_reference_frame.Len()+1)*sizeof(char));
		data.state.reference_frame.size = state_reference_frame.Len();
		data.state.reference_frame.capacity = state_reference_frame.Len() + 1;

		
	}
};

USTRUCT(Blueprintable)
struct RCLUE_API FSetEntityState_Response
{
	GENERATED_BODY()

public:
	bool success;
	

	void SetFromROS2(ue_msgs__srv__SetEntityState_Response data)
	{
    	success = data.success;

		
	}

	void SetROS2(ue_msgs__srv__SetEntityState_Response& data) const
	{
    	data.success = success;

		
	}
};

UCLASS()
class RCLUE_API UROS2SetEntityStateSrv : public UROS2GenericSrv
{
	GENERATED_BODY()

public:
  	UFUNCTION(BlueprintCallable)
	virtual void Init() override;

  	UFUNCTION(BlueprintCallable)
	virtual void Fini() override;

	virtual const rosidl_service_type_support_t* GetTypeSupport() const override;
	
	// used by client
  	UFUNCTION(BlueprintCallable)
	void SetRequest(const FSetEntityState_Request Request);
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void GetRequest(FSetEntityState_Request& Request) const;
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void SetResponse(const FSetEntityState_Response Response);
	
	// used by client
  	UFUNCTION(BlueprintCallable)
	void GetResponse(FSetEntityState_Response& Response) const;
	
	virtual void* GetRequest() override;
	virtual void* GetResponse() override;

private:
	virtual FString SrvRequestToString() const override;
	virtual FString SrvResponseToString() const override;

	ue_msgs__srv__SetEntityState_Request SetEntityState_req;
	ue_msgs__srv__SetEntityState_Response SetEntityState_res;
};
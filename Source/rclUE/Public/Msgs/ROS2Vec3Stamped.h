// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/Vector3Stamped.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "geometry_msgs/msg/vector3_stamped.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Header.h"


// Generated
#include "ROS2Vec3Stamped.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSVec3Stamped
{
	GENERATED_BODY()

public:
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FROSHeader Header;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Vector = FVector::ZeroVector;

	

	FROSVec3Stamped()
	{
		
	}

	void SetFromROS2(const geometry_msgs__msg__Vector3Stamped& in_ros_data)
	{
    	Header.SetFromROS2(in_ros_data.header);

		Vector = UROS2Utils::VectorROSToUE<geometry_msgs__msg__Vector3>(in_ros_data.vector);

		
	}

	void SetROS2(geometry_msgs__msg__Vector3Stamped& out_ros_data) const
	{
    	Header.SetROS2(out_ros_data.header);

		out_ros_data.vector = UROS2Utils::VectorUEToROS<geometry_msgs__msg__Vector3>(Vector);

		
	}
};

UCLASS()
class RCLUE_API UROS2Vec3StampedMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSVec3Stamped& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSVec3Stamped& Output) const;
	
	virtual void* Get() override;

	


private:
	virtual FString MsgToString() const override;

	geometry_msgs__msg__Vector3Stamped vector3_stamped_msg;
};
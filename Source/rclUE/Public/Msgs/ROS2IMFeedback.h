// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from visualization_msgs/msg/InteractiveMarkerFeedback.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "visualization_msgs/msg/interactive_marker_feedback.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2Pose.h"


// Generated
#include "ROS2IMFeedback.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSIMFeedback
{
	GENERATED_BODY()

public:
		static constexpr uint8 KEEP_ALIVE = 0;
	static constexpr uint8 POSE_UPDATE = 1;
	static constexpr uint8 MENU_SELECT = 2;
	static constexpr uint8 BUTTON_CLICK = 3;
	static constexpr uint8 MOUSE_DOWN = 4;
	static constexpr uint8 MOUSE_UP = 5;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FROSHeader Header;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ClientId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MarkerName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ControlName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 EventType = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FROSPose Pose;

	UPROPERTY(EditAnywhere)
	unsigned int MenuEntryId = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector MousePoint = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bMousePointValid = false;

	

	FROSIMFeedback()
	{
		
	}

	void SetFromROS2(const visualization_msgs__msg__InteractiveMarkerFeedback& in_ros_data)
	{
    	Header.SetFromROS2(in_ros_data.header);

		ClientId = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.client_id);

		MarkerName = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.marker_name);

		ControlName = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.control_name);

		EventType = in_ros_data.event_type;

		Pose.SetFromROS2(in_ros_data.pose);

		MenuEntryId = in_ros_data.menu_entry_id;

		MousePoint = UROS2Utils::VectorROSToUE<geometry_msgs__msg__Point>(in_ros_data.mouse_point);

		bMousePointValid = in_ros_data.mouse_point_valid;

		
	}

	void SetROS2(visualization_msgs__msg__InteractiveMarkerFeedback& out_ros_data) const
	{
    	Header.SetROS2(out_ros_data.header);

		UROS2Utils::StringUEToROS(ClientId, out_ros_data.client_id);

		UROS2Utils::StringUEToROS(MarkerName, out_ros_data.marker_name);

		UROS2Utils::StringUEToROS(ControlName, out_ros_data.control_name);

		out_ros_data.event_type = EventType;

		Pose.SetROS2(out_ros_data.pose);

		out_ros_data.menu_entry_id = MenuEntryId;

		out_ros_data.mouse_point = UROS2Utils::VectorUEToROS<geometry_msgs__msg__Point>(MousePoint);

		out_ros_data.mouse_point_valid = bMousePointValid;

		
	}
};

UCLASS()
class RCLUE_API UROS2IMFeedbackMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSIMFeedback& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSIMFeedback& Output) const;
	
	virtual void* Get() override;

	UFUNCTION(BlueprintCallable)
	static uint8 CONST_KEEP_ALIVE()
	{
		return FROSIMFeedback::KEEP_ALIVE;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_POSE_UPDATE()
	{
		return FROSIMFeedback::POSE_UPDATE;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_MENU_SELECT()
	{
		return FROSIMFeedback::MENU_SELECT;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_BUTTON_CLICK()
	{
		return FROSIMFeedback::BUTTON_CLICK;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_MOUSE_DOWN()
	{
		return FROSIMFeedback::MOUSE_DOWN;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_MOUSE_UP()
	{
		return FROSIMFeedback::MOUSE_UP;
	}
	


private:
	virtual FString MsgToString() const override;

	visualization_msgs__msg__InteractiveMarkerFeedback interactive_marker_feedback_msg;
};
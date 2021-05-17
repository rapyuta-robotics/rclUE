// Fill out your copyright notice in the Description page of Project Settings.


#include "Msgs/ROS2OdometryMsg.h"
#include "Kismet/GameplayStatics.h"


void UROS2OdometryMsg::Init()
{
	nav_msgs__msg__Odometry__init(&odometry_pub_msg);
}

void UROS2OdometryMsg::Fini()
{
	nav_msgs__msg__Odometry__fini(&odometry_pub_msg);
}

const rosidl_message_type_support_t* UROS2OdometryMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(nav_msgs, msg, Odometry);
}

void UROS2OdometryMsg::Update(const FOdometryData data)
{
    odometry_pub_msg.header.stamp.sec = data.sec;
    odometry_pub_msg.header.stamp.nanosec = data.nanosec;

	if (odometry_pub_msg.header.frame_id.data != nullptr)
	{
    	FMemory::Free(odometry_pub_msg.header.frame_id.data);
	}
    odometry_pub_msg.header.frame_id.data = (char*)FMemory::Malloc((data.frame_id.Len()+1)*sizeof(char)); // sizeof(char) is just to clarify the type
    FMemory::Memcpy(odometry_pub_msg.header.frame_id.data, TCHAR_TO_ANSI(*data.frame_id), (data.frame_id.Len()+1)*sizeof(char));
    odometry_pub_msg.header.frame_id.size = data.frame_id.Len(); // Len excludes nullterm char
    odometry_pub_msg.header.frame_id.capacity = data.frame_id.Len()+1;

	if (odometry_pub_msg.child_frame_id.data != nullptr)
	{
    	FMemory::Free(odometry_pub_msg.child_frame_id.data);
	}
    odometry_pub_msg.child_frame_id.data = (char*)FMemory::Malloc((data.child_frame_id.Len()+1)*sizeof(char)); // sizeof(char) is just to clarify the type
    FMemory::Memcpy(odometry_pub_msg.child_frame_id.data, TCHAR_TO_ANSI(*data.child_frame_id), (data.child_frame_id.Len()+1)*sizeof(char));
    odometry_pub_msg.child_frame_id.size = data.child_frame_id.Len(); // Len excludes nullterm char
    odometry_pub_msg.child_frame_id.capacity = data.child_frame_id.Len()+1;

	odometry_pub_msg.pose.pose.position.x = data.position.X;
	odometry_pub_msg.pose.pose.position.y = data.position.Y;
	odometry_pub_msg.pose.pose.position.z = data.position.Z;
	odometry_pub_msg.pose.pose.orientation.x = data.orientation.X;
	odometry_pub_msg.pose.pose.orientation.y = data.orientation.Y;
	odometry_pub_msg.pose.pose.orientation.z = data.orientation.Z;
	odometry_pub_msg.pose.pose.orientation.w = data.orientation.W;

	
	odometry_pub_msg.twist.twist.linear.x = data.linear.X;
	odometry_pub_msg.twist.twist.linear.y = data.linear.Y;
	odometry_pub_msg.twist.twist.linear.z = data.linear.Z;
	odometry_pub_msg.twist.twist.angular.x = data.angular.X;
	odometry_pub_msg.twist.twist.angular.y = data.angular.Y;
	odometry_pub_msg.twist.twist.angular.z = data.angular.Z;

	for (int i=0; i<36; i++)
	{
		odometry_pub_msg.pose.covariance[i] = data.pose_covariance[i];
		odometry_pub_msg.twist.covariance[i] = data.twist_covariance[i];
	}
}

void* UROS2OdometryMsg::Get()
{
	return &odometry_pub_msg;
}

FString UROS2OdometryMsg::MsgToString() const
{
    FString frame_id, child_frame_id;
    frame_id.AppendChars(odometry_pub_msg.header.frame_id.data, odometry_pub_msg.header.frame_id.size);
    child_frame_id.AppendChars(odometry_pub_msg.child_frame_id.data, odometry_pub_msg.child_frame_id.size);
	return FString::Printf(TEXT("Odometry: (%ds %dns %s %s), (%f %f %f, %f %f %f %f)"),
                            odometry_pub_msg.header.stamp.sec, odometry_pub_msg.header.stamp.nanosec, *frame_id, *child_frame_id,
                            odometry_pub_msg.pose.pose.position.x, odometry_pub_msg.pose.pose.position.y, odometry_pub_msg.pose.pose.position.z,
							odometry_pub_msg.pose.pose.orientation.x, odometry_pub_msg.pose.pose.orientation.y, odometry_pub_msg.pose.pose.orientation.z, odometry_pub_msg.pose.pose.orientation.w);
}

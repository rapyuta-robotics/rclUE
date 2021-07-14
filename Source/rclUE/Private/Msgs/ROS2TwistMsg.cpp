// Fill out your copyright notice in the Description page of Project Settings.


#include "Msgs/ROS2TwistMsg.h"
#include "Kismet/GameplayStatics.h"


void UROS2TwistMsg::Init()
{
	geometry_msgs__msg__Twist__init(&twist_pub_msg);
}

void UROS2TwistMsg::Fini()
{
	geometry_msgs__msg__Twist__fini(&twist_pub_msg);
}

const rosidl_message_type_support_t* UROS2TwistMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Twist);
}

void UROS2TwistMsg::Update(const FVector Linear, const FVector Angular)
{
	twist_pub_msg.linear.x = Linear.X;
	twist_pub_msg.linear.y = Linear.Y;
	twist_pub_msg.linear.z = Linear.Z;
	twist_pub_msg.angular.x = Angular.X;
	twist_pub_msg.angular.y = Angular.Y;
	twist_pub_msg.angular.z = Angular.Z;
}

FVector UROS2TwistMsg::GetLinearVelocity() const
{
	return FVector(twist_pub_msg.linear.x, twist_pub_msg.linear.y, twist_pub_msg.linear.z);
}

FVector UROS2TwistMsg::GetAngularVelocity() const
{
	return FVector(twist_pub_msg.angular.x, twist_pub_msg.angular.y, twist_pub_msg.angular.z);
}

void* UROS2TwistMsg::Get()
{
	return &twist_pub_msg;
}

FString UROS2TwistMsg::MsgToString() const
{
	return FString::Printf(TEXT("(%f %f %f), (%f %f %f)"), twist_pub_msg.linear.x, twist_pub_msg.linear.y, twist_pub_msg.linear.z, twist_pub_msg.angular.x, twist_pub_msg.angular.y, twist_pub_msg.angular.z);
}

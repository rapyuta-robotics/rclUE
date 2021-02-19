// Fill out your copyright notice in the Description page of Project Settings.


#include "Msgs/ROS2TFMsg.h"
#include "Kismet/GameplayStatics.h"


UROS2TFMsg::UROS2TFMsg()
{
}

UROS2TFMsg::~UROS2TFMsg()
{
}

void UROS2TFMsg::Init()
{
	UE_LOG(LogTemp, Warning, TEXT("UROS2TFMsg::Init"));
	tf2_msgs__msg__TFMessage__init(&tf_pub_msg);
}

void UROS2TFMsg::Fini()
{
	UE_LOG(LogTemp, Warning, TEXT("UROS2TFMsg::Fini"));
	tf2_msgs__msg__TFMessage__fini(&tf_pub_msg);
}

const rosidl_message_type_support_t* UROS2TFMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(tf2_msgs, msg, TFMessage);
}

void UROS2TFMsg::Update(const TArray<FTFData> data)
{
	tf_pub_msg.transforms.data = (geometry_msgs__msg__TransformStamped*)malloc(sizeof(geometry_msgs__msg__TransformStamped)*data.Num());
	tf_pub_msg.transforms.size = data.Num();
	tf_pub_msg.transforms.capacity = data.Num();

	for (int i=0; i<data.Num(); i++)
	{
		tf_pub_msg.transforms.data[i].header.stamp.sec = data[i].sec;
		tf_pub_msg.transforms.data[i].header.stamp.nanosec = data[i].nanosec;
		tf_pub_msg.transforms.data[i].header.frame_id.data = TCHAR_TO_ANSI(*data[i].frame_id);
		tf_pub_msg.transforms.data[i].header.frame_id.size = data[i].frame_id.Len();
		tf_pub_msg.transforms.data[i].header.frame_id.capacity = data[i].frame_id.Len()+1;
		
		tf_pub_msg.transforms.data[i].child_frame_id.data = TCHAR_TO_ANSI(*data[i].child_frame_id);
		tf_pub_msg.transforms.data[i].child_frame_id.size = data[i].child_frame_id.Len();
		tf_pub_msg.transforms.data[i].child_frame_id.capacity = data[i].child_frame_id.Len()+1;

		tf_pub_msg.transforms.data[i].transform.translation.x = data[i].translation.X;
		tf_pub_msg.transforms.data[i].transform.translation.y = data[i].translation.Y;
		tf_pub_msg.transforms.data[i].transform.translation.z = data[i].translation.Z;
		tf_pub_msg.transforms.data[i].transform.rotation.x = data[i].rotation.X;
		tf_pub_msg.transforms.data[i].transform.rotation.y = data[i].rotation.Y;
		tf_pub_msg.transforms.data[i].transform.rotation.z = data[i].rotation.Z;
		tf_pub_msg.transforms.data[i].transform.rotation.w = data[i].rotation.W;
	}

	
}

const tf2_msgs__msg__TFMessage* UROS2TFMsg::Get() const
{
	return &tf_pub_msg;
}

void* UROS2TFMsg::Get()
{
	return &tf_pub_msg;
}

FString UROS2TFMsg::MsgToString() const
{
    return FString();
}

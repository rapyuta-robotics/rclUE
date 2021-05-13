// Fill out your copyright notice in the Description page of Project Settings.


#include "Msgs/ROS2TFMsg.h"
#include "Kismet/GameplayStatics.h"


void UROS2TFMsg::Init()
{
	tf2_msgs__msg__TFMessage__init(&tf_pub_msg);
}

void UROS2TFMsg::Fini()
{
	tf2_msgs__msg__TFMessage__fini(&tf_pub_msg);
}

const rosidl_message_type_support_t* UROS2TFMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(tf2_msgs, msg, TFMessage);
}

void UROS2TFMsg::Update(const TArray<FTFData> &data)
{
	tf_pub_msg.transforms.data = (geometry_msgs__msg__TransformStamped*)malloc(sizeof(geometry_msgs__msg__TransformStamped)*data.Num());
	tf_pub_msg.transforms.size = data.Num();
	tf_pub_msg.transforms.capacity = data.Num();

	for (int i=0; i<data.Num(); i++)
	{
		tf_pub_msg.transforms.data[i].header.stamp.sec = data[i].sec;
		tf_pub_msg.transforms.data[i].header.stamp.nanosec = data[i].nanosec;

		// if (tf_pub_msg.transforms.data[i].header.frame_id.data != nullptr)
		// {
		// 	free(tf_pub_msg.transforms.data[i].header.frame_id.data);
		// }
		tf_pub_msg.transforms.data[i].header.frame_id.data = (char*)malloc((data[i].frame_id.Len()+1)*sizeof(char)); // sizeof(char) is just to clarify the type
		strcpy(tf_pub_msg.transforms.data[i].header.frame_id.data, TCHAR_TO_ANSI(*data[i].frame_id));
		tf_pub_msg.transforms.data[i].header.frame_id.size = data[i].frame_id.Len(); // GetStringLength excludes nullterm char
		tf_pub_msg.transforms.data[i].header.frame_id.capacity = data[i].frame_id.Len()+1;

		// if (tf_pub_msg.transforms.data[i].child_frame_id.data != nullptr)
		// {
		// 	free(tf_pub_msg.transforms.data[i].child_frame_id.data);
		// }
		tf_pub_msg.transforms.data[i].child_frame_id.data = (char*)malloc((data[i].child_frame_id.Len()+1)*sizeof(char)); // sizeof(char) is just to clarify the type
		strcpy(tf_pub_msg.transforms.data[i].child_frame_id.data, TCHAR_TO_ANSI(*data[i].child_frame_id));
		tf_pub_msg.transforms.data[i].child_frame_id.size = data[i].child_frame_id.Len(); // Len excludes nullterm char
		tf_pub_msg.transforms.data[i].child_frame_id.capacity = data[i].child_frame_id.Len()+1;

		tf_pub_msg.transforms.data[i].transform.translation.x = data[i].translation.X;
		tf_pub_msg.transforms.data[i].transform.translation.y = data[i].translation.Y;
		tf_pub_msg.transforms.data[i].transform.translation.z = data[i].translation.Z;
		tf_pub_msg.transforms.data[i].transform.rotation.x = data[i].rotation.X;
		tf_pub_msg.transforms.data[i].transform.rotation.y = data[i].rotation.Y;
		tf_pub_msg.transforms.data[i].transform.rotation.z = data[i].rotation.Z;
		tf_pub_msg.transforms.data[i].transform.rotation.w = data[i].rotation.W;

		// FString frame_id, child_frame_id;
		// frame_id.AppendChars(tf_pub_msg.transforms.data[i].header.frame_id.data, tf_pub_msg.transforms.data[i].header.frame_id.size);
		// child_frame_id.AppendChars(tf_pub_msg.transforms.data[i].child_frame_id.data, tf_pub_msg.transforms.data[i].child_frame_id.size);
		// UE_LOG(LogTemp, Warning, TEXT("TF - %ds %dns: %s, %s - (%f %f %f) (%f %f %f %f)"),
		// 	tf_pub_msg.transforms.data[i].header.stamp.sec,
		// 	tf_pub_msg.transforms.data[i].header.stamp.nanosec,
		// 	*frame_id,
		// 	*child_frame_id,
		// 	tf_pub_msg.transforms.data[i].transform.translation.x,
		// 	tf_pub_msg.transforms.data[i].transform.translation.y,
		// 	tf_pub_msg.transforms.data[i].transform.translation.z,
		// 	tf_pub_msg.transforms.data[i].transform.rotation.x,
		// 	tf_pub_msg.transforms.data[i].transform.rotation.y,
		// 	tf_pub_msg.transforms.data[i].transform.rotation.z,
		// 	tf_pub_msg.transforms.data[i].transform.rotation.w);
	}

	
}

void* UROS2TFMsg::Get()
{
	return &tf_pub_msg;
}

FString UROS2TFMsg::MsgToString() const
{
    FString frame_id, child_frame_id;
    frame_id.AppendChars(tf_pub_msg.transforms.data[0].header.frame_id.data, tf_pub_msg.transforms.data[0].header.frame_id.size);
    child_frame_id.AppendChars(tf_pub_msg.transforms.data[0].child_frame_id.data, tf_pub_msg.transforms.data[0].child_frame_id.size);
	return FString::Printf(TEXT("TF Element 0: (%ds %dns %s %s), (%f %f %f, %f %f %f %f)"),
                            tf_pub_msg.transforms.data[0].header.stamp.sec, tf_pub_msg.transforms.data[0].header.stamp.nanosec, *frame_id, *child_frame_id,
                            tf_pub_msg.transforms.data[0].transform.translation.x, tf_pub_msg.transforms.data[0].transform.translation.y, tf_pub_msg.transforms.data[0].transform.translation.z,
							tf_pub_msg.transforms.data[0].transform.rotation.x, tf_pub_msg.transforms.data[0].transform.rotation.y, tf_pub_msg.transforms.data[0].transform.rotation.z, tf_pub_msg.transforms.data[0].transform.rotation.w);
}

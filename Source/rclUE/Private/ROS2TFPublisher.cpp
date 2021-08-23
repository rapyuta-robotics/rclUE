// Copyright (C) Rapyuta Robotics


#include "ROS2TFPublisher.h"

void UROS2TFPublisher::InitTFPublisher(AROS2Node *Node)
{
    TEnumAsByte<UROS2QoS> QoS;
    if(IsStatic)
    {
        TopicName = FString("/tf_static");
        QoS = UROS2QoS::StaticBroadcaster;
    }
    else
    {
        TopicName = FString("/tf");
        QoS = UROS2QoS::DynamicBroadcaster;
    }
    MsgClass = UROS2TFMsg::StaticClass();
    UpdateDelegate.BindDynamic(this, &UROS2TFPublisher::UpdateTFMsg);
    Node->AddPublisher(this);
    Init(QoS);
}

void UROS2TFPublisher::SetTransform(FVector Translation, FQuat Rotation)
{
    TF.SetTranslation(Translation);
    TF.SetRotation(Rotation);
}

void UROS2TFPublisher::UpdateTFMsg(UROS2GenericMsg *Message)
{
    TArray<FTFData> tfarray;

    FTFData tfdata;
	float TimeNow = UGameplayStatics::GetTimeSeconds(GWorld);
	tfdata.sec = (int32_t)TimeNow;
	unsigned long long ns = (unsigned long long)(TimeNow * 1000000000.0f);
	tfdata.nanosec = (uint32_t)(ns - (tfdata.sec * 1000000000ul));

	tfdata.frame_id = FrameId;
	tfdata.child_frame_id = ChildFrameId;

    FTransform TransROS = TF;
	TransROS.SetTranslation(ConversionUtils::VectorUEToROS(TF.GetTranslation()));
	TransROS.SetRotation(ConversionUtils::QuatUEToROS(TF.GetRotation()));

	tfdata.translation = TransROS.GetTranslation();
	tfdata.rotation = TransROS.GetRotation();

    tfarray.Add(tfdata);

    UROS2TFMsg *TFMessage = Cast<UROS2TFMsg>(Message);
    TFMessage->Update(tfarray);
}

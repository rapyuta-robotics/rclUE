// Copyright (C) Rapyuta Robotics


#include "TFPublisher.h"

//todo move to common function library
FTransform UEToROS(FTransform Input)
{
    FTransform Output = Input;
    
    FVector Translation = Input.GetTranslation();
    FQuat Rotation = Input.GetRotation();

    // todo properly handle transfrom
    Translation.X = Translation.X/100.0f;
    Translation.Y = -Translation.Y/100.0f;
    Translation.Z = Translation.Z/100.0f;
    Rotation.X = -Rotation.X;
	Rotation.Z = -Rotation.Z;
    
    Output.SetTranslation(Translation);
    Output.SetRotation(Rotation);

    return Output;
}

FTransform ROSToUE(FTransform Input)
{
    FTransform Output = Input;
    
    FVector Translation = Input.GetTranslation();
    FQuat Rotation = Input.GetRotation();

    // todo properly handle transfrom
    Translation.X = Translation.X*100.0f;
    Translation.Y = -Translation.Y*100.0f;
    Translation.Z = Translation.Z*100.0f;
    Rotation.X = -Rotation.X;
	Rotation.Z = -Rotation.Z;
    
    Output.SetTranslation(Translation);
    Output.SetRotation(Rotation);

    return Output;
}
void UTFPublisher::InitTfPublisher(AROS2Node *Node){
    TEnumAsByte<UROS2QoS> QoS;
    if(IsStatic){
        TopicName = FString("/tf_static");
        QoS = UROS2QoS::StaticBroadcaster;
    }
    else{
        TopicName = FString("/tf");
        QoS = UROS2QoS::DynamicBroadcaster;
    }
    MsgClass = UROS2TFMsg::StaticClass();
    UpdateDelegate.BindDynamic(this, &UTFPublisher::UpdateTfMsg);
    Node->AddPublisher(this);
    Init(QoS);
}

void UTFPublisher::SetTransform(FVector Translation, FQuat Rotation){
    Tf.SetTranslation(Translation);
    Tf.SetRotation(Rotation);
}

void UTFPublisher::UpdateTfMsg(UROS2GenericMsg *Message){
    TArray<FTFData> tfarray;

    FTFData tfdata;
	float TimeNow = UGameplayStatics::GetTimeSeconds(GWorld);
	tfdata.sec = (int32_t)TimeNow;
	unsigned long long ns = (unsigned long long)(TimeNow * 1000000000.0f);
	tfdata.nanosec = (uint32_t)(ns - (tfdata.sec * 1000000000ul));

	tfdata.frame_id = FrameId;
	tfdata.child_frame_id = ChildFrameId;

    FTransform TransROS = UEToROS(Tf);

	tfdata.translation = TransROS.GetTranslation();
	tfdata.rotation = TransROS.GetRotation();

    tfarray.Add(tfdata);

    UROS2TFMsg *TFMessage = Cast<UROS2TFMsg>(Message);
    TFMessage->Update(tfarray);
}

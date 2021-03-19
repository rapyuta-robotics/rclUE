// Fill out your copyright notice in the Description page of Project Settings.


#include "ROS2Topic.h"


UROS2Topic::UROS2Topic()
{
}

void UROS2Topic::Init(const FString &TopicName, TSubclassOf<UROS2GenericMsg> MessageType)
{
    Name = TopicName;
	Msg = NewObject<UROS2GenericMsg>(this, MessageType);

    if (IsValid(Msg))
    {
        Msg->Init();
    }
}

void UROS2Topic::Fini()
{
    Msg->Fini();
}

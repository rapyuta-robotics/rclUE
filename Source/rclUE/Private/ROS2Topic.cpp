// Copyright 2020-2022 Rapyuta Robotics Co., Ltd.

#include "ROS2Publisher.h"

#include <Engine/World.h>
#include <TimerManager.h>

UROS2Topic::UROS2Topic()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UROS2Topic::InitializeWithROS2(UROS2NodeComponent* InROS2Node)
{
    OwnerNode = InROS2Node;
    Init();
}

void UROS2Topic::Init()
{
    check(OwnerNode != nullptr);
    check(OwnerNode->State == UROS2State::Initialized);

    if (State == UROS2State::Created)
    {
        InitializeMessage();    // needed to get type support

        check(IsValid(TopicMessage));

        InitializeTopicComponent();

        State = UROS2State::Initialized;
    }
}

void UROS2Topic::InitializeMessage()
{
    check(TopicName != FString());
    check(MsgClass);

    TopicMessage = NewObject<UROS2GenericMsg>(this, MsgClass);

    check(IsValid(TopicMessage));

    TopicMessage->Init();
}

void UROS2Topic::Destroy()
{
    if (TopicMessage != nullptr)
    {
        TopicMessage->Fini();
    }
}

void UROS2Topic::InitializeTopicComponent()
{
    checkNoEntry();
}

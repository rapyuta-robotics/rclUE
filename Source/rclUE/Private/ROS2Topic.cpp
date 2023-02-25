// Copyright 2020-2022 Rapyuta Robotics Co., Ltd.

#include "ROS2Topic.h"

#include <Engine/World.h>
#include <TimerManager.h>

DEFINE_LOG_CATEGORY(LogROS2Topic);

bool UROS2Topic::InitializeWithROS2(UROS2NodeComponent* InROS2Node)
{
    OwnerNode = InROS2Node;
    return Init();
}

bool UROS2Topic::Init()
{
    bool res = true;
    IS_ROS2NODE_INITED(OwnerNode, GetName(), res);
    if (!res)
    {
        return false;
    }

    if (State == UROS2State::Created)
    {
        if (!InitializeMessage())
        {
            return false;
        }

        InitializeTopicComponent();

        State = UROS2State::Initialized;

        return true;
    }

    return false;
}

bool UROS2Topic::InitializeMessage()
{
    if (TopicName.IsEmpty())
    {
        UE_LOG_WITH_INFO_NAMED(LogROS2Topic, Warning, TEXT("TopicName can\'t be empty."));
        return false;
    }

    if (!IsValid(MsgClass) || MsgClass == UROS2GenericMsg::StaticClass())
    {
        UE_LOG_WITH_INFO_NAMED(LogROS2Topic, Warning, TEXT("MsgClass is empty or UROS2GenericMsg. Please set valid class."));
        return false;
    }

    TopicMessage = NewObject<UROS2GenericMsg>(this, MsgClass);
    if (!IsValid(TopicMessage))
    {
        UE_LOG_WITH_INFO_NAMED(LogROS2Topic, Warning, TEXT("Failed to create Msg"));
        return false;
    }

    TopicMessage->Init();
    return true;
}

void UROS2Topic::Destroy()
{
    if (IsValid(TopicMessage))
    {
        TopicMessage->Fini();
    }
}

void UROS2Topic::InitializeTopicComponent()
{
    checkNoEntry();
}

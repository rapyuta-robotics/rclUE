// Copyright 2020-2023 Rapyuta Robotics Co., Ltd.

#include "ROS2Action.h"

DEFINE_LOG_CATEGORY(LogROS2Action);

bool UROS2Action::InitializeWithROS2(UROS2NodeComponent* InROS2Node)
{
    OwnerNode = InROS2Node;
    return Init();
}

bool UROS2Action::Init()
{
    bool res = true;
    IS_ROS2NODE_INITED(OwnerNode, GetName(), res);
    if (!res)
    {
        return false;
    }

    if (State == UROS2State::Created)
    {
        if (!InitializeAction())
        {
            return false;
        }

        InitializeActionComponent();

        State = UROS2State::Initialized;

        return true;
    }

    return false;
}

bool UROS2Action::InitializeAction()
{
    if (ActionName.IsEmpty())
    {
        UE_LOG_WITH_INFO_NAMED(LogROS2Action, Warning, TEXT("ActionName can\'t be empty."));
        return false;
    }

    if (!IsValid(ActionClass) || ActionClass == UROS2GenericAction::StaticClass())
    {
        UE_LOG_WITH_INFO_NAMED(LogROS2Action, Warning, TEXT("ActionClass is empty or UROS2GenericAction. Please set valid class."));
        return false;
    }

    Action = NewObject<UROS2GenericAction>(this, ActionClass);

    if (!IsValid(Action))
    {
        UE_LOG_WITH_INFO_NAMED(LogROS2Action, Warning, TEXT("Failed to create Action"));
        return false;
    }

    Action->Init();
    return true;
}

void UROS2Action::Destroy()
{
    if (IsValid(Action))
    {
        Action->Fini();
    }
}

void UROS2Action::ProcessReady(rcl_wait_set_t* wait_set)
{
    checkNoEntry();
}

void UROS2Action::InitializeActionComponent()
{
    checkNoEntry();
}

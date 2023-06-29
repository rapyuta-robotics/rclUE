// Copyright 2020-2023 Rapyuta Robotics Co., Ltd.

#include "ROS2Subsystem.h"

bool UROS2Subsystem::ShouldCreateSubsystem(UObject* Outer) const
{
    return true;    // TODO: If client/server, this should only be created on the server.
}

void UROS2Subsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);

    Support = NewObject<UROS2Support>();
    Support->Init();
}

void UROS2Subsystem::Deinitialize()
{
    Support->Fini();
    Super::Deinitialize();
}

void UROS2Subsystem::Tick(float DeltaTime)
{
}

bool UROS2Subsystem::IsTickable() const
{
    return true;
}

bool UROS2Subsystem::IsTickableWhenPaused() const
{
    return false;
}

bool UROS2Subsystem::IsTickableInEditor() const
{
    return false;
}

TStatId UROS2Subsystem::GetStatId() const
{
    RETURN_QUICK_DECLARE_CYCLE_STAT(UROS2Subsystem, STATGROUP_Tickables);
}

UROS2Support* UROS2Subsystem::GetSupport() const
{
    return Support;
}

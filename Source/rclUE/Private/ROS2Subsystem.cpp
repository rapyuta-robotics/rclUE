// Copyright (c) 2020 Rapyuta Robotics Co., Ltd.


#include "ROS2Subsystem.h"


UROS2Subsystem::UROS2Subsystem()
{
}

bool UROS2Subsystem::ShouldCreateSubsystem(UObject *Outer) const
{
	return true;		// TODO: If client/server, this should only be created on the server.
}

void UROS2Subsystem::Initialize(FSubsystemCollectionBase &Collection)
{
	Super::Initialize(Collection);
}

void UROS2Subsystem::Deinitialize()
{

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
	// TODO: Need to investigate if we should send the clock to ROS still, even if we pause the simulation.
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

UROS2Context* UROS2Subsystem::GetContext()
{
    return context;
}

void UROS2Subsystem::ListRosNodes()
{
}

void UROS2Subsystem::ListRosTopics()
{
}
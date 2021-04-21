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
    //UE_LOG(LogTemp, Warning, TEXT("%s"), *FString(__FUNCTION__));
	Super::Initialize(Collection);

	context = NewObject<UROS2Context>();
	context->Init();
    //UE_LOG(LogTemp, Warning, TEXT("%s - Done"), *FString(__FUNCTION__));
}

void UROS2Subsystem::Deinitialize()
{
    //UE_LOG(LogTemp, Warning, TEXT("%s"), *FString(__FUNCTION__));
	context->Deinit();
	Super::Deinitialize();
    //UE_LOG(LogTemp, Warning, TEXT("%s - Done"), *FString(__FUNCTION__));
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

UROS2Context* UROS2Subsystem::GetContext() const
{
    if (context->Get().allocator->allocate == nullptr ||
        context->Get().allocator->deallocate == nullptr || 
        context->Get().allocator->zero_allocate == nullptr ||
        context->Get().allocator->reallocate == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("Allocator problems in ROS2Subsystem!"));
    }
    return context;
}

void UROS2Subsystem::ListRosNodes() const
{
	// this method requires a valid node
}

void UROS2Subsystem::ListRosTopics() const
{
	// this method requires a valid node
	// rcl_get_topic_names_and_types();
}
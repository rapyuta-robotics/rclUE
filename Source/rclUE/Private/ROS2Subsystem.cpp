// Copyright 2020-2021 Rapyuta Robotics Co., Ltd.

#include "ROS2Subsystem.h"

namespace RclUEAllocator
{
    static void *
    allocate(size_t size, void * state)
    {
        RCUTILS_CAN_RETURN_WITH_ERROR_OF(NULL);

        RCUTILS_UNUSED(state);
        return FMemory::Malloc(size);
    }

    static void
    deallocate(void * pointer, void * state)
    {
        RCUTILS_UNUSED(state);
        FMemory::Free(pointer);
    }

    static void *
    reallocate(void * pointer, size_t size, void * state)
    {
        RCUTILS_CAN_RETURN_WITH_ERROR_OF(NULL);

        RCUTILS_UNUSED(state);
        return FMemory::Realloc(pointer, size);
    }

    static void *
    zero_allocate(size_t number_of_elements, size_t size_of_element, void * state)
    {
        RCUTILS_CAN_RETURN_WITH_ERROR_OF(NULL);

        RCUTILS_UNUSED(state);
        return FMemory::MallocZeroed(number_of_elements * size_of_element);
    }
}

bool UROS2Subsystem::ShouldCreateSubsystem(UObject* Outer) const
{
    return true;    // TODO: If client/server, this should only be created on the server.
}

void UROS2Subsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);

    Support = NewObject<UROS2Support>();
    Support->Init();

    ue_allocator = {
        .allocate = RclUEAllocator::allocate,
        .deallocate = RclUEAllocator::deallocate,
        .reallocate = RclUEAllocator::reallocate,
        .zero_allocate = RclUEAllocator::zero_allocate,
        .state = nullptr,
      };
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
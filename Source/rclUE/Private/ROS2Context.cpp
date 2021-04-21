// Copyright (c) 2020 Rapyuta Robotics Co., Ltd.


#include "ROS2Context.h"


UROS2Context::UROS2Context()
{
    //UE_LOG(LogTemp, Warning, TEXT("%s"), *FString(__FUNCTION__));
    // rcl_allocator_t allocator = rcl_get_default_allocator();

    // // create init_options
    // RCSOFTCHECK(rclc_support_init(&support, 0, nullptr, &allocator));
    //UE_LOG(LogTemp, Warning, TEXT("%s - Done"), *FString(__FUNCTION__));
}

UROS2Context::~UROS2Context()
{
    //UE_LOG(LogTemp, Warning, TEXT("%s"), *FString(__FUNCTION__));
	//RCSOFTCHECK(rclc_support_fini(&support));
    //UE_LOG(LogTemp, Warning, TEXT("%s - Done"), *FString(__FUNCTION__));
}

rclc_support_t& UROS2Context::Get()
{
    return support;
}

void UROS2Context::Init()
{
    //UE_LOG(LogTemp, Warning, TEXT("%s"), *FString(__FUNCTION__));
    allocator = rcl_get_default_allocator();

    if (allocator.allocate == nullptr ||
        allocator.deallocate == nullptr || 
        allocator.zero_allocate == nullptr ||
        allocator.reallocate == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("Allocator problems in ROS2Context!"));
    }

    // create init_options
    RCSOFTCHECK(rclc_support_init(&support, 0, nullptr, &allocator));
    //UE_LOG(LogTemp, Warning, TEXT("%s - Done"), *FString(__FUNCTION__));
}

void UROS2Context::Deinit()
{
    //UE_LOG(LogTemp, Warning, TEXT("%s"), *FString(__FUNCTION__));
	RCSOFTCHECK(rclc_support_fini(&support));
    //UE_LOG(LogTemp, Warning, TEXT("%s - Done"), *FString(__FUNCTION__));
}
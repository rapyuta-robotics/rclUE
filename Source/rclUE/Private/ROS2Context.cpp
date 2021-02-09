// Copyright (c) 2020 Rapyuta Robotics Co., Ltd.


#include "ROS2Context.h"


UROS2Context::UROS2Context()
{
    UE_LOG(LogTemp, Warning, TEXT("Construct Context"));
    // rcl_allocator_t allocator = rcl_get_default_allocator();

    // // create init_options
    // RCSOFTCHECK(rclc_support_init(&support, 0, nullptr, &allocator));
    UE_LOG(LogTemp, Warning, TEXT("Construct Context - Done"));
}

UROS2Context::~UROS2Context()
{
    UE_LOG(LogTemp, Warning, TEXT("Destroy Context"));
	//RCSOFTCHECK(rclc_support_fini(&support));
    UE_LOG(LogTemp, Warning, TEXT("Destroy Context - Done"));
}

rclc_support_t& UROS2Context::Get()
{
    return support;
}

void UROS2Context::Init()
{
    UE_LOG(LogTemp, Warning, TEXT("Init Context"));
    rcl_allocator_t allocator = rcl_get_default_allocator();

    // create init_options
    RCSOFTCHECK(rclc_support_init(&support, 0, nullptr, &allocator));
    UE_LOG(LogTemp, Warning, TEXT("Init Context - Done"));
}

void UROS2Context::Deinit()
{
    UE_LOG(LogTemp, Warning, TEXT("Deinit Context"));
	RCSOFTCHECK(rclc_support_fini(&support));
    UE_LOG(LogTemp, Warning, TEXT("Deinit Context - Done"));
}
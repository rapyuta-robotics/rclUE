// Copyright (c) 2020 Rapyuta Robotics Co., Ltd.


#include "ROS2Context.h"


UROS2Context::UROS2Context()
{
}

UROS2Context::~UROS2Context()
{
}

rclc_support_t& UROS2Context::Get()
{
    return support;
}

void UROS2Context::Init()
{
    allocator = rcl_get_default_allocator();

    if (allocator.allocate == nullptr ||
        allocator.deallocate == nullptr || 
        allocator.zero_allocate == nullptr ||
        allocator.reallocate == nullptr)
    {
        ensureMsgf(false, TEXT("Allocator problems in ROS2Context!"));
    }

    // create init_options
    RCSOFTCHECK(rclc_support_init(&support, 0, nullptr, &allocator));
}

void UROS2Context::Deinit()
{
	RCSOFTCHECK(rclc_support_fini(&support));
}
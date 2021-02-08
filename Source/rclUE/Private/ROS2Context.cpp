// Copyright (c) 2020 Rapyuta Robotics Co., Ltd.


#include "ROS2Context.h"


UROS2Context::UROS2Context()
{
    rcl_allocator_t allocator = rcl_get_default_allocator();

    // create init_options
    RCSOFTCHECK(rclc_support_init(&support, 0, nullptr, &allocator));
}

UROS2Context::~UROS2Context()
{
	RCSOFTCHECK(rclc_support_fini(&support));
}

rclc_support_t& UROS2Context::Get()
{
    return support;
}
// Copyright 2020-2023 Rapyuta Robotics Co., Ltd.

#include "ROS2Support.h"

rclc_support_t& UROS2Support::Get()
{
    return support;
}

void UROS2Support::Init()
{
    allocator = rcl_get_default_allocator();
    RCSOFTCHECK(rclc_support_init(&support, 0, nullptr, &allocator));
}

void UROS2Support::Fini()
{
    RCSOFTCHECK(rclc_support_fini(&support));
}

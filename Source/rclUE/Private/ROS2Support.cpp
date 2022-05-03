// Copyright 2020-2021 Rapyuta Robotics Co., Ltd.

#include "ROS2Support.h"

rclc_support_t& UROS2Support::Get()
{
    return support;
}

void UROS2Support::Init()
{
    allocator = rcl_get_default_allocator();

    rcl_ret_t rc = rclc_support_init(&support, 0, nullptr, &allocator);
    UE_LOG(LogTemp, Warning, TEXT("VITYO rclc_support_init %d"), rc);
    RCSOFTCHECK(rc);
}  

void UROS2Support::Fini()
{
    RCSOFTCHECK(rclc_support_fini(&support));
}
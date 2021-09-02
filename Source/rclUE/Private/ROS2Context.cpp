// Copyright (c) 2020 Rapyuta Robotics Co., Ltd.

#include "ROS2Context.h"

rclc_support_t& UROS2Context::Get()
{
	return support;
}

void UROS2Context::Init()
{
	allocator = rcl_get_default_allocator();

	RCSOFTCHECK(rclc_support_init(&support, 0, nullptr, &allocator));
}

void UROS2Context::Fini()
{
	RCSOFTCHECK(rclc_support_fini(&support));
}
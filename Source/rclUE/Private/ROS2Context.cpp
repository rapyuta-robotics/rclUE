// Copyright (c) 2020 Rapyuta Robotics Co., Ltd.


#include "ROS2Context.h"


UROS2Context::UROS2Context()
{
}

UROS2Context::~UROS2Context()
{
}

rclc_support_t UROS2Context::Get()
{
    return support;
}

void UROS2Context::Set(rclc_support_t supportContext)
{
    support = supportContext;
}
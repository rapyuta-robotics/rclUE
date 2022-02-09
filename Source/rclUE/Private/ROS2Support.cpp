// Copyright 2020-2021 Rapyuta Robotics Co., Ltd.

#include "ROS2Support.h"
#include "ROS2Node.h"

DEFINE_LOG_CATEGORY(LogROS2Support);

rclc_support_t& UROS2Support::Get()
{
    return support;
}

void UROS2Support::Init()
{
    allocator = rcl_get_default_allocator();

    RCSOFTCHECK(rclc_support_init(&support, 0, nullptr, &allocator));
}

void UROS2Support::RegisterNode(AROS2Node* node) {
    Nodes.Add(node);
}

void UROS2Support::Fini()
{
    // UE_LOG(LogROS2Support, Log, TEXT("[%s] ROS2Support tearing down nodes..."), *GetName());
    // for (auto* n : Nodes)
    //     if (IsValid(n))
    //         n->BringDown();

    RCSOFTCHECK(rclc_support_fini(&support));
}
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
    TRACE_CPUPROFILER_EVENT_SCOPE_STR("UROS2Support::Init")
    allocator = rcl_get_default_allocator();

    RCHARDCHECK(rclc_support_init(&support, 0, nullptr, &allocator));
}

void UROS2Support::RegisterNode(AROS2Node* node) {
    Nodes.Add(node);
}

void UROS2Support::Fini()
{
    TRACE_CPUPROFILER_EVENT_SCOPE_STR("UROS2Support::Fini")
    // UE_LOG(LogROS2Support, Log, TEXT("[%s] ROS2Support tearing down nodes..."), *GetName());
    // for (auto* n : Nodes)
    //     if (IsValid(n))
    //         n->BringDown();

    RCSOFTCHECK(rclc_support_fini(&support));
}

rmw_qos_profile_t BuildQoSProfile(UROS2QosHistoryPolicy QosHistoryPolicy, int32 QosDepth,
    UROS2QosReliabilityPolicy QosReliabilityPolicy, UROS2QosDurabilityPolicy QosDurabilityPolicy) {
    return {
                UROS2QosHistoryPolicy_LUT[QosHistoryPolicy],
                (uint32) QosDepth,
                UROS2QosReliabilityPolicy_LUT[QosReliabilityPolicy],
                UROS2QosDurabilityPolicy_LUT[QosDurabilityPolicy],
                RMW_QOS_DEADLINE_DEFAULT,
                RMW_QOS_LIFESPAN_DEFAULT,
                RMW_QOS_POLICY_LIVELINESS_SYSTEM_DEFAULT,
                RMW_QOS_LIVELINESS_LEASE_DURATION_DEFAULT,
                false
            };
}

URCLUEBlueprintLibrary::URCLUEBlueprintLibrary(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{     }

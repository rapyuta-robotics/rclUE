// Copyright 2020-2021 Rapyuta Robotics Co., Ltd.

// Header containing utilities and includes that are needed/useful in almost any class in rclUE

#pragma once

#include <cstdlib>
#include <cstring>

#include <HAL/UnrealMemory.h>
#include <Kismet/KismetSystemLibrary.h>

#include <rcl/graph.h>
#include <rcl/wait.h>
#include <rcl_action/wait.h>
#include <rclc/rclc.h>



#define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)

#define __LOG_INFO__ \
    FString(__FILENAME__).Append(TEXT("::")).Append(__FUNCTION__).Append(TEXT("::")).Append(FString::FromInt(__LINE__))

DECLARE_LOG_CATEGORY_EXTERN(LogROS2, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogROS2Support, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogROS2Node, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogROS2Publisher, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogROS2Subscriber, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogROS2Service, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogROS2Action, Log, All);


#define RC_UE_LOG(rc) \
    { \
        if (rcutils_error_is_set()) {\
            UE_LOG(LogTemp,                                                         \
                Error,                                                           \
                TEXT("RCL error %d: %s (%s)"),  \
                (int) rc, *FString(rcutils_get_error_string().str), *__LOG_INFO__); \
            rcutils_reset_error(); \
        } else { \
            UE_LOG(LogTemp,                                                         \
                Error,                                                           \
                TEXT("RCL error %d (%s)."), \
                (int)rc, *__LOG_INFO__);                                                   \
        } \
    }

// this macro can be used on rcl functions that return an error code
#define RCSOFTCHECK(fn)                                                             \
    {                                                                               \
        rcl_ret_t temp_rc = fn;                                                     \
        if ((temp_rc != RCL_RET_OK))                                                \
        {                                                                           \
            RC_UE_LOG(temp_rc) \
            ensure(temp_rc == 0);                                                     \
        }                                                                           \
    }

// used to add states to classes (e.g. to avoid double initializations)
UENUM()
enum class UROS2State : uint8
{
    Created UMETA(DisplayName = "Created"),
    Initialized UMETA(DisplayName = "Initialized"),
};

// used to set QoS policies (https://docs.ros.org/en/foxy/Concepts/About-Quality-of-Service-Settings.html)
// also check rmw/types.h for details
UENUM()
enum class UROS2QoS : uint8
{
    Default UMETA(DisplayName = "Default"),
    SensorData UMETA(DisplayName = "SensorData"),
    DynamicBroadcaster UMETA(DisplayName = "DynamicBroadcaster"),
    StaticBroadcaster UMETA(DisplayName = "StaticBroadcaster"),
    ClockPub UMETA(DisplayName = "ClockPub"),
    KeepLast UMETA(DisplayName = "KeepLast"),
    Parameters UMETA(DisplayName = "Parameters"),
    Services UMETA(DisplayName = "Services"),
    ParameterEvents UMETA(DisplayName = "ParameterEvents"),
    System UMETA(DisplayName = "System"),
    UnknownQoS UMETA(DisplayName = "UnknownQoS"),
};

// profiles provided by rclUE
static const rmw_qos_profile_t rclUE_qos_profile_keep_last = {RMW_QOS_POLICY_HISTORY_KEEP_LAST,
                                                              1,
                                                              RMW_QOS_POLICY_RELIABILITY_RELIABLE,
                                                              RMW_QOS_POLICY_DURABILITY_VOLATILE,
                                                              RMW_QOS_DEADLINE_DEFAULT,
                                                              RMW_QOS_LIFESPAN_DEFAULT,
                                                              RMW_QOS_POLICY_LIVELINESS_SYSTEM_DEFAULT,
                                                              RMW_QOS_LIVELINESS_LEASE_DURATION_DEFAULT,
                                                              false};

static const rmw_qos_profile_t rclUE_qos_profile_sensor_data = {RMW_QOS_POLICY_HISTORY_KEEP_LAST,
                                                                5,
                                                                RMW_QOS_POLICY_RELIABILITY_RELIABLE,
                                                                RMW_QOS_POLICY_DURABILITY_VOLATILE,
                                                                RMW_QOS_DEADLINE_DEFAULT,
                                                                RMW_QOS_LIFESPAN_DEFAULT,
                                                                RMW_QOS_POLICY_LIVELINESS_SYSTEM_DEFAULT,
                                                                RMW_QOS_LIVELINESS_LEASE_DURATION_DEFAULT,
                                                                false};

static const rmw_qos_profile_t rclUE_qos_profile_clock_pub = {RMW_QOS_POLICY_HISTORY_KEEP_LAST,
                                                              10,
                                                              RMW_QOS_POLICY_RELIABILITY_RELIABLE,
                                                              RMW_QOS_POLICY_DURABILITY_TRANSIENT_LOCAL,
                                                              RMW_QOS_DEADLINE_DEFAULT,
                                                              RMW_QOS_LIFESPAN_DEFAULT,
                                                              RMW_QOS_POLICY_LIVELINESS_SYSTEM_DEFAULT,
                                                              RMW_QOS_LIVELINESS_LEASE_DURATION_DEFAULT,
                                                              false};

static const rmw_qos_profile_t rclUE_qos_profile_dynamic_broadcaster = {RMW_QOS_POLICY_HISTORY_KEEP_LAST,
                                                                        100,
                                                                        RMW_QOS_POLICY_RELIABILITY_RELIABLE,
                                                                        RMW_QOS_POLICY_DURABILITY_VOLATILE,
                                                                        RMW_QOS_DEADLINE_DEFAULT,
                                                                        RMW_QOS_LIFESPAN_DEFAULT,
                                                                        RMW_QOS_POLICY_LIVELINESS_SYSTEM_DEFAULT,
                                                                        RMW_QOS_LIVELINESS_LEASE_DURATION_DEFAULT,
                                                                        false};

static const rmw_qos_profile_t rclUE_qos_profile_static_broadcaster = {RMW_QOS_POLICY_HISTORY_KEEP_LAST,
                                                                       1,
                                                                       RMW_QOS_POLICY_RELIABILITY_RELIABLE,
                                                                       RMW_QOS_POLICY_DURABILITY_TRANSIENT_LOCAL,
                                                                       RMW_QOS_DEADLINE_DEFAULT,
                                                                       RMW_QOS_LIFESPAN_DEFAULT,
                                                                       RMW_QOS_POLICY_LIVELINESS_SYSTEM_DEFAULT,
                                                                       RMW_QOS_LIVELINESS_LEASE_DURATION_DEFAULT,
                                                                       false};

// Look-Up Table matching enum with rcl profiles
static const TMap<UROS2QoS, rmw_qos_profile_t> QoSProfiles_LUT = {
    {UROS2QoS::Default, rmw_qos_profile_default},
    {UROS2QoS::SensorData, rclUE_qos_profile_sensor_data},
    {UROS2QoS::DynamicBroadcaster, rclUE_qos_profile_dynamic_broadcaster},
    {UROS2QoS::StaticBroadcaster, rclUE_qos_profile_static_broadcaster},
    {UROS2QoS::ClockPub, rclUE_qos_profile_clock_pub},
    {UROS2QoS::KeepLast, rclUE_qos_profile_keep_last},
    {UROS2QoS::Parameters, rmw_qos_profile_parameters},
    {UROS2QoS::Services, rmw_qos_profile_services_default},
    {UROS2QoS::ParameterEvents, rmw_qos_profile_parameter_events},
    {UROS2QoS::System, rmw_qos_profile_system_default},
    {UROS2QoS::UnknownQoS, rmw_qos_profile_unknown}};

UENUM(BlueprintType)
enum class UROS2QosHistoryPolicy : uint8
{
    SYSTEM_DEFAULT,
    KEEP_LAST,
    KEEP_ALL,
    UNKNOWN
};

static const TMap<UROS2QosHistoryPolicy, rmw_qos_history_policy_t> UROS2QosHistoryPolicy_LUT = {
    {UROS2QosHistoryPolicy::SYSTEM_DEFAULT, RMW_QOS_POLICY_HISTORY_SYSTEM_DEFAULT},
    {UROS2QosHistoryPolicy::KEEP_LAST, RMW_QOS_POLICY_HISTORY_KEEP_LAST},
    {UROS2QosHistoryPolicy::KEEP_ALL, RMW_QOS_POLICY_HISTORY_KEEP_ALL},
    {UROS2QosHistoryPolicy::UNKNOWN, RMW_QOS_POLICY_HISTORY_UNKNOWN}
};

UENUM(BlueprintType)
enum class UROS2QosReliabilityPolicy : uint8
{
    SYSTEM_DEFAULT,
    RELIABLE,
    BEST_EFFORT,
    UNKNOWN
};

static const TMap<UROS2QosReliabilityPolicy, rmw_qos_reliability_policy_t> UROS2QosReliabilityPolicy_LUT = {
    {UROS2QosReliabilityPolicy::SYSTEM_DEFAULT, RMW_QOS_POLICY_RELIABILITY_SYSTEM_DEFAULT},
    {UROS2QosReliabilityPolicy::RELIABLE, RMW_QOS_POLICY_RELIABILITY_RELIABLE},
    {UROS2QosReliabilityPolicy::BEST_EFFORT, RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT},
    {UROS2QosReliabilityPolicy::UNKNOWN, RMW_QOS_POLICY_RELIABILITY_UNKNOWN}
};


  
UENUM(BlueprintType)
enum class UROS2QosDurabilityPolicy : uint8
{
    SYSTEM_DEFAULT,
    TRANSIENT_LOCAL,
    VOLATILE,
    UNKNOWN
};

static const TMap<UROS2QosDurabilityPolicy, rmw_qos_durability_policy_t> UROS2QosDurabilityPolicy_LUT = {
    {UROS2QosDurabilityPolicy::SYSTEM_DEFAULT, RMW_QOS_POLICY_DURABILITY_SYSTEM_DEFAULT},
    {UROS2QosDurabilityPolicy::TRANSIENT_LOCAL, RMW_QOS_POLICY_DURABILITY_TRANSIENT_LOCAL},
    {UROS2QosDurabilityPolicy::VOLATILE, RMW_QOS_POLICY_DURABILITY_VOLATILE},
    {UROS2QosDurabilityPolicy::UNKNOWN, RMW_QOS_POLICY_DURABILITY_UNKNOWN}
};
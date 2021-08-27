// Copyright (c) 2020 Rapyuta Robotics Co., Ltd.

#pragma once

#include <rclc/rclc.h>
#include <rcl/wait.h>
#include <rcl_action/wait.h>
#include <rcl/graph.h>
#include <cstdlib>
#include <cstring>
#include "HAL/UnrealMemory.h"
#include "Kismet/KismetSystemLibrary.h"

#define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)

#define __LOG_INFO__ FString(__FILENAME__).Append(FString("::")).Append(__FUNCTION__).Append(FString("::")).Append(FString::FromInt(__LINE__))

DECLARE_LOG_CATEGORY_EXTERN(LogROS2, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogROS2Node, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogROS2Publisher, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogROS2Service, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogROS2Action, Log, All);

#define RCSOFTCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){ UE_LOG(LogTemp, Error, TEXT("Failed status on line %d (function %s): %d. Continuing."),__LINE__, *FString(__FUNCTION__),(int)temp_rc); check(temp_rc == 0)}}

UENUM()
enum UROS2State
{
    Created         UMETA(DisplayName="Created"),
    Initialized     UMETA(DisplayName="Initialized"),
};

UENUM()
enum UROS2QoS
{
    Default             UMETA(DisplayName="Default"),
    SensorData          UMETA(DisplayName="SensorData"),
    DynamicBroadcaster  UMETA(DisplayName="DynamicBroadcaster"),
    StaticBroadcaster   UMETA(DisplayName="StaticBroadcaster"),
    ClockPub            UMETA(DisplayName="ClockPub"),
    KeepLast            UMETA(DisplayName="KeepLast"),
    Parameters          UMETA(DisplayName="Parameters"),
    Services            UMETA(DisplayName="Services"),
    ParameterEvents     UMETA(DisplayName="ParameterEvents"),
    System              UMETA(DisplayName="System"),
    Unknown             UMETA(DisplayName="Unknown"),
};


static const rmw_qos_profile_t rclUE_qos_profile_keep_last = 
{
  RMW_QOS_POLICY_HISTORY_KEEP_LAST,
  1,
  RMW_QOS_POLICY_RELIABILITY_RELIABLE,
  RMW_QOS_POLICY_DURABILITY_VOLATILE,
  RMW_QOS_DEADLINE_DEFAULT,
  RMW_QOS_LIFESPAN_DEFAULT,
  RMW_QOS_POLICY_LIVELINESS_SYSTEM_DEFAULT,
  RMW_QOS_LIVELINESS_LEASE_DURATION_DEFAULT,
  false
};

static const rmw_qos_profile_t rclUE_qos_profile_sensor_data = 
{
  RMW_QOS_POLICY_HISTORY_KEEP_LAST,
  5,
  RMW_QOS_POLICY_RELIABILITY_RELIABLE,
  RMW_QOS_POLICY_DURABILITY_VOLATILE,
  RMW_QOS_DEADLINE_DEFAULT,
  RMW_QOS_LIFESPAN_DEFAULT,
  RMW_QOS_POLICY_LIVELINESS_SYSTEM_DEFAULT,
  RMW_QOS_LIVELINESS_LEASE_DURATION_DEFAULT,
  false
};

static const rmw_qos_profile_t rclUE_qos_profile_clock_pub = 
{
  RMW_QOS_POLICY_HISTORY_KEEP_LAST,
  10,
  RMW_QOS_POLICY_RELIABILITY_RELIABLE,
  RMW_QOS_POLICY_DURABILITY_TRANSIENT_LOCAL,
  RMW_QOS_DEADLINE_DEFAULT,
  RMW_QOS_LIFESPAN_DEFAULT,
  RMW_QOS_POLICY_LIVELINESS_SYSTEM_DEFAULT,
  RMW_QOS_LIVELINESS_LEASE_DURATION_DEFAULT,
  false
};

static const rmw_qos_profile_t rclUE_qos_profile_dynamic_broadcaster = 
{
  RMW_QOS_POLICY_HISTORY_KEEP_LAST,
  100,
  RMW_QOS_POLICY_RELIABILITY_RELIABLE,
  RMW_QOS_POLICY_DURABILITY_VOLATILE,
  RMW_QOS_DEADLINE_DEFAULT,
  RMW_QOS_LIFESPAN_DEFAULT,
  RMW_QOS_POLICY_LIVELINESS_SYSTEM_DEFAULT,
  RMW_QOS_LIVELINESS_LEASE_DURATION_DEFAULT,
  false
};

static const rmw_qos_profile_t rclUE_qos_profile_static_broadcaster = 
{
  RMW_QOS_POLICY_HISTORY_KEEP_LAST,
  1,
  RMW_QOS_POLICY_RELIABILITY_RELIABLE,
  RMW_QOS_POLICY_DURABILITY_TRANSIENT_LOCAL,
  RMW_QOS_DEADLINE_DEFAULT,
  RMW_QOS_LIFESPAN_DEFAULT,
  RMW_QOS_POLICY_LIVELINESS_SYSTEM_DEFAULT,
  RMW_QOS_LIVELINESS_LEASE_DURATION_DEFAULT,
  false
};

static const TMap<TEnumAsByte<UROS2QoS>, rmw_qos_profile_t> QoS_LUT = 
{
  {UROS2QoS::Default,            rmw_qos_profile_default},
  {UROS2QoS::SensorData,         rclUE_qos_profile_sensor_data},
  {UROS2QoS::DynamicBroadcaster, rclUE_qos_profile_dynamic_broadcaster},
  {UROS2QoS::StaticBroadcaster,  rclUE_qos_profile_static_broadcaster},
  {UROS2QoS::ClockPub,           rclUE_qos_profile_clock_pub},
  {UROS2QoS::KeepLast,           rclUE_qos_profile_keep_last},
  {UROS2QoS::Parameters,         rmw_qos_profile_parameters},
  {UROS2QoS::Services,           rmw_qos_profile_services_default},
  {UROS2QoS::ParameterEvents,    rmw_qos_profile_parameter_events},
  {UROS2QoS::System,             rmw_qos_profile_system_default},
  {UROS2QoS::Unknown,            rmw_qos_profile_unknown}
};
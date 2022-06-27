/**
 * @file rclcUtilities.h
 * @brief Header containing utilities and includes that are needed/useful in almost any class in rclUE
 * @copyright Copyright 2020-2022 Rapyuta Robotics Co., Ltd.
 */

#pragma once

// std
#include <cstdlib>
#include <cstring>

// UE
#include <HAL/UnrealMemory.h>
#include <Kismet/KismetSystemLibrary.h>

// rclUE
#include "rcl/graph.h"
#include "rcl/wait.h"
#include "rcl_action/wait.h"
#include "rclc/rclc.h"
#include "rosidl_runtime_c/string.h"

#include "rclcUtilities.generated.h"

/// Output Filename
#define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)

/// Log info joint with `::`
#define __LOG_INFO__ \
    FString(__FILENAME__).Append(TEXT("::")).Append(__FUNCTION__).Append(TEXT("::")).Append(FString::FromInt(__LINE__))

DECLARE_LOG_CATEGORY_EXTERN(LogROS2, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogROS2Node, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogROS2Publisher, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogROS2Service, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogROS2Action, Log, All);

/// this macro can be used on rcl functions that return an error code
#define RCSOFTCHECK(fn)                                                             \
    {                                                                               \
        rcl_ret_t temp_rc = fn;                                                     \
        if ((temp_rc != RCL_RET_OK))                                                \
        {                                                                           \
            UE_LOG(LogTemp,                                                         \
                   Error,                                                           \
                   TEXT("Failed status on line %d (function %s): %d. Continuing."), \
                   __LINE__,                                                        \
                   *FString(__FUNCTION__),                                          \
                   (int)temp_rc);                                                   \
            check(temp_rc == 0)                                                     \
        }                                                                           \
    }

/**
 * @brief used to add states to classes (e.g. to avoid double initializations)
 *
 */
UENUM()
enum UROS2State
{
    Created UMETA(DisplayName = "Created"),
    Initialized UMETA(DisplayName = "Initialized"),
};

/**
 * @brief used to set [QoS policies](https://docs.ros.org/en/foxy/Concepts/About-Quality-of-Service-Settings.html)
 * also check rmw/types.h for details
 */
UENUM()
enum UROS2QoS
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
static const TMap<TEnumAsByte<UROS2QoS>, rmw_qos_profile_t> QoS_LUT = {
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

UCLASS()
class UROS2Utils : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    static FString StringROSToUE(const rosidl_runtime_c__String& InStr)
    {
        FString outStr;
        outStr.AppendChars(InStr.data, InStr.size);
        return outStr;
    }
    static TArray<FString> StringSequenceROSToUE(const rosidl_runtime_c__String__Sequence& InStrSequence)
    {
        TArray<FString> outStrArray;
        for (size_t i = 0; i < InStrSequence.size; ++i)
        {
            FString outStr;
            outStr.AppendChars(InStrSequence.data[i].data, InStrSequence.data[i].size);
            outStrArray.Emplace(MoveTemp(outStr));
        }
        return outStrArray;
    }

    static int32 GetStringRequiredCapacity(const FString& InStr)
    {
        FTCHARToUTF8 strUtf8(*InStr);
        return (strUtf8.Length() + 1) + sizeof(size_t) + sizeof(size_t);
    }

    static int32 GetStringArrayRequiredCapacity(const TArray<FString>& InStrList)
    {
        int32 totalCapacity = 0;
        for (const auto& str : InStrList)
        {
            totalCapacity += GetStringRequiredCapacity(str);
        }
        return totalCapacity;
    }

    static void StringUEToROS(const FString& InStr, rosidl_runtime_c__String& OutStr)
    {
        FTCHARToUTF8 strUtf8(*InStr);
        const int32 strSize = strUtf8.Length();
        const int32 strCapacity = strSize + 1;
        if (OutStr.data != nullptr)
        {
            free(OutStr.data);
        }
        OutStr.data = (decltype(OutStr.data))malloc(strCapacity * sizeof(decltype(*OutStr.data)));
        memcpy(OutStr.data, TCHAR_TO_UTF8(*InStr), strCapacity * sizeof(char));
        OutStr.size = strSize;
        OutStr.capacity = strCapacity;
    }

    static void StringArrayUEToROS(const TArray<FString>& InStrList, rosidl_runtime_c__String__Sequence& OutStrSequence)
    {
        if (OutStrSequence.data->data != nullptr)
        {
            free(OutStrSequence.data->data);
        }
        if (OutStrSequence.data != nullptr)
        {
            free(OutStrSequence.data);
        }

        int32 sequenceItemsNum = InStrList.Num();
        int32 sequenceTotalCapacity = 0;
        for (auto i = 0; i < sequenceItemsNum; ++i)
        {
            sequenceTotalCapacity += GetStringRequiredCapacity(InStrList[i]) + sizeof(size_t) + sizeof(size_t);
        }
        OutStrSequence.data = (decltype(OutStrSequence.data))malloc(sequenceTotalCapacity);
        OutStrSequence.size = sequenceItemsNum;
        OutStrSequence.capacity = sequenceItemsNum;

        for (auto i = 0; i < InStrList.Num(); ++i)
        {
            FTCHARToUTF8 strUtf8(*InStrList[i]);
            const int32 strCapacity = strUtf8.Length() + 1;
            memcpy(OutStrSequence.data[i].data, TCHAR_TO_UTF8(*InStrList[i]), strCapacity * sizeof(char));
            OutStrSequence.data[i].size = strUtf8.Length();
            OutStrSequence.data[i].capacity = strCapacity;
        }
    }

    template<typename T>
    static int32 GetArrayRequiredCapacity(const TArray<T>& InArray)
    {
        return InArray.Num() * sizeof(T);
    }

    template<typename TSequence, typename T>
    static void UEArrayToROSSequence(const TArray<T>& InArray, TSequence& OutSequence)
    {
        if (OutSequence.data != nullptr)
        {
            free(OutSequence.data);
        }
        OutSequence.data = (decltype(OutSequence.data))malloc(GetArrayRequiredCapacity<T>(InArray));
        const auto arrayNum = InArray.Num();
        for (auto i = 0; i < arrayNum; ++i)
        {
            OutSequence.data[i] = InArray[i];
        }
        OutSequence.size = arrayNum;
        OutSequence.capacity = arrayNum;
    }
};

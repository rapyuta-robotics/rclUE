/**
 * @file logUtilities.h
 * @brief Header containing utilities for logging
 * @todo should be in different Plugin since this is not directly related rclUE
 * @copyright Copyright 2020-2022 Rapyuta Robotics Co., Ltd.
 *
 */

#pragma once

// UE
#include "HAL/UnrealMemory.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

// Ref "Misc/GeneratedTypeName.h"
#if defined(_MSC_VER) && !defined(__clang__)
#define RCLUE_FUNC_LOG __FUNCSIG__
#else
#define RCLUE_FUNC_LOG __PRETTY_FUNCTION__
#endif

//! Output Filename
#define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)

// clang-format off
// to avoid change line by clang-format. Doxygen can't handle constant macro with multiple lines.
/**
 * @brief Log info joint with `, `
 * SIG is defined at GeneratedTypeName.h
 *
 */
#define __LOG_INFO__  FString(__FILENAME__).Append(TEXT("@")).Append(FString::FromInt(__LINE__)).Append(TEXT(", ")).Append(RCLUE_FUNC_LOG)
// clang-format on

/**
 * UE_LOG with function info with __FUNCTION__ and __LINE__ .
 * @param CategoryName name of the logging category
 * @param Verbosity, verbosity level to test against
 * @param Format, format text
*/
#define UE_LOG_WITH_INFO(CategoryName, Verbosity, ...)                                                  \
    {                                                                                                   \
        UE_LOG(CategoryName, Verbosity, TEXT("[%s] %s"), *__LOG_INFO__, *FString::Printf(__VA_ARGS__)); \
    }

/**
 * UE_LOG_WITH_INFO with GetName()
 * @param CategoryName name of the logging category
 * @param Verbosity, verbosity level to test against
 * @param Format, format text
*/
#define UE_LOG_WITH_INFO_NAMED(CategoryName, Verbosity, ...)                                                                      \
    {                                                                                                                             \
        UE_LOG_WITH_INFO(CategoryName, Verbosity, TEXT("[%s][%s] %s"), *__LOG_INFO__, *GetName(), *FString::Printf(__VA_ARGS__)); \
    }

/**
 * @brief UE_LOG_THROTTLE will print a message at most once per InRate.
 * @param InRate, time interval to print a message
 * @param InLastHit, last time a message was printed
 */
#define UE_LOG_THROTTLE(InRate, InLastHit, ...)                                   \
    {                                                                             \
        float UE_LOG_THROTTLE_Now = UGameplayStatics::GetTimeSeconds(GetWorld()); \
        if (InLastHit + InRate <= UE_LOG_THROTTLE_Now)                            \
        {                                                                         \
            InLastHit = UE_LOG_THROTTLE_Now;                                      \
            UE_LOG(__VA_ARGS__);                                                  \
        }                                                                         \
    }

/**
 * @brief UE_LOG_WITH_INFO_THROTTLE will print a message at most once per InRate.
 * @param InRate, time interval to print a message
 * @param InLastHit, last time a message was printed
 */
#define UE_LOG_WITH_INFO_THROTTLE(InRate, InLastHit, ...)                                   \
    {                                                                                       \
        float UE_LOG_WITH_INFO_THROTTLE_Now = UGameplayStatics::GetTimeSeconds(GetWorld()); \
        if (InLastHit + InRate <= UE_LOG_WITH_INFO_THROTTLE_Now)                            \
        {                                                                                   \
            InLastHit = UE_LOG_WITH_INFO_THROTTLE_Now;                                      \
            UE_LOG_WITH_INFO(__VA_ARGS__);                                                  \
        }                                                                                   \
    }

/**
 * @brief UE_LOG_WITH_INFO_NAMED_THROTTLE will print a message at most once per InRate.
 * @param InRate, time interval to print a message
 * @param InLastHit, last time a message was printed
 */
#define UE_LOG_WITH_INFO_NAMED_THROTTLE(InRate, InLastHit, ...)                                   \
    {                                                                                             \
        float UE_LOG_WITH_INFO_NAMED_THROTTLE_Now = UGameplayStatics::GetTimeSeconds(GetWorld()); \
        if (InLastHit + InRate <= UE_LOG_WITH_INFO_NAMED_THROTTLE_Now)                            \
        {                                                                                         \
            InLastHit = UE_LOG_WITH_INFO_NAMED_THROTTLE_Now;                                      \
            UE_LOG_WITH_INFO_NAMED(__VA_ARGS__);                                                  \
        }                                                                                         \
    }

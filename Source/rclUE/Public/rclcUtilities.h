// Copyright (c) 2020 Rapyuta Robotics Co., Ltd.

#pragma once

#include <rclc/rclc.h>
#include <rcl/wait.h>
#include <rcl_action/wait.h>
#include <rcl/graph.h>
#include <cstdlib>
#include <cstring>
#include "Kismet/KismetSystemLibrary.h"

#define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)

#define __LOG_INFO__ FString(__FILENAME__).Append(FString("::")).Append(__FUNCTION__).Append(FString("::")).Append(FString::FromInt(__LINE__))

DECLARE_LOG_CATEGORY_EXTERN(LogROS2, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogROS2Node, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogROS2Publisher, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogROS2Service, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogROS2Action, Log, All);

#define RCSOFTCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){ UE_LOG(LogTemp, Error, TEXT("Failed status on line %d (function %s): %d. Continuing."),__LINE__, *FString(__FUNCTION__),(int)temp_rc);}}
//#define RCCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){ UE_LOG(LogTemp, Error, TEXT("Failed status on line %d: %d. Terminating."),__LINE__,(int)temp_rc); QuitGame();}}


UENUM()
enum UROS2State
{
    Created         UMETA(DisplayName="Created"),
    Initialized     UMETA(DisplayName="Initialized"),
};
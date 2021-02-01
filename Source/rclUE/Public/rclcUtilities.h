// Copyright (c) 2020 Rapyuta Robotics Co., Ltd.

#pragma once

#include <rclc/rclc.h>

#define RCSOFTCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){ UE_LOG(LogTemp, Error, TEXT("Failed status on line %d: %d. Continuing."),__LINE__,(int)temp_rc);}}

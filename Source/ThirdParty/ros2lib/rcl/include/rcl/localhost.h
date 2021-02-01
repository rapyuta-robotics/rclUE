// Copyright 2019 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef RCL__LOCALHOST_H_
#define RCL__LOCALHOST_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include "rcl/types.h"
#include "rcl/visibility_control.h"

extern const char * const RCL_LOCALHOST_ENV_VAR;

/// Determine if the user wants to communicate using loopback only.
/**
 * Checks if localhost should be used for network communication checking ROS_LOCALHOST_ONLY env
 * variable
 * \returns true if ROS_LOCALHOST_ONLY is set and is 1, false otherwise.
 */
RCL_PUBLIC
bool
rcl_localhost_only();

#ifdef __cplusplus
}
#endif

#endif  // RCL__LOCALHOST_H_

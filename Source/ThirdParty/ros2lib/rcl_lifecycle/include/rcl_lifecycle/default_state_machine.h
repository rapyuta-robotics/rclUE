// Copyright 2016 Open Source Robotics Foundation, Inc.
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

#ifndef RCL_LIFECYCLE__DEFAULT_STATE_MACHINE_H_
#define RCL_LIFECYCLE__DEFAULT_STATE_MACHINE_H_

#include "rcl/macros.h"
#include "rcl/types.h"

#include "rcl_lifecycle/data_types.h"
#include "rcl_lifecycle/visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

RCL_LIFECYCLE_PUBLIC extern const char * rcl_lifecycle_configure_label;
RCL_LIFECYCLE_PUBLIC extern const char * rcl_lifecycle_cleanup_label;
RCL_LIFECYCLE_PUBLIC extern const char * rcl_lifecycle_activate_label;
RCL_LIFECYCLE_PUBLIC extern const char * rcl_lifecycle_deactivate_label;
RCL_LIFECYCLE_PUBLIC extern const char * rcl_lifecycle_shutdown_label;

RCL_LIFECYCLE_PUBLIC extern const char * rcl_lifecycle_transition_success_label;
RCL_LIFECYCLE_PUBLIC extern const char * rcl_lifecycle_transition_failure_label;
RCL_LIFECYCLE_PUBLIC extern const char * rcl_lifecycle_transition_error_label;

RCL_LIFECYCLE_PUBLIC
RCL_WARN_UNUSED
rcl_ret_t
rcl_lifecycle_init_default_state_machine(
  rcl_lifecycle_state_machine_t * state_machine, const rcl_allocator_t * allocator);

#ifdef __cplusplus
}
#endif

#endif  // RCL_LIFECYCLE__DEFAULT_STATE_MACHINE_H_

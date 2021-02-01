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


#ifndef RCL_LIFECYCLE__TRANSITION_MAP_H_
#define RCL_LIFECYCLE__TRANSITION_MAP_H_

#include "rcl/macros.h"

#include "rcl_lifecycle/data_types.h"

#ifdef __cplusplus
extern "C"
{
#endif

RCL_LIFECYCLE_PUBLIC
RCL_WARN_UNUSED
rcl_lifecycle_transition_map_t
rcl_lifecycle_get_zero_initialized_transition_map();

RCL_LIFECYCLE_PUBLIC
RCL_WARN_UNUSED
rcl_ret_t
rcl_lifecycle_transition_map_is_initialized(
  const rcl_lifecycle_transition_map_t * transition_map);

RCL_LIFECYCLE_PUBLIC
RCL_WARN_UNUSED
rcl_ret_t
rcl_lifecycle_transition_map_fini(
  rcl_lifecycle_transition_map_t * transition_map,
  const rcl_allocator_t * allocator);

RCL_LIFECYCLE_PUBLIC
RCL_WARN_UNUSED
rcl_ret_t
rcl_lifecycle_register_state(
  rcl_lifecycle_transition_map_t * map,
  rcl_lifecycle_state_t state,
  const rcl_allocator_t * allocator);

RCL_LIFECYCLE_PUBLIC
RCL_WARN_UNUSED
rcl_ret_t
rcl_lifecycle_register_transition(
  rcl_lifecycle_transition_map_t * transition_map,
  rcl_lifecycle_transition_t transition,
  const rcl_allocator_t * allocator);

RCL_LIFECYCLE_PUBLIC
RCL_WARN_UNUSED
rcl_lifecycle_state_t *
rcl_lifecycle_get_state(
  rcl_lifecycle_transition_map_t * transition_map,
  unsigned int state_id);

RCL_LIFECYCLE_PUBLIC
RCL_WARN_UNUSED
rcl_lifecycle_transition_t *
rcl_lifecycle_get_transitions(
  rcl_lifecycle_transition_map_t * transition_map,
  unsigned int state_id);

#ifdef __cplusplus
}
#endif

#endif  // RCL_LIFECYCLE__TRANSITION_MAP_H_

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

#ifndef RCL_LIFECYCLE__DATA_TYPES_H_
#define RCL_LIFECYCLE__DATA_TYPES_H_

#include "rcl/rcl.h"

#include "rcl_lifecycle/visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

typedef struct rcl_lifecycle_transition_t rcl_lifecycle_transition_t;

typedef struct rcl_lifecycle_state_t
{
  const char * label;
  unsigned int id;

  rcl_lifecycle_transition_t * valid_transitions;
  unsigned int valid_transition_size;
} rcl_lifecycle_state_t;

typedef struct rcl_lifecycle_transition_t
{
  const char * label;
  unsigned int id;
  rcl_lifecycle_state_t * start;
  rcl_lifecycle_state_t * goal;
} rcl_lifecycle_transition_t;

typedef struct rcl_lifecycle_transition_map_t
{
  rcl_lifecycle_state_t * states;
  unsigned int states_size;
  rcl_lifecycle_transition_t * transitions;
  unsigned int transitions_size;
} rcl_lifecycle_transition_map_t;

typedef struct rcl_lifecycle_com_interface_t
{
  rcl_node_t * node_handle;
  rcl_publisher_t pub_transition_event;
  rcl_service_t srv_change_state;
  rcl_service_t srv_get_state;
  rcl_service_t srv_get_available_states;
  rcl_service_t srv_get_available_transitions;
  rcl_service_t srv_get_transition_graph;
} rcl_lifecycle_com_interface_t;

typedef struct rcl_lifecycle_state_machine_t
{
  const rcl_lifecycle_state_t * current_state;
  // Map/Associated array of registered states and transitions
  rcl_lifecycle_transition_map_t transition_map;
  // Communication interface into a ROS world
  rcl_lifecycle_com_interface_t com_interface;
} rcl_lifecycle_state_machine_t;

#ifdef __cplusplus
}
#endif

#endif  // RCL_LIFECYCLE__DATA_TYPES_H_

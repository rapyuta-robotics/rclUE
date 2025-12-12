// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from simulation_interfaces:msg/SimulationState.idl
// generated code does not contain a copyright notice

#include "simulation_interfaces/msg/detail/simulation_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__msg__SimulationState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbb, 0x9f, 0x87, 0xcc, 0xdd, 0x98, 0xfb, 0xa1,
      0x13, 0x05, 0x2a, 0x51, 0x2d, 0x98, 0x01, 0xe8,
      0x4c, 0xe7, 0x32, 0xd0, 0xa2, 0xb3, 0xc2, 0xb0,
      0xcb, 0x28, 0x18, 0x28, 0xde, 0x36, 0xe4, 0x15,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char simulation_interfaces__msg__SimulationState__TYPE_NAME[] = "simulation_interfaces/msg/SimulationState";

// Define type names, field names, and default values
static char simulation_interfaces__msg__SimulationState__FIELD_NAME__state[] = "state";

static rosidl_runtime_c__type_description__Field simulation_interfaces__msg__SimulationState__FIELDS[] = {
  {
    {simulation_interfaces__msg__SimulationState__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__msg__SimulationState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__msg__SimulationState__TYPE_NAME, 41, 41},
      {simulation_interfaces__msg__SimulationState__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Simulation states used in SetSimulationState and returned in GetSimulationState\n"
  "\n"
  "uint8 STATE_STOPPED          = 0           # Simulation is stopped, which is equivalent to pausing and resetting with ALL_PAUSED.\n"
  "                                           # This is typically the default state when simulator is launched.\n"
  "                                           # Stopped simulation can be played. It can also be paused, which means\n"
  "                                           # starting simulation in a paused state immediately,\n"
  "                                           # without any time steps for physics or simulated clock ticks.\n"
  "\n"
  "uint8 STATE_PLAYING          = 1           # Simulation is playing, can be either paused or stopped.\n"
  "\n"
  "uint8 STATE_PAUSED           = 2           # Simulation is paused, can be either stopped (which will reset it) or played.\n"
  "\n"
  "uint8 STATE_QUITTING         = 3           # Closing the simulator application. Switching from STATE_PLAYING or STATE_PAUSED\n"
  "                                           # states is expected to stop the simulation first, and then exit.\n"
  "                                           # Simulation interfaces will become unavailable after quitting.\n"
  "                                           # Running simulation application is outside of the simulation interfaces as\n"
  "                                           # there is no service to handle the call when the simulator is not up.\n"
  "\n"
  "uint8 STATE_NO_WORLD         = 4           # Simulation world is currently unloaded.\n"
  "                                           # The simulation is inactive and cannot be started, stopped, or paused.\n"
  "\n"
  "uint8 STATE_LOADING_WORLD    = 5           # Simulation world is currently loading.\n"
  "                                           # The simulation is inactive while world is loading and cannot be started, stopped, or paused.\n"
  "uint8 state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__msg__SimulationState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__msg__SimulationState__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1874, 1874},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__msg__SimulationState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__msg__SimulationState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

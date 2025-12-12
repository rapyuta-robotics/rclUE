// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from simulation_interfaces:msg/SimulatorFeatures.idl
// generated code does not contain a copyright notice

#include "simulation_interfaces/msg/detail/simulator_features__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__msg__SimulatorFeatures__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8b, 0x10, 0x1c, 0x85, 0x29, 0xbc, 0x0e, 0xa3,
      0xdc, 0xf0, 0x56, 0x07, 0x82, 0x54, 0x76, 0x8f,
      0x39, 0x83, 0x2b, 0x9e, 0xf0, 0xad, 0xaf, 0x93,
      0xbd, 0x5c, 0xea, 0x96, 0xc0, 0xde, 0x33, 0x05,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char simulation_interfaces__msg__SimulatorFeatures__TYPE_NAME[] = "simulation_interfaces/msg/SimulatorFeatures";

// Define type names, field names, and default values
static char simulation_interfaces__msg__SimulatorFeatures__FIELD_NAME__features[] = "features";
static char simulation_interfaces__msg__SimulatorFeatures__FIELD_NAME__spawn_formats[] = "spawn_formats";
static char simulation_interfaces__msg__SimulatorFeatures__FIELD_NAME__custom_info[] = "custom_info";

static rosidl_runtime_c__type_description__Field simulation_interfaces__msg__SimulatorFeatures__FIELDS[] = {
  {
    {simulation_interfaces__msg__SimulatorFeatures__FIELD_NAME__features, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__SimulatorFeatures__FIELD_NAME__spawn_formats, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__SimulatorFeatures__FIELD_NAME__custom_info, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__msg__SimulatorFeatures__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__msg__SimulatorFeatures__TYPE_NAME, 43, 43},
      {simulation_interfaces__msg__SimulatorFeatures__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Features supported by the simulator.\n"
  "\n"
  "uint8 SPAWNING                  = 0       # Supports spawn interface (SpawnEntity).\n"
  "uint8 DELETING                  = 1       # Supports deleting entities (DeleteEntity).\n"
  "uint8 NAMED_POSES               = 2       # Supports predefined named poses (GetNamedPoses).\n"
  "uint8 POSE_BOUNDS               = 3       # Supports pose bounds (GetNamedPoseBounds).\n"
  "uint8 ENTITY_TAGS               = 4       # Supports entity tags in interfaces using EntityFilters, such as GetEntities.\n"
  "uint8 ENTITY_BOUNDS             = 5       # Supports entity bounds (GetEntityBounds).\n"
  "uint8 ENTITY_BOUNDS_BOX         = 6       # Supports entity filtering with bounds with TYPE_BOX.\n"
  "uint8 ENTITY_BOUNDS_CONVEX      = 7       # Supports entity filtering with Bounds TYPE_CONVEX_HULL.\n"
  "uint8 ENTITY_CATEGORIES         = 8       # Supports entity categories, such as in use with EntityFilters or SetEntityInfo.\n"
  "uint8 SPAWNING_RESOURCE_STRING  = 9       # Supports SpawnEntity resource_string field.\n"
  "\n"
  "uint8 ENTITY_STATE_GETTING      = 10      # Supports GetEntityState interface.\n"
  "uint8 ENTITY_STATE_SETTING      = 11      # Supports SetEntityState interface.\n"
  "uint8 ENTITY_INFO_GETTING       = 12      # Supports GetEntityInfo interface.\n"
  "uint8 ENTITY_INFO_SETTING       = 13      # Supports SetEntityInfo interface.\n"
  "uint8 SPAWNABLES                = 14      # Supports GetSpawnables interface.\n"
  "\n"
  "uint8 SIMULATION_RESET          = 20      # Supports one or more ways to reset the simulation through ResetSimulation.\n"
  "uint8 SIMULATION_RESET_TIME     = 21      # Supports SCOPE_TIME flag for resetting.\n"
  "uint8 SIMULATION_RESET_STATE    = 22      # Supports SCOPE_STATE flag for resetting.\n"
  "uint8 SIMULATION_RESET_SPAWNED  = 23      # Supports SCOPE_SPAWNED flag for resetting.\n"
  "uint8 SIMULATION_STATE_GETTING  = 24      # Supports GetSimulationState interface.\n"
  "uint8 SIMULATION_STATE_SETTING  = 25      # Supports SetSimulationState interface. Check SIMULATION_STATE_PAUSE feature\n"
  "                                          # for setting STATE_PAUSED.\n"
  "uint8 SIMULATION_STATE_PAUSE    = 26      # Supports the STATE_PAUSED SimulationState in SetSimulationState interface.\n"
  "\n"
  "uint8 STEP_SIMULATION_SINGLE    = 31      # Supports single stepping through simulation with StepSimulation interface.\n"
  "uint8 STEP_SIMULATION_MULTIPLE  = 32      # Supports multi-stepping through simulation, either through StepSimulation.\n"
  "                                          # service or through SimulateSteps action.\n"
  "uint8 STEP_SIMULATION_ACTION    = 33      # Supports SimulateSteps action interface.\n"
  "\n"
  "uint8 WORLD_LOADING             = 40      # Supports LoadWorld interface\n"
  "uint8 WORLD_RESOURCE_STRING     = 41      # Supports LoadWorld resource_string field\n"
  "uint8 WORLD_TAGS                = 42      # Supports world tags and tag filtering\n"
  "uint8 WORLD_UNLOADING           = 43      # Supports UnloadWorld interface\n"
  "uint8 WORLD_INFO_GETTING        = 44      # Supports GetCurrentWorld interface\n"
  "uint8 AVAILABLE_WORLDS          = 45      # Supports GetAvailableWorlds interface\n"
  "\n"
  "uint16[] features                         # A list of simulation features as specified by the list above.\n"
  "\n"
  "# A list of additional supported formats for spawning, which might be empty. Values may include\n"
  "#  * sdf (SDFormat)\n"
  "#  * urdf (Unified Robot Description Format)\n"
  "#  * usd (Universal Scene Description)\n"
  "#  * mjcf (MuJoCo's XML format)\n"
  "# or whatever simulator-native formats that are supported. \n"
  "string[] spawn_formats\n"
  "string custom_info                       # Optional: extra information for the caller, which could point to\n"
  "                                         # documentation, version compatibility and other useful meta information.";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__msg__SimulatorFeatures__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__msg__SimulatorFeatures__TYPE_NAME, 43, 43},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 3700, 3700},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__msg__SimulatorFeatures__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__msg__SimulatorFeatures__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

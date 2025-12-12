// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulation_interfaces:msg/SimulatorFeatures.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__SIMULATOR_FEATURES__STRUCT_H_
#define SIMULATION_INTERFACES__MSG__DETAIL__SIMULATOR_FEATURES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SPAWNING'.
enum
{
  simulation_interfaces__msg__SimulatorFeatures__SPAWNING = 0
};

/// Constant 'DELETING'.
enum
{
  simulation_interfaces__msg__SimulatorFeatures__DELETING = 1
};

/// Constant 'NAMED_POSES'.
enum
{
  simulation_interfaces__msg__SimulatorFeatures__NAMED_POSES = 2
};

/// Constant 'POSE_BOUNDS'.
enum
{
  simulation_interfaces__msg__SimulatorFeatures__POSE_BOUNDS = 3
};

/// Constant 'ENTITY_TAGS'.
enum
{
  simulation_interfaces__msg__SimulatorFeatures__ENTITY_TAGS = 4
};

/// Constant 'ENTITY_BOUNDS'.
enum
{
  simulation_interfaces__msg__SimulatorFeatures__ENTITY_BOUNDS = 5
};

/// Constant 'ENTITY_BOUNDS_BOX'.
enum
{
  simulation_interfaces__msg__SimulatorFeatures__ENTITY_BOUNDS_BOX = 6
};

/// Constant 'ENTITY_BOUNDS_CONVEX'.
enum
{
  simulation_interfaces__msg__SimulatorFeatures__ENTITY_BOUNDS_CONVEX = 7
};

/// Constant 'ENTITY_CATEGORIES'.
enum
{
  simulation_interfaces__msg__SimulatorFeatures__ENTITY_CATEGORIES = 8
};

/// Constant 'SPAWNING_RESOURCE_STRING'.
enum
{
  simulation_interfaces__msg__SimulatorFeatures__SPAWNING_RESOURCE_STRING = 9
};

/// Constant 'ENTITY_STATE_GETTING'.
enum
{
  simulation_interfaces__msg__SimulatorFeatures__ENTITY_STATE_GETTING = 10
};

/// Constant 'ENTITY_STATE_SETTING'.
enum
{
  simulation_interfaces__msg__SimulatorFeatures__ENTITY_STATE_SETTING = 11
};

/// Constant 'ENTITY_INFO_GETTING'.
enum
{
  simulation_interfaces__msg__SimulatorFeatures__ENTITY_INFO_GETTING = 12
};

/// Constant 'ENTITY_INFO_SETTING'.
enum
{
  simulation_interfaces__msg__SimulatorFeatures__ENTITY_INFO_SETTING = 13
};

/// Constant 'SPAWNABLES'.
enum
{
  simulation_interfaces__msg__SimulatorFeatures__SPAWNABLES = 14
};

/// Constant 'SIMULATION_RESET'.
enum
{
  simulation_interfaces__msg__SimulatorFeatures__SIMULATION_RESET = 20
};

/// Constant 'SIMULATION_RESET_TIME'.
enum
{
  simulation_interfaces__msg__SimulatorFeatures__SIMULATION_RESET_TIME = 21
};

/// Constant 'SIMULATION_RESET_STATE'.
enum
{
  simulation_interfaces__msg__SimulatorFeatures__SIMULATION_RESET_STATE = 22
};

/// Constant 'SIMULATION_RESET_SPAWNED'.
enum
{
  simulation_interfaces__msg__SimulatorFeatures__SIMULATION_RESET_SPAWNED = 23
};

/// Constant 'SIMULATION_STATE_GETTING'.
enum
{
  simulation_interfaces__msg__SimulatorFeatures__SIMULATION_STATE_GETTING = 24
};

/// Constant 'SIMULATION_STATE_SETTING'.
enum
{
  simulation_interfaces__msg__SimulatorFeatures__SIMULATION_STATE_SETTING = 25
};

/// Constant 'SIMULATION_STATE_PAUSE'.
enum
{
  simulation_interfaces__msg__SimulatorFeatures__SIMULATION_STATE_PAUSE = 26
};

/// Constant 'STEP_SIMULATION_SINGLE'.
enum
{
  simulation_interfaces__msg__SimulatorFeatures__STEP_SIMULATION_SINGLE = 31
};

/// Constant 'STEP_SIMULATION_MULTIPLE'.
enum
{
  simulation_interfaces__msg__SimulatorFeatures__STEP_SIMULATION_MULTIPLE = 32
};

/// Constant 'STEP_SIMULATION_ACTION'.
enum
{
  simulation_interfaces__msg__SimulatorFeatures__STEP_SIMULATION_ACTION = 33
};

/// Constant 'WORLD_LOADING'.
enum
{
  simulation_interfaces__msg__SimulatorFeatures__WORLD_LOADING = 40
};

/// Constant 'WORLD_RESOURCE_STRING'.
enum
{
  simulation_interfaces__msg__SimulatorFeatures__WORLD_RESOURCE_STRING = 41
};

/// Constant 'WORLD_TAGS'.
enum
{
  simulation_interfaces__msg__SimulatorFeatures__WORLD_TAGS = 42
};

/// Constant 'WORLD_UNLOADING'.
enum
{
  simulation_interfaces__msg__SimulatorFeatures__WORLD_UNLOADING = 43
};

/// Constant 'WORLD_INFO_GETTING'.
enum
{
  simulation_interfaces__msg__SimulatorFeatures__WORLD_INFO_GETTING = 44
};

/// Constant 'AVAILABLE_WORLDS'.
enum
{
  simulation_interfaces__msg__SimulatorFeatures__AVAILABLE_WORLDS = 45
};

// Include directives for member types
// Member 'features'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'spawn_formats'
// Member 'custom_info'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/SimulatorFeatures in the package simulation_interfaces.
typedef struct simulation_interfaces__msg__SimulatorFeatures
{
  rosidl_runtime_c__uint16__Sequence features;
  rosidl_runtime_c__String__Sequence spawn_formats;
  rosidl_runtime_c__String custom_info;
} simulation_interfaces__msg__SimulatorFeatures;

// Struct for a sequence of simulation_interfaces__msg__SimulatorFeatures.
typedef struct simulation_interfaces__msg__SimulatorFeatures__Sequence
{
  simulation_interfaces__msg__SimulatorFeatures * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__msg__SimulatorFeatures__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__SIMULATOR_FEATURES__STRUCT_H_

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
/**
  * Supports spawn interface (SpawnEntity).
 */
enum
{
  simulation_interfaces__msg__SimulatorFeatures__SPAWNING = 0
};

/// Constant 'DELETING'.
/**
  * Supports deleting entities (DeleteEntity).
 */
enum
{
  simulation_interfaces__msg__SimulatorFeatures__DELETING = 1
};

/// Constant 'NAMED_POSES'.
/**
  * Supports predefined named poses (GetNamedPoses).
 */
enum
{
  simulation_interfaces__msg__SimulatorFeatures__NAMED_POSES = 2
};

/// Constant 'POSE_BOUNDS'.
/**
  * Supports pose bounds (GetNamedPoseBounds).
 */
enum
{
  simulation_interfaces__msg__SimulatorFeatures__POSE_BOUNDS = 3
};

/// Constant 'ENTITY_TAGS'.
/**
  * Supports entity tags in interfaces using EntityFilters, such as GetEntities.
 */
enum
{
  simulation_interfaces__msg__SimulatorFeatures__ENTITY_TAGS = 4
};

/// Constant 'ENTITY_BOUNDS'.
/**
  * Supports entity bounds (GetEntityBounds).
 */
enum
{
  simulation_interfaces__msg__SimulatorFeatures__ENTITY_BOUNDS = 5
};

/// Constant 'ENTITY_BOUNDS_BOX'.
/**
  * Supports entity filtering with bounds with TYPE_BOX.
 */
enum
{
  simulation_interfaces__msg__SimulatorFeatures__ENTITY_BOUNDS_BOX = 6
};

/// Constant 'ENTITY_BOUNDS_CONVEX'.
/**
  * Supports entity filtering with Bounds TYPE_CONVEX_HULL.
 */
enum
{
  simulation_interfaces__msg__SimulatorFeatures__ENTITY_BOUNDS_CONVEX = 7
};

/// Constant 'ENTITY_CATEGORIES'.
/**
  * Supports entity categories, such as in use with EntityFilters or SetEntityInfo.
 */
enum
{
  simulation_interfaces__msg__SimulatorFeatures__ENTITY_CATEGORIES = 8
};

/// Constant 'SPAWNING_RESOURCE_STRING'.
/**
  * Supports SpawnEntity resource_string field.
 */
enum
{
  simulation_interfaces__msg__SimulatorFeatures__SPAWNING_RESOURCE_STRING = 9
};

/// Constant 'ENTITY_STATE_GETTING'.
/**
  * Supports GetEntityState interface.
 */
enum
{
  simulation_interfaces__msg__SimulatorFeatures__ENTITY_STATE_GETTING = 10
};

/// Constant 'ENTITY_STATE_SETTING'.
/**
  * Supports SetEntityState interface.
 */
enum
{
  simulation_interfaces__msg__SimulatorFeatures__ENTITY_STATE_SETTING = 11
};

/// Constant 'ENTITY_INFO_GETTING'.
/**
  * Supports GetEntityInfo interface.
 */
enum
{
  simulation_interfaces__msg__SimulatorFeatures__ENTITY_INFO_GETTING = 12
};

/// Constant 'ENTITY_INFO_SETTING'.
/**
  * Supports SetEntityInfo interface.
 */
enum
{
  simulation_interfaces__msg__SimulatorFeatures__ENTITY_INFO_SETTING = 13
};

/// Constant 'SPAWNABLES'.
/**
  * Supports GetSpawnables interface.
 */
enum
{
  simulation_interfaces__msg__SimulatorFeatures__SPAWNABLES = 14
};

/// Constant 'SIMULATION_RESET'.
/**
  * Supports one or more ways to reset the simulation through ResetSimulation.
 */
enum
{
  simulation_interfaces__msg__SimulatorFeatures__SIMULATION_RESET = 20
};

/// Constant 'SIMULATION_RESET_TIME'.
/**
  * Supports SCOPE_TIME flag for resetting.
 */
enum
{
  simulation_interfaces__msg__SimulatorFeatures__SIMULATION_RESET_TIME = 21
};

/// Constant 'SIMULATION_RESET_STATE'.
/**
  * Supports SCOPE_STATE flag for resetting.
 */
enum
{
  simulation_interfaces__msg__SimulatorFeatures__SIMULATION_RESET_STATE = 22
};

/// Constant 'SIMULATION_RESET_SPAWNED'.
/**
  * Supports SCOPE_SPAWNED flag for resetting.
 */
enum
{
  simulation_interfaces__msg__SimulatorFeatures__SIMULATION_RESET_SPAWNED = 23
};

/// Constant 'SIMULATION_STATE_GETTING'.
/**
  * Supports GetSimulationState interface.
 */
enum
{
  simulation_interfaces__msg__SimulatorFeatures__SIMULATION_STATE_GETTING = 24
};

/// Constant 'SIMULATION_STATE_SETTING'.
/**
  * Supports SetSimulationState interface. Check SIMULATION_STATE_PAUSE feature
  * for setting STATE_PAUSED.
 */
enum
{
  simulation_interfaces__msg__SimulatorFeatures__SIMULATION_STATE_SETTING = 25
};

/// Constant 'SIMULATION_STATE_PAUSE'.
/**
  * Supports the STATE_PAUSED SimulationState in SetSimulationState interface.
 */
enum
{
  simulation_interfaces__msg__SimulatorFeatures__SIMULATION_STATE_PAUSE = 26
};

/// Constant 'STEP_SIMULATION_SINGLE'.
/**
  * Supports single stepping through simulation with StepSimulation interface.
 */
enum
{
  simulation_interfaces__msg__SimulatorFeatures__STEP_SIMULATION_SINGLE = 31
};

/// Constant 'STEP_SIMULATION_MULTIPLE'.
/**
  * Supports multi-stepping through simulation, either through StepSimulation.
  * service or through SimulateSteps action.
 */
enum
{
  simulation_interfaces__msg__SimulatorFeatures__STEP_SIMULATION_MULTIPLE = 32
};

/// Constant 'STEP_SIMULATION_ACTION'.
/**
  * Supports SimulateSteps action interface.
 */
enum
{
  simulation_interfaces__msg__SimulatorFeatures__STEP_SIMULATION_ACTION = 33
};

/// Constant 'WORLD_LOADING'.
/**
  * Supports LoadWorld interface
 */
enum
{
  simulation_interfaces__msg__SimulatorFeatures__WORLD_LOADING = 40
};

/// Constant 'WORLD_RESOURCE_STRING'.
/**
  * Supports LoadWorld resource_string field
 */
enum
{
  simulation_interfaces__msg__SimulatorFeatures__WORLD_RESOURCE_STRING = 41
};

/// Constant 'WORLD_TAGS'.
/**
  * Supports world tags and tag filtering
 */
enum
{
  simulation_interfaces__msg__SimulatorFeatures__WORLD_TAGS = 42
};

/// Constant 'WORLD_UNLOADING'.
/**
  * Supports UnloadWorld interface
 */
enum
{
  simulation_interfaces__msg__SimulatorFeatures__WORLD_UNLOADING = 43
};

/// Constant 'WORLD_INFO_GETTING'.
/**
  * Supports GetCurrentWorld interface
 */
enum
{
  simulation_interfaces__msg__SimulatorFeatures__WORLD_INFO_GETTING = 44
};

/// Constant 'AVAILABLE_WORLDS'.
/**
  * Supports GetAvailableWorlds interface
 */
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

/// Struct defined in msg/SimulatorFeatures in the package simulation_interfaces.
/**
  * Features supported by the simulator.
 */
typedef struct simulation_interfaces__msg__SimulatorFeatures
{
  /// A list of simulation features as specified by the list above.
  rosidl_runtime_c__uint16__Sequence features;
  /// A list of additional supported formats for spawning, which might be empty. Values may include
  ///  * sdf (SDFormat)
  ///  * urdf (Unified Robot Description Format)
  ///  * usd (Universal Scene Description)
  ///  * mjcf (MuJoCo's XML format)
  /// or whatever simulator-native formats that are supported.
  rosidl_runtime_c__String__Sequence spawn_formats;
  /// Optional: extra information for the caller, which could point to
  /// documentation, version compatibility and other useful meta information.
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

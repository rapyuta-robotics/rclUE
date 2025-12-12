// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulation_interfaces:msg/Spawnable.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__SPAWNABLE__STRUCT_H_
#define SIMULATION_INTERFACES__MSG__DETAIL__SPAWNABLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'entity_resource'
#include "simulation_interfaces/msg/detail/resource__struct.h"
// Member 'description'
#include "rosidl_runtime_c/string.h"
// Member 'spawn_bounds'
#include "simulation_interfaces/msg/detail/bounds__struct.h"

/// Struct defined in msg/Spawnable in the package simulation_interfaces.
/**
  * Robot or other object which can be spawned in simulation runtime.
 */
typedef struct simulation_interfaces__msg__Spawnable
{
  /// The resource (e.g. URDF, SDF) for the model to be spawned.
  simulation_interfaces__msg__Resource entity_resource;
  /// Optional description for the user, e.g. "robot X with sensors A,B,C".
  rosidl_runtime_c__String description;
  /// Optional spawn area bounds which fully encompass this object.
  simulation_interfaces__msg__Bounds spawn_bounds;
} simulation_interfaces__msg__Spawnable;

// Struct for a sequence of simulation_interfaces__msg__Spawnable.
typedef struct simulation_interfaces__msg__Spawnable__Sequence
{
  simulation_interfaces__msg__Spawnable * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__msg__Spawnable__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__SPAWNABLE__STRUCT_H_

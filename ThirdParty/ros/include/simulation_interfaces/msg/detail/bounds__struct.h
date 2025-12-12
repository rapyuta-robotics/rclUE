// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulation_interfaces:msg/Bounds.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__BOUNDS__STRUCT_H_
#define SIMULATION_INTERFACES__MSG__DETAIL__BOUNDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TYPE_EMPTY'.
enum
{
  simulation_interfaces__msg__Bounds__TYPE_EMPTY = 0
};

/// Constant 'TYPE_BOX'.
enum
{
  simulation_interfaces__msg__Bounds__TYPE_BOX = 1
};

/// Constant 'TYPE_CONVEX_HULL'.
enum
{
  simulation_interfaces__msg__Bounds__TYPE_CONVEX_HULL = 2
};

/// Constant 'TYPE_SPHERE'.
enum
{
  simulation_interfaces__msg__Bounds__TYPE_SPHERE = 3
};

// Include directives for member types
// Member 'points'
#include "geometry_msgs/msg/detail/vector3__struct.h"

// Struct defined in msg/Bounds in the package simulation_interfaces.
typedef struct simulation_interfaces__msg__Bounds
{
  uint8_t type;
  geometry_msgs__msg__Vector3__Sequence points;
} simulation_interfaces__msg__Bounds;

// Struct for a sequence of simulation_interfaces__msg__Bounds.
typedef struct simulation_interfaces__msg__Bounds__Sequence
{
  simulation_interfaces__msg__Bounds * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__msg__Bounds__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__BOUNDS__STRUCT_H_

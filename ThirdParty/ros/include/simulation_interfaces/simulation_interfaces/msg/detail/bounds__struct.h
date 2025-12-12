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
/**
  * As bounds are optional in most interfaces, TYPE_EMPTY signifies empty bounds, to be understood as "unbounded".
  * Otherwise, the fields are expected to define a valid volume.
  * For spawning with a named pose, you should check whether the entity simulation model fits within the bounds
  * before calling SpawnEntity, to avoid overlaps and unstable behavior.
  * bounds type
  * No bounds. The points vector will be empty.
 */
enum
{
  simulation_interfaces__msg__Bounds__TYPE_EMPTY = 0
};

/// Constant 'TYPE_BOX'.
/**
  * Axis-aligned bounding box, points field should have two values,
  * which are upper right and lower left corners of the box.
 */
enum
{
  simulation_interfaces__msg__Bounds__TYPE_BOX = 1
};

/// Constant 'TYPE_CONVEX_HULL'.
/**
  * Points define a convex hull (at least 3 non-collinear points).
 */
enum
{
  simulation_interfaces__msg__Bounds__TYPE_CONVEX_HULL = 2
};

/// Constant 'TYPE_SPHERE'.
/**
  * A sphere with center and radius. First element of points vector is the center.
  * The x field of the second point of the vector is the radius (y and z are ignored).
 */
enum
{
  simulation_interfaces__msg__Bounds__TYPE_SPHERE = 3
};

// Include directives for member types
// Member 'points'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/Bounds in the package simulation_interfaces.
/**
  * Bounds which are useful in several contexts, e.g. to avoid spawning with other object overlap,
  * or parking in a spot that is too small.
  * Certain goals or points might be valid for a small object, but not suitable for a large one,
  * or a differently shaped one.
  * Bounds can be also checked to ensure certain scenario conditions are met.
  * For entities, these limits are relative to entity's canonical link transform, following ROS rep-103 convention.
 */
typedef struct simulation_interfaces__msg__Bounds
{
  uint8_t type;
  /// Points defining the bounded area. Check type field to determine semantics.
  /// Valid sizes are zero (no bounds), 2 (sphere or box, depending on type field),
  /// and 3 or more (convex hull).
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

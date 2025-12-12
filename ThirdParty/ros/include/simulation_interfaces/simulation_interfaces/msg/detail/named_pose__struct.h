// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulation_interfaces:msg/NamedPose.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__NAMED_POSE__STRUCT_H_
#define SIMULATION_INTERFACES__MSG__DETAIL__NAMED_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'description'
// Member 'tags'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/NamedPose in the package simulation_interfaces.
/**
  * A named pose defined in the simulation for certain purposes such as spawning.
 */
typedef struct simulation_interfaces__msg__NamedPose
{
  /// Unique name.
  rosidl_runtime_c__String name;
  /// Description for the user, e.g. "near the charging station".
  rosidl_runtime_c__String description;
  /// Optional tags which can be used to determine the named pose
  /// purpose, for example: "spawn", "parking", "navigation_goal",
  /// as well as fitting entity types e.g. "drone", "turtlebot3".
  rosidl_runtime_c__String__Sequence tags;
  /// Pose relative to world, which can be used with SpawnEntity.srv.
  geometry_msgs__msg__Pose pose;
} simulation_interfaces__msg__NamedPose;

// Struct for a sequence of simulation_interfaces__msg__NamedPose.
typedef struct simulation_interfaces__msg__NamedPose__Sequence
{
  simulation_interfaces__msg__NamedPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__msg__NamedPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__NAMED_POSE__STRUCT_H_

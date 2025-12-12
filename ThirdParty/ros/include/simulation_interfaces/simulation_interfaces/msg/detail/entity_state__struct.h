// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulation_interfaces:msg/EntityState.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_STATE__STRUCT_H_
#define SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'acceleration'
#include "geometry_msgs/msg/detail/accel__struct.h"

/// Struct defined in msg/EntityState in the package simulation_interfaces.
/**
  * Entity current pose, twist and acceleration
 */
typedef struct simulation_interfaces__msg__EntityState
{
  /// Reference frame and timestamp for pose and twist. Empty frame defaults to world.
  std_msgs__msg__Header header;
  /// Pose in reference frame, ground truth.
  geometry_msgs__msg__Pose pose;
  /// Ground truth linear and angular velocities
  /// observed in the frame specified by header.frame_id
  /// See https://github.com/ros2/common_interfaces/pull/240 for conventions.
  geometry_msgs__msg__Twist twist;
  /// Linear and angular acceleration ground truth, following the same convention.
  geometry_msgs__msg__Accel acceleration;
} simulation_interfaces__msg__EntityState;

// Struct for a sequence of simulation_interfaces__msg__EntityState.
typedef struct simulation_interfaces__msg__EntityState__Sequence
{
  simulation_interfaces__msg__EntityState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__msg__EntityState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_STATE__STRUCT_H_

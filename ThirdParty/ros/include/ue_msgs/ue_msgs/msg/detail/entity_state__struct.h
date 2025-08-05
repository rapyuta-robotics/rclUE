// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ue_msgs:msg/EntityState.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__ENTITY_STATE__STRUCT_H_
#define UE_MSGS__MSG__DETAIL__ENTITY_STATE__STRUCT_H_

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
// Member 'reference_frame'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in msg/EntityState in the package ue_msgs.
/**
  * Holds an entity's pose and twist
 */
typedef struct ue_msgs__msg__EntityState
{
  /// Entity's scoped name.
  /// An entity can be a model, link, collision, light, etc.
  /// Be sure to use gazebo scoped naming notation (e.g.)
  rosidl_runtime_c__String name;
  /// Pose in reference frame.
  geometry_msgs__msg__Pose pose;
  /// Twist in reference frame.
  geometry_msgs__msg__Twist twist;
  /// Pose/twist are expressed relative to the frame of this entity.
  /// Leaving empty or "world" defaults to inertial world frame.
  rosidl_runtime_c__String reference_frame;
} ue_msgs__msg__EntityState;

// Struct for a sequence of ue_msgs__msg__EntityState.
typedef struct ue_msgs__msg__EntityState__Sequence
{
  ue_msgs__msg__EntityState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue_msgs__msg__EntityState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UE_MSGS__MSG__DETAIL__ENTITY_STATE__STRUCT_H_

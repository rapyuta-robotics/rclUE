// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ue_msgs:msg/IntPoseEntry.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__INT_POSE_ENTRY__STRUCT_H_
#define UE_MSGS__MSG__DETAIL__INT_POSE_ENTRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'value'
#include "geometry_msgs/msg/detail/pose__struct.h"

// Struct defined in msg/IntPoseEntry in the package ue_msgs.
typedef struct ue_msgs__msg__IntPoseEntry
{
  int32_t key;
  geometry_msgs__msg__Pose value;
} ue_msgs__msg__IntPoseEntry;

// Struct for a sequence of ue_msgs__msg__IntPoseEntry.
typedef struct ue_msgs__msg__IntPoseEntry__Sequence
{
  ue_msgs__msg__IntPoseEntry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue_msgs__msg__IntPoseEntry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UE_MSGS__MSG__DETAIL__INT_POSE_ENTRY__STRUCT_H_

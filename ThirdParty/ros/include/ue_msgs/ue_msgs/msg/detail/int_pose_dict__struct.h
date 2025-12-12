// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ue_msgs:msg/IntPoseDict.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__INT_POSE_DICT__STRUCT_H_
#define UE_MSGS__MSG__DETAIL__INT_POSE_DICT__STRUCT_H_

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
// Member 'entries'
#include "ue_msgs/msg/detail/int_pose_entry__struct.h"

/// Struct defined in msg/IntPoseDict in the package ue_msgs.
/**
  * Dictionary message using array of IntPoseEntry
 */
typedef struct ue_msgs__msg__IntPoseDict
{
  std_msgs__msg__Header header;
  /// Array of key-value entries
  ue_msgs__msg__IntPoseEntry__Sequence entries;
} ue_msgs__msg__IntPoseDict;

// Struct for a sequence of ue_msgs__msg__IntPoseDict.
typedef struct ue_msgs__msg__IntPoseDict__Sequence
{
  ue_msgs__msg__IntPoseDict * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue_msgs__msg__IntPoseDict__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UE_MSGS__MSG__DETAIL__INT_POSE_DICT__STRUCT_H_

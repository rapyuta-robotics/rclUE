// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ue_msgs:msg/IntPoseStampedDict.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__INT_POSE_STAMPED_DICT__STRUCT_H_
#define UE_MSGS__MSG__DETAIL__INT_POSE_STAMPED_DICT__STRUCT_H_

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
#include "ue_msgs/msg/detail/int_pose_stamped_entry__struct.h"

// Struct defined in msg/IntPoseStampedDict in the package ue_msgs.
typedef struct ue_msgs__msg__IntPoseStampedDict
{
  std_msgs__msg__Header header;
  ue_msgs__msg__IntPoseStampedEntry__Sequence entries;
} ue_msgs__msg__IntPoseStampedDict;

// Struct for a sequence of ue_msgs__msg__IntPoseStampedDict.
typedef struct ue_msgs__msg__IntPoseStampedDict__Sequence
{
  ue_msgs__msg__IntPoseStampedDict * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue_msgs__msg__IntPoseStampedDict__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UE_MSGS__MSG__DETAIL__INT_POSE_STAMPED_DICT__STRUCT_H_

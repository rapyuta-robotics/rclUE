// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ue_msgs:msg/Overlaps.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__OVERLAPS__STRUCT_H_
#define UE_MSGS__MSG__DETAIL__OVERLAPS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'targets'
#include "rosidl_runtime_c/string.h"
// Member 'overlaps'
#include "ue_msgs/msg/detail/overlapping_objects__struct.h"

/// Struct defined in msg/Overlaps in the package ue_msgs.
typedef struct ue_msgs__msg__Overlaps
{
  rosidl_runtime_c__String__Sequence targets;
  ue_msgs__msg__OverlappingObjects__Sequence overlaps;
} ue_msgs__msg__Overlaps;

// Struct for a sequence of ue_msgs__msg__Overlaps.
typedef struct ue_msgs__msg__Overlaps__Sequence
{
  ue_msgs__msg__Overlaps * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue_msgs__msg__Overlaps__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UE_MSGS__MSG__DETAIL__OVERLAPS__STRUCT_H_

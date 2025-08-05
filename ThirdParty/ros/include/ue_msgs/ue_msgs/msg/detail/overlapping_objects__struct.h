// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ue_msgs:msg/OverlappingObjects.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__OVERLAPPING_OBJECTS__STRUCT_H_
#define UE_MSGS__MSG__DETAIL__OVERLAPPING_OBJECTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'actors'
// Member 'components'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/OverlappingObjects in the package ue_msgs.
typedef struct ue_msgs__msg__OverlappingObjects
{
  rosidl_runtime_c__String__Sequence actors;
  rosidl_runtime_c__String__Sequence components;
} ue_msgs__msg__OverlappingObjects;

// Struct for a sequence of ue_msgs__msg__OverlappingObjects.
typedef struct ue_msgs__msg__OverlappingObjects__Sequence
{
  ue_msgs__msg__OverlappingObjects * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue_msgs__msg__OverlappingObjects__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UE_MSGS__MSG__DETAIL__OVERLAPPING_OBJECTS__STRUCT_H_

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ue_msgs:msg/IntPointDict.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__INT_POINT_DICT__STRUCT_H_
#define UE_MSGS__MSG__DETAIL__INT_POINT_DICT__STRUCT_H_

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
#include "ue_msgs/msg/detail/int_point_entry__struct.h"

// Struct defined in msg/IntPointDict in the package ue_msgs.
typedef struct ue_msgs__msg__IntPointDict
{
  std_msgs__msg__Header header;
  ue_msgs__msg__IntPointEntry__Sequence entries;
} ue_msgs__msg__IntPointDict;

// Struct for a sequence of ue_msgs__msg__IntPointDict.
typedef struct ue_msgs__msg__IntPointDict__Sequence
{
  ue_msgs__msg__IntPointDict * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue_msgs__msg__IntPointDict__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UE_MSGS__MSG__DETAIL__INT_POINT_DICT__STRUCT_H_

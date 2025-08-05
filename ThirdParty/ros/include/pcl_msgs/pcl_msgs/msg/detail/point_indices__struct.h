// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pcl_msgs:msg/PointIndices.idl
// generated code does not contain a copyright notice

#ifndef PCL_MSGS__MSG__DETAIL__POINT_INDICES__STRUCT_H_
#define PCL_MSGS__MSG__DETAIL__POINT_INDICES__STRUCT_H_

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
// Member 'indices'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/PointIndices in the package pcl_msgs.
typedef struct pcl_msgs__msg__PointIndices
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__int32__Sequence indices;
} pcl_msgs__msg__PointIndices;

// Struct for a sequence of pcl_msgs__msg__PointIndices.
typedef struct pcl_msgs__msg__PointIndices__Sequence
{
  pcl_msgs__msg__PointIndices * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pcl_msgs__msg__PointIndices__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PCL_MSGS__MSG__DETAIL__POINT_INDICES__STRUCT_H_

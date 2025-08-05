// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pcl_msgs:msg/Vertices.idl
// generated code does not contain a copyright notice

#ifndef PCL_MSGS__MSG__DETAIL__VERTICES__STRUCT_H_
#define PCL_MSGS__MSG__DETAIL__VERTICES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'vertices'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Vertices in the package pcl_msgs.
/**
  * List of point indices
 */
typedef struct pcl_msgs__msg__Vertices
{
  rosidl_runtime_c__uint32__Sequence vertices;
} pcl_msgs__msg__Vertices;

// Struct for a sequence of pcl_msgs__msg__Vertices.
typedef struct pcl_msgs__msg__Vertices__Sequence
{
  pcl_msgs__msg__Vertices * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pcl_msgs__msg__Vertices__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PCL_MSGS__MSG__DETAIL__VERTICES__STRUCT_H_

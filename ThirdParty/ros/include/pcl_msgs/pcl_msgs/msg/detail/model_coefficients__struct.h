// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pcl_msgs:msg/ModelCoefficients.idl
// generated code does not contain a copyright notice

#ifndef PCL_MSGS__MSG__DETAIL__MODEL_COEFFICIENTS__STRUCT_H_
#define PCL_MSGS__MSG__DETAIL__MODEL_COEFFICIENTS__STRUCT_H_

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
// Member 'values'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ModelCoefficients in the package pcl_msgs.
typedef struct pcl_msgs__msg__ModelCoefficients
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__float__Sequence values;
} pcl_msgs__msg__ModelCoefficients;

// Struct for a sequence of pcl_msgs__msg__ModelCoefficients.
typedef struct pcl_msgs__msg__ModelCoefficients__Sequence
{
  pcl_msgs__msg__ModelCoefficients * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pcl_msgs__msg__ModelCoefficients__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PCL_MSGS__MSG__DETAIL__MODEL_COEFFICIENTS__STRUCT_H_

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ue_msgs:msg/EntityStateMultiArray.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__ENTITY_STATE_MULTI_ARRAY__STRUCT_H_
#define UE_MSGS__MSG__DETAIL__ENTITY_STATE_MULTI_ARRAY__STRUCT_H_

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
// Member 'entity_states'
#include "ue_msgs/msg/detail/entity_state__struct.h"

/// Struct defined in msg/EntityStateMultiArray in the package ue_msgs.
/**
  * Array of EntityState messages
 */
typedef struct ue_msgs__msg__EntityStateMultiArray
{
  std_msgs__msg__Header header;
  /// Array of EntityState
  ue_msgs__msg__EntityState__Sequence entity_states;
} ue_msgs__msg__EntityStateMultiArray;

// Struct for a sequence of ue_msgs__msg__EntityStateMultiArray.
typedef struct ue_msgs__msg__EntityStateMultiArray__Sequence
{
  ue_msgs__msg__EntityStateMultiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue_msgs__msg__EntityStateMultiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UE_MSGS__MSG__DETAIL__ENTITY_STATE_MULTI_ARRAY__STRUCT_H_

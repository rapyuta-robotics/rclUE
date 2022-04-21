// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ue_msgs:msg/SpawnEntityState.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__SPAWN_ENTITY_STATE__STRUCT_H_
#define UE_MSGS__MSG__DETAIL__SPAWN_ENTITY_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'xml'
// Member 'tags'
#include "rosidl_runtime_c/string.h"
// Member 'state'
#include "ue_msgs/msg/detail/entity_state__struct.h"

// Struct defined in msg/SpawnEntityState in the package ue_msgs.
typedef struct ue_msgs__msg__SpawnEntityState
{
  rosidl_runtime_c__String xml;
  ue_msgs__msg__EntityState state;
  rosidl_runtime_c__String__Sequence tags;
} ue_msgs__msg__SpawnEntityState;

// Struct for a sequence of ue_msgs__msg__SpawnEntityState.
typedef struct ue_msgs__msg__SpawnEntityState__Sequence
{
  ue_msgs__msg__SpawnEntityState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue_msgs__msg__SpawnEntityState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UE_MSGS__MSG__DETAIL__SPAWN_ENTITY_STATE__STRUCT_H_

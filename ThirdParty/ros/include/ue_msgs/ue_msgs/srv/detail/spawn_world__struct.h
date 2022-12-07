// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ue_msgs:srv/SpawnWorld.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__SRV__DETAIL__SPAWN_WORLD__STRUCT_H_
#define UE_MSGS__SRV__DETAIL__SPAWN_WORLD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'world_model'
// Member 'world_instance_name'
// Member 'json_parameters'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/SpawnWorld in the package ue_msgs.
typedef struct ue_msgs__srv__SpawnWorld_Request
{
  /// World model name
  rosidl_runtime_c__String world_model;
  /// World instance unique name
  rosidl_runtime_c__String world_instance_name;
  /// World instance initial pose
  geometry_msgs__msg__Pose pose;
  /// optional parameters, in json format
  rosidl_runtime_c__String json_parameters;
} ue_msgs__srv__SpawnWorld_Request;

// Struct for a sequence of ue_msgs__srv__SpawnWorld_Request.
typedef struct ue_msgs__srv__SpawnWorld_Request__Sequence
{
  ue_msgs__srv__SpawnWorld_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue_msgs__srv__SpawnWorld_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status_message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SpawnWorld in the package ue_msgs.
typedef struct ue_msgs__srv__SpawnWorld_Response
{
  bool success;
  rosidl_runtime_c__String status_message;
} ue_msgs__srv__SpawnWorld_Response;

// Struct for a sequence of ue_msgs__srv__SpawnWorld_Response.
typedef struct ue_msgs__srv__SpawnWorld_Response__Sequence
{
  ue_msgs__srv__SpawnWorld_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue_msgs__srv__SpawnWorld_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UE_MSGS__SRV__DETAIL__SPAWN_WORLD__STRUCT_H_

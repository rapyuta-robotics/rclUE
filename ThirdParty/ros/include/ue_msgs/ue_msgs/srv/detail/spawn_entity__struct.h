// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ue_msgs:srv/SpawnEntity.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__SRV__DETAIL__SPAWN_ENTITY__STRUCT_H_
#define UE_MSGS__SRV__DETAIL__SPAWN_ENTITY__STRUCT_H_

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
// Member 'robot_namespace'
// Member 'tags'
// Member 'json_parameters'
#include "rosidl_runtime_c/string.h"
// Member 'state'
#include "ue_msgs/msg/detail/entity_state__struct.h"

/// Struct defined in srv/SpawnEntity in the package ue_msgs.
typedef struct ue_msgs__srv__SpawnEntity_Request
{
  /// Entity XML description as a string, either URDF or SDF.
  rosidl_runtime_c__String xml;
  /// Spawn robot and all ROS interfaces under this namespace
  rosidl_runtime_c__String robot_namespace;
  /// Initial entity pose.
  ue_msgs__msg__EntityState state;
  rosidl_runtime_c__String__Sequence tags;
  /// optional parameters, in json format
  rosidl_runtime_c__String json_parameters;
} ue_msgs__srv__SpawnEntity_Request;

// Struct for a sequence of ue_msgs__srv__SpawnEntity_Request.
typedef struct ue_msgs__srv__SpawnEntity_Request__Sequence
{
  ue_msgs__srv__SpawnEntity_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue_msgs__srv__SpawnEntity_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status_message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SpawnEntity in the package ue_msgs.
typedef struct ue_msgs__srv__SpawnEntity_Response
{
  /// Return true if spawned successfully.
  bool success;
  /// Comments if available.
  rosidl_runtime_c__String status_message;
} ue_msgs__srv__SpawnEntity_Response;

// Struct for a sequence of ue_msgs__srv__SpawnEntity_Response.
typedef struct ue_msgs__srv__SpawnEntity_Response__Sequence
{
  ue_msgs__srv__SpawnEntity_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue_msgs__srv__SpawnEntity_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UE_MSGS__SRV__DETAIL__SPAWN_ENTITY__STRUCT_H_

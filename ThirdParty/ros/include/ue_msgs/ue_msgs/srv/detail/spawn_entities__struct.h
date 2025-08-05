// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ue_msgs:srv/SpawnEntities.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__SRV__DETAIL__SPAWN_ENTITIES__STRUCT_H_
#define UE_MSGS__SRV__DETAIL__SPAWN_ENTITIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
// Member 'tags'
// Member 'json_parameters'
#include "rosidl_runtime_c/string.h"
// Member 'state'
#include "ue_msgs/msg/detail/entity_state__struct.h"

/// Struct defined in srv/SpawnEntities in the package ue_msgs.
typedef struct ue_msgs__srv__SpawnEntities_Request
{
  /// type for each entity
  rosidl_runtime_c__String__Sequence type;
  /// pose, twist, name, reference_frame
  ue_msgs__msg__EntityState__Sequence state;
  /// tags to use in UE
  rosidl_runtime_c__String__Sequence tags;
  /// optional parameters, in json format
  rosidl_runtime_c__String__Sequence json_parameters;
} ue_msgs__srv__SpawnEntities_Request;

// Struct for a sequence of ue_msgs__srv__SpawnEntities_Request.
typedef struct ue_msgs__srv__SpawnEntities_Request__Sequence
{
  ue_msgs__srv__SpawnEntities_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue_msgs__srv__SpawnEntities_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status_message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SpawnEntities in the package ue_msgs.
typedef struct ue_msgs__srv__SpawnEntities_Response
{
  /// Return true if spawned successfully.
  bool success;
  /// Comments if available.
  rosidl_runtime_c__String status_message;
} ue_msgs__srv__SpawnEntities_Response;

// Struct for a sequence of ue_msgs__srv__SpawnEntities_Response.
typedef struct ue_msgs__srv__SpawnEntities_Response__Sequence
{
  ue_msgs__srv__SpawnEntities_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue_msgs__srv__SpawnEntities_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UE_MSGS__SRV__DETAIL__SPAWN_ENTITIES__STRUCT_H_

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ue_msgs:srv/GetEntityState.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__SRV__DETAIL__GET_ENTITY_STATE__STRUCT_H_
#define UE_MSGS__SRV__DETAIL__GET_ENTITY_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'reference_frame'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetEntityState in the package ue_msgs.
typedef struct ue_msgs__srv__GetEntityState_Request
{
  /// Entity's scoped name.
  /// An entity can be a model, link, collision, light, etc.
  /// Be sure to use gazebo scoped naming notation (e.g.)
  rosidl_runtime_c__String name;
  /// Return pose and twist relative to this entity.
  /// Leaving empty or "world" will use inertial world frame.
  rosidl_runtime_c__String reference_frame;
} ue_msgs__srv__GetEntityState_Request;

// Struct for a sequence of ue_msgs__srv__GetEntityState_Request.
typedef struct ue_msgs__srv__GetEntityState_Request__Sequence
{
  ue_msgs__srv__GetEntityState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue_msgs__srv__GetEntityState_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'state'
#include "ue_msgs/msg/detail/entity_state__struct.h"

/// Struct defined in srv/GetEntityState in the package ue_msgs.
typedef struct ue_msgs__srv__GetEntityState_Response
{
  /// Contains pose and twist.
  ue_msgs__msg__EntityState state;
  /// Return true if get was successful. If false, the state contains garbage.
  bool success;
} ue_msgs__srv__GetEntityState_Response;

// Struct for a sequence of ue_msgs__srv__GetEntityState_Response.
typedef struct ue_msgs__srv__GetEntityState_Response__Sequence
{
  ue_msgs__srv__GetEntityState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue_msgs__srv__GetEntityState_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UE_MSGS__SRV__DETAIL__GET_ENTITY_STATE__STRUCT_H_

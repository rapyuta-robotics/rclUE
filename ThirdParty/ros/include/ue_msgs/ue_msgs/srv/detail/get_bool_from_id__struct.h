// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ue_msgs:srv/GetBoolFromId.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__SRV__DETAIL__GET_BOOL_FROM_ID__STRUCT_H_
#define UE_MSGS__SRV__DETAIL__GET_BOOL_FROM_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetBoolFromId in the package ue_msgs.
typedef struct ue_msgs__srv__GetBoolFromId_Request
{
  int32_t id;
} ue_msgs__srv__GetBoolFromId_Request;

// Struct for a sequence of ue_msgs__srv__GetBoolFromId_Request.
typedef struct ue_msgs__srv__GetBoolFromId_Request__Sequence
{
  ue_msgs__srv__GetBoolFromId_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue_msgs__srv__GetBoolFromId_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'remarks'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetBoolFromId in the package ue_msgs.
typedef struct ue_msgs__srv__GetBoolFromId_Response
{
  bool success;
  rosidl_runtime_c__String remarks;
  bool data;
} ue_msgs__srv__GetBoolFromId_Response;

// Struct for a sequence of ue_msgs__srv__GetBoolFromId_Response.
typedef struct ue_msgs__srv__GetBoolFromId_Response__Sequence
{
  ue_msgs__srv__GetBoolFromId_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue_msgs__srv__GetBoolFromId_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UE_MSGS__SRV__DETAIL__GET_BOOL_FROM_ID__STRUCT_H_

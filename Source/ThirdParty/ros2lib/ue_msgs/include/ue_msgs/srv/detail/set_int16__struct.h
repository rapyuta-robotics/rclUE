// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ue_msgs:srv/SetInt16.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__SRV__DETAIL__SET_INT16__STRUCT_H_
#define UE_MSGS__SRV__DETAIL__SET_INT16__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/SetInt16 in the package ue_msgs.
typedef struct ue_msgs__srv__SetInt16_Request
{
  int16_t data;
} ue_msgs__srv__SetInt16_Request;

// Struct for a sequence of ue_msgs__srv__SetInt16_Request.
typedef struct ue_msgs__srv__SetInt16_Request__Sequence
{
  ue_msgs__srv__SetInt16_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue_msgs__srv__SetInt16_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status_message'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/SetInt16 in the package ue_msgs.
typedef struct ue_msgs__srv__SetInt16_Response
{
  bool success;
  rosidl_runtime_c__String status_message;
} ue_msgs__srv__SetInt16_Response;

// Struct for a sequence of ue_msgs__srv__SetInt16_Response.
typedef struct ue_msgs__srv__SetInt16_Response__Sequence
{
  ue_msgs__srv__SetInt16_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue_msgs__srv__SetInt16_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UE_MSGS__SRV__DETAIL__SET_INT16__STRUCT_H_

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ue4_interfaces:srv/UE4SrvExample.idl
// generated code does not contain a copyright notice

#ifndef UE4_INTERFACES__SRV__DETAIL__UE4_SRV_EXAMPLE__STRUCT_H_
#define UE4_INTERFACES__SRV__DETAIL__UE4_SRV_EXAMPLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/UE4SrvExample in the package ue4_interfaces.
typedef struct ue4_interfaces__srv__UE4SrvExample_Request
{
  int64_t a;
  int64_t b;
} ue4_interfaces__srv__UE4SrvExample_Request;

// Struct for a sequence of ue4_interfaces__srv__UE4SrvExample_Request.
typedef struct ue4_interfaces__srv__UE4SrvExample_Request__Sequence
{
  ue4_interfaces__srv__UE4SrvExample_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue4_interfaces__srv__UE4SrvExample_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/UE4SrvExample in the package ue4_interfaces.
typedef struct ue4_interfaces__srv__UE4SrvExample_Response
{
  int64_t res;
} ue4_interfaces__srv__UE4SrvExample_Response;

// Struct for a sequence of ue4_interfaces__srv__UE4SrvExample_Response.
typedef struct ue4_interfaces__srv__UE4SrvExample_Response__Sequence
{
  ue4_interfaces__srv__UE4SrvExample_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue4_interfaces__srv__UE4SrvExample_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UE4_INTERFACES__SRV__DETAIL__UE4_SRV_EXAMPLE__STRUCT_H_

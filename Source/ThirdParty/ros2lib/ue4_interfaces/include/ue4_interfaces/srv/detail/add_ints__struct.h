// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ue4_interfaces:srv/AddInts.idl
// generated code does not contain a copyright notice

#ifndef UE4_INTERFACES__SRV__DETAIL__ADD_INTS__STRUCT_H_
#define UE4_INTERFACES__SRV__DETAIL__ADD_INTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/AddInts in the package ue4_interfaces.
typedef struct ue4_interfaces__srv__AddInts_Request
{
  int64_t a;
  int64_t b;
} ue4_interfaces__srv__AddInts_Request;

// Struct for a sequence of ue4_interfaces__srv__AddInts_Request.
typedef struct ue4_interfaces__srv__AddInts_Request__Sequence
{
  ue4_interfaces__srv__AddInts_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue4_interfaces__srv__AddInts_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/AddInts in the package ue4_interfaces.
typedef struct ue4_interfaces__srv__AddInts_Response
{
  int64_t sum;
} ue4_interfaces__srv__AddInts_Response;

// Struct for a sequence of ue4_interfaces__srv__AddInts_Response.
typedef struct ue4_interfaces__srv__AddInts_Response__Sequence
{
  ue4_interfaces__srv__AddInts_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue4_interfaces__srv__AddInts_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UE4_INTERFACES__SRV__DETAIL__ADD_INTS__STRUCT_H_

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rcl_interfaces:msg/IntraProcessMessage.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__MSG__INTRA_PROCESS_MESSAGE__STRUCT_H_
#define RCL_INTERFACES__MSG__INTRA_PROCESS_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/IntraProcessMessage in the package rcl_interfaces.
typedef struct rcl_interfaces__msg__IntraProcessMessage
{
  uint64_t publisher_id;
  uint64_t message_sequence;
} rcl_interfaces__msg__IntraProcessMessage;

// Struct for a sequence of rcl_interfaces__msg__IntraProcessMessage.
typedef struct rcl_interfaces__msg__IntraProcessMessage__Sequence
{
  rcl_interfaces__msg__IntraProcessMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__msg__IntraProcessMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RCL_INTERFACES__MSG__INTRA_PROCESS_MESSAGE__STRUCT_H_

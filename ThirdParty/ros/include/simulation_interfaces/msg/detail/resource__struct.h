// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulation_interfaces:msg/Resource.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__RESOURCE__STRUCT_H_
#define SIMULATION_INTERFACES__MSG__DETAIL__RESOURCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'uri'
// Member 'resource_string'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Resource in the package simulation_interfaces.
typedef struct simulation_interfaces__msg__Resource
{
  rosidl_runtime_c__String uri;
  rosidl_runtime_c__String resource_string;
} simulation_interfaces__msg__Resource;

// Struct for a sequence of simulation_interfaces__msg__Resource.
typedef struct simulation_interfaces__msg__Resource__Sequence
{
  simulation_interfaces__msg__Resource * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__msg__Resource__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__RESOURCE__STRUCT_H_

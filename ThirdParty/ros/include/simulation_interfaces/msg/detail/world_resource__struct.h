// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulation_interfaces:msg/WorldResource.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__WORLD_RESOURCE__STRUCT_H_
#define SIMULATION_INTERFACES__MSG__DETAIL__WORLD_RESOURCE__STRUCT_H_

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
// Member 'description'
// Member 'tags'
#include "rosidl_runtime_c/string.h"
// Member 'world_resource'
#include "simulation_interfaces/msg/detail/resource__struct.h"

// Struct defined in msg/WorldResource in the package simulation_interfaces.
typedef struct simulation_interfaces__msg__WorldResource
{
  rosidl_runtime_c__String name;
  simulation_interfaces__msg__Resource world_resource;
  rosidl_runtime_c__String description;
  rosidl_runtime_c__String__Sequence tags;
} simulation_interfaces__msg__WorldResource;

// Struct for a sequence of simulation_interfaces__msg__WorldResource.
typedef struct simulation_interfaces__msg__WorldResource__Sequence
{
  simulation_interfaces__msg__WorldResource * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__msg__WorldResource__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__WORLD_RESOURCE__STRUCT_H_

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulation_interfaces:msg/EntityInfo.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_INFO__STRUCT_H_
#define SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'category'
#include "simulation_interfaces/msg/detail/entity_category__struct.h"
// Member 'description'
// Member 'tags'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/EntityInfo in the package simulation_interfaces.
/**
  * Entity type and additional information
 */
typedef struct simulation_interfaces__msg__EntityInfo
{
  /// Major category for the entity. Extra entity type distinction can be made through tags.
  simulation_interfaces__msg__EntityCategory category;
  /// optional: verbose, human-readable description of the entity.
  rosidl_runtime_c__String description;
  /// optional: tags which are useful for filtering and categorizing entities further.
  rosidl_runtime_c__String__Sequence tags;
} simulation_interfaces__msg__EntityInfo;

// Struct for a sequence of simulation_interfaces__msg__EntityInfo.
typedef struct simulation_interfaces__msg__EntityInfo__Sequence
{
  simulation_interfaces__msg__EntityInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__msg__EntityInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_INFO__STRUCT_H_

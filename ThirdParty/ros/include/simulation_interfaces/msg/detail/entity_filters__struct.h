// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulation_interfaces:msg/EntityFilters.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_FILTERS__STRUCT_H_
#define SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_FILTERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'filter'
#include "rosidl_runtime_c/string.h"
// Member 'categories'
#include "simulation_interfaces/msg/detail/entity_category__struct.h"
// Member 'tags'
#include "simulation_interfaces/msg/detail/tags_filter__struct.h"
// Member 'bounds'
#include "simulation_interfaces/msg/detail/bounds__struct.h"

// Struct defined in msg/EntityFilters in the package simulation_interfaces.
typedef struct simulation_interfaces__msg__EntityFilters
{
  rosidl_runtime_c__String filter;
  simulation_interfaces__msg__EntityCategory__Sequence categories;
  simulation_interfaces__msg__TagsFilter tags;
  simulation_interfaces__msg__Bounds bounds;
} simulation_interfaces__msg__EntityFilters;

// Struct for a sequence of simulation_interfaces__msg__EntityFilters.
typedef struct simulation_interfaces__msg__EntityFilters__Sequence
{
  simulation_interfaces__msg__EntityFilters * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__msg__EntityFilters__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_FILTERS__STRUCT_H_

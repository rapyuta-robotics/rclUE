// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulation_interfaces:msg/TagsFilter.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__TAGS_FILTER__STRUCT_H_
#define SIMULATION_INTERFACES__MSG__DETAIL__TAGS_FILTER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FILTER_MODE_ANY'.
enum
{
  simulation_interfaces__msg__TagsFilter__FILTER_MODE_ANY = 0
};

/// Constant 'FILTER_MODE_ALL'.
enum
{
  simulation_interfaces__msg__TagsFilter__FILTER_MODE_ALL = 1
};

// Include directives for member types
// Member 'tags'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/TagsFilter in the package simulation_interfaces.
typedef struct simulation_interfaces__msg__TagsFilter
{
  rosidl_runtime_c__String__Sequence tags;
  uint8_t filter_mode;
} simulation_interfaces__msg__TagsFilter;

// Struct for a sequence of simulation_interfaces__msg__TagsFilter.
typedef struct simulation_interfaces__msg__TagsFilter__Sequence
{
  simulation_interfaces__msg__TagsFilter * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__msg__TagsFilter__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__TAGS_FILTER__STRUCT_H_

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulation_interfaces:srv/GetEntities.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITIES__STRUCT_H_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'filters'
#include "simulation_interfaces/msg/detail/entity_filters__struct.h"

/// Struct defined in srv/GetEntities in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__GetEntities_Request
{
  /// Optional filters for the query, including name, category, tags,
  /// and overlap filters.
  simulation_interfaces__msg__EntityFilters filters;
} simulation_interfaces__srv__GetEntities_Request;

// Struct for a sequence of simulation_interfaces__srv__GetEntities_Request.
typedef struct simulation_interfaces__srv__GetEntities_Request__Sequence
{
  simulation_interfaces__srv__GetEntities_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__GetEntities_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__struct.h"
// Member 'entities'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetEntities in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__GetEntities_Response
{
  simulation_interfaces__msg__Result result;
  /// Unique names of all entities matching the filters.
  rosidl_runtime_c__String__Sequence entities;
} simulation_interfaces__srv__GetEntities_Response;

// Struct for a sequence of simulation_interfaces__srv__GetEntities_Response.
typedef struct simulation_interfaces__srv__GetEntities_Response__Sequence
{
  simulation_interfaces__srv__GetEntities_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__GetEntities_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITIES__STRUCT_H_

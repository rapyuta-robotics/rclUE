// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulation_interfaces:srv/GetEntityBounds.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITY_BOUNDS__STRUCT_H_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITY_BOUNDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'entity'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetEntityBounds in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__GetEntityBounds_Request
{
  /// Entity identified by its unique name as returned by GetEntities / SpawnEntity.
  rosidl_runtime_c__String entity;
} simulation_interfaces__srv__GetEntityBounds_Request;

// Struct for a sequence of simulation_interfaces__srv__GetEntityBounds_Request.
typedef struct simulation_interfaces__srv__GetEntityBounds_Request__Sequence
{
  simulation_interfaces__srv__GetEntityBounds_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__GetEntityBounds_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__struct.h"
// Member 'bounds'
#include "simulation_interfaces/msg/detail/bounds__struct.h"

/// Struct defined in srv/GetEntityBounds in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__GetEntityBounds_Response
{
  simulation_interfaces__msg__Result result;
  /// Entity bounds. Only valid if result.result_code is OK.
  /// Bounds with TYPE_BOX should be returned, unless there is a configuration
  /// parameter for the simulator to control the type and it is set otherwise.
  simulation_interfaces__msg__Bounds bounds;
} simulation_interfaces__srv__GetEntityBounds_Response;

// Struct for a sequence of simulation_interfaces__srv__GetEntityBounds_Response.
typedef struct simulation_interfaces__srv__GetEntityBounds_Response__Sequence
{
  simulation_interfaces__srv__GetEntityBounds_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__GetEntityBounds_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITY_BOUNDS__STRUCT_H_

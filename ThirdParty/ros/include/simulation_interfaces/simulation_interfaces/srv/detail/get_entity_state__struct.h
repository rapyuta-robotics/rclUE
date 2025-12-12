// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulation_interfaces:srv/GetEntityState.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITY_STATE__STRUCT_H_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITY_STATE__STRUCT_H_

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

/// Struct defined in srv/GetEntityState in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__GetEntityState_Request
{
  /// Entity identified by its unique name as returned by GetEntities / SpawnEntity.
  rosidl_runtime_c__String entity;
} simulation_interfaces__srv__GetEntityState_Request;

// Struct for a sequence of simulation_interfaces__srv__GetEntityState_Request.
typedef struct simulation_interfaces__srv__GetEntityState_Request__Sequence
{
  simulation_interfaces__srv__GetEntityState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__GetEntityState_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__struct.h"
// Member 'state'
#include "simulation_interfaces/msg/detail/entity_state__struct.h"

/// Struct defined in srv/GetEntityState in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__GetEntityState_Response
{
  simulation_interfaces__msg__Result result;
  /// Entity ground truth state. Valid when result.result = OK.
  simulation_interfaces__msg__EntityState state;
} simulation_interfaces__srv__GetEntityState_Response;

// Struct for a sequence of simulation_interfaces__srv__GetEntityState_Response.
typedef struct simulation_interfaces__srv__GetEntityState_Response__Sequence
{
  simulation_interfaces__srv__GetEntityState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__GetEntityState_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITY_STATE__STRUCT_H_

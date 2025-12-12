// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulation_interfaces:srv/GetCurrentWorld.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_CURRENT_WORLD__STRUCT_H_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_CURRENT_WORLD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetCurrentWorld in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__GetCurrentWorld_Request
{
  uint8_t structure_needs_at_least_one_member;
} simulation_interfaces__srv__GetCurrentWorld_Request;

// Struct for a sequence of simulation_interfaces__srv__GetCurrentWorld_Request.
typedef struct simulation_interfaces__srv__GetCurrentWorld_Request__Sequence
{
  simulation_interfaces__srv__GetCurrentWorld_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__GetCurrentWorld_Request__Sequence;


// Constants defined in the message

/// Constant 'NO_WORLD_LOADED'.
/**
  * No world is loaded at the moment.
 */
enum
{
  simulation_interfaces__srv__GetCurrentWorld_Response__NO_WORLD_LOADED = 101
};

// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__struct.h"
// Member 'world'
#include "simulation_interfaces/msg/detail/world_resource__struct.h"

/// Struct defined in srv/GetCurrentWorld in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__GetCurrentWorld_Response
{
  /// Standard result message
  simulation_interfaces__msg__Result result;
  /// Information about the currently loaded world. Only valid if result is RESULT_OK.
  simulation_interfaces__msg__WorldResource world;
} simulation_interfaces__srv__GetCurrentWorld_Response;

// Struct for a sequence of simulation_interfaces__srv__GetCurrentWorld_Response.
typedef struct simulation_interfaces__srv__GetCurrentWorld_Response__Sequence
{
  simulation_interfaces__srv__GetCurrentWorld_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__GetCurrentWorld_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_CURRENT_WORLD__STRUCT_H_

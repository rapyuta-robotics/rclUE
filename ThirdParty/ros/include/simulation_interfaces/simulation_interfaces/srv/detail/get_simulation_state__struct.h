// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulation_interfaces:srv/GetSimulationState.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_SIMULATION_STATE__STRUCT_H_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_SIMULATION_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetSimulationState in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__GetSimulationState_Request
{
  uint8_t structure_needs_at_least_one_member;
} simulation_interfaces__srv__GetSimulationState_Request;

// Struct for a sequence of simulation_interfaces__srv__GetSimulationState_Request.
typedef struct simulation_interfaces__srv__GetSimulationState_Request__Sequence
{
  simulation_interfaces__srv__GetSimulationState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__GetSimulationState_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'state'
#include "simulation_interfaces/msg/detail/simulation_state__struct.h"
// Member 'result'
#include "simulation_interfaces/msg/detail/result__struct.h"

/// Struct defined in srv/GetSimulationState in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__GetSimulationState_Response
{
  /// Current state of the simulation.
  simulation_interfaces__msg__SimulationState state;
  simulation_interfaces__msg__Result result;
} simulation_interfaces__srv__GetSimulationState_Response;

// Struct for a sequence of simulation_interfaces__srv__GetSimulationState_Response.
typedef struct simulation_interfaces__srv__GetSimulationState_Response__Sequence
{
  simulation_interfaces__srv__GetSimulationState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__GetSimulationState_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_SIMULATION_STATE__STRUCT_H_

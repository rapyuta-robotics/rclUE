// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulation_interfaces:srv/SetSimulationState.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__SET_SIMULATION_STATE__STRUCT_H_
#define SIMULATION_INTERFACES__SRV__DETAIL__SET_SIMULATION_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'state'
#include "simulation_interfaces/msg/detail/simulation_state__struct.h"

/// Struct defined in srv/SetSimulationState in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__SetSimulationState_Request
{
  /// Target state to set for the simulation.
  simulation_interfaces__msg__SimulationState state;
} simulation_interfaces__srv__SetSimulationState_Request;

// Struct for a sequence of simulation_interfaces__srv__SetSimulationState_Request.
typedef struct simulation_interfaces__srv__SetSimulationState_Request__Sequence
{
  simulation_interfaces__srv__SetSimulationState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__SetSimulationState_Request__Sequence;


// Constants defined in the message

/// Constant 'ALREADY_IN_TARGET_STATE'.
/**
  * Additional result type for this call, which means simulation was already in
  * the target state (e.g. was already stopped when STATE_STOPPED was requested).
 */
enum
{
  simulation_interfaces__srv__SetSimulationState_Response__ALREADY_IN_TARGET_STATE = 101
};

/// Constant 'STATE_TRANSITION_ERROR'.
/**
  * The simulator failed to transition to the target state. This might happen
  * especially with the transition to STATE_PLAYING from STATE_STOPPED.
  * See result.error_message for details.
 */
enum
{
  simulation_interfaces__srv__SetSimulationState_Response__STATE_TRANSITION_ERROR = 102
};

/// Constant 'INCORRECT_TRANSITION'.
/**
  * Incorrect transition (pausing when in stopped state).
 */
enum
{
  simulation_interfaces__srv__SetSimulationState_Response__INCORRECT_TRANSITION = 103
};

// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__struct.h"

/// Struct defined in srv/SetSimulationState in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__SetSimulationState_Response
{
  simulation_interfaces__msg__Result result;
} simulation_interfaces__srv__SetSimulationState_Response;

// Struct for a sequence of simulation_interfaces__srv__SetSimulationState_Response.
typedef struct simulation_interfaces__srv__SetSimulationState_Response__Sequence
{
  simulation_interfaces__srv__SetSimulationState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__SetSimulationState_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__SET_SIMULATION_STATE__STRUCT_H_

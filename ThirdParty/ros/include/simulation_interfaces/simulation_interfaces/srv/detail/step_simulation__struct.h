// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulation_interfaces:srv/StepSimulation.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__STEP_SIMULATION__STRUCT_H_
#define SIMULATION_INTERFACES__SRV__DETAIL__STEP_SIMULATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/StepSimulation in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__StepSimulation_Request
{
  /// Step through the simulation loop this many times.
  uint64_t steps;
} simulation_interfaces__srv__StepSimulation_Request;

// Struct for a sequence of simulation_interfaces__srv__StepSimulation_Request.
typedef struct simulation_interfaces__srv__StepSimulation_Request__Sequence
{
  simulation_interfaces__srv__StepSimulation_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__StepSimulation_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__struct.h"

/// Struct defined in srv/StepSimulation in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__StepSimulation_Response
{
  /// Calling with simulation not paused will return RESULT_OPERATION_FAILED and error message.
  simulation_interfaces__msg__Result result;
} simulation_interfaces__srv__StepSimulation_Response;

// Struct for a sequence of simulation_interfaces__srv__StepSimulation_Response.
typedef struct simulation_interfaces__srv__StepSimulation_Response__Sequence
{
  simulation_interfaces__srv__StepSimulation_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__StepSimulation_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__STEP_SIMULATION__STRUCT_H_

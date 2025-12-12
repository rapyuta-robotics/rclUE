// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulation_interfaces:srv/ResetSimulation.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__RESET_SIMULATION__STRUCT_H_
#define SIMULATION_INTERFACES__SRV__DETAIL__RESET_SIMULATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SCOPE_DEFAULT'.
enum
{
  simulation_interfaces__srv__ResetSimulation_Request__SCOPE_DEFAULT = 0
};

/// Constant 'SCOPE_TIME'.
enum
{
  simulation_interfaces__srv__ResetSimulation_Request__SCOPE_TIME = 1
};

/// Constant 'SCOPE_STATE'.
enum
{
  simulation_interfaces__srv__ResetSimulation_Request__SCOPE_STATE = 2
};

/// Constant 'SCOPE_SPAWNED'.
enum
{
  simulation_interfaces__srv__ResetSimulation_Request__SCOPE_SPAWNED = 4
};

/// Constant 'SCOPE_ALL'.
enum
{
  simulation_interfaces__srv__ResetSimulation_Request__SCOPE_ALL = 255
};

// Struct defined in srv/ResetSimulation in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__ResetSimulation_Request
{
  uint8_t scope;
} simulation_interfaces__srv__ResetSimulation_Request;

// Struct for a sequence of simulation_interfaces__srv__ResetSimulation_Request.
typedef struct simulation_interfaces__srv__ResetSimulation_Request__Sequence
{
  simulation_interfaces__srv__ResetSimulation_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__ResetSimulation_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__struct.h"

// Struct defined in srv/ResetSimulation in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__ResetSimulation_Response
{
  simulation_interfaces__msg__Result result;
} simulation_interfaces__srv__ResetSimulation_Response;

// Struct for a sequence of simulation_interfaces__srv__ResetSimulation_Response.
typedef struct simulation_interfaces__srv__ResetSimulation_Response__Sequence
{
  simulation_interfaces__srv__ResetSimulation_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__ResetSimulation_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__RESET_SIMULATION__STRUCT_H_

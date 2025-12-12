// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulation_interfaces:srv/GetSimulatorFeatures.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_SIMULATOR_FEATURES__STRUCT_H_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_SIMULATOR_FEATURES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetSimulatorFeatures in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__GetSimulatorFeatures_Request
{
  uint8_t structure_needs_at_least_one_member;
} simulation_interfaces__srv__GetSimulatorFeatures_Request;

// Struct for a sequence of simulation_interfaces__srv__GetSimulatorFeatures_Request.
typedef struct simulation_interfaces__srv__GetSimulatorFeatures_Request__Sequence
{
  simulation_interfaces__srv__GetSimulatorFeatures_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__GetSimulatorFeatures_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'features'
#include "simulation_interfaces/msg/detail/simulator_features__struct.h"

/// Struct defined in srv/GetSimulatorFeatures in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__GetSimulatorFeatures_Response
{
  simulation_interfaces__msg__SimulatorFeatures features;
} simulation_interfaces__srv__GetSimulatorFeatures_Response;

// Struct for a sequence of simulation_interfaces__srv__GetSimulatorFeatures_Response.
typedef struct simulation_interfaces__srv__GetSimulatorFeatures_Response__Sequence
{
  simulation_interfaces__srv__GetSimulatorFeatures_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__GetSimulatorFeatures_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_SIMULATOR_FEATURES__STRUCT_H_

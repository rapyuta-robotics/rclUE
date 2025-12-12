// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulation_interfaces:srv/GetSpawnables.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_SPAWNABLES__STRUCT_H_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_SPAWNABLES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'sources'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetSpawnables in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__GetSpawnables_Request
{
  /// Optional field for additional sources (local or remote) to search.
  /// By default, each simulator has visibility of spawnables through
  /// some mechanisms, e.g. a set of paths, registered assets etc.
  /// Since the simulator cannot possibly look everywhere,
  /// this field allows the user to specify additional sources.
  /// Unrecognized values are listed as such in the result.error_message,
  /// but do not hinder success of the response.
  /// Sources may include subcategories and be simulator-specific.
  rosidl_runtime_c__String__Sequence sources;
} simulation_interfaces__srv__GetSpawnables_Request;

// Struct for a sequence of simulation_interfaces__srv__GetSpawnables_Request.
typedef struct simulation_interfaces__srv__GetSpawnables_Request__Sequence
{
  simulation_interfaces__srv__GetSpawnables_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__GetSpawnables_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__struct.h"
// Member 'spawnables'
#include "simulation_interfaces/msg/detail/spawnable__struct.h"

/// Struct defined in srv/GetSpawnables in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__GetSpawnables_Response
{
  simulation_interfaces__msg__Result result;
  /// Spawnable objects with URI and additional information.
  simulation_interfaces__msg__Spawnable__Sequence spawnables;
} simulation_interfaces__srv__GetSpawnables_Response;

// Struct for a sequence of simulation_interfaces__srv__GetSpawnables_Response.
typedef struct simulation_interfaces__srv__GetSpawnables_Response__Sequence
{
  simulation_interfaces__srv__GetSpawnables_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__GetSpawnables_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_SPAWNABLES__STRUCT_H_

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulation_interfaces:srv/GetAvailableWorlds.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_AVAILABLE_WORLDS__STRUCT_H_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_AVAILABLE_WORLDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'additional_sources'
#include "rosidl_runtime_c/string.h"
// Member 'filter'
#include "simulation_interfaces/msg/detail/tags_filter__struct.h"

// Struct defined in srv/GetAvailableWorlds in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__GetAvailableWorlds_Request
{
  rosidl_runtime_c__String__Sequence additional_sources;
  simulation_interfaces__msg__TagsFilter filter;
  bool offline_only;
  bool continue_on_error;
} simulation_interfaces__srv__GetAvailableWorlds_Request;

// Struct for a sequence of simulation_interfaces__srv__GetAvailableWorlds_Request.
typedef struct simulation_interfaces__srv__GetAvailableWorlds_Request__Sequence
{
  simulation_interfaces__srv__GetAvailableWorlds_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__GetAvailableWorlds_Request__Sequence;


// Constants defined in the message

/// Constant 'DEFAULT_SOURCES_FAILED'.
enum
{
  simulation_interfaces__srv__GetAvailableWorlds_Response__DEFAULT_SOURCES_FAILED = 101
};

// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__struct.h"
// Member 'worlds'
#include "simulation_interfaces/msg/detail/world_resource__struct.h"

// Struct defined in srv/GetAvailableWorlds in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__GetAvailableWorlds_Response
{
  simulation_interfaces__msg__Result result;
  simulation_interfaces__msg__WorldResource__Sequence worlds;
} simulation_interfaces__srv__GetAvailableWorlds_Response;

// Struct for a sequence of simulation_interfaces__srv__GetAvailableWorlds_Response.
typedef struct simulation_interfaces__srv__GetAvailableWorlds_Response__Sequence
{
  simulation_interfaces__srv__GetAvailableWorlds_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__GetAvailableWorlds_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_AVAILABLE_WORLDS__STRUCT_H_

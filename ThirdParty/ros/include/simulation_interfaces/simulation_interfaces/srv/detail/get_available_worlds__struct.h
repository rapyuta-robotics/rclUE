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

/// Struct defined in srv/GetAvailableWorlds in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__GetAvailableWorlds_Request
{
  /// Optional field for additional sources (local or remote) to search,
  /// specified as standard URIs if possible.
  rosidl_runtime_c__String__Sequence additional_sources;
  /// Only get worlds with tags matching the filter. The filter is optional and matches everything by default.
  /// This feature is supported if WORLD_TAGS feature is included in output of GetSimulatorFeatures.
  simulation_interfaces__msg__TagsFilter filter;
  /// If true, only offline/local sources should be searched. Defaults to false.
  bool offline_only;
  /// If true, the simulator will continue to search sources even if some fail.
  /// The service will return success if any source yielded worlds. Defaults to false.
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
/**
  * Some default sources could not be accessed.
 */
enum
{
  simulation_interfaces__srv__GetAvailableWorlds_Response__DEFAULT_SOURCES_FAILED = 101
};

// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__struct.h"
// Member 'worlds'
#include "simulation_interfaces/msg/detail/world_resource__struct.h"

/// Struct defined in srv/GetAvailableWorlds in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__GetAvailableWorlds_Response
{
  /// Standard result message. A specific result code should be used if some sources were not accessible.
  simulation_interfaces__msg__Result result;
  /// Available world resources.
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

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulation_interfaces:srv/LoadWorld.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__LOAD_WORLD__STRUCT_H_
#define SIMULATION_INTERFACES__SRV__DETAIL__LOAD_WORLD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'world_resource'
#include "simulation_interfaces/msg/detail/resource__struct.h"

/// Struct defined in srv/LoadWorld in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__LoadWorld_Request
{
  /// Resource such as SDF, USD, MJCF, or other simulator-native format world file or,
  /// Simulation world passed as a string.
  simulation_interfaces__msg__Resource world_resource;
  /// Fail on unsupported elements (such as SDFormat sub-tags). By default, such elements are ignored.
  bool fail_on_unsupported_element;
  /// Ignore missing or unsupported assets. By default, missing or unsupported assets result in failure.
  bool ignore_missing_or_unsupported_assets;
} simulation_interfaces__srv__LoadWorld_Request;

// Struct for a sequence of simulation_interfaces__srv__LoadWorld_Request.
typedef struct simulation_interfaces__srv__LoadWorld_Request__Sequence
{
  simulation_interfaces__srv__LoadWorld_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__LoadWorld_Request__Sequence;


// Constants defined in the message

/// Constant 'UNSUPPORTED_FORMAT'.
/**
  * Format for uri or resource string is unsupported.
 */
enum
{
  simulation_interfaces__srv__LoadWorld_Response__UNSUPPORTED_FORMAT = 101
};

/// Constant 'NO_RESOURCE'.
/**
  * Both uri and resource string are empty.
 */
enum
{
  simulation_interfaces__srv__LoadWorld_Response__NO_RESOURCE = 102
};

/// Constant 'RESOURCE_PARSE_ERROR'.
/**
  * Resource file or string failed to parse.
 */
enum
{
  simulation_interfaces__srv__LoadWorld_Response__RESOURCE_PARSE_ERROR = 103
};

/// Constant 'MISSING_ASSETS'.
/**
  * At least one of resource assets (such as meshes) was not found.
 */
enum
{
  simulation_interfaces__srv__LoadWorld_Response__MISSING_ASSETS = 104
};

/// Constant 'UNSUPPORTED_ASSETS'.
/**
  * At least one of resource assets (such as meshes) is not supported.
 */
enum
{
  simulation_interfaces__srv__LoadWorld_Response__UNSUPPORTED_ASSETS = 105
};

/// Constant 'UNSUPPORTED_ELEMENTS'.
/**
  * At least one of world definition elements such as format tags is unsupported.
 */
enum
{
  simulation_interfaces__srv__LoadWorld_Response__UNSUPPORTED_ELEMENTS = 106
};

// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__struct.h"
// Member 'world'
#include "simulation_interfaces/msg/detail/world_resource__struct.h"

/// Struct defined in srv/LoadWorld in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__LoadWorld_Response
{
  /// Standard result message
  simulation_interfaces__msg__Result result;
  /// Information about the loaded world. Only valid if result is RESULT_OK.
  simulation_interfaces__msg__WorldResource world;
} simulation_interfaces__srv__LoadWorld_Response;

// Struct for a sequence of simulation_interfaces__srv__LoadWorld_Response.
typedef struct simulation_interfaces__srv__LoadWorld_Response__Sequence
{
  simulation_interfaces__srv__LoadWorld_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__LoadWorld_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__LOAD_WORLD__STRUCT_H_

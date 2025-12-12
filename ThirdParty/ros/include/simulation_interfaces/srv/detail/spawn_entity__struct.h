// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulation_interfaces:srv/SpawnEntity.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__SPAWN_ENTITY__STRUCT_H_
#define SIMULATION_INTERFACES__SRV__DETAIL__SPAWN_ENTITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'entity_namespace'
#include "rosidl_runtime_c/string.h"
// Member 'entity_resource'
#include "simulation_interfaces/msg/detail/resource__struct.h"
// Member 'initial_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

// Struct defined in srv/SpawnEntity in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__SpawnEntity_Request
{
  rosidl_runtime_c__String name;
  bool allow_renaming;
  simulation_interfaces__msg__Resource entity_resource;
  rosidl_runtime_c__String entity_namespace;
  geometry_msgs__msg__PoseStamped initial_pose;
} simulation_interfaces__srv__SpawnEntity_Request;

// Struct for a sequence of simulation_interfaces__srv__SpawnEntity_Request.
typedef struct simulation_interfaces__srv__SpawnEntity_Request__Sequence
{
  simulation_interfaces__srv__SpawnEntity_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__SpawnEntity_Request__Sequence;


// Constants defined in the message

/// Constant 'NAME_NOT_UNIQUE'.
enum
{
  simulation_interfaces__srv__SpawnEntity_Response__NAME_NOT_UNIQUE = 101
};

/// Constant 'NAME_INVALID'.
enum
{
  simulation_interfaces__srv__SpawnEntity_Response__NAME_INVALID = 102
};

/// Constant 'UNSUPPORTED_FORMAT'.
enum
{
  simulation_interfaces__srv__SpawnEntity_Response__UNSUPPORTED_FORMAT = 103
};

/// Constant 'NO_RESOURCE'.
enum
{
  simulation_interfaces__srv__SpawnEntity_Response__NO_RESOURCE = 104
};

/// Constant 'NAMESPACE_INVALID'.
enum
{
  simulation_interfaces__srv__SpawnEntity_Response__NAMESPACE_INVALID = 105
};

/// Constant 'RESOURCE_PARSE_ERROR'.
enum
{
  simulation_interfaces__srv__SpawnEntity_Response__RESOURCE_PARSE_ERROR = 106
};

/// Constant 'MISSING_ASSETS'.
enum
{
  simulation_interfaces__srv__SpawnEntity_Response__MISSING_ASSETS = 107
};

/// Constant 'UNSUPPORTED_ASSETS'.
enum
{
  simulation_interfaces__srv__SpawnEntity_Response__UNSUPPORTED_ASSETS = 108
};

/// Constant 'INVALID_POSE'.
enum
{
  simulation_interfaces__srv__SpawnEntity_Response__INVALID_POSE = 109
};

// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__struct.h"
// Member 'entity_name'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/SpawnEntity in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__SpawnEntity_Response
{
  simulation_interfaces__msg__Result result;
  rosidl_runtime_c__String entity_name;
} simulation_interfaces__srv__SpawnEntity_Response;

// Struct for a sequence of simulation_interfaces__srv__SpawnEntity_Response.
typedef struct simulation_interfaces__srv__SpawnEntity_Response__Sequence
{
  simulation_interfaces__srv__SpawnEntity_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__SpawnEntity_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__SPAWN_ENTITY__STRUCT_H_

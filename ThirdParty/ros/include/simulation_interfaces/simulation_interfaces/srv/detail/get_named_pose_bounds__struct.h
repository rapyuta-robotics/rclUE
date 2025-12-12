// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulation_interfaces:srv/GetNamedPoseBounds.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_NAMED_POSE_BOUNDS__STRUCT_H_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_NAMED_POSE_BOUNDS__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetNamedPoseBounds in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__GetNamedPoseBounds_Request
{
  /// unique name (as returned from GetNamedPoses).
  rosidl_runtime_c__String name;
} simulation_interfaces__srv__GetNamedPoseBounds_Request;

// Struct for a sequence of simulation_interfaces__srv__GetNamedPoseBounds_Request.
typedef struct simulation_interfaces__srv__GetNamedPoseBounds_Request__Sequence
{
  simulation_interfaces__srv__GetNamedPoseBounds_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__GetNamedPoseBounds_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__struct.h"
// Member 'bounds'
#include "simulation_interfaces/msg/detail/bounds__struct.h"

/// Struct defined in srv/GetNamedPoseBounds in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__GetNamedPoseBounds_Response
{
  simulation_interfaces__msg__Result result;
  /// bounds for the named pose.
  simulation_interfaces__msg__Bounds bounds;
} simulation_interfaces__srv__GetNamedPoseBounds_Response;

// Struct for a sequence of simulation_interfaces__srv__GetNamedPoseBounds_Response.
typedef struct simulation_interfaces__srv__GetNamedPoseBounds_Response__Sequence
{
  simulation_interfaces__srv__GetNamedPoseBounds_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__GetNamedPoseBounds_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_NAMED_POSE_BOUNDS__STRUCT_H_

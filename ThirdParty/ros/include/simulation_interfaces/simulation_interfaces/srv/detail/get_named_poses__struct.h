// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulation_interfaces:srv/GetNamedPoses.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_NAMED_POSES__STRUCT_H_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_NAMED_POSES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'tags'
#include "simulation_interfaces/msg/detail/tags_filter__struct.h"

/// Struct defined in srv/GetNamedPoses in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__GetNamedPoses_Request
{
  /// Tags filter to apply. Only named poses with matching tags field
  /// will be returned. Can be empty (see TagsFilter).
  simulation_interfaces__msg__TagsFilter tags;
} simulation_interfaces__srv__GetNamedPoses_Request;

// Struct for a sequence of simulation_interfaces__srv__GetNamedPoses_Request.
typedef struct simulation_interfaces__srv__GetNamedPoses_Request__Sequence
{
  simulation_interfaces__srv__GetNamedPoses_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__GetNamedPoses_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__struct.h"
// Member 'poses'
#include "simulation_interfaces/msg/detail/named_pose__struct.h"

/// Struct defined in srv/GetNamedPoses in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__GetNamedPoses_Response
{
  simulation_interfaces__msg__Result result;
  /// A list of predefined poses, which may be empty.
  simulation_interfaces__msg__NamedPose__Sequence poses;
} simulation_interfaces__srv__GetNamedPoses_Response;

// Struct for a sequence of simulation_interfaces__srv__GetNamedPoses_Response.
typedef struct simulation_interfaces__srv__GetNamedPoses_Response__Sequence
{
  simulation_interfaces__srv__GetNamedPoses_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__GetNamedPoses_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_NAMED_POSES__STRUCT_H_

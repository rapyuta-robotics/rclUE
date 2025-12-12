// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulation_interfaces:srv/GetEntities.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "simulation_interfaces/srv/get_entities.h"


#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITIES__STRUCT_H_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'filters'
#include "simulation_interfaces/msg/detail/entity_filters__struct.h"

/// Struct defined in srv/GetEntities in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__GetEntities_Request
{
  /// Optional filters for the query, including name, category, tags,
  /// and overlap filters.
  simulation_interfaces__msg__EntityFilters filters;
} simulation_interfaces__srv__GetEntities_Request;

// Struct for a sequence of simulation_interfaces__srv__GetEntities_Request.
typedef struct simulation_interfaces__srv__GetEntities_Request__Sequence
{
  simulation_interfaces__srv__GetEntities_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__GetEntities_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__struct.h"
// Member 'entities'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetEntities in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__GetEntities_Response
{
  simulation_interfaces__msg__Result result;
  /// Unique names of all entities matching the filters.
  rosidl_runtime_c__String__Sequence entities;
} simulation_interfaces__srv__GetEntities_Response;

// Struct for a sequence of simulation_interfaces__srv__GetEntities_Response.
typedef struct simulation_interfaces__srv__GetEntities_Response__Sequence
{
  simulation_interfaces__srv__GetEntities_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__GetEntities_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  simulation_interfaces__srv__GetEntities_Event__request__MAX_SIZE = 1
};
// response
enum
{
  simulation_interfaces__srv__GetEntities_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetEntities in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__GetEntities_Event
{
  service_msgs__msg__ServiceEventInfo info;
  simulation_interfaces__srv__GetEntities_Request__Sequence request;
  simulation_interfaces__srv__GetEntities_Response__Sequence response;
} simulation_interfaces__srv__GetEntities_Event;

// Struct for a sequence of simulation_interfaces__srv__GetEntities_Event.
typedef struct simulation_interfaces__srv__GetEntities_Event__Sequence
{
  simulation_interfaces__srv__GetEntities_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__GetEntities_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITIES__STRUCT_H_

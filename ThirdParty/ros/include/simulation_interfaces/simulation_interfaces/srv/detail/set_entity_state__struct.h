// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulation_interfaces:srv/SetEntityState.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__SET_ENTITY_STATE__STRUCT_H_
#define SIMULATION_INTERFACES__SRV__DETAIL__SET_ENTITY_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'entity'
#include "rosidl_runtime_c/string.h"
// Member 'state'
#include "simulation_interfaces/msg/detail/entity_state__struct.h"

/// Struct defined in srv/SetEntityState in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__SetEntityState_Request
{
  /// Entity identified by its unique name as returned by GetEntities / SpawnEntity.
  rosidl_runtime_c__String entity;
  /// New state to set immediately. The timestamp in header is ignored.
  /// If non-zero twist or acceleration is requested for static object, the service call
  /// fails and RESULT_OPERATION_FAILED is returned.
  /// Note that the acceleration field may be ignored by simulators.
  simulation_interfaces__msg__EntityState state;
  /// Flags to choose whether pose, twist or acceleration should be set or ignored.
  bool set_pose;
  /// These can be used to choose which EntityState properties to set.
  bool set_twist;
  bool set_acceleration;
} simulation_interfaces__srv__SetEntityState_Request;

// Struct for a sequence of simulation_interfaces__srv__SetEntityState_Request.
typedef struct simulation_interfaces__srv__SetEntityState_Request__Sequence
{
  simulation_interfaces__srv__SetEntityState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__SetEntityState_Request__Sequence;


// Constants defined in the message

/// Constant 'INVALID_POSE'.
/**
  * Additional result.result_code values for this service. Check result.error_message for further details.
  * initial_pose is invalid, such as when the quaternion is invalid or position
  * exceeds simulator world bounds.
 */
enum
{
  simulation_interfaces__srv__SetEntityState_Response__INVALID_POSE = 101
};

// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__struct.h"

/// Struct defined in srv/SetEntityState in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__SetEntityState_Response
{
  simulation_interfaces__msg__Result result;
} simulation_interfaces__srv__SetEntityState_Response;

// Struct for a sequence of simulation_interfaces__srv__SetEntityState_Response.
typedef struct simulation_interfaces__srv__SetEntityState_Response__Sequence
{
  simulation_interfaces__srv__SetEntityState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__SetEntityState_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__SET_ENTITY_STATE__STRUCT_H_

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

/// Struct defined in srv/SpawnEntity in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__SpawnEntity_Request
{
  /// A name to give to the spawned entity.
  /// If empty, a name field in the uri file or resource_string will be used,
  /// if supported and not empty (e.g. "name" field in SDFormat, URDF).
  /// If the name is still empty or not unique (as determined by the simulator),
  /// the service returns a generated name in the entity_name response field if the
  /// allow_renaming field is set to true. Otherwise, the service call fails and an
  /// error is returned.
  rosidl_runtime_c__String name;
  /// Determines whether the spawning succeeds with a non-unique name.
  /// If it is set to true, the user should always check entity_name response field
  /// and use it for any further interactions.
  bool allow_renaming;
  /// Resource such as SDFormat, URDF, USD or MJCF file, a native prefab, etc.
  /// Valid URIs can be determined by calling GetSpawnables first.
  /// Check simulator format support via the spawn_formats field in GetSimulatorFeatures.
  /// Using resource_string is supported if GetSimulatorFeatures includes
  /// the SPAWNING_RESOURCE_STRING feature.
  simulation_interfaces__msg__Resource entity_resource;
  /// Spawn the entity with all its interfaces under this namespace.
  rosidl_runtime_c__String entity_namespace;
  /// Initial entity pose.
  /// The header contains a reference frame, which defaults to global "world" frame.
  /// This frame must be known to the simulator, e.g. of an object spawned earlier.
  /// The timestamp field in the header is ignored.
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
/**
  * Additional result.result_code values for this service. Check result.error_message for further details.
  * Given name is already taken by entity and allow_renaming is false.
 */
enum
{
  simulation_interfaces__srv__SpawnEntity_Response__NAME_NOT_UNIQUE = 101
};

/// Constant 'NAME_INVALID'.
/**
  * Given name is invalid in the simulator (e.g. does not meet naming
  * requirements such as allowed characters). This is also returned if name is
  * empty and allow_renaming is false.
 */
enum
{
  simulation_interfaces__srv__SpawnEntity_Response__NAME_INVALID = 102
};

/// Constant 'UNSUPPORTED_FORMAT'.
/**
  * Format for uri or resource string is unsupported. Check supported formats
  * through GetSimulatorFeatures service, in spawn_formats field.
 */
enum
{
  simulation_interfaces__srv__SpawnEntity_Response__UNSUPPORTED_FORMAT = 103
};

/// Constant 'NO_RESOURCE'.
/**
  * Both uri and resource string are empty.
 */
enum
{
  simulation_interfaces__srv__SpawnEntity_Response__NO_RESOURCE = 104
};

/// Constant 'NAMESPACE_INVALID'.
/**
  * Namespace does not meet namespace naming standards.
 */
enum
{
  simulation_interfaces__srv__SpawnEntity_Response__NAMESPACE_INVALID = 105
};

/// Constant 'RESOURCE_PARSE_ERROR'.
/**
  * Resource file or string failed to parse.
 */
enum
{
  simulation_interfaces__srv__SpawnEntity_Response__RESOURCE_PARSE_ERROR = 106
};

/// Constant 'MISSING_ASSETS'.
/**
  * At least one of resource assets (such as meshes) was not found.
 */
enum
{
  simulation_interfaces__srv__SpawnEntity_Response__MISSING_ASSETS = 107
};

/// Constant 'UNSUPPORTED_ASSETS'.
/**
  * At least one of resource assets (such as meshes) is not supported.
 */
enum
{
  simulation_interfaces__srv__SpawnEntity_Response__UNSUPPORTED_ASSETS = 108
};

/// Constant 'INVALID_POSE'.
/**
  * initial_pose is invalid, such as when the quaternion is invalid or position
  * exceeds simulator world bounds.
 */
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

/// Struct defined in srv/SpawnEntity in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__SpawnEntity_Response
{
  simulation_interfaces__msg__Result result;
  /// Spawned entity full name, guaranteed to be unique in the simulation.
  /// If allow_renaming is true, it may differ from the request name field.
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

// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ue_msgs:srv/SpawnWorld.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ue_msgs/srv/detail/spawn_world__rosidl_typesupport_introspection_c.h"
#include "ue_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ue_msgs/srv/detail/spawn_world__functions.h"
#include "ue_msgs/srv/detail/spawn_world__struct.h"


// Include directives for member types
// Member `world_model`
// Member `world_instance_name`
// Member `json_parameters`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SpawnWorld_Request__rosidl_typesupport_introspection_c__SpawnWorld_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ue_msgs__srv__SpawnWorld_Request__init(message_memory);
}

void SpawnWorld_Request__rosidl_typesupport_introspection_c__SpawnWorld_Request_fini_function(void * message_memory)
{
  ue_msgs__srv__SpawnWorld_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SpawnWorld_Request__rosidl_typesupport_introspection_c__SpawnWorld_Request_message_member_array[4] = {
  {
    "world_model",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__srv__SpawnWorld_Request, world_model),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "world_instance_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__srv__SpawnWorld_Request, world_instance_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__srv__SpawnWorld_Request, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "json_parameters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__srv__SpawnWorld_Request, json_parameters),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SpawnWorld_Request__rosidl_typesupport_introspection_c__SpawnWorld_Request_message_members = {
  "ue_msgs__srv",  // message namespace
  "SpawnWorld_Request",  // message name
  4,  // number of fields
  sizeof(ue_msgs__srv__SpawnWorld_Request),
  SpawnWorld_Request__rosidl_typesupport_introspection_c__SpawnWorld_Request_message_member_array,  // message members
  SpawnWorld_Request__rosidl_typesupport_introspection_c__SpawnWorld_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SpawnWorld_Request__rosidl_typesupport_introspection_c__SpawnWorld_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SpawnWorld_Request__rosidl_typesupport_introspection_c__SpawnWorld_Request_message_type_support_handle = {
  0,
  &SpawnWorld_Request__rosidl_typesupport_introspection_c__SpawnWorld_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ue_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, srv, SpawnWorld_Request)() {
  SpawnWorld_Request__rosidl_typesupport_introspection_c__SpawnWorld_Request_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!SpawnWorld_Request__rosidl_typesupport_introspection_c__SpawnWorld_Request_message_type_support_handle.typesupport_identifier) {
    SpawnWorld_Request__rosidl_typesupport_introspection_c__SpawnWorld_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SpawnWorld_Request__rosidl_typesupport_introspection_c__SpawnWorld_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ue_msgs/srv/detail/spawn_world__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ue_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ue_msgs/srv/detail/spawn_world__functions.h"
// already included above
// #include "ue_msgs/srv/detail/spawn_world__struct.h"


// Include directives for member types
// Member `status_message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SpawnWorld_Response__rosidl_typesupport_introspection_c__SpawnWorld_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ue_msgs__srv__SpawnWorld_Response__init(message_memory);
}

void SpawnWorld_Response__rosidl_typesupport_introspection_c__SpawnWorld_Response_fini_function(void * message_memory)
{
  ue_msgs__srv__SpawnWorld_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SpawnWorld_Response__rosidl_typesupport_introspection_c__SpawnWorld_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__srv__SpawnWorld_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__srv__SpawnWorld_Response, status_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SpawnWorld_Response__rosidl_typesupport_introspection_c__SpawnWorld_Response_message_members = {
  "ue_msgs__srv",  // message namespace
  "SpawnWorld_Response",  // message name
  2,  // number of fields
  sizeof(ue_msgs__srv__SpawnWorld_Response),
  SpawnWorld_Response__rosidl_typesupport_introspection_c__SpawnWorld_Response_message_member_array,  // message members
  SpawnWorld_Response__rosidl_typesupport_introspection_c__SpawnWorld_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SpawnWorld_Response__rosidl_typesupport_introspection_c__SpawnWorld_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SpawnWorld_Response__rosidl_typesupport_introspection_c__SpawnWorld_Response_message_type_support_handle = {
  0,
  &SpawnWorld_Response__rosidl_typesupport_introspection_c__SpawnWorld_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ue_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, srv, SpawnWorld_Response)() {
  if (!SpawnWorld_Response__rosidl_typesupport_introspection_c__SpawnWorld_Response_message_type_support_handle.typesupport_identifier) {
    SpawnWorld_Response__rosidl_typesupport_introspection_c__SpawnWorld_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SpawnWorld_Response__rosidl_typesupport_introspection_c__SpawnWorld_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ue_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ue_msgs/srv/detail/spawn_world__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ue_msgs__srv__detail__spawn_world__rosidl_typesupport_introspection_c__SpawnWorld_service_members = {
  "ue_msgs__srv",  // service namespace
  "SpawnWorld",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ue_msgs__srv__detail__spawn_world__rosidl_typesupport_introspection_c__SpawnWorld_Request_message_type_support_handle,
  NULL  // response message
  // ue_msgs__srv__detail__spawn_world__rosidl_typesupport_introspection_c__SpawnWorld_Response_message_type_support_handle
};

static rosidl_service_type_support_t ue_msgs__srv__detail__spawn_world__rosidl_typesupport_introspection_c__SpawnWorld_service_type_support_handle = {
  0,
  &ue_msgs__srv__detail__spawn_world__rosidl_typesupport_introspection_c__SpawnWorld_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, srv, SpawnWorld_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, srv, SpawnWorld_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ue_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, srv, SpawnWorld)() {
  if (!ue_msgs__srv__detail__spawn_world__rosidl_typesupport_introspection_c__SpawnWorld_service_type_support_handle.typesupport_identifier) {
    ue_msgs__srv__detail__spawn_world__rosidl_typesupport_introspection_c__SpawnWorld_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ue_msgs__srv__detail__spawn_world__rosidl_typesupport_introspection_c__SpawnWorld_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, srv, SpawnWorld_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, srv, SpawnWorld_Response)()->data;
  }

  return &ue_msgs__srv__detail__spawn_world__rosidl_typesupport_introspection_c__SpawnWorld_service_type_support_handle;
}

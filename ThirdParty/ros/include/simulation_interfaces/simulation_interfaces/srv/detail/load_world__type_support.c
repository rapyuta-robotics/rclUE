// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from simulation_interfaces:srv/LoadWorld.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "simulation_interfaces/srv/detail/load_world__rosidl_typesupport_introspection_c.h"
#include "simulation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "simulation_interfaces/srv/detail/load_world__functions.h"
#include "simulation_interfaces/srv/detail/load_world__struct.h"


// Include directives for member types
// Member `world_resource`
#include "simulation_interfaces/msg/resource.h"
// Member `world_resource`
#include "simulation_interfaces/msg/detail/resource__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void simulation_interfaces__srv__LoadWorld_Request__rosidl_typesupport_introspection_c__LoadWorld_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  simulation_interfaces__srv__LoadWorld_Request__init(message_memory);
}

void simulation_interfaces__srv__LoadWorld_Request__rosidl_typesupport_introspection_c__LoadWorld_Request_fini_function(void * message_memory)
{
  simulation_interfaces__srv__LoadWorld_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember simulation_interfaces__srv__LoadWorld_Request__rosidl_typesupport_introspection_c__LoadWorld_Request_message_member_array[3] = {
  {
    "world_resource",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__srv__LoadWorld_Request, world_resource),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fail_on_unsupported_element",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__srv__LoadWorld_Request, fail_on_unsupported_element),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ignore_missing_or_unsupported_assets",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__srv__LoadWorld_Request, ignore_missing_or_unsupported_assets),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers simulation_interfaces__srv__LoadWorld_Request__rosidl_typesupport_introspection_c__LoadWorld_Request_message_members = {
  "simulation_interfaces__srv",  // message namespace
  "LoadWorld_Request",  // message name
  3,  // number of fields
  sizeof(simulation_interfaces__srv__LoadWorld_Request),
  simulation_interfaces__srv__LoadWorld_Request__rosidl_typesupport_introspection_c__LoadWorld_Request_message_member_array,  // message members
  simulation_interfaces__srv__LoadWorld_Request__rosidl_typesupport_introspection_c__LoadWorld_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  simulation_interfaces__srv__LoadWorld_Request__rosidl_typesupport_introspection_c__LoadWorld_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t simulation_interfaces__srv__LoadWorld_Request__rosidl_typesupport_introspection_c__LoadWorld_Request_message_type_support_handle = {
  0,
  &simulation_interfaces__srv__LoadWorld_Request__rosidl_typesupport_introspection_c__LoadWorld_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simulation_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, LoadWorld_Request)() {
  simulation_interfaces__srv__LoadWorld_Request__rosidl_typesupport_introspection_c__LoadWorld_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, msg, Resource)();
  if (!simulation_interfaces__srv__LoadWorld_Request__rosidl_typesupport_introspection_c__LoadWorld_Request_message_type_support_handle.typesupport_identifier) {
    simulation_interfaces__srv__LoadWorld_Request__rosidl_typesupport_introspection_c__LoadWorld_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &simulation_interfaces__srv__LoadWorld_Request__rosidl_typesupport_introspection_c__LoadWorld_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "simulation_interfaces/srv/detail/load_world__rosidl_typesupport_introspection_c.h"
// already included above
// #include "simulation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "simulation_interfaces/srv/detail/load_world__functions.h"
// already included above
// #include "simulation_interfaces/srv/detail/load_world__struct.h"


// Include directives for member types
// Member `result`
#include "simulation_interfaces/msg/result.h"
// Member `result`
#include "simulation_interfaces/msg/detail/result__rosidl_typesupport_introspection_c.h"
// Member `world`
#include "simulation_interfaces/msg/world_resource.h"
// Member `world`
#include "simulation_interfaces/msg/detail/world_resource__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void simulation_interfaces__srv__LoadWorld_Response__rosidl_typesupport_introspection_c__LoadWorld_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  simulation_interfaces__srv__LoadWorld_Response__init(message_memory);
}

void simulation_interfaces__srv__LoadWorld_Response__rosidl_typesupport_introspection_c__LoadWorld_Response_fini_function(void * message_memory)
{
  simulation_interfaces__srv__LoadWorld_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember simulation_interfaces__srv__LoadWorld_Response__rosidl_typesupport_introspection_c__LoadWorld_Response_message_member_array[2] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__srv__LoadWorld_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "world",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__srv__LoadWorld_Response, world),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers simulation_interfaces__srv__LoadWorld_Response__rosidl_typesupport_introspection_c__LoadWorld_Response_message_members = {
  "simulation_interfaces__srv",  // message namespace
  "LoadWorld_Response",  // message name
  2,  // number of fields
  sizeof(simulation_interfaces__srv__LoadWorld_Response),
  simulation_interfaces__srv__LoadWorld_Response__rosidl_typesupport_introspection_c__LoadWorld_Response_message_member_array,  // message members
  simulation_interfaces__srv__LoadWorld_Response__rosidl_typesupport_introspection_c__LoadWorld_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  simulation_interfaces__srv__LoadWorld_Response__rosidl_typesupport_introspection_c__LoadWorld_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t simulation_interfaces__srv__LoadWorld_Response__rosidl_typesupport_introspection_c__LoadWorld_Response_message_type_support_handle = {
  0,
  &simulation_interfaces__srv__LoadWorld_Response__rosidl_typesupport_introspection_c__LoadWorld_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simulation_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, LoadWorld_Response)() {
  simulation_interfaces__srv__LoadWorld_Response__rosidl_typesupport_introspection_c__LoadWorld_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, msg, Result)();
  simulation_interfaces__srv__LoadWorld_Response__rosidl_typesupport_introspection_c__LoadWorld_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, msg, WorldResource)();
  if (!simulation_interfaces__srv__LoadWorld_Response__rosidl_typesupport_introspection_c__LoadWorld_Response_message_type_support_handle.typesupport_identifier) {
    simulation_interfaces__srv__LoadWorld_Response__rosidl_typesupport_introspection_c__LoadWorld_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &simulation_interfaces__srv__LoadWorld_Response__rosidl_typesupport_introspection_c__LoadWorld_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "simulation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "simulation_interfaces/srv/detail/load_world__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers simulation_interfaces__srv__detail__load_world__rosidl_typesupport_introspection_c__LoadWorld_service_members = {
  "simulation_interfaces__srv",  // service namespace
  "LoadWorld",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // simulation_interfaces__srv__detail__load_world__rosidl_typesupport_introspection_c__LoadWorld_Request_message_type_support_handle,
  NULL  // response message
  // simulation_interfaces__srv__detail__load_world__rosidl_typesupport_introspection_c__LoadWorld_Response_message_type_support_handle
};

static rosidl_service_type_support_t simulation_interfaces__srv__detail__load_world__rosidl_typesupport_introspection_c__LoadWorld_service_type_support_handle = {
  0,
  &simulation_interfaces__srv__detail__load_world__rosidl_typesupport_introspection_c__LoadWorld_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, LoadWorld_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, LoadWorld_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simulation_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, LoadWorld)() {
  if (!simulation_interfaces__srv__detail__load_world__rosidl_typesupport_introspection_c__LoadWorld_service_type_support_handle.typesupport_identifier) {
    simulation_interfaces__srv__detail__load_world__rosidl_typesupport_introspection_c__LoadWorld_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)simulation_interfaces__srv__detail__load_world__rosidl_typesupport_introspection_c__LoadWorld_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, LoadWorld_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, LoadWorld_Response)()->data;
  }

  return &simulation_interfaces__srv__detail__load_world__rosidl_typesupport_introspection_c__LoadWorld_service_type_support_handle;
}

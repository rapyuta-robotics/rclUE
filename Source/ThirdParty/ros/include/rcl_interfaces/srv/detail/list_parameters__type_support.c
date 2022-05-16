// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rcl_interfaces:srv/ListParameters.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rcl_interfaces/srv/detail/list_parameters__rosidl_typesupport_introspection_c.h"
#include "rcl_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rcl_interfaces/srv/detail/list_parameters__functions.h"
#include "rcl_interfaces/srv/detail/list_parameters__struct.h"


// Include directives for member types
// Member `prefixes`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ListParameters_Request__rosidl_typesupport_introspection_c__ListParameters_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rcl_interfaces__srv__ListParameters_Request__init(message_memory);
}

void ListParameters_Request__rosidl_typesupport_introspection_c__ListParameters_Request_fini_function(void * message_memory)
{
  rcl_interfaces__srv__ListParameters_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ListParameters_Request__rosidl_typesupport_introspection_c__ListParameters_Request_message_member_array[2] = {
  {
    "prefixes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rcl_interfaces__srv__ListParameters_Request, prefixes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "depth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rcl_interfaces__srv__ListParameters_Request, depth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ListParameters_Request__rosidl_typesupport_introspection_c__ListParameters_Request_message_members = {
  "rcl_interfaces__srv",  // message namespace
  "ListParameters_Request",  // message name
  2,  // number of fields
  sizeof(rcl_interfaces__srv__ListParameters_Request),
  ListParameters_Request__rosidl_typesupport_introspection_c__ListParameters_Request_message_member_array,  // message members
  ListParameters_Request__rosidl_typesupport_introspection_c__ListParameters_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ListParameters_Request__rosidl_typesupport_introspection_c__ListParameters_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ListParameters_Request__rosidl_typesupport_introspection_c__ListParameters_Request_message_type_support_handle = {
  0,
  &ListParameters_Request__rosidl_typesupport_introspection_c__ListParameters_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rcl_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, ListParameters_Request)() {
  if (!ListParameters_Request__rosidl_typesupport_introspection_c__ListParameters_Request_message_type_support_handle.typesupport_identifier) {
    ListParameters_Request__rosidl_typesupport_introspection_c__ListParameters_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ListParameters_Request__rosidl_typesupport_introspection_c__ListParameters_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rcl_interfaces/srv/detail/list_parameters__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rcl_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rcl_interfaces/srv/detail/list_parameters__functions.h"
// already included above
// #include "rcl_interfaces/srv/detail/list_parameters__struct.h"


// Include directives for member types
// Member `result`
#include "rcl_interfaces/msg/list_parameters_result.h"
// Member `result`
#include "rcl_interfaces/msg/detail/list_parameters_result__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ListParameters_Response__rosidl_typesupport_introspection_c__ListParameters_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rcl_interfaces__srv__ListParameters_Response__init(message_memory);
}

void ListParameters_Response__rosidl_typesupport_introspection_c__ListParameters_Response_fini_function(void * message_memory)
{
  rcl_interfaces__srv__ListParameters_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ListParameters_Response__rosidl_typesupport_introspection_c__ListParameters_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rcl_interfaces__srv__ListParameters_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ListParameters_Response__rosidl_typesupport_introspection_c__ListParameters_Response_message_members = {
  "rcl_interfaces__srv",  // message namespace
  "ListParameters_Response",  // message name
  1,  // number of fields
  sizeof(rcl_interfaces__srv__ListParameters_Response),
  ListParameters_Response__rosidl_typesupport_introspection_c__ListParameters_Response_message_member_array,  // message members
  ListParameters_Response__rosidl_typesupport_introspection_c__ListParameters_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ListParameters_Response__rosidl_typesupport_introspection_c__ListParameters_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ListParameters_Response__rosidl_typesupport_introspection_c__ListParameters_Response_message_type_support_handle = {
  0,
  &ListParameters_Response__rosidl_typesupport_introspection_c__ListParameters_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rcl_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, ListParameters_Response)() {
  ListParameters_Response__rosidl_typesupport_introspection_c__ListParameters_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, msg, ListParametersResult)();
  if (!ListParameters_Response__rosidl_typesupport_introspection_c__ListParameters_Response_message_type_support_handle.typesupport_identifier) {
    ListParameters_Response__rosidl_typesupport_introspection_c__ListParameters_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ListParameters_Response__rosidl_typesupport_introspection_c__ListParameters_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rcl_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rcl_interfaces/srv/detail/list_parameters__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rcl_interfaces__srv__detail__list_parameters__rosidl_typesupport_introspection_c__ListParameters_service_members = {
  "rcl_interfaces__srv",  // service namespace
  "ListParameters",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rcl_interfaces__srv__detail__list_parameters__rosidl_typesupport_introspection_c__ListParameters_Request_message_type_support_handle,
  NULL  // response message
  // rcl_interfaces__srv__detail__list_parameters__rosidl_typesupport_introspection_c__ListParameters_Response_message_type_support_handle
};

static rosidl_service_type_support_t rcl_interfaces__srv__detail__list_parameters__rosidl_typesupport_introspection_c__ListParameters_service_type_support_handle = {
  0,
  &rcl_interfaces__srv__detail__list_parameters__rosidl_typesupport_introspection_c__ListParameters_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, ListParameters_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, ListParameters_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rcl_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, ListParameters)() {
  if (!rcl_interfaces__srv__detail__list_parameters__rosidl_typesupport_introspection_c__ListParameters_service_type_support_handle.typesupport_identifier) {
    rcl_interfaces__srv__detail__list_parameters__rosidl_typesupport_introspection_c__ListParameters_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rcl_interfaces__srv__detail__list_parameters__rosidl_typesupport_introspection_c__ListParameters_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, ListParameters_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, ListParameters_Response)()->data;
  }

  return &rcl_interfaces__srv__detail__list_parameters__rosidl_typesupport_introspection_c__ListParameters_service_type_support_handle;
}

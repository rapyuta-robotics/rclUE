// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from diagnostic_msgs:srv/AddDiagnostics.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "diagnostic_msgs/srv/detail/add_diagnostics__rosidl_typesupport_introspection_c.h"
#include "diagnostic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "diagnostic_msgs/srv/detail/add_diagnostics__functions.h"
#include "diagnostic_msgs/srv/detail/add_diagnostics__struct.h"


// Include directives for member types
// Member `load_namespace`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AddDiagnostics_Request__rosidl_typesupport_introspection_c__AddDiagnostics_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  diagnostic_msgs__srv__AddDiagnostics_Request__init(message_memory);
}

void AddDiagnostics_Request__rosidl_typesupport_introspection_c__AddDiagnostics_Request_fini_function(void * message_memory)
{
  diagnostic_msgs__srv__AddDiagnostics_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AddDiagnostics_Request__rosidl_typesupport_introspection_c__AddDiagnostics_Request_message_member_array[1] = {
  {
    "load_namespace",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(diagnostic_msgs__srv__AddDiagnostics_Request, load_namespace),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AddDiagnostics_Request__rosidl_typesupport_introspection_c__AddDiagnostics_Request_message_members = {
  "diagnostic_msgs__srv",  // message namespace
  "AddDiagnostics_Request",  // message name
  1,  // number of fields
  sizeof(diagnostic_msgs__srv__AddDiagnostics_Request),
  AddDiagnostics_Request__rosidl_typesupport_introspection_c__AddDiagnostics_Request_message_member_array,  // message members
  AddDiagnostics_Request__rosidl_typesupport_introspection_c__AddDiagnostics_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  AddDiagnostics_Request__rosidl_typesupport_introspection_c__AddDiagnostics_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AddDiagnostics_Request__rosidl_typesupport_introspection_c__AddDiagnostics_Request_message_type_support_handle = {
  0,
  &AddDiagnostics_Request__rosidl_typesupport_introspection_c__AddDiagnostics_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_diagnostic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, srv, AddDiagnostics_Request)() {
  if (!AddDiagnostics_Request__rosidl_typesupport_introspection_c__AddDiagnostics_Request_message_type_support_handle.typesupport_identifier) {
    AddDiagnostics_Request__rosidl_typesupport_introspection_c__AddDiagnostics_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AddDiagnostics_Request__rosidl_typesupport_introspection_c__AddDiagnostics_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "diagnostic_msgs/srv/detail/add_diagnostics__rosidl_typesupport_introspection_c.h"
// already included above
// #include "diagnostic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "diagnostic_msgs/srv/detail/add_diagnostics__functions.h"
// already included above
// #include "diagnostic_msgs/srv/detail/add_diagnostics__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AddDiagnostics_Response__rosidl_typesupport_introspection_c__AddDiagnostics_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  diagnostic_msgs__srv__AddDiagnostics_Response__init(message_memory);
}

void AddDiagnostics_Response__rosidl_typesupport_introspection_c__AddDiagnostics_Response_fini_function(void * message_memory)
{
  diagnostic_msgs__srv__AddDiagnostics_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AddDiagnostics_Response__rosidl_typesupport_introspection_c__AddDiagnostics_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(diagnostic_msgs__srv__AddDiagnostics_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(diagnostic_msgs__srv__AddDiagnostics_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AddDiagnostics_Response__rosidl_typesupport_introspection_c__AddDiagnostics_Response_message_members = {
  "diagnostic_msgs__srv",  // message namespace
  "AddDiagnostics_Response",  // message name
  2,  // number of fields
  sizeof(diagnostic_msgs__srv__AddDiagnostics_Response),
  AddDiagnostics_Response__rosidl_typesupport_introspection_c__AddDiagnostics_Response_message_member_array,  // message members
  AddDiagnostics_Response__rosidl_typesupport_introspection_c__AddDiagnostics_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  AddDiagnostics_Response__rosidl_typesupport_introspection_c__AddDiagnostics_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AddDiagnostics_Response__rosidl_typesupport_introspection_c__AddDiagnostics_Response_message_type_support_handle = {
  0,
  &AddDiagnostics_Response__rosidl_typesupport_introspection_c__AddDiagnostics_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_diagnostic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, srv, AddDiagnostics_Response)() {
  if (!AddDiagnostics_Response__rosidl_typesupport_introspection_c__AddDiagnostics_Response_message_type_support_handle.typesupport_identifier) {
    AddDiagnostics_Response__rosidl_typesupport_introspection_c__AddDiagnostics_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AddDiagnostics_Response__rosidl_typesupport_introspection_c__AddDiagnostics_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "diagnostic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "diagnostic_msgs/srv/detail/add_diagnostics__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers diagnostic_msgs__srv__detail__add_diagnostics__rosidl_typesupport_introspection_c__AddDiagnostics_service_members = {
  "diagnostic_msgs__srv",  // service namespace
  "AddDiagnostics",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // diagnostic_msgs__srv__detail__add_diagnostics__rosidl_typesupport_introspection_c__AddDiagnostics_Request_message_type_support_handle,
  NULL  // response message
  // diagnostic_msgs__srv__detail__add_diagnostics__rosidl_typesupport_introspection_c__AddDiagnostics_Response_message_type_support_handle
};

static rosidl_service_type_support_t diagnostic_msgs__srv__detail__add_diagnostics__rosidl_typesupport_introspection_c__AddDiagnostics_service_type_support_handle = {
  0,
  &diagnostic_msgs__srv__detail__add_diagnostics__rosidl_typesupport_introspection_c__AddDiagnostics_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, srv, AddDiagnostics_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, srv, AddDiagnostics_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_diagnostic_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, srv, AddDiagnostics)() {
  if (!diagnostic_msgs__srv__detail__add_diagnostics__rosidl_typesupport_introspection_c__AddDiagnostics_service_type_support_handle.typesupport_identifier) {
    diagnostic_msgs__srv__detail__add_diagnostics__rosidl_typesupport_introspection_c__AddDiagnostics_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)diagnostic_msgs__srv__detail__add_diagnostics__rosidl_typesupport_introspection_c__AddDiagnostics_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, srv, AddDiagnostics_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, srv, AddDiagnostics_Response)()->data;
  }

  return &diagnostic_msgs__srv__detail__add_diagnostics__rosidl_typesupport_introspection_c__AddDiagnostics_service_type_support_handle;
}

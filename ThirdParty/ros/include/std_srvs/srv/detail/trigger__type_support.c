// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from std_srvs:srv/Trigger.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "std_srvs/srv/detail/trigger__rosidl_typesupport_introspection_c.h"
#include "std_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "std_srvs/srv/detail/trigger__functions.h"
#include "std_srvs/srv/detail/trigger__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Trigger_Request__rosidl_typesupport_introspection_c__Trigger_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  std_srvs__srv__Trigger_Request__init(message_memory);
}

void Trigger_Request__rosidl_typesupport_introspection_c__Trigger_Request_fini_function(void * message_memory)
{
  std_srvs__srv__Trigger_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Trigger_Request__rosidl_typesupport_introspection_c__Trigger_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(std_srvs__srv__Trigger_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Trigger_Request__rosidl_typesupport_introspection_c__Trigger_Request_message_members = {
  "std_srvs__srv",  // message namespace
  "Trigger_Request",  // message name
  1,  // number of fields
  sizeof(std_srvs__srv__Trigger_Request),
  Trigger_Request__rosidl_typesupport_introspection_c__Trigger_Request_message_member_array,  // message members
  Trigger_Request__rosidl_typesupport_introspection_c__Trigger_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Trigger_Request__rosidl_typesupport_introspection_c__Trigger_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Trigger_Request__rosidl_typesupport_introspection_c__Trigger_Request_message_type_support_handle = {
  0,
  &Trigger_Request__rosidl_typesupport_introspection_c__Trigger_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_std_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_srvs, srv, Trigger_Request)() {
  if (!Trigger_Request__rosidl_typesupport_introspection_c__Trigger_Request_message_type_support_handle.typesupport_identifier) {
    Trigger_Request__rosidl_typesupport_introspection_c__Trigger_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Trigger_Request__rosidl_typesupport_introspection_c__Trigger_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "std_srvs/srv/detail/trigger__rosidl_typesupport_introspection_c.h"
// already included above
// #include "std_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "std_srvs/srv/detail/trigger__functions.h"
// already included above
// #include "std_srvs/srv/detail/trigger__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Trigger_Response__rosidl_typesupport_introspection_c__Trigger_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  std_srvs__srv__Trigger_Response__init(message_memory);
}

void Trigger_Response__rosidl_typesupport_introspection_c__Trigger_Response_fini_function(void * message_memory)
{
  std_srvs__srv__Trigger_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Trigger_Response__rosidl_typesupport_introspection_c__Trigger_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(std_srvs__srv__Trigger_Response, success),  // bytes offset in struct
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
    offsetof(std_srvs__srv__Trigger_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Trigger_Response__rosidl_typesupport_introspection_c__Trigger_Response_message_members = {
  "std_srvs__srv",  // message namespace
  "Trigger_Response",  // message name
  2,  // number of fields
  sizeof(std_srvs__srv__Trigger_Response),
  Trigger_Response__rosidl_typesupport_introspection_c__Trigger_Response_message_member_array,  // message members
  Trigger_Response__rosidl_typesupport_introspection_c__Trigger_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Trigger_Response__rosidl_typesupport_introspection_c__Trigger_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Trigger_Response__rosidl_typesupport_introspection_c__Trigger_Response_message_type_support_handle = {
  0,
  &Trigger_Response__rosidl_typesupport_introspection_c__Trigger_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_std_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_srvs, srv, Trigger_Response)() {
  if (!Trigger_Response__rosidl_typesupport_introspection_c__Trigger_Response_message_type_support_handle.typesupport_identifier) {
    Trigger_Response__rosidl_typesupport_introspection_c__Trigger_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Trigger_Response__rosidl_typesupport_introspection_c__Trigger_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "std_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "std_srvs/srv/detail/trigger__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers std_srvs__srv__detail__trigger__rosidl_typesupport_introspection_c__Trigger_service_members = {
  "std_srvs__srv",  // service namespace
  "Trigger",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // std_srvs__srv__detail__trigger__rosidl_typesupport_introspection_c__Trigger_Request_message_type_support_handle,
  NULL  // response message
  // std_srvs__srv__detail__trigger__rosidl_typesupport_introspection_c__Trigger_Response_message_type_support_handle
};

static rosidl_service_type_support_t std_srvs__srv__detail__trigger__rosidl_typesupport_introspection_c__Trigger_service_type_support_handle = {
  0,
  &std_srvs__srv__detail__trigger__rosidl_typesupport_introspection_c__Trigger_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_srvs, srv, Trigger_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_srvs, srv, Trigger_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_std_srvs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_srvs, srv, Trigger)() {
  if (!std_srvs__srv__detail__trigger__rosidl_typesupport_introspection_c__Trigger_service_type_support_handle.typesupport_identifier) {
    std_srvs__srv__detail__trigger__rosidl_typesupport_introspection_c__Trigger_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)std_srvs__srv__detail__trigger__rosidl_typesupport_introspection_c__Trigger_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_srvs, srv, Trigger_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_srvs, srv, Trigger_Response)()->data;
  }

  return &std_srvs__srv__detail__trigger__rosidl_typesupport_introspection_c__Trigger_service_type_support_handle;
}

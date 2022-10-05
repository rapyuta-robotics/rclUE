// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from diagnostic_msgs:srv/SelfTest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "diagnostic_msgs/srv/detail/self_test__rosidl_typesupport_introspection_c.h"
#include "diagnostic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "diagnostic_msgs/srv/detail/self_test__functions.h"
#include "diagnostic_msgs/srv/detail/self_test__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SelfTest_Request__rosidl_typesupport_introspection_c__SelfTest_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  diagnostic_msgs__srv__SelfTest_Request__init(message_memory);
}

void SelfTest_Request__rosidl_typesupport_introspection_c__SelfTest_Request_fini_function(void * message_memory)
{
  diagnostic_msgs__srv__SelfTest_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SelfTest_Request__rosidl_typesupport_introspection_c__SelfTest_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(diagnostic_msgs__srv__SelfTest_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SelfTest_Request__rosidl_typesupport_introspection_c__SelfTest_Request_message_members = {
  "diagnostic_msgs__srv",  // message namespace
  "SelfTest_Request",  // message name
  1,  // number of fields
  sizeof(diagnostic_msgs__srv__SelfTest_Request),
  SelfTest_Request__rosidl_typesupport_introspection_c__SelfTest_Request_message_member_array,  // message members
  SelfTest_Request__rosidl_typesupport_introspection_c__SelfTest_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SelfTest_Request__rosidl_typesupport_introspection_c__SelfTest_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SelfTest_Request__rosidl_typesupport_introspection_c__SelfTest_Request_message_type_support_handle = {
  0,
  &SelfTest_Request__rosidl_typesupport_introspection_c__SelfTest_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_diagnostic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, srv, SelfTest_Request)() {
  if (!SelfTest_Request__rosidl_typesupport_introspection_c__SelfTest_Request_message_type_support_handle.typesupport_identifier) {
    SelfTest_Request__rosidl_typesupport_introspection_c__SelfTest_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SelfTest_Request__rosidl_typesupport_introspection_c__SelfTest_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "diagnostic_msgs/srv/detail/self_test__rosidl_typesupport_introspection_c.h"
// already included above
// #include "diagnostic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "diagnostic_msgs/srv/detail/self_test__functions.h"
// already included above
// #include "diagnostic_msgs/srv/detail/self_test__struct.h"


// Include directives for member types
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `status`
#include "diagnostic_msgs/msg/diagnostic_status.h"
// Member `status`
#include "diagnostic_msgs/msg/detail/diagnostic_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SelfTest_Response__rosidl_typesupport_introspection_c__SelfTest_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  diagnostic_msgs__srv__SelfTest_Response__init(message_memory);
}

void SelfTest_Response__rosidl_typesupport_introspection_c__SelfTest_Response_fini_function(void * message_memory)
{
  diagnostic_msgs__srv__SelfTest_Response__fini(message_memory);
}

size_t SelfTest_Response__rosidl_typesupport_introspection_c__size_function__DiagnosticStatus__status(
  const void * untyped_member)
{
  const diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (const diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * SelfTest_Response__rosidl_typesupport_introspection_c__get_const_function__DiagnosticStatus__status(
  const void * untyped_member, size_t index)
{
  const diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (const diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * SelfTest_Response__rosidl_typesupport_introspection_c__get_function__DiagnosticStatus__status(
  void * untyped_member, size_t index)
{
  diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

bool SelfTest_Response__rosidl_typesupport_introspection_c__resize_function__DiagnosticStatus__status(
  void * untyped_member, size_t size)
{
  diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  diagnostic_msgs__msg__DiagnosticStatus__Sequence__fini(member);
  return diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember SelfTest_Response__rosidl_typesupport_introspection_c__SelfTest_Response_message_member_array[3] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(diagnostic_msgs__srv__SelfTest_Response, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "passed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(diagnostic_msgs__srv__SelfTest_Response, passed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(diagnostic_msgs__srv__SelfTest_Response, status),  // bytes offset in struct
    NULL,  // default value
    SelfTest_Response__rosidl_typesupport_introspection_c__size_function__DiagnosticStatus__status,  // size() function pointer
    SelfTest_Response__rosidl_typesupport_introspection_c__get_const_function__DiagnosticStatus__status,  // get_const(index) function pointer
    SelfTest_Response__rosidl_typesupport_introspection_c__get_function__DiagnosticStatus__status,  // get(index) function pointer
    SelfTest_Response__rosidl_typesupport_introspection_c__resize_function__DiagnosticStatus__status  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SelfTest_Response__rosidl_typesupport_introspection_c__SelfTest_Response_message_members = {
  "diagnostic_msgs__srv",  // message namespace
  "SelfTest_Response",  // message name
  3,  // number of fields
  sizeof(diagnostic_msgs__srv__SelfTest_Response),
  SelfTest_Response__rosidl_typesupport_introspection_c__SelfTest_Response_message_member_array,  // message members
  SelfTest_Response__rosidl_typesupport_introspection_c__SelfTest_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SelfTest_Response__rosidl_typesupport_introspection_c__SelfTest_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SelfTest_Response__rosidl_typesupport_introspection_c__SelfTest_Response_message_type_support_handle = {
  0,
  &SelfTest_Response__rosidl_typesupport_introspection_c__SelfTest_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_diagnostic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, srv, SelfTest_Response)() {
  SelfTest_Response__rosidl_typesupport_introspection_c__SelfTest_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, msg, DiagnosticStatus)();
  if (!SelfTest_Response__rosidl_typesupport_introspection_c__SelfTest_Response_message_type_support_handle.typesupport_identifier) {
    SelfTest_Response__rosidl_typesupport_introspection_c__SelfTest_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SelfTest_Response__rosidl_typesupport_introspection_c__SelfTest_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "diagnostic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "diagnostic_msgs/srv/detail/self_test__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers diagnostic_msgs__srv__detail__self_test__rosidl_typesupport_introspection_c__SelfTest_service_members = {
  "diagnostic_msgs__srv",  // service namespace
  "SelfTest",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // diagnostic_msgs__srv__detail__self_test__rosidl_typesupport_introspection_c__SelfTest_Request_message_type_support_handle,
  NULL  // response message
  // diagnostic_msgs__srv__detail__self_test__rosidl_typesupport_introspection_c__SelfTest_Response_message_type_support_handle
};

static rosidl_service_type_support_t diagnostic_msgs__srv__detail__self_test__rosidl_typesupport_introspection_c__SelfTest_service_type_support_handle = {
  0,
  &diagnostic_msgs__srv__detail__self_test__rosidl_typesupport_introspection_c__SelfTest_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, srv, SelfTest_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, srv, SelfTest_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_diagnostic_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, srv, SelfTest)() {
  if (!diagnostic_msgs__srv__detail__self_test__rosidl_typesupport_introspection_c__SelfTest_service_type_support_handle.typesupport_identifier) {
    diagnostic_msgs__srv__detail__self_test__rosidl_typesupport_introspection_c__SelfTest_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)diagnostic_msgs__srv__detail__self_test__rosidl_typesupport_introspection_c__SelfTest_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, srv, SelfTest_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, srv, SelfTest_Response)()->data;
  }

  return &diagnostic_msgs__srv__detail__self_test__rosidl_typesupport_introspection_c__SelfTest_service_type_support_handle;
}

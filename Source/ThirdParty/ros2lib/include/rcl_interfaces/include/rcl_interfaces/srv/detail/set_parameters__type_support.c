// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rcl_interfaces:srv/SetParameters.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rcl_interfaces/srv/detail/set_parameters__rosidl_typesupport_introspection_c.h"
#include "rcl_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rcl_interfaces/srv/detail/set_parameters__functions.h"
#include "rcl_interfaces/srv/detail/set_parameters__struct.h"


// Include directives for member types
// Member `parameters`
#include "rcl_interfaces/msg/parameter.h"
// Member `parameters`
#include "rcl_interfaces/msg/detail/parameter__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rcl_interfaces__srv__SetParameters_Request__init(message_memory);
}

void SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_fini_function(void * message_memory)
{
  rcl_interfaces__srv__SetParameters_Request__fini(message_memory);
}

size_t SetParameters_Request__rosidl_typesupport_introspection_c__size_function__Parameter__parameters(
  const void * untyped_member)
{
  const rcl_interfaces__msg__Parameter__Sequence * member =
    (const rcl_interfaces__msg__Parameter__Sequence *)(untyped_member);
  return member->size;
}

const void * SetParameters_Request__rosidl_typesupport_introspection_c__get_const_function__Parameter__parameters(
  const void * untyped_member, size_t index)
{
  const rcl_interfaces__msg__Parameter__Sequence * member =
    (const rcl_interfaces__msg__Parameter__Sequence *)(untyped_member);
  return &member->data[index];
}

void * SetParameters_Request__rosidl_typesupport_introspection_c__get_function__Parameter__parameters(
  void * untyped_member, size_t index)
{
  rcl_interfaces__msg__Parameter__Sequence * member =
    (rcl_interfaces__msg__Parameter__Sequence *)(untyped_member);
  return &member->data[index];
}

bool SetParameters_Request__rosidl_typesupport_introspection_c__resize_function__Parameter__parameters(
  void * untyped_member, size_t size)
{
  rcl_interfaces__msg__Parameter__Sequence * member =
    (rcl_interfaces__msg__Parameter__Sequence *)(untyped_member);
  rcl_interfaces__msg__Parameter__Sequence__fini(member);
  return rcl_interfaces__msg__Parameter__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_message_member_array[1] = {
  {
    "parameters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rcl_interfaces__srv__SetParameters_Request, parameters),  // bytes offset in struct
    NULL,  // default value
    SetParameters_Request__rosidl_typesupport_introspection_c__size_function__Parameter__parameters,  // size() function pointer
    SetParameters_Request__rosidl_typesupport_introspection_c__get_const_function__Parameter__parameters,  // get_const(index) function pointer
    SetParameters_Request__rosidl_typesupport_introspection_c__get_function__Parameter__parameters,  // get(index) function pointer
    SetParameters_Request__rosidl_typesupport_introspection_c__resize_function__Parameter__parameters  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_message_members = {
  "rcl_interfaces__srv",  // message namespace
  "SetParameters_Request",  // message name
  1,  // number of fields
  sizeof(rcl_interfaces__srv__SetParameters_Request),
  SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_message_member_array,  // message members
  SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_message_type_support_handle = {
  0,
  &SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rcl_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, SetParameters_Request)() {
  SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, msg, Parameter)();
  if (!SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_message_type_support_handle.typesupport_identifier) {
    SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rcl_interfaces/srv/detail/set_parameters__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rcl_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rcl_interfaces/srv/detail/set_parameters__functions.h"
// already included above
// #include "rcl_interfaces/srv/detail/set_parameters__struct.h"


// Include directives for member types
// Member `results`
#include "rcl_interfaces/msg/set_parameters_result.h"
// Member `results`
#include "rcl_interfaces/msg/detail/set_parameters_result__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rcl_interfaces__srv__SetParameters_Response__init(message_memory);
}

void SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_fini_function(void * message_memory)
{
  rcl_interfaces__srv__SetParameters_Response__fini(message_memory);
}

size_t SetParameters_Response__rosidl_typesupport_introspection_c__size_function__SetParametersResult__results(
  const void * untyped_member)
{
  const rcl_interfaces__msg__SetParametersResult__Sequence * member =
    (const rcl_interfaces__msg__SetParametersResult__Sequence *)(untyped_member);
  return member->size;
}

const void * SetParameters_Response__rosidl_typesupport_introspection_c__get_const_function__SetParametersResult__results(
  const void * untyped_member, size_t index)
{
  const rcl_interfaces__msg__SetParametersResult__Sequence * member =
    (const rcl_interfaces__msg__SetParametersResult__Sequence *)(untyped_member);
  return &member->data[index];
}

void * SetParameters_Response__rosidl_typesupport_introspection_c__get_function__SetParametersResult__results(
  void * untyped_member, size_t index)
{
  rcl_interfaces__msg__SetParametersResult__Sequence * member =
    (rcl_interfaces__msg__SetParametersResult__Sequence *)(untyped_member);
  return &member->data[index];
}

bool SetParameters_Response__rosidl_typesupport_introspection_c__resize_function__SetParametersResult__results(
  void * untyped_member, size_t size)
{
  rcl_interfaces__msg__SetParametersResult__Sequence * member =
    (rcl_interfaces__msg__SetParametersResult__Sequence *)(untyped_member);
  rcl_interfaces__msg__SetParametersResult__Sequence__fini(member);
  return rcl_interfaces__msg__SetParametersResult__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_message_member_array[1] = {
  {
    "results",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rcl_interfaces__srv__SetParameters_Response, results),  // bytes offset in struct
    NULL,  // default value
    SetParameters_Response__rosidl_typesupport_introspection_c__size_function__SetParametersResult__results,  // size() function pointer
    SetParameters_Response__rosidl_typesupport_introspection_c__get_const_function__SetParametersResult__results,  // get_const(index) function pointer
    SetParameters_Response__rosidl_typesupport_introspection_c__get_function__SetParametersResult__results,  // get(index) function pointer
    SetParameters_Response__rosidl_typesupport_introspection_c__resize_function__SetParametersResult__results  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_message_members = {
  "rcl_interfaces__srv",  // message namespace
  "SetParameters_Response",  // message name
  1,  // number of fields
  sizeof(rcl_interfaces__srv__SetParameters_Response),
  SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_message_member_array,  // message members
  SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_message_type_support_handle = {
  0,
  &SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rcl_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, SetParameters_Response)() {
  SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, msg, SetParametersResult)();
  if (!SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_message_type_support_handle.typesupport_identifier) {
    SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rcl_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rcl_interfaces/srv/detail/set_parameters__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rcl_interfaces__srv__detail__set_parameters__rosidl_typesupport_introspection_c__SetParameters_service_members = {
  "rcl_interfaces__srv",  // service namespace
  "SetParameters",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rcl_interfaces__srv__detail__set_parameters__rosidl_typesupport_introspection_c__SetParameters_Request_message_type_support_handle,
  NULL  // response message
  // rcl_interfaces__srv__detail__set_parameters__rosidl_typesupport_introspection_c__SetParameters_Response_message_type_support_handle
};

static rosidl_service_type_support_t rcl_interfaces__srv__detail__set_parameters__rosidl_typesupport_introspection_c__SetParameters_service_type_support_handle = {
  0,
  &rcl_interfaces__srv__detail__set_parameters__rosidl_typesupport_introspection_c__SetParameters_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, SetParameters_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, SetParameters_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rcl_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, SetParameters)() {
  if (!rcl_interfaces__srv__detail__set_parameters__rosidl_typesupport_introspection_c__SetParameters_service_type_support_handle.typesupport_identifier) {
    rcl_interfaces__srv__detail__set_parameters__rosidl_typesupport_introspection_c__SetParameters_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rcl_interfaces__srv__detail__set_parameters__rosidl_typesupport_introspection_c__SetParameters_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, SetParameters_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, SetParameters_Response)()->data;
  }

  return &rcl_interfaces__srv__detail__set_parameters__rosidl_typesupport_introspection_c__SetParameters_service_type_support_handle;
}

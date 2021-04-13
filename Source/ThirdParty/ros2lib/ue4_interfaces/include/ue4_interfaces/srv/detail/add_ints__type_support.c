// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ue4_interfaces:srv/AddInts.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ue4_interfaces/srv/detail/add_ints__rosidl_typesupport_introspection_c.h"
#include "ue4_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ue4_interfaces/srv/detail/add_ints__functions.h"
#include "ue4_interfaces/srv/detail/add_ints__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void AddInts_Request__rosidl_typesupport_introspection_c__AddInts_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ue4_interfaces__srv__AddInts_Request__init(message_memory);
}

void AddInts_Request__rosidl_typesupport_introspection_c__AddInts_Request_fini_function(void * message_memory)
{
  ue4_interfaces__srv__AddInts_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AddInts_Request__rosidl_typesupport_introspection_c__AddInts_Request_message_member_array[2] = {
  {
    "a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue4_interfaces__srv__AddInts_Request, a),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue4_interfaces__srv__AddInts_Request, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AddInts_Request__rosidl_typesupport_introspection_c__AddInts_Request_message_members = {
  "ue4_interfaces__srv",  // message namespace
  "AddInts_Request",  // message name
  2,  // number of fields
  sizeof(ue4_interfaces__srv__AddInts_Request),
  AddInts_Request__rosidl_typesupport_introspection_c__AddInts_Request_message_member_array,  // message members
  AddInts_Request__rosidl_typesupport_introspection_c__AddInts_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  AddInts_Request__rosidl_typesupport_introspection_c__AddInts_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AddInts_Request__rosidl_typesupport_introspection_c__AddInts_Request_message_type_support_handle = {
  0,
  &AddInts_Request__rosidl_typesupport_introspection_c__AddInts_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ue4_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue4_interfaces, srv, AddInts_Request)() {
  if (!AddInts_Request__rosidl_typesupport_introspection_c__AddInts_Request_message_type_support_handle.typesupport_identifier) {
    AddInts_Request__rosidl_typesupport_introspection_c__AddInts_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AddInts_Request__rosidl_typesupport_introspection_c__AddInts_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ue4_interfaces/srv/detail/add_ints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ue4_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ue4_interfaces/srv/detail/add_ints__functions.h"
// already included above
// #include "ue4_interfaces/srv/detail/add_ints__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void AddInts_Response__rosidl_typesupport_introspection_c__AddInts_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ue4_interfaces__srv__AddInts_Response__init(message_memory);
}

void AddInts_Response__rosidl_typesupport_introspection_c__AddInts_Response_fini_function(void * message_memory)
{
  ue4_interfaces__srv__AddInts_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AddInts_Response__rosidl_typesupport_introspection_c__AddInts_Response_message_member_array[1] = {
  {
    "sum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue4_interfaces__srv__AddInts_Response, sum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AddInts_Response__rosidl_typesupport_introspection_c__AddInts_Response_message_members = {
  "ue4_interfaces__srv",  // message namespace
  "AddInts_Response",  // message name
  1,  // number of fields
  sizeof(ue4_interfaces__srv__AddInts_Response),
  AddInts_Response__rosidl_typesupport_introspection_c__AddInts_Response_message_member_array,  // message members
  AddInts_Response__rosidl_typesupport_introspection_c__AddInts_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  AddInts_Response__rosidl_typesupport_introspection_c__AddInts_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AddInts_Response__rosidl_typesupport_introspection_c__AddInts_Response_message_type_support_handle = {
  0,
  &AddInts_Response__rosidl_typesupport_introspection_c__AddInts_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ue4_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue4_interfaces, srv, AddInts_Response)() {
  if (!AddInts_Response__rosidl_typesupport_introspection_c__AddInts_Response_message_type_support_handle.typesupport_identifier) {
    AddInts_Response__rosidl_typesupport_introspection_c__AddInts_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AddInts_Response__rosidl_typesupport_introspection_c__AddInts_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ue4_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ue4_interfaces/srv/detail/add_ints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ue4_interfaces__srv__detail__add_ints__rosidl_typesupport_introspection_c__AddInts_service_members = {
  "ue4_interfaces__srv",  // service namespace
  "AddInts",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ue4_interfaces__srv__detail__add_ints__rosidl_typesupport_introspection_c__AddInts_Request_message_type_support_handle,
  NULL  // response message
  // ue4_interfaces__srv__detail__add_ints__rosidl_typesupport_introspection_c__AddInts_Response_message_type_support_handle
};

static rosidl_service_type_support_t ue4_interfaces__srv__detail__add_ints__rosidl_typesupport_introspection_c__AddInts_service_type_support_handle = {
  0,
  &ue4_interfaces__srv__detail__add_ints__rosidl_typesupport_introspection_c__AddInts_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue4_interfaces, srv, AddInts_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue4_interfaces, srv, AddInts_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ue4_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue4_interfaces, srv, AddInts)() {
  if (!ue4_interfaces__srv__detail__add_ints__rosidl_typesupport_introspection_c__AddInts_service_type_support_handle.typesupport_identifier) {
    ue4_interfaces__srv__detail__add_ints__rosidl_typesupport_introspection_c__AddInts_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ue4_interfaces__srv__detail__add_ints__rosidl_typesupport_introspection_c__AddInts_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue4_interfaces, srv, AddInts_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue4_interfaces, srv, AddInts_Response)()->data;
  }

  return &ue4_interfaces__srv__detail__add_ints__rosidl_typesupport_introspection_c__AddInts_service_type_support_handle;
}

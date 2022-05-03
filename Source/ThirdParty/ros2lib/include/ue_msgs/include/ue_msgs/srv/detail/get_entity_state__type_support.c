// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ue_msgs:srv/GetEntityState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ue_msgs/srv/detail/get_entity_state__rosidl_typesupport_introspection_c.h"
#include "ue_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ue_msgs/srv/detail/get_entity_state__functions.h"
#include "ue_msgs/srv/detail/get_entity_state__struct.h"


// Include directives for member types
// Member `name`
// Member `reference_frame`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetEntityState_Request__rosidl_typesupport_introspection_c__GetEntityState_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ue_msgs__srv__GetEntityState_Request__init(message_memory);
}

void GetEntityState_Request__rosidl_typesupport_introspection_c__GetEntityState_Request_fini_function(void * message_memory)
{
  ue_msgs__srv__GetEntityState_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetEntityState_Request__rosidl_typesupport_introspection_c__GetEntityState_Request_message_member_array[2] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__srv__GetEntityState_Request, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reference_frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__srv__GetEntityState_Request, reference_frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetEntityState_Request__rosidl_typesupport_introspection_c__GetEntityState_Request_message_members = {
  "ue_msgs__srv",  // message namespace
  "GetEntityState_Request",  // message name
  2,  // number of fields
  sizeof(ue_msgs__srv__GetEntityState_Request),
  GetEntityState_Request__rosidl_typesupport_introspection_c__GetEntityState_Request_message_member_array,  // message members
  GetEntityState_Request__rosidl_typesupport_introspection_c__GetEntityState_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetEntityState_Request__rosidl_typesupport_introspection_c__GetEntityState_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetEntityState_Request__rosidl_typesupport_introspection_c__GetEntityState_Request_message_type_support_handle = {
  0,
  &GetEntityState_Request__rosidl_typesupport_introspection_c__GetEntityState_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ue_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, srv, GetEntityState_Request)() {
  if (!GetEntityState_Request__rosidl_typesupport_introspection_c__GetEntityState_Request_message_type_support_handle.typesupport_identifier) {
    GetEntityState_Request__rosidl_typesupport_introspection_c__GetEntityState_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetEntityState_Request__rosidl_typesupport_introspection_c__GetEntityState_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ue_msgs/srv/detail/get_entity_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ue_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ue_msgs/srv/detail/get_entity_state__functions.h"
// already included above
// #include "ue_msgs/srv/detail/get_entity_state__struct.h"


// Include directives for member types
// Member `state`
#include "ue_msgs/msg/entity_state.h"
// Member `state`
#include "ue_msgs/msg/detail/entity_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetEntityState_Response__rosidl_typesupport_introspection_c__GetEntityState_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ue_msgs__srv__GetEntityState_Response__init(message_memory);
}

void GetEntityState_Response__rosidl_typesupport_introspection_c__GetEntityState_Response_fini_function(void * message_memory)
{
  ue_msgs__srv__GetEntityState_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetEntityState_Response__rosidl_typesupport_introspection_c__GetEntityState_Response_message_member_array[2] = {
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__srv__GetEntityState_Response, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__srv__GetEntityState_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetEntityState_Response__rosidl_typesupport_introspection_c__GetEntityState_Response_message_members = {
  "ue_msgs__srv",  // message namespace
  "GetEntityState_Response",  // message name
  2,  // number of fields
  sizeof(ue_msgs__srv__GetEntityState_Response),
  GetEntityState_Response__rosidl_typesupport_introspection_c__GetEntityState_Response_message_member_array,  // message members
  GetEntityState_Response__rosidl_typesupport_introspection_c__GetEntityState_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetEntityState_Response__rosidl_typesupport_introspection_c__GetEntityState_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetEntityState_Response__rosidl_typesupport_introspection_c__GetEntityState_Response_message_type_support_handle = {
  0,
  &GetEntityState_Response__rosidl_typesupport_introspection_c__GetEntityState_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ue_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, srv, GetEntityState_Response)() {
  GetEntityState_Response__rosidl_typesupport_introspection_c__GetEntityState_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, msg, EntityState)();
  if (!GetEntityState_Response__rosidl_typesupport_introspection_c__GetEntityState_Response_message_type_support_handle.typesupport_identifier) {
    GetEntityState_Response__rosidl_typesupport_introspection_c__GetEntityState_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetEntityState_Response__rosidl_typesupport_introspection_c__GetEntityState_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ue_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ue_msgs/srv/detail/get_entity_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ue_msgs__srv__detail__get_entity_state__rosidl_typesupport_introspection_c__GetEntityState_service_members = {
  "ue_msgs__srv",  // service namespace
  "GetEntityState",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ue_msgs__srv__detail__get_entity_state__rosidl_typesupport_introspection_c__GetEntityState_Request_message_type_support_handle,
  NULL  // response message
  // ue_msgs__srv__detail__get_entity_state__rosidl_typesupport_introspection_c__GetEntityState_Response_message_type_support_handle
};

static rosidl_service_type_support_t ue_msgs__srv__detail__get_entity_state__rosidl_typesupport_introspection_c__GetEntityState_service_type_support_handle = {
  0,
  &ue_msgs__srv__detail__get_entity_state__rosidl_typesupport_introspection_c__GetEntityState_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, srv, GetEntityState_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, srv, GetEntityState_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ue_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, srv, GetEntityState)() {
  if (!ue_msgs__srv__detail__get_entity_state__rosidl_typesupport_introspection_c__GetEntityState_service_type_support_handle.typesupport_identifier) {
    ue_msgs__srv__detail__get_entity_state__rosidl_typesupport_introspection_c__GetEntityState_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ue_msgs__srv__detail__get_entity_state__rosidl_typesupport_introspection_c__GetEntityState_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, srv, GetEntityState_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, srv, GetEntityState_Response)()->data;
  }

  return &ue_msgs__srv__detail__get_entity_state__rosidl_typesupport_introspection_c__GetEntityState_service_type_support_handle;
}

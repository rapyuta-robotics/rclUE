// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ue_msgs:srv/SetEntityState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ue_msgs/srv/detail/set_entity_state__rosidl_typesupport_introspection_c.h"
#include "ue_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ue_msgs/srv/detail/set_entity_state__functions.h"
#include "ue_msgs/srv/detail/set_entity_state__struct.h"


// Include directives for member types
// Member `state`
#include "ue_msgs/msg/entity_state.h"
// Member `state`
#include "ue_msgs/msg/detail/entity_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ue_msgs__srv__SetEntityState_Request__rosidl_typesupport_introspection_c__SetEntityState_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ue_msgs__srv__SetEntityState_Request__init(message_memory);
}

void ue_msgs__srv__SetEntityState_Request__rosidl_typesupport_introspection_c__SetEntityState_Request_fini_function(void * message_memory)
{
  ue_msgs__srv__SetEntityState_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ue_msgs__srv__SetEntityState_Request__rosidl_typesupport_introspection_c__SetEntityState_Request_message_member_array[1] = {
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__srv__SetEntityState_Request, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ue_msgs__srv__SetEntityState_Request__rosidl_typesupport_introspection_c__SetEntityState_Request_message_members = {
  "ue_msgs__srv",  // message namespace
  "SetEntityState_Request",  // message name
  1,  // number of fields
  sizeof(ue_msgs__srv__SetEntityState_Request),
  ue_msgs__srv__SetEntityState_Request__rosidl_typesupport_introspection_c__SetEntityState_Request_message_member_array,  // message members
  ue_msgs__srv__SetEntityState_Request__rosidl_typesupport_introspection_c__SetEntityState_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ue_msgs__srv__SetEntityState_Request__rosidl_typesupport_introspection_c__SetEntityState_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ue_msgs__srv__SetEntityState_Request__rosidl_typesupport_introspection_c__SetEntityState_Request_message_type_support_handle = {
  0,
  &ue_msgs__srv__SetEntityState_Request__rosidl_typesupport_introspection_c__SetEntityState_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ue_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, srv, SetEntityState_Request)() {
  ue_msgs__srv__SetEntityState_Request__rosidl_typesupport_introspection_c__SetEntityState_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, msg, EntityState)();
  if (!ue_msgs__srv__SetEntityState_Request__rosidl_typesupport_introspection_c__SetEntityState_Request_message_type_support_handle.typesupport_identifier) {
    ue_msgs__srv__SetEntityState_Request__rosidl_typesupport_introspection_c__SetEntityState_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ue_msgs__srv__SetEntityState_Request__rosidl_typesupport_introspection_c__SetEntityState_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ue_msgs/srv/detail/set_entity_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ue_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ue_msgs/srv/detail/set_entity_state__functions.h"
// already included above
// #include "ue_msgs/srv/detail/set_entity_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ue_msgs__srv__SetEntityState_Response__rosidl_typesupport_introspection_c__SetEntityState_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ue_msgs__srv__SetEntityState_Response__init(message_memory);
}

void ue_msgs__srv__SetEntityState_Response__rosidl_typesupport_introspection_c__SetEntityState_Response_fini_function(void * message_memory)
{
  ue_msgs__srv__SetEntityState_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ue_msgs__srv__SetEntityState_Response__rosidl_typesupport_introspection_c__SetEntityState_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__srv__SetEntityState_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ue_msgs__srv__SetEntityState_Response__rosidl_typesupport_introspection_c__SetEntityState_Response_message_members = {
  "ue_msgs__srv",  // message namespace
  "SetEntityState_Response",  // message name
  1,  // number of fields
  sizeof(ue_msgs__srv__SetEntityState_Response),
  ue_msgs__srv__SetEntityState_Response__rosidl_typesupport_introspection_c__SetEntityState_Response_message_member_array,  // message members
  ue_msgs__srv__SetEntityState_Response__rosidl_typesupport_introspection_c__SetEntityState_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ue_msgs__srv__SetEntityState_Response__rosidl_typesupport_introspection_c__SetEntityState_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ue_msgs__srv__SetEntityState_Response__rosidl_typesupport_introspection_c__SetEntityState_Response_message_type_support_handle = {
  0,
  &ue_msgs__srv__SetEntityState_Response__rosidl_typesupport_introspection_c__SetEntityState_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ue_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, srv, SetEntityState_Response)() {
  if (!ue_msgs__srv__SetEntityState_Response__rosidl_typesupport_introspection_c__SetEntityState_Response_message_type_support_handle.typesupport_identifier) {
    ue_msgs__srv__SetEntityState_Response__rosidl_typesupport_introspection_c__SetEntityState_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ue_msgs__srv__SetEntityState_Response__rosidl_typesupport_introspection_c__SetEntityState_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ue_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ue_msgs/srv/detail/set_entity_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ue_msgs__srv__detail__set_entity_state__rosidl_typesupport_introspection_c__SetEntityState_service_members = {
  "ue_msgs__srv",  // service namespace
  "SetEntityState",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ue_msgs__srv__detail__set_entity_state__rosidl_typesupport_introspection_c__SetEntityState_Request_message_type_support_handle,
  NULL  // response message
  // ue_msgs__srv__detail__set_entity_state__rosidl_typesupport_introspection_c__SetEntityState_Response_message_type_support_handle
};

static rosidl_service_type_support_t ue_msgs__srv__detail__set_entity_state__rosidl_typesupport_introspection_c__SetEntityState_service_type_support_handle = {
  0,
  &ue_msgs__srv__detail__set_entity_state__rosidl_typesupport_introspection_c__SetEntityState_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, srv, SetEntityState_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, srv, SetEntityState_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ue_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, srv, SetEntityState)() {
  if (!ue_msgs__srv__detail__set_entity_state__rosidl_typesupport_introspection_c__SetEntityState_service_type_support_handle.typesupport_identifier) {
    ue_msgs__srv__detail__set_entity_state__rosidl_typesupport_introspection_c__SetEntityState_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ue_msgs__srv__detail__set_entity_state__rosidl_typesupport_introspection_c__SetEntityState_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, srv, SetEntityState_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, srv, SetEntityState_Response)()->data;
  }

  return &ue_msgs__srv__detail__set_entity_state__rosidl_typesupport_introspection_c__SetEntityState_service_type_support_handle;
}

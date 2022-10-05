// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ue_msgs:srv/SpawnEntities.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ue_msgs/srv/detail/spawn_entities__rosidl_typesupport_introspection_c.h"
#include "ue_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ue_msgs/srv/detail/spawn_entities__functions.h"
#include "ue_msgs/srv/detail/spawn_entities__struct.h"


// Include directives for member types
// Member `type`
// Member `tags`
#include "rosidl_runtime_c/string_functions.h"
// Member `state`
#include "ue_msgs/msg/entity_state.h"
// Member `state`
#include "ue_msgs/msg/detail/entity_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ue_msgs__srv__SpawnEntities_Request__init(message_memory);
}

void SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_fini_function(void * message_memory)
{
  ue_msgs__srv__SpawnEntities_Request__fini(message_memory);
}

size_t SpawnEntities_Request__rosidl_typesupport_introspection_c__size_function__EntityState__state(
  const void * untyped_member)
{
  const ue_msgs__msg__EntityState__Sequence * member =
    (const ue_msgs__msg__EntityState__Sequence *)(untyped_member);
  return member->size;
}

const void * SpawnEntities_Request__rosidl_typesupport_introspection_c__get_const_function__EntityState__state(
  const void * untyped_member, size_t index)
{
  const ue_msgs__msg__EntityState__Sequence * member =
    (const ue_msgs__msg__EntityState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * SpawnEntities_Request__rosidl_typesupport_introspection_c__get_function__EntityState__state(
  void * untyped_member, size_t index)
{
  ue_msgs__msg__EntityState__Sequence * member =
    (ue_msgs__msg__EntityState__Sequence *)(untyped_member);
  return &member->data[index];
}

bool SpawnEntities_Request__rosidl_typesupport_introspection_c__resize_function__EntityState__state(
  void * untyped_member, size_t size)
{
  ue_msgs__msg__EntityState__Sequence * member =
    (ue_msgs__msg__EntityState__Sequence *)(untyped_member);
  ue_msgs__msg__EntityState__Sequence__fini(member);
  return ue_msgs__msg__EntityState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_message_member_array[3] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__srv__SpawnEntities_Request, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__srv__SpawnEntities_Request, state),  // bytes offset in struct
    NULL,  // default value
    SpawnEntities_Request__rosidl_typesupport_introspection_c__size_function__EntityState__state,  // size() function pointer
    SpawnEntities_Request__rosidl_typesupport_introspection_c__get_const_function__EntityState__state,  // get_const(index) function pointer
    SpawnEntities_Request__rosidl_typesupport_introspection_c__get_function__EntityState__state,  // get(index) function pointer
    SpawnEntities_Request__rosidl_typesupport_introspection_c__resize_function__EntityState__state  // resize(index) function pointer
  },
  {
    "tags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__srv__SpawnEntities_Request, tags),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_message_members = {
  "ue_msgs__srv",  // message namespace
  "SpawnEntities_Request",  // message name
  3,  // number of fields
  sizeof(ue_msgs__srv__SpawnEntities_Request),
  SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_message_member_array,  // message members
  SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_message_type_support_handle = {
  0,
  &SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ue_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, srv, SpawnEntities_Request)() {
  SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, msg, EntityState)();
  if (!SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_message_type_support_handle.typesupport_identifier) {
    SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ue_msgs/srv/detail/spawn_entities__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ue_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ue_msgs/srv/detail/spawn_entities__functions.h"
// already included above
// #include "ue_msgs/srv/detail/spawn_entities__struct.h"


// Include directives for member types
// Member `status_message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ue_msgs__srv__SpawnEntities_Response__init(message_memory);
}

void SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_fini_function(void * message_memory)
{
  ue_msgs__srv__SpawnEntities_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__srv__SpawnEntities_Response, success),  // bytes offset in struct
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
    offsetof(ue_msgs__srv__SpawnEntities_Response, status_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_message_members = {
  "ue_msgs__srv",  // message namespace
  "SpawnEntities_Response",  // message name
  2,  // number of fields
  sizeof(ue_msgs__srv__SpawnEntities_Response),
  SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_message_member_array,  // message members
  SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_message_type_support_handle = {
  0,
  &SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ue_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, srv, SpawnEntities_Response)() {
  if (!SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_message_type_support_handle.typesupport_identifier) {
    SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ue_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ue_msgs/srv/detail/spawn_entities__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ue_msgs__srv__detail__spawn_entities__rosidl_typesupport_introspection_c__SpawnEntities_service_members = {
  "ue_msgs__srv",  // service namespace
  "SpawnEntities",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ue_msgs__srv__detail__spawn_entities__rosidl_typesupport_introspection_c__SpawnEntities_Request_message_type_support_handle,
  NULL  // response message
  // ue_msgs__srv__detail__spawn_entities__rosidl_typesupport_introspection_c__SpawnEntities_Response_message_type_support_handle
};

static rosidl_service_type_support_t ue_msgs__srv__detail__spawn_entities__rosidl_typesupport_introspection_c__SpawnEntities_service_type_support_handle = {
  0,
  &ue_msgs__srv__detail__spawn_entities__rosidl_typesupport_introspection_c__SpawnEntities_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, srv, SpawnEntities_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, srv, SpawnEntities_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ue_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, srv, SpawnEntities)() {
  if (!ue_msgs__srv__detail__spawn_entities__rosidl_typesupport_introspection_c__SpawnEntities_service_type_support_handle.typesupport_identifier) {
    ue_msgs__srv__detail__spawn_entities__rosidl_typesupport_introspection_c__SpawnEntities_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ue_msgs__srv__detail__spawn_entities__rosidl_typesupport_introspection_c__SpawnEntities_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, srv, SpawnEntities_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, srv, SpawnEntities_Response)()->data;
  }

  return &ue_msgs__srv__detail__spawn_entities__rosidl_typesupport_introspection_c__SpawnEntities_service_type_support_handle;
}

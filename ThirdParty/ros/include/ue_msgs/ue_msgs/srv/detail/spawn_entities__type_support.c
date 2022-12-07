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
// Member `json_parameters`
#include "rosidl_runtime_c/string_functions.h"
// Member `state`
#include "ue_msgs/msg/entity_state.h"
// Member `state`
#include "ue_msgs/msg/detail/entity_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ue_msgs__srv__SpawnEntities_Request__init(message_memory);
}

void ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_fini_function(void * message_memory)
{
  ue_msgs__srv__SpawnEntities_Request__fini(message_memory);
}

size_t ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__size_function__SpawnEntities_Request__type(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__get_const_function__SpawnEntities_Request__type(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__get_function__SpawnEntities_Request__type(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__fetch_function__SpawnEntities_Request__type(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__get_const_function__SpawnEntities_Request__type(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__assign_function__SpawnEntities_Request__type(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__get_function__SpawnEntities_Request__type(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__resize_function__SpawnEntities_Request__type(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__size_function__SpawnEntities_Request__state(
  const void * untyped_member)
{
  const ue_msgs__msg__EntityState__Sequence * member =
    (const ue_msgs__msg__EntityState__Sequence *)(untyped_member);
  return member->size;
}

const void * ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__get_const_function__SpawnEntities_Request__state(
  const void * untyped_member, size_t index)
{
  const ue_msgs__msg__EntityState__Sequence * member =
    (const ue_msgs__msg__EntityState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__get_function__SpawnEntities_Request__state(
  void * untyped_member, size_t index)
{
  ue_msgs__msg__EntityState__Sequence * member =
    (ue_msgs__msg__EntityState__Sequence *)(untyped_member);
  return &member->data[index];
}

void ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__fetch_function__SpawnEntities_Request__state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ue_msgs__msg__EntityState * item =
    ((const ue_msgs__msg__EntityState *)
    ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__get_const_function__SpawnEntities_Request__state(untyped_member, index));
  ue_msgs__msg__EntityState * value =
    (ue_msgs__msg__EntityState *)(untyped_value);
  *value = *item;
}

void ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__assign_function__SpawnEntities_Request__state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ue_msgs__msg__EntityState * item =
    ((ue_msgs__msg__EntityState *)
    ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__get_function__SpawnEntities_Request__state(untyped_member, index));
  const ue_msgs__msg__EntityState * value =
    (const ue_msgs__msg__EntityState *)(untyped_value);
  *item = *value;
}

bool ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__resize_function__SpawnEntities_Request__state(
  void * untyped_member, size_t size)
{
  ue_msgs__msg__EntityState__Sequence * member =
    (ue_msgs__msg__EntityState__Sequence *)(untyped_member);
  ue_msgs__msg__EntityState__Sequence__fini(member);
  return ue_msgs__msg__EntityState__Sequence__init(member, size);
}

size_t ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__size_function__SpawnEntities_Request__tags(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__get_const_function__SpawnEntities_Request__tags(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__get_function__SpawnEntities_Request__tags(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__fetch_function__SpawnEntities_Request__tags(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__get_const_function__SpawnEntities_Request__tags(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__assign_function__SpawnEntities_Request__tags(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__get_function__SpawnEntities_Request__tags(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__resize_function__SpawnEntities_Request__tags(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__size_function__SpawnEntities_Request__json_parameters(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__get_const_function__SpawnEntities_Request__json_parameters(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__get_function__SpawnEntities_Request__json_parameters(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__fetch_function__SpawnEntities_Request__json_parameters(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__get_const_function__SpawnEntities_Request__json_parameters(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__assign_function__SpawnEntities_Request__json_parameters(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__get_function__SpawnEntities_Request__json_parameters(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__resize_function__SpawnEntities_Request__json_parameters(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_message_member_array[4] = {
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
    ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__size_function__SpawnEntities_Request__type,  // size() function pointer
    ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__get_const_function__SpawnEntities_Request__type,  // get_const(index) function pointer
    ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__get_function__SpawnEntities_Request__type,  // get(index) function pointer
    ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__fetch_function__SpawnEntities_Request__type,  // fetch(index, &value) function pointer
    ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__assign_function__SpawnEntities_Request__type,  // assign(index, value) function pointer
    ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__resize_function__SpawnEntities_Request__type  // resize(index) function pointer
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
    ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__size_function__SpawnEntities_Request__state,  // size() function pointer
    ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__get_const_function__SpawnEntities_Request__state,  // get_const(index) function pointer
    ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__get_function__SpawnEntities_Request__state,  // get(index) function pointer
    ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__fetch_function__SpawnEntities_Request__state,  // fetch(index, &value) function pointer
    ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__assign_function__SpawnEntities_Request__state,  // assign(index, value) function pointer
    ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__resize_function__SpawnEntities_Request__state  // resize(index) function pointer
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
    ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__size_function__SpawnEntities_Request__tags,  // size() function pointer
    ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__get_const_function__SpawnEntities_Request__tags,  // get_const(index) function pointer
    ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__get_function__SpawnEntities_Request__tags,  // get(index) function pointer
    ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__fetch_function__SpawnEntities_Request__tags,  // fetch(index, &value) function pointer
    ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__assign_function__SpawnEntities_Request__tags,  // assign(index, value) function pointer
    ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__resize_function__SpawnEntities_Request__tags  // resize(index) function pointer
  },
  {
    "json_parameters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__srv__SpawnEntities_Request, json_parameters),  // bytes offset in struct
    NULL,  // default value
    ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__size_function__SpawnEntities_Request__json_parameters,  // size() function pointer
    ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__get_const_function__SpawnEntities_Request__json_parameters,  // get_const(index) function pointer
    ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__get_function__SpawnEntities_Request__json_parameters,  // get(index) function pointer
    ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__fetch_function__SpawnEntities_Request__json_parameters,  // fetch(index, &value) function pointer
    ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__assign_function__SpawnEntities_Request__json_parameters,  // assign(index, value) function pointer
    ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__resize_function__SpawnEntities_Request__json_parameters  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_message_members = {
  "ue_msgs__srv",  // message namespace
  "SpawnEntities_Request",  // message name
  4,  // number of fields
  sizeof(ue_msgs__srv__SpawnEntities_Request),
  ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_message_member_array,  // message members
  ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_message_type_support_handle = {
  0,
  &ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ue_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, srv, SpawnEntities_Request)() {
  ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, msg, EntityState)();
  if (!ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_message_type_support_handle.typesupport_identifier) {
    ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ue_msgs__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_message_type_support_handle;
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

void ue_msgs__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ue_msgs__srv__SpawnEntities_Response__init(message_memory);
}

void ue_msgs__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_fini_function(void * message_memory)
{
  ue_msgs__srv__SpawnEntities_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ue_msgs__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_message_member_array[2] = {
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
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
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
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ue_msgs__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_message_members = {
  "ue_msgs__srv",  // message namespace
  "SpawnEntities_Response",  // message name
  2,  // number of fields
  sizeof(ue_msgs__srv__SpawnEntities_Response),
  ue_msgs__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_message_member_array,  // message members
  ue_msgs__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ue_msgs__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ue_msgs__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_message_type_support_handle = {
  0,
  &ue_msgs__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ue_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, srv, SpawnEntities_Response)() {
  if (!ue_msgs__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_message_type_support_handle.typesupport_identifier) {
    ue_msgs__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ue_msgs__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_message_type_support_handle;
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

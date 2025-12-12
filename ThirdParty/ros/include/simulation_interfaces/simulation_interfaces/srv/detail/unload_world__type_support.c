// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from simulation_interfaces:srv/UnloadWorld.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "simulation_interfaces/srv/detail/unload_world__rosidl_typesupport_introspection_c.h"
#include "simulation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "simulation_interfaces/srv/detail/unload_world__functions.h"
#include "simulation_interfaces/srv/detail/unload_world__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void simulation_interfaces__srv__UnloadWorld_Request__rosidl_typesupport_introspection_c__UnloadWorld_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  simulation_interfaces__srv__UnloadWorld_Request__init(message_memory);
}

void simulation_interfaces__srv__UnloadWorld_Request__rosidl_typesupport_introspection_c__UnloadWorld_Request_fini_function(void * message_memory)
{
  simulation_interfaces__srv__UnloadWorld_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember simulation_interfaces__srv__UnloadWorld_Request__rosidl_typesupport_introspection_c__UnloadWorld_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__srv__UnloadWorld_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers simulation_interfaces__srv__UnloadWorld_Request__rosidl_typesupport_introspection_c__UnloadWorld_Request_message_members = {
  "simulation_interfaces__srv",  // message namespace
  "UnloadWorld_Request",  // message name
  1,  // number of fields
  sizeof(simulation_interfaces__srv__UnloadWorld_Request),
  false,  // has_any_key_member_
  simulation_interfaces__srv__UnloadWorld_Request__rosidl_typesupport_introspection_c__UnloadWorld_Request_message_member_array,  // message members
  simulation_interfaces__srv__UnloadWorld_Request__rosidl_typesupport_introspection_c__UnloadWorld_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  simulation_interfaces__srv__UnloadWorld_Request__rosidl_typesupport_introspection_c__UnloadWorld_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t simulation_interfaces__srv__UnloadWorld_Request__rosidl_typesupport_introspection_c__UnloadWorld_Request_message_type_support_handle = {
  0,
  &simulation_interfaces__srv__UnloadWorld_Request__rosidl_typesupport_introspection_c__UnloadWorld_Request_message_members,
  get_message_typesupport_handle_function,
  &simulation_interfaces__srv__UnloadWorld_Request__get_type_hash,
  &simulation_interfaces__srv__UnloadWorld_Request__get_type_description,
  &simulation_interfaces__srv__UnloadWorld_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simulation_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, UnloadWorld_Request)() {
  if (!simulation_interfaces__srv__UnloadWorld_Request__rosidl_typesupport_introspection_c__UnloadWorld_Request_message_type_support_handle.typesupport_identifier) {
    simulation_interfaces__srv__UnloadWorld_Request__rosidl_typesupport_introspection_c__UnloadWorld_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &simulation_interfaces__srv__UnloadWorld_Request__rosidl_typesupport_introspection_c__UnloadWorld_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "simulation_interfaces/srv/detail/unload_world__rosidl_typesupport_introspection_c.h"
// already included above
// #include "simulation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "simulation_interfaces/srv/detail/unload_world__functions.h"
// already included above
// #include "simulation_interfaces/srv/detail/unload_world__struct.h"


// Include directives for member types
// Member `result`
#include "simulation_interfaces/msg/result.h"
// Member `result`
#include "simulation_interfaces/msg/detail/result__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void simulation_interfaces__srv__UnloadWorld_Response__rosidl_typesupport_introspection_c__UnloadWorld_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  simulation_interfaces__srv__UnloadWorld_Response__init(message_memory);
}

void simulation_interfaces__srv__UnloadWorld_Response__rosidl_typesupport_introspection_c__UnloadWorld_Response_fini_function(void * message_memory)
{
  simulation_interfaces__srv__UnloadWorld_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember simulation_interfaces__srv__UnloadWorld_Response__rosidl_typesupport_introspection_c__UnloadWorld_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__srv__UnloadWorld_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers simulation_interfaces__srv__UnloadWorld_Response__rosidl_typesupport_introspection_c__UnloadWorld_Response_message_members = {
  "simulation_interfaces__srv",  // message namespace
  "UnloadWorld_Response",  // message name
  1,  // number of fields
  sizeof(simulation_interfaces__srv__UnloadWorld_Response),
  false,  // has_any_key_member_
  simulation_interfaces__srv__UnloadWorld_Response__rosidl_typesupport_introspection_c__UnloadWorld_Response_message_member_array,  // message members
  simulation_interfaces__srv__UnloadWorld_Response__rosidl_typesupport_introspection_c__UnloadWorld_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  simulation_interfaces__srv__UnloadWorld_Response__rosidl_typesupport_introspection_c__UnloadWorld_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t simulation_interfaces__srv__UnloadWorld_Response__rosidl_typesupport_introspection_c__UnloadWorld_Response_message_type_support_handle = {
  0,
  &simulation_interfaces__srv__UnloadWorld_Response__rosidl_typesupport_introspection_c__UnloadWorld_Response_message_members,
  get_message_typesupport_handle_function,
  &simulation_interfaces__srv__UnloadWorld_Response__get_type_hash,
  &simulation_interfaces__srv__UnloadWorld_Response__get_type_description,
  &simulation_interfaces__srv__UnloadWorld_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simulation_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, UnloadWorld_Response)() {
  simulation_interfaces__srv__UnloadWorld_Response__rosidl_typesupport_introspection_c__UnloadWorld_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, msg, Result)();
  if (!simulation_interfaces__srv__UnloadWorld_Response__rosidl_typesupport_introspection_c__UnloadWorld_Response_message_type_support_handle.typesupport_identifier) {
    simulation_interfaces__srv__UnloadWorld_Response__rosidl_typesupport_introspection_c__UnloadWorld_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &simulation_interfaces__srv__UnloadWorld_Response__rosidl_typesupport_introspection_c__UnloadWorld_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "simulation_interfaces/srv/detail/unload_world__rosidl_typesupport_introspection_c.h"
// already included above
// #include "simulation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "simulation_interfaces/srv/detail/unload_world__functions.h"
// already included above
// #include "simulation_interfaces/srv/detail/unload_world__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "simulation_interfaces/srv/unload_world.h"
// Member `request`
// Member `response`
// already included above
// #include "simulation_interfaces/srv/detail/unload_world__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__UnloadWorld_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  simulation_interfaces__srv__UnloadWorld_Event__init(message_memory);
}

void simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__UnloadWorld_Event_fini_function(void * message_memory)
{
  simulation_interfaces__srv__UnloadWorld_Event__fini(message_memory);
}

size_t simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__size_function__UnloadWorld_Event__request(
  const void * untyped_member)
{
  const simulation_interfaces__srv__UnloadWorld_Request__Sequence * member =
    (const simulation_interfaces__srv__UnloadWorld_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__get_const_function__UnloadWorld_Event__request(
  const void * untyped_member, size_t index)
{
  const simulation_interfaces__srv__UnloadWorld_Request__Sequence * member =
    (const simulation_interfaces__srv__UnloadWorld_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__get_function__UnloadWorld_Event__request(
  void * untyped_member, size_t index)
{
  simulation_interfaces__srv__UnloadWorld_Request__Sequence * member =
    (simulation_interfaces__srv__UnloadWorld_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__fetch_function__UnloadWorld_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const simulation_interfaces__srv__UnloadWorld_Request * item =
    ((const simulation_interfaces__srv__UnloadWorld_Request *)
    simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__get_const_function__UnloadWorld_Event__request(untyped_member, index));
  simulation_interfaces__srv__UnloadWorld_Request * value =
    (simulation_interfaces__srv__UnloadWorld_Request *)(untyped_value);
  *value = *item;
}

void simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__assign_function__UnloadWorld_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  simulation_interfaces__srv__UnloadWorld_Request * item =
    ((simulation_interfaces__srv__UnloadWorld_Request *)
    simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__get_function__UnloadWorld_Event__request(untyped_member, index));
  const simulation_interfaces__srv__UnloadWorld_Request * value =
    (const simulation_interfaces__srv__UnloadWorld_Request *)(untyped_value);
  *item = *value;
}

bool simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__resize_function__UnloadWorld_Event__request(
  void * untyped_member, size_t size)
{
  simulation_interfaces__srv__UnloadWorld_Request__Sequence * member =
    (simulation_interfaces__srv__UnloadWorld_Request__Sequence *)(untyped_member);
  simulation_interfaces__srv__UnloadWorld_Request__Sequence__fini(member);
  return simulation_interfaces__srv__UnloadWorld_Request__Sequence__init(member, size);
}

size_t simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__size_function__UnloadWorld_Event__response(
  const void * untyped_member)
{
  const simulation_interfaces__srv__UnloadWorld_Response__Sequence * member =
    (const simulation_interfaces__srv__UnloadWorld_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__get_const_function__UnloadWorld_Event__response(
  const void * untyped_member, size_t index)
{
  const simulation_interfaces__srv__UnloadWorld_Response__Sequence * member =
    (const simulation_interfaces__srv__UnloadWorld_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__get_function__UnloadWorld_Event__response(
  void * untyped_member, size_t index)
{
  simulation_interfaces__srv__UnloadWorld_Response__Sequence * member =
    (simulation_interfaces__srv__UnloadWorld_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__fetch_function__UnloadWorld_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const simulation_interfaces__srv__UnloadWorld_Response * item =
    ((const simulation_interfaces__srv__UnloadWorld_Response *)
    simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__get_const_function__UnloadWorld_Event__response(untyped_member, index));
  simulation_interfaces__srv__UnloadWorld_Response * value =
    (simulation_interfaces__srv__UnloadWorld_Response *)(untyped_value);
  *value = *item;
}

void simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__assign_function__UnloadWorld_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  simulation_interfaces__srv__UnloadWorld_Response * item =
    ((simulation_interfaces__srv__UnloadWorld_Response *)
    simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__get_function__UnloadWorld_Event__response(untyped_member, index));
  const simulation_interfaces__srv__UnloadWorld_Response * value =
    (const simulation_interfaces__srv__UnloadWorld_Response *)(untyped_value);
  *item = *value;
}

bool simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__resize_function__UnloadWorld_Event__response(
  void * untyped_member, size_t size)
{
  simulation_interfaces__srv__UnloadWorld_Response__Sequence * member =
    (simulation_interfaces__srv__UnloadWorld_Response__Sequence *)(untyped_member);
  simulation_interfaces__srv__UnloadWorld_Response__Sequence__fini(member);
  return simulation_interfaces__srv__UnloadWorld_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__UnloadWorld_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__srv__UnloadWorld_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(simulation_interfaces__srv__UnloadWorld_Event, request),  // bytes offset in struct
    NULL,  // default value
    simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__size_function__UnloadWorld_Event__request,  // size() function pointer
    simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__get_const_function__UnloadWorld_Event__request,  // get_const(index) function pointer
    simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__get_function__UnloadWorld_Event__request,  // get(index) function pointer
    simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__fetch_function__UnloadWorld_Event__request,  // fetch(index, &value) function pointer
    simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__assign_function__UnloadWorld_Event__request,  // assign(index, value) function pointer
    simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__resize_function__UnloadWorld_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(simulation_interfaces__srv__UnloadWorld_Event, response),  // bytes offset in struct
    NULL,  // default value
    simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__size_function__UnloadWorld_Event__response,  // size() function pointer
    simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__get_const_function__UnloadWorld_Event__response,  // get_const(index) function pointer
    simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__get_function__UnloadWorld_Event__response,  // get(index) function pointer
    simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__fetch_function__UnloadWorld_Event__response,  // fetch(index, &value) function pointer
    simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__assign_function__UnloadWorld_Event__response,  // assign(index, value) function pointer
    simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__resize_function__UnloadWorld_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__UnloadWorld_Event_message_members = {
  "simulation_interfaces__srv",  // message namespace
  "UnloadWorld_Event",  // message name
  3,  // number of fields
  sizeof(simulation_interfaces__srv__UnloadWorld_Event),
  false,  // has_any_key_member_
  simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__UnloadWorld_Event_message_member_array,  // message members
  simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__UnloadWorld_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__UnloadWorld_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__UnloadWorld_Event_message_type_support_handle = {
  0,
  &simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__UnloadWorld_Event_message_members,
  get_message_typesupport_handle_function,
  &simulation_interfaces__srv__UnloadWorld_Event__get_type_hash,
  &simulation_interfaces__srv__UnloadWorld_Event__get_type_description,
  &simulation_interfaces__srv__UnloadWorld_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simulation_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, UnloadWorld_Event)() {
  simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__UnloadWorld_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__UnloadWorld_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, UnloadWorld_Request)();
  simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__UnloadWorld_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, UnloadWorld_Response)();
  if (!simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__UnloadWorld_Event_message_type_support_handle.typesupport_identifier) {
    simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__UnloadWorld_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__UnloadWorld_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "simulation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "simulation_interfaces/srv/detail/unload_world__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers simulation_interfaces__srv__detail__unload_world__rosidl_typesupport_introspection_c__UnloadWorld_service_members = {
  "simulation_interfaces__srv",  // service namespace
  "UnloadWorld",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // simulation_interfaces__srv__detail__unload_world__rosidl_typesupport_introspection_c__UnloadWorld_Request_message_type_support_handle,
  NULL,  // response message
  // simulation_interfaces__srv__detail__unload_world__rosidl_typesupport_introspection_c__UnloadWorld_Response_message_type_support_handle
  NULL  // event_message
  // simulation_interfaces__srv__detail__unload_world__rosidl_typesupport_introspection_c__UnloadWorld_Response_message_type_support_handle
};


static rosidl_service_type_support_t simulation_interfaces__srv__detail__unload_world__rosidl_typesupport_introspection_c__UnloadWorld_service_type_support_handle = {
  0,
  &simulation_interfaces__srv__detail__unload_world__rosidl_typesupport_introspection_c__UnloadWorld_service_members,
  get_service_typesupport_handle_function,
  &simulation_interfaces__srv__UnloadWorld_Request__rosidl_typesupport_introspection_c__UnloadWorld_Request_message_type_support_handle,
  &simulation_interfaces__srv__UnloadWorld_Response__rosidl_typesupport_introspection_c__UnloadWorld_Response_message_type_support_handle,
  &simulation_interfaces__srv__UnloadWorld_Event__rosidl_typesupport_introspection_c__UnloadWorld_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    simulation_interfaces,
    srv,
    UnloadWorld
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    simulation_interfaces,
    srv,
    UnloadWorld
  ),
  &simulation_interfaces__srv__UnloadWorld__get_type_hash,
  &simulation_interfaces__srv__UnloadWorld__get_type_description,
  &simulation_interfaces__srv__UnloadWorld__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, UnloadWorld_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, UnloadWorld_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, UnloadWorld_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simulation_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, UnloadWorld)(void) {
  if (!simulation_interfaces__srv__detail__unload_world__rosidl_typesupport_introspection_c__UnloadWorld_service_type_support_handle.typesupport_identifier) {
    simulation_interfaces__srv__detail__unload_world__rosidl_typesupport_introspection_c__UnloadWorld_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)simulation_interfaces__srv__detail__unload_world__rosidl_typesupport_introspection_c__UnloadWorld_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, UnloadWorld_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, UnloadWorld_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, UnloadWorld_Event)()->data;
  }

  return &simulation_interfaces__srv__detail__unload_world__rosidl_typesupport_introspection_c__UnloadWorld_service_type_support_handle;
}

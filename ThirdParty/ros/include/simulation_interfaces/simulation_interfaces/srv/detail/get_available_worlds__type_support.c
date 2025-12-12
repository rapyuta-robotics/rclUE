// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from simulation_interfaces:srv/GetAvailableWorlds.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "simulation_interfaces/srv/detail/get_available_worlds__rosidl_typesupport_introspection_c.h"
#include "simulation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "simulation_interfaces/srv/detail/get_available_worlds__functions.h"
#include "simulation_interfaces/srv/detail/get_available_worlds__struct.h"


// Include directives for member types
// Member `additional_sources`
#include "rosidl_runtime_c/string_functions.h"
// Member `filter`
#include "simulation_interfaces/msg/tags_filter.h"
// Member `filter`
#include "simulation_interfaces/msg/detail/tags_filter__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void simulation_interfaces__srv__GetAvailableWorlds_Request__rosidl_typesupport_introspection_c__GetAvailableWorlds_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  simulation_interfaces__srv__GetAvailableWorlds_Request__init(message_memory);
}

void simulation_interfaces__srv__GetAvailableWorlds_Request__rosidl_typesupport_introspection_c__GetAvailableWorlds_Request_fini_function(void * message_memory)
{
  simulation_interfaces__srv__GetAvailableWorlds_Request__fini(message_memory);
}

size_t simulation_interfaces__srv__GetAvailableWorlds_Request__rosidl_typesupport_introspection_c__size_function__GetAvailableWorlds_Request__additional_sources(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * simulation_interfaces__srv__GetAvailableWorlds_Request__rosidl_typesupport_introspection_c__get_const_function__GetAvailableWorlds_Request__additional_sources(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * simulation_interfaces__srv__GetAvailableWorlds_Request__rosidl_typesupport_introspection_c__get_function__GetAvailableWorlds_Request__additional_sources(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void simulation_interfaces__srv__GetAvailableWorlds_Request__rosidl_typesupport_introspection_c__fetch_function__GetAvailableWorlds_Request__additional_sources(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    simulation_interfaces__srv__GetAvailableWorlds_Request__rosidl_typesupport_introspection_c__get_const_function__GetAvailableWorlds_Request__additional_sources(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void simulation_interfaces__srv__GetAvailableWorlds_Request__rosidl_typesupport_introspection_c__assign_function__GetAvailableWorlds_Request__additional_sources(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    simulation_interfaces__srv__GetAvailableWorlds_Request__rosidl_typesupport_introspection_c__get_function__GetAvailableWorlds_Request__additional_sources(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool simulation_interfaces__srv__GetAvailableWorlds_Request__rosidl_typesupport_introspection_c__resize_function__GetAvailableWorlds_Request__additional_sources(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember simulation_interfaces__srv__GetAvailableWorlds_Request__rosidl_typesupport_introspection_c__GetAvailableWorlds_Request_message_member_array[4] = {
  {
    "additional_sources",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__srv__GetAvailableWorlds_Request, additional_sources),  // bytes offset in struct
    NULL,  // default value
    simulation_interfaces__srv__GetAvailableWorlds_Request__rosidl_typesupport_introspection_c__size_function__GetAvailableWorlds_Request__additional_sources,  // size() function pointer
    simulation_interfaces__srv__GetAvailableWorlds_Request__rosidl_typesupport_introspection_c__get_const_function__GetAvailableWorlds_Request__additional_sources,  // get_const(index) function pointer
    simulation_interfaces__srv__GetAvailableWorlds_Request__rosidl_typesupport_introspection_c__get_function__GetAvailableWorlds_Request__additional_sources,  // get(index) function pointer
    simulation_interfaces__srv__GetAvailableWorlds_Request__rosidl_typesupport_introspection_c__fetch_function__GetAvailableWorlds_Request__additional_sources,  // fetch(index, &value) function pointer
    simulation_interfaces__srv__GetAvailableWorlds_Request__rosidl_typesupport_introspection_c__assign_function__GetAvailableWorlds_Request__additional_sources,  // assign(index, value) function pointer
    simulation_interfaces__srv__GetAvailableWorlds_Request__rosidl_typesupport_introspection_c__resize_function__GetAvailableWorlds_Request__additional_sources  // resize(index) function pointer
  },
  {
    "filter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__srv__GetAvailableWorlds_Request, filter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "offline_only",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__srv__GetAvailableWorlds_Request, offline_only),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "continue_on_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__srv__GetAvailableWorlds_Request, continue_on_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers simulation_interfaces__srv__GetAvailableWorlds_Request__rosidl_typesupport_introspection_c__GetAvailableWorlds_Request_message_members = {
  "simulation_interfaces__srv",  // message namespace
  "GetAvailableWorlds_Request",  // message name
  4,  // number of fields
  sizeof(simulation_interfaces__srv__GetAvailableWorlds_Request),
  simulation_interfaces__srv__GetAvailableWorlds_Request__rosidl_typesupport_introspection_c__GetAvailableWorlds_Request_message_member_array,  // message members
  simulation_interfaces__srv__GetAvailableWorlds_Request__rosidl_typesupport_introspection_c__GetAvailableWorlds_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  simulation_interfaces__srv__GetAvailableWorlds_Request__rosidl_typesupport_introspection_c__GetAvailableWorlds_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t simulation_interfaces__srv__GetAvailableWorlds_Request__rosidl_typesupport_introspection_c__GetAvailableWorlds_Request_message_type_support_handle = {
  0,
  &simulation_interfaces__srv__GetAvailableWorlds_Request__rosidl_typesupport_introspection_c__GetAvailableWorlds_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simulation_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, GetAvailableWorlds_Request)() {
  simulation_interfaces__srv__GetAvailableWorlds_Request__rosidl_typesupport_introspection_c__GetAvailableWorlds_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, msg, TagsFilter)();
  if (!simulation_interfaces__srv__GetAvailableWorlds_Request__rosidl_typesupport_introspection_c__GetAvailableWorlds_Request_message_type_support_handle.typesupport_identifier) {
    simulation_interfaces__srv__GetAvailableWorlds_Request__rosidl_typesupport_introspection_c__GetAvailableWorlds_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &simulation_interfaces__srv__GetAvailableWorlds_Request__rosidl_typesupport_introspection_c__GetAvailableWorlds_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "simulation_interfaces/srv/detail/get_available_worlds__rosidl_typesupport_introspection_c.h"
// already included above
// #include "simulation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "simulation_interfaces/srv/detail/get_available_worlds__functions.h"
// already included above
// #include "simulation_interfaces/srv/detail/get_available_worlds__struct.h"


// Include directives for member types
// Member `result`
#include "simulation_interfaces/msg/result.h"
// Member `result`
#include "simulation_interfaces/msg/detail/result__rosidl_typesupport_introspection_c.h"
// Member `worlds`
#include "simulation_interfaces/msg/world_resource.h"
// Member `worlds`
#include "simulation_interfaces/msg/detail/world_resource__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void simulation_interfaces__srv__GetAvailableWorlds_Response__rosidl_typesupport_introspection_c__GetAvailableWorlds_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  simulation_interfaces__srv__GetAvailableWorlds_Response__init(message_memory);
}

void simulation_interfaces__srv__GetAvailableWorlds_Response__rosidl_typesupport_introspection_c__GetAvailableWorlds_Response_fini_function(void * message_memory)
{
  simulation_interfaces__srv__GetAvailableWorlds_Response__fini(message_memory);
}

size_t simulation_interfaces__srv__GetAvailableWorlds_Response__rosidl_typesupport_introspection_c__size_function__GetAvailableWorlds_Response__worlds(
  const void * untyped_member)
{
  const simulation_interfaces__msg__WorldResource__Sequence * member =
    (const simulation_interfaces__msg__WorldResource__Sequence *)(untyped_member);
  return member->size;
}

const void * simulation_interfaces__srv__GetAvailableWorlds_Response__rosidl_typesupport_introspection_c__get_const_function__GetAvailableWorlds_Response__worlds(
  const void * untyped_member, size_t index)
{
  const simulation_interfaces__msg__WorldResource__Sequence * member =
    (const simulation_interfaces__msg__WorldResource__Sequence *)(untyped_member);
  return &member->data[index];
}

void * simulation_interfaces__srv__GetAvailableWorlds_Response__rosidl_typesupport_introspection_c__get_function__GetAvailableWorlds_Response__worlds(
  void * untyped_member, size_t index)
{
  simulation_interfaces__msg__WorldResource__Sequence * member =
    (simulation_interfaces__msg__WorldResource__Sequence *)(untyped_member);
  return &member->data[index];
}

void simulation_interfaces__srv__GetAvailableWorlds_Response__rosidl_typesupport_introspection_c__fetch_function__GetAvailableWorlds_Response__worlds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const simulation_interfaces__msg__WorldResource * item =
    ((const simulation_interfaces__msg__WorldResource *)
    simulation_interfaces__srv__GetAvailableWorlds_Response__rosidl_typesupport_introspection_c__get_const_function__GetAvailableWorlds_Response__worlds(untyped_member, index));
  simulation_interfaces__msg__WorldResource * value =
    (simulation_interfaces__msg__WorldResource *)(untyped_value);
  *value = *item;
}

void simulation_interfaces__srv__GetAvailableWorlds_Response__rosidl_typesupport_introspection_c__assign_function__GetAvailableWorlds_Response__worlds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  simulation_interfaces__msg__WorldResource * item =
    ((simulation_interfaces__msg__WorldResource *)
    simulation_interfaces__srv__GetAvailableWorlds_Response__rosidl_typesupport_introspection_c__get_function__GetAvailableWorlds_Response__worlds(untyped_member, index));
  const simulation_interfaces__msg__WorldResource * value =
    (const simulation_interfaces__msg__WorldResource *)(untyped_value);
  *item = *value;
}

bool simulation_interfaces__srv__GetAvailableWorlds_Response__rosidl_typesupport_introspection_c__resize_function__GetAvailableWorlds_Response__worlds(
  void * untyped_member, size_t size)
{
  simulation_interfaces__msg__WorldResource__Sequence * member =
    (simulation_interfaces__msg__WorldResource__Sequence *)(untyped_member);
  simulation_interfaces__msg__WorldResource__Sequence__fini(member);
  return simulation_interfaces__msg__WorldResource__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember simulation_interfaces__srv__GetAvailableWorlds_Response__rosidl_typesupport_introspection_c__GetAvailableWorlds_Response_message_member_array[2] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__srv__GetAvailableWorlds_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "worlds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__srv__GetAvailableWorlds_Response, worlds),  // bytes offset in struct
    NULL,  // default value
    simulation_interfaces__srv__GetAvailableWorlds_Response__rosidl_typesupport_introspection_c__size_function__GetAvailableWorlds_Response__worlds,  // size() function pointer
    simulation_interfaces__srv__GetAvailableWorlds_Response__rosidl_typesupport_introspection_c__get_const_function__GetAvailableWorlds_Response__worlds,  // get_const(index) function pointer
    simulation_interfaces__srv__GetAvailableWorlds_Response__rosidl_typesupport_introspection_c__get_function__GetAvailableWorlds_Response__worlds,  // get(index) function pointer
    simulation_interfaces__srv__GetAvailableWorlds_Response__rosidl_typesupport_introspection_c__fetch_function__GetAvailableWorlds_Response__worlds,  // fetch(index, &value) function pointer
    simulation_interfaces__srv__GetAvailableWorlds_Response__rosidl_typesupport_introspection_c__assign_function__GetAvailableWorlds_Response__worlds,  // assign(index, value) function pointer
    simulation_interfaces__srv__GetAvailableWorlds_Response__rosidl_typesupport_introspection_c__resize_function__GetAvailableWorlds_Response__worlds  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers simulation_interfaces__srv__GetAvailableWorlds_Response__rosidl_typesupport_introspection_c__GetAvailableWorlds_Response_message_members = {
  "simulation_interfaces__srv",  // message namespace
  "GetAvailableWorlds_Response",  // message name
  2,  // number of fields
  sizeof(simulation_interfaces__srv__GetAvailableWorlds_Response),
  simulation_interfaces__srv__GetAvailableWorlds_Response__rosidl_typesupport_introspection_c__GetAvailableWorlds_Response_message_member_array,  // message members
  simulation_interfaces__srv__GetAvailableWorlds_Response__rosidl_typesupport_introspection_c__GetAvailableWorlds_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  simulation_interfaces__srv__GetAvailableWorlds_Response__rosidl_typesupport_introspection_c__GetAvailableWorlds_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t simulation_interfaces__srv__GetAvailableWorlds_Response__rosidl_typesupport_introspection_c__GetAvailableWorlds_Response_message_type_support_handle = {
  0,
  &simulation_interfaces__srv__GetAvailableWorlds_Response__rosidl_typesupport_introspection_c__GetAvailableWorlds_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simulation_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, GetAvailableWorlds_Response)() {
  simulation_interfaces__srv__GetAvailableWorlds_Response__rosidl_typesupport_introspection_c__GetAvailableWorlds_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, msg, Result)();
  simulation_interfaces__srv__GetAvailableWorlds_Response__rosidl_typesupport_introspection_c__GetAvailableWorlds_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, msg, WorldResource)();
  if (!simulation_interfaces__srv__GetAvailableWorlds_Response__rosidl_typesupport_introspection_c__GetAvailableWorlds_Response_message_type_support_handle.typesupport_identifier) {
    simulation_interfaces__srv__GetAvailableWorlds_Response__rosidl_typesupport_introspection_c__GetAvailableWorlds_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &simulation_interfaces__srv__GetAvailableWorlds_Response__rosidl_typesupport_introspection_c__GetAvailableWorlds_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "simulation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "simulation_interfaces/srv/detail/get_available_worlds__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers simulation_interfaces__srv__detail__get_available_worlds__rosidl_typesupport_introspection_c__GetAvailableWorlds_service_members = {
  "simulation_interfaces__srv",  // service namespace
  "GetAvailableWorlds",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // simulation_interfaces__srv__detail__get_available_worlds__rosidl_typesupport_introspection_c__GetAvailableWorlds_Request_message_type_support_handle,
  NULL  // response message
  // simulation_interfaces__srv__detail__get_available_worlds__rosidl_typesupport_introspection_c__GetAvailableWorlds_Response_message_type_support_handle
};

static rosidl_service_type_support_t simulation_interfaces__srv__detail__get_available_worlds__rosidl_typesupport_introspection_c__GetAvailableWorlds_service_type_support_handle = {
  0,
  &simulation_interfaces__srv__detail__get_available_worlds__rosidl_typesupport_introspection_c__GetAvailableWorlds_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, GetAvailableWorlds_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, GetAvailableWorlds_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simulation_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, GetAvailableWorlds)() {
  if (!simulation_interfaces__srv__detail__get_available_worlds__rosidl_typesupport_introspection_c__GetAvailableWorlds_service_type_support_handle.typesupport_identifier) {
    simulation_interfaces__srv__detail__get_available_worlds__rosidl_typesupport_introspection_c__GetAvailableWorlds_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)simulation_interfaces__srv__detail__get_available_worlds__rosidl_typesupport_introspection_c__GetAvailableWorlds_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, GetAvailableWorlds_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, GetAvailableWorlds_Response)()->data;
  }

  return &simulation_interfaces__srv__detail__get_available_worlds__rosidl_typesupport_introspection_c__GetAvailableWorlds_service_type_support_handle;
}

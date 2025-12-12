// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from simulation_interfaces:srv/GetSpawnables.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "simulation_interfaces/srv/detail/get_spawnables__rosidl_typesupport_introspection_c.h"
#include "simulation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "simulation_interfaces/srv/detail/get_spawnables__functions.h"
#include "simulation_interfaces/srv/detail/get_spawnables__struct.h"


// Include directives for member types
// Member `sources`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void simulation_interfaces__srv__GetSpawnables_Request__rosidl_typesupport_introspection_c__GetSpawnables_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  simulation_interfaces__srv__GetSpawnables_Request__init(message_memory);
}

void simulation_interfaces__srv__GetSpawnables_Request__rosidl_typesupport_introspection_c__GetSpawnables_Request_fini_function(void * message_memory)
{
  simulation_interfaces__srv__GetSpawnables_Request__fini(message_memory);
}

size_t simulation_interfaces__srv__GetSpawnables_Request__rosidl_typesupport_introspection_c__size_function__GetSpawnables_Request__sources(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * simulation_interfaces__srv__GetSpawnables_Request__rosidl_typesupport_introspection_c__get_const_function__GetSpawnables_Request__sources(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * simulation_interfaces__srv__GetSpawnables_Request__rosidl_typesupport_introspection_c__get_function__GetSpawnables_Request__sources(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void simulation_interfaces__srv__GetSpawnables_Request__rosidl_typesupport_introspection_c__fetch_function__GetSpawnables_Request__sources(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    simulation_interfaces__srv__GetSpawnables_Request__rosidl_typesupport_introspection_c__get_const_function__GetSpawnables_Request__sources(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void simulation_interfaces__srv__GetSpawnables_Request__rosidl_typesupport_introspection_c__assign_function__GetSpawnables_Request__sources(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    simulation_interfaces__srv__GetSpawnables_Request__rosidl_typesupport_introspection_c__get_function__GetSpawnables_Request__sources(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool simulation_interfaces__srv__GetSpawnables_Request__rosidl_typesupport_introspection_c__resize_function__GetSpawnables_Request__sources(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember simulation_interfaces__srv__GetSpawnables_Request__rosidl_typesupport_introspection_c__GetSpawnables_Request_message_member_array[1] = {
  {
    "sources",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__srv__GetSpawnables_Request, sources),  // bytes offset in struct
    NULL,  // default value
    simulation_interfaces__srv__GetSpawnables_Request__rosidl_typesupport_introspection_c__size_function__GetSpawnables_Request__sources,  // size() function pointer
    simulation_interfaces__srv__GetSpawnables_Request__rosidl_typesupport_introspection_c__get_const_function__GetSpawnables_Request__sources,  // get_const(index) function pointer
    simulation_interfaces__srv__GetSpawnables_Request__rosidl_typesupport_introspection_c__get_function__GetSpawnables_Request__sources,  // get(index) function pointer
    simulation_interfaces__srv__GetSpawnables_Request__rosidl_typesupport_introspection_c__fetch_function__GetSpawnables_Request__sources,  // fetch(index, &value) function pointer
    simulation_interfaces__srv__GetSpawnables_Request__rosidl_typesupport_introspection_c__assign_function__GetSpawnables_Request__sources,  // assign(index, value) function pointer
    simulation_interfaces__srv__GetSpawnables_Request__rosidl_typesupport_introspection_c__resize_function__GetSpawnables_Request__sources  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers simulation_interfaces__srv__GetSpawnables_Request__rosidl_typesupport_introspection_c__GetSpawnables_Request_message_members = {
  "simulation_interfaces__srv",  // message namespace
  "GetSpawnables_Request",  // message name
  1,  // number of fields
  sizeof(simulation_interfaces__srv__GetSpawnables_Request),
  simulation_interfaces__srv__GetSpawnables_Request__rosidl_typesupport_introspection_c__GetSpawnables_Request_message_member_array,  // message members
  simulation_interfaces__srv__GetSpawnables_Request__rosidl_typesupport_introspection_c__GetSpawnables_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  simulation_interfaces__srv__GetSpawnables_Request__rosidl_typesupport_introspection_c__GetSpawnables_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t simulation_interfaces__srv__GetSpawnables_Request__rosidl_typesupport_introspection_c__GetSpawnables_Request_message_type_support_handle = {
  0,
  &simulation_interfaces__srv__GetSpawnables_Request__rosidl_typesupport_introspection_c__GetSpawnables_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simulation_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, GetSpawnables_Request)() {
  if (!simulation_interfaces__srv__GetSpawnables_Request__rosidl_typesupport_introspection_c__GetSpawnables_Request_message_type_support_handle.typesupport_identifier) {
    simulation_interfaces__srv__GetSpawnables_Request__rosidl_typesupport_introspection_c__GetSpawnables_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &simulation_interfaces__srv__GetSpawnables_Request__rosidl_typesupport_introspection_c__GetSpawnables_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "simulation_interfaces/srv/detail/get_spawnables__rosidl_typesupport_introspection_c.h"
// already included above
// #include "simulation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "simulation_interfaces/srv/detail/get_spawnables__functions.h"
// already included above
// #include "simulation_interfaces/srv/detail/get_spawnables__struct.h"


// Include directives for member types
// Member `result`
#include "simulation_interfaces/msg/result.h"
// Member `result`
#include "simulation_interfaces/msg/detail/result__rosidl_typesupport_introspection_c.h"
// Member `spawnables`
#include "simulation_interfaces/msg/spawnable.h"
// Member `spawnables`
#include "simulation_interfaces/msg/detail/spawnable__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void simulation_interfaces__srv__GetSpawnables_Response__rosidl_typesupport_introspection_c__GetSpawnables_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  simulation_interfaces__srv__GetSpawnables_Response__init(message_memory);
}

void simulation_interfaces__srv__GetSpawnables_Response__rosidl_typesupport_introspection_c__GetSpawnables_Response_fini_function(void * message_memory)
{
  simulation_interfaces__srv__GetSpawnables_Response__fini(message_memory);
}

size_t simulation_interfaces__srv__GetSpawnables_Response__rosidl_typesupport_introspection_c__size_function__GetSpawnables_Response__spawnables(
  const void * untyped_member)
{
  const simulation_interfaces__msg__Spawnable__Sequence * member =
    (const simulation_interfaces__msg__Spawnable__Sequence *)(untyped_member);
  return member->size;
}

const void * simulation_interfaces__srv__GetSpawnables_Response__rosidl_typesupport_introspection_c__get_const_function__GetSpawnables_Response__spawnables(
  const void * untyped_member, size_t index)
{
  const simulation_interfaces__msg__Spawnable__Sequence * member =
    (const simulation_interfaces__msg__Spawnable__Sequence *)(untyped_member);
  return &member->data[index];
}

void * simulation_interfaces__srv__GetSpawnables_Response__rosidl_typesupport_introspection_c__get_function__GetSpawnables_Response__spawnables(
  void * untyped_member, size_t index)
{
  simulation_interfaces__msg__Spawnable__Sequence * member =
    (simulation_interfaces__msg__Spawnable__Sequence *)(untyped_member);
  return &member->data[index];
}

void simulation_interfaces__srv__GetSpawnables_Response__rosidl_typesupport_introspection_c__fetch_function__GetSpawnables_Response__spawnables(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const simulation_interfaces__msg__Spawnable * item =
    ((const simulation_interfaces__msg__Spawnable *)
    simulation_interfaces__srv__GetSpawnables_Response__rosidl_typesupport_introspection_c__get_const_function__GetSpawnables_Response__spawnables(untyped_member, index));
  simulation_interfaces__msg__Spawnable * value =
    (simulation_interfaces__msg__Spawnable *)(untyped_value);
  *value = *item;
}

void simulation_interfaces__srv__GetSpawnables_Response__rosidl_typesupport_introspection_c__assign_function__GetSpawnables_Response__spawnables(
  void * untyped_member, size_t index, const void * untyped_value)
{
  simulation_interfaces__msg__Spawnable * item =
    ((simulation_interfaces__msg__Spawnable *)
    simulation_interfaces__srv__GetSpawnables_Response__rosidl_typesupport_introspection_c__get_function__GetSpawnables_Response__spawnables(untyped_member, index));
  const simulation_interfaces__msg__Spawnable * value =
    (const simulation_interfaces__msg__Spawnable *)(untyped_value);
  *item = *value;
}

bool simulation_interfaces__srv__GetSpawnables_Response__rosidl_typesupport_introspection_c__resize_function__GetSpawnables_Response__spawnables(
  void * untyped_member, size_t size)
{
  simulation_interfaces__msg__Spawnable__Sequence * member =
    (simulation_interfaces__msg__Spawnable__Sequence *)(untyped_member);
  simulation_interfaces__msg__Spawnable__Sequence__fini(member);
  return simulation_interfaces__msg__Spawnable__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember simulation_interfaces__srv__GetSpawnables_Response__rosidl_typesupport_introspection_c__GetSpawnables_Response_message_member_array[2] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__srv__GetSpawnables_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "spawnables",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__srv__GetSpawnables_Response, spawnables),  // bytes offset in struct
    NULL,  // default value
    simulation_interfaces__srv__GetSpawnables_Response__rosidl_typesupport_introspection_c__size_function__GetSpawnables_Response__spawnables,  // size() function pointer
    simulation_interfaces__srv__GetSpawnables_Response__rosidl_typesupport_introspection_c__get_const_function__GetSpawnables_Response__spawnables,  // get_const(index) function pointer
    simulation_interfaces__srv__GetSpawnables_Response__rosidl_typesupport_introspection_c__get_function__GetSpawnables_Response__spawnables,  // get(index) function pointer
    simulation_interfaces__srv__GetSpawnables_Response__rosidl_typesupport_introspection_c__fetch_function__GetSpawnables_Response__spawnables,  // fetch(index, &value) function pointer
    simulation_interfaces__srv__GetSpawnables_Response__rosidl_typesupport_introspection_c__assign_function__GetSpawnables_Response__spawnables,  // assign(index, value) function pointer
    simulation_interfaces__srv__GetSpawnables_Response__rosidl_typesupport_introspection_c__resize_function__GetSpawnables_Response__spawnables  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers simulation_interfaces__srv__GetSpawnables_Response__rosidl_typesupport_introspection_c__GetSpawnables_Response_message_members = {
  "simulation_interfaces__srv",  // message namespace
  "GetSpawnables_Response",  // message name
  2,  // number of fields
  sizeof(simulation_interfaces__srv__GetSpawnables_Response),
  simulation_interfaces__srv__GetSpawnables_Response__rosidl_typesupport_introspection_c__GetSpawnables_Response_message_member_array,  // message members
  simulation_interfaces__srv__GetSpawnables_Response__rosidl_typesupport_introspection_c__GetSpawnables_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  simulation_interfaces__srv__GetSpawnables_Response__rosidl_typesupport_introspection_c__GetSpawnables_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t simulation_interfaces__srv__GetSpawnables_Response__rosidl_typesupport_introspection_c__GetSpawnables_Response_message_type_support_handle = {
  0,
  &simulation_interfaces__srv__GetSpawnables_Response__rosidl_typesupport_introspection_c__GetSpawnables_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simulation_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, GetSpawnables_Response)() {
  simulation_interfaces__srv__GetSpawnables_Response__rosidl_typesupport_introspection_c__GetSpawnables_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, msg, Result)();
  simulation_interfaces__srv__GetSpawnables_Response__rosidl_typesupport_introspection_c__GetSpawnables_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, msg, Spawnable)();
  if (!simulation_interfaces__srv__GetSpawnables_Response__rosidl_typesupport_introspection_c__GetSpawnables_Response_message_type_support_handle.typesupport_identifier) {
    simulation_interfaces__srv__GetSpawnables_Response__rosidl_typesupport_introspection_c__GetSpawnables_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &simulation_interfaces__srv__GetSpawnables_Response__rosidl_typesupport_introspection_c__GetSpawnables_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "simulation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "simulation_interfaces/srv/detail/get_spawnables__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers simulation_interfaces__srv__detail__get_spawnables__rosidl_typesupport_introspection_c__GetSpawnables_service_members = {
  "simulation_interfaces__srv",  // service namespace
  "GetSpawnables",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // simulation_interfaces__srv__detail__get_spawnables__rosidl_typesupport_introspection_c__GetSpawnables_Request_message_type_support_handle,
  NULL  // response message
  // simulation_interfaces__srv__detail__get_spawnables__rosidl_typesupport_introspection_c__GetSpawnables_Response_message_type_support_handle
};

static rosidl_service_type_support_t simulation_interfaces__srv__detail__get_spawnables__rosidl_typesupport_introspection_c__GetSpawnables_service_type_support_handle = {
  0,
  &simulation_interfaces__srv__detail__get_spawnables__rosidl_typesupport_introspection_c__GetSpawnables_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, GetSpawnables_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, GetSpawnables_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simulation_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, GetSpawnables)() {
  if (!simulation_interfaces__srv__detail__get_spawnables__rosidl_typesupport_introspection_c__GetSpawnables_service_type_support_handle.typesupport_identifier) {
    simulation_interfaces__srv__detail__get_spawnables__rosidl_typesupport_introspection_c__GetSpawnables_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)simulation_interfaces__srv__detail__get_spawnables__rosidl_typesupport_introspection_c__GetSpawnables_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, GetSpawnables_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, GetSpawnables_Response)()->data;
  }

  return &simulation_interfaces__srv__detail__get_spawnables__rosidl_typesupport_introspection_c__GetSpawnables_service_type_support_handle;
}

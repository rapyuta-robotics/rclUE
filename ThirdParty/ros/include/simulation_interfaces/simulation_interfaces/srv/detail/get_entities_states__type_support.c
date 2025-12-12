// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from simulation_interfaces:srv/GetEntitiesStates.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "simulation_interfaces/srv/detail/get_entities_states__rosidl_typesupport_introspection_c.h"
#include "simulation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "simulation_interfaces/srv/detail/get_entities_states__functions.h"
#include "simulation_interfaces/srv/detail/get_entities_states__struct.h"


// Include directives for member types
// Member `filters`
#include "simulation_interfaces/msg/entity_filters.h"
// Member `filters`
#include "simulation_interfaces/msg/detail/entity_filters__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void simulation_interfaces__srv__GetEntitiesStates_Request__rosidl_typesupport_introspection_c__GetEntitiesStates_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  simulation_interfaces__srv__GetEntitiesStates_Request__init(message_memory);
}

void simulation_interfaces__srv__GetEntitiesStates_Request__rosidl_typesupport_introspection_c__GetEntitiesStates_Request_fini_function(void * message_memory)
{
  simulation_interfaces__srv__GetEntitiesStates_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember simulation_interfaces__srv__GetEntitiesStates_Request__rosidl_typesupport_introspection_c__GetEntitiesStates_Request_message_member_array[1] = {
  {
    "filters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__srv__GetEntitiesStates_Request, filters),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers simulation_interfaces__srv__GetEntitiesStates_Request__rosidl_typesupport_introspection_c__GetEntitiesStates_Request_message_members = {
  "simulation_interfaces__srv",  // message namespace
  "GetEntitiesStates_Request",  // message name
  1,  // number of fields
  sizeof(simulation_interfaces__srv__GetEntitiesStates_Request),
  simulation_interfaces__srv__GetEntitiesStates_Request__rosidl_typesupport_introspection_c__GetEntitiesStates_Request_message_member_array,  // message members
  simulation_interfaces__srv__GetEntitiesStates_Request__rosidl_typesupport_introspection_c__GetEntitiesStates_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  simulation_interfaces__srv__GetEntitiesStates_Request__rosidl_typesupport_introspection_c__GetEntitiesStates_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t simulation_interfaces__srv__GetEntitiesStates_Request__rosidl_typesupport_introspection_c__GetEntitiesStates_Request_message_type_support_handle = {
  0,
  &simulation_interfaces__srv__GetEntitiesStates_Request__rosidl_typesupport_introspection_c__GetEntitiesStates_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simulation_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, GetEntitiesStates_Request)() {
  simulation_interfaces__srv__GetEntitiesStates_Request__rosidl_typesupport_introspection_c__GetEntitiesStates_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, msg, EntityFilters)();
  if (!simulation_interfaces__srv__GetEntitiesStates_Request__rosidl_typesupport_introspection_c__GetEntitiesStates_Request_message_type_support_handle.typesupport_identifier) {
    simulation_interfaces__srv__GetEntitiesStates_Request__rosidl_typesupport_introspection_c__GetEntitiesStates_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &simulation_interfaces__srv__GetEntitiesStates_Request__rosidl_typesupport_introspection_c__GetEntitiesStates_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "simulation_interfaces/srv/detail/get_entities_states__rosidl_typesupport_introspection_c.h"
// already included above
// #include "simulation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "simulation_interfaces/srv/detail/get_entities_states__functions.h"
// already included above
// #include "simulation_interfaces/srv/detail/get_entities_states__struct.h"


// Include directives for member types
// Member `result`
#include "simulation_interfaces/msg/result.h"
// Member `result`
#include "simulation_interfaces/msg/detail/result__rosidl_typesupport_introspection_c.h"
// Member `entities`
#include "rosidl_runtime_c/string_functions.h"
// Member `states`
#include "simulation_interfaces/msg/entity_state.h"
// Member `states`
#include "simulation_interfaces/msg/detail/entity_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__GetEntitiesStates_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  simulation_interfaces__srv__GetEntitiesStates_Response__init(message_memory);
}

void simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__GetEntitiesStates_Response_fini_function(void * message_memory)
{
  simulation_interfaces__srv__GetEntitiesStates_Response__fini(message_memory);
}

size_t simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__size_function__GetEntitiesStates_Response__entities(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__get_const_function__GetEntitiesStates_Response__entities(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__get_function__GetEntitiesStates_Response__entities(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__fetch_function__GetEntitiesStates_Response__entities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__get_const_function__GetEntitiesStates_Response__entities(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__assign_function__GetEntitiesStates_Response__entities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__get_function__GetEntitiesStates_Response__entities(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__resize_function__GetEntitiesStates_Response__entities(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__size_function__GetEntitiesStates_Response__states(
  const void * untyped_member)
{
  const simulation_interfaces__msg__EntityState__Sequence * member =
    (const simulation_interfaces__msg__EntityState__Sequence *)(untyped_member);
  return member->size;
}

const void * simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__get_const_function__GetEntitiesStates_Response__states(
  const void * untyped_member, size_t index)
{
  const simulation_interfaces__msg__EntityState__Sequence * member =
    (const simulation_interfaces__msg__EntityState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__get_function__GetEntitiesStates_Response__states(
  void * untyped_member, size_t index)
{
  simulation_interfaces__msg__EntityState__Sequence * member =
    (simulation_interfaces__msg__EntityState__Sequence *)(untyped_member);
  return &member->data[index];
}

void simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__fetch_function__GetEntitiesStates_Response__states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const simulation_interfaces__msg__EntityState * item =
    ((const simulation_interfaces__msg__EntityState *)
    simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__get_const_function__GetEntitiesStates_Response__states(untyped_member, index));
  simulation_interfaces__msg__EntityState * value =
    (simulation_interfaces__msg__EntityState *)(untyped_value);
  *value = *item;
}

void simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__assign_function__GetEntitiesStates_Response__states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  simulation_interfaces__msg__EntityState * item =
    ((simulation_interfaces__msg__EntityState *)
    simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__get_function__GetEntitiesStates_Response__states(untyped_member, index));
  const simulation_interfaces__msg__EntityState * value =
    (const simulation_interfaces__msg__EntityState *)(untyped_value);
  *item = *value;
}

bool simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__resize_function__GetEntitiesStates_Response__states(
  void * untyped_member, size_t size)
{
  simulation_interfaces__msg__EntityState__Sequence * member =
    (simulation_interfaces__msg__EntityState__Sequence *)(untyped_member);
  simulation_interfaces__msg__EntityState__Sequence__fini(member);
  return simulation_interfaces__msg__EntityState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__GetEntitiesStates_Response_message_member_array[3] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__srv__GetEntitiesStates_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "entities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__srv__GetEntitiesStates_Response, entities),  // bytes offset in struct
    NULL,  // default value
    simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__size_function__GetEntitiesStates_Response__entities,  // size() function pointer
    simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__get_const_function__GetEntitiesStates_Response__entities,  // get_const(index) function pointer
    simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__get_function__GetEntitiesStates_Response__entities,  // get(index) function pointer
    simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__fetch_function__GetEntitiesStates_Response__entities,  // fetch(index, &value) function pointer
    simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__assign_function__GetEntitiesStates_Response__entities,  // assign(index, value) function pointer
    simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__resize_function__GetEntitiesStates_Response__entities  // resize(index) function pointer
  },
  {
    "states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__srv__GetEntitiesStates_Response, states),  // bytes offset in struct
    NULL,  // default value
    simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__size_function__GetEntitiesStates_Response__states,  // size() function pointer
    simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__get_const_function__GetEntitiesStates_Response__states,  // get_const(index) function pointer
    simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__get_function__GetEntitiesStates_Response__states,  // get(index) function pointer
    simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__fetch_function__GetEntitiesStates_Response__states,  // fetch(index, &value) function pointer
    simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__assign_function__GetEntitiesStates_Response__states,  // assign(index, value) function pointer
    simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__resize_function__GetEntitiesStates_Response__states  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__GetEntitiesStates_Response_message_members = {
  "simulation_interfaces__srv",  // message namespace
  "GetEntitiesStates_Response",  // message name
  3,  // number of fields
  sizeof(simulation_interfaces__srv__GetEntitiesStates_Response),
  simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__GetEntitiesStates_Response_message_member_array,  // message members
  simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__GetEntitiesStates_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__GetEntitiesStates_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__GetEntitiesStates_Response_message_type_support_handle = {
  0,
  &simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__GetEntitiesStates_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simulation_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, GetEntitiesStates_Response)() {
  simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__GetEntitiesStates_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, msg, Result)();
  simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__GetEntitiesStates_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, msg, EntityState)();
  if (!simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__GetEntitiesStates_Response_message_type_support_handle.typesupport_identifier) {
    simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__GetEntitiesStates_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &simulation_interfaces__srv__GetEntitiesStates_Response__rosidl_typesupport_introspection_c__GetEntitiesStates_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "simulation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "simulation_interfaces/srv/detail/get_entities_states__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers simulation_interfaces__srv__detail__get_entities_states__rosidl_typesupport_introspection_c__GetEntitiesStates_service_members = {
  "simulation_interfaces__srv",  // service namespace
  "GetEntitiesStates",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // simulation_interfaces__srv__detail__get_entities_states__rosidl_typesupport_introspection_c__GetEntitiesStates_Request_message_type_support_handle,
  NULL  // response message
  // simulation_interfaces__srv__detail__get_entities_states__rosidl_typesupport_introspection_c__GetEntitiesStates_Response_message_type_support_handle
};

static rosidl_service_type_support_t simulation_interfaces__srv__detail__get_entities_states__rosidl_typesupport_introspection_c__GetEntitiesStates_service_type_support_handle = {
  0,
  &simulation_interfaces__srv__detail__get_entities_states__rosidl_typesupport_introspection_c__GetEntitiesStates_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, GetEntitiesStates_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, GetEntitiesStates_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simulation_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, GetEntitiesStates)() {
  if (!simulation_interfaces__srv__detail__get_entities_states__rosidl_typesupport_introspection_c__GetEntitiesStates_service_type_support_handle.typesupport_identifier) {
    simulation_interfaces__srv__detail__get_entities_states__rosidl_typesupport_introspection_c__GetEntitiesStates_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)simulation_interfaces__srv__detail__get_entities_states__rosidl_typesupport_introspection_c__GetEntitiesStates_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, GetEntitiesStates_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, GetEntitiesStates_Response)()->data;
  }

  return &simulation_interfaces__srv__detail__get_entities_states__rosidl_typesupport_introspection_c__GetEntitiesStates_service_type_support_handle;
}

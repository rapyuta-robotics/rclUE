// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from simulation_interfaces:msg/EntityInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "simulation_interfaces/msg/detail/entity_info__rosidl_typesupport_introspection_c.h"
#include "simulation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "simulation_interfaces/msg/detail/entity_info__functions.h"
#include "simulation_interfaces/msg/detail/entity_info__struct.h"


// Include directives for member types
// Member `category`
#include "simulation_interfaces/msg/entity_category.h"
// Member `category`
#include "simulation_interfaces/msg/detail/entity_category__rosidl_typesupport_introspection_c.h"
// Member `description`
// Member `tags`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void simulation_interfaces__msg__EntityInfo__rosidl_typesupport_introspection_c__EntityInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  simulation_interfaces__msg__EntityInfo__init(message_memory);
}

void simulation_interfaces__msg__EntityInfo__rosidl_typesupport_introspection_c__EntityInfo_fini_function(void * message_memory)
{
  simulation_interfaces__msg__EntityInfo__fini(message_memory);
}

size_t simulation_interfaces__msg__EntityInfo__rosidl_typesupport_introspection_c__size_function__EntityInfo__tags(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * simulation_interfaces__msg__EntityInfo__rosidl_typesupport_introspection_c__get_const_function__EntityInfo__tags(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * simulation_interfaces__msg__EntityInfo__rosidl_typesupport_introspection_c__get_function__EntityInfo__tags(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void simulation_interfaces__msg__EntityInfo__rosidl_typesupport_introspection_c__fetch_function__EntityInfo__tags(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    simulation_interfaces__msg__EntityInfo__rosidl_typesupport_introspection_c__get_const_function__EntityInfo__tags(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void simulation_interfaces__msg__EntityInfo__rosidl_typesupport_introspection_c__assign_function__EntityInfo__tags(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    simulation_interfaces__msg__EntityInfo__rosidl_typesupport_introspection_c__get_function__EntityInfo__tags(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool simulation_interfaces__msg__EntityInfo__rosidl_typesupport_introspection_c__resize_function__EntityInfo__tags(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember simulation_interfaces__msg__EntityInfo__rosidl_typesupport_introspection_c__EntityInfo_message_member_array[3] = {
  {
    "category",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__msg__EntityInfo, category),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "description",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__msg__EntityInfo, description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__msg__EntityInfo, tags),  // bytes offset in struct
    NULL,  // default value
    simulation_interfaces__msg__EntityInfo__rosidl_typesupport_introspection_c__size_function__EntityInfo__tags,  // size() function pointer
    simulation_interfaces__msg__EntityInfo__rosidl_typesupport_introspection_c__get_const_function__EntityInfo__tags,  // get_const(index) function pointer
    simulation_interfaces__msg__EntityInfo__rosidl_typesupport_introspection_c__get_function__EntityInfo__tags,  // get(index) function pointer
    simulation_interfaces__msg__EntityInfo__rosidl_typesupport_introspection_c__fetch_function__EntityInfo__tags,  // fetch(index, &value) function pointer
    simulation_interfaces__msg__EntityInfo__rosidl_typesupport_introspection_c__assign_function__EntityInfo__tags,  // assign(index, value) function pointer
    simulation_interfaces__msg__EntityInfo__rosidl_typesupport_introspection_c__resize_function__EntityInfo__tags  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers simulation_interfaces__msg__EntityInfo__rosidl_typesupport_introspection_c__EntityInfo_message_members = {
  "simulation_interfaces__msg",  // message namespace
  "EntityInfo",  // message name
  3,  // number of fields
  sizeof(simulation_interfaces__msg__EntityInfo),
  simulation_interfaces__msg__EntityInfo__rosidl_typesupport_introspection_c__EntityInfo_message_member_array,  // message members
  simulation_interfaces__msg__EntityInfo__rosidl_typesupport_introspection_c__EntityInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  simulation_interfaces__msg__EntityInfo__rosidl_typesupport_introspection_c__EntityInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t simulation_interfaces__msg__EntityInfo__rosidl_typesupport_introspection_c__EntityInfo_message_type_support_handle = {
  0,
  &simulation_interfaces__msg__EntityInfo__rosidl_typesupport_introspection_c__EntityInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simulation_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, msg, EntityInfo)() {
  simulation_interfaces__msg__EntityInfo__rosidl_typesupport_introspection_c__EntityInfo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, msg, EntityCategory)();
  if (!simulation_interfaces__msg__EntityInfo__rosidl_typesupport_introspection_c__EntityInfo_message_type_support_handle.typesupport_identifier) {
    simulation_interfaces__msg__EntityInfo__rosidl_typesupport_introspection_c__EntityInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &simulation_interfaces__msg__EntityInfo__rosidl_typesupport_introspection_c__EntityInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from simulation_interfaces:msg/EntityFilters.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "simulation_interfaces/msg/detail/entity_filters__rosidl_typesupport_introspection_c.h"
#include "simulation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "simulation_interfaces/msg/detail/entity_filters__functions.h"
#include "simulation_interfaces/msg/detail/entity_filters__struct.h"


// Include directives for member types
// Member `filter`
#include "rosidl_runtime_c/string_functions.h"
// Member `categories`
#include "simulation_interfaces/msg/entity_category.h"
// Member `categories`
#include "simulation_interfaces/msg/detail/entity_category__rosidl_typesupport_introspection_c.h"
// Member `tags`
#include "simulation_interfaces/msg/tags_filter.h"
// Member `tags`
#include "simulation_interfaces/msg/detail/tags_filter__rosidl_typesupport_introspection_c.h"
// Member `bounds`
#include "simulation_interfaces/msg/bounds.h"
// Member `bounds`
#include "simulation_interfaces/msg/detail/bounds__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void simulation_interfaces__msg__EntityFilters__rosidl_typesupport_introspection_c__EntityFilters_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  simulation_interfaces__msg__EntityFilters__init(message_memory);
}

void simulation_interfaces__msg__EntityFilters__rosidl_typesupport_introspection_c__EntityFilters_fini_function(void * message_memory)
{
  simulation_interfaces__msg__EntityFilters__fini(message_memory);
}

size_t simulation_interfaces__msg__EntityFilters__rosidl_typesupport_introspection_c__size_function__EntityFilters__categories(
  const void * untyped_member)
{
  const simulation_interfaces__msg__EntityCategory__Sequence * member =
    (const simulation_interfaces__msg__EntityCategory__Sequence *)(untyped_member);
  return member->size;
}

const void * simulation_interfaces__msg__EntityFilters__rosidl_typesupport_introspection_c__get_const_function__EntityFilters__categories(
  const void * untyped_member, size_t index)
{
  const simulation_interfaces__msg__EntityCategory__Sequence * member =
    (const simulation_interfaces__msg__EntityCategory__Sequence *)(untyped_member);
  return &member->data[index];
}

void * simulation_interfaces__msg__EntityFilters__rosidl_typesupport_introspection_c__get_function__EntityFilters__categories(
  void * untyped_member, size_t index)
{
  simulation_interfaces__msg__EntityCategory__Sequence * member =
    (simulation_interfaces__msg__EntityCategory__Sequence *)(untyped_member);
  return &member->data[index];
}

void simulation_interfaces__msg__EntityFilters__rosidl_typesupport_introspection_c__fetch_function__EntityFilters__categories(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const simulation_interfaces__msg__EntityCategory * item =
    ((const simulation_interfaces__msg__EntityCategory *)
    simulation_interfaces__msg__EntityFilters__rosidl_typesupport_introspection_c__get_const_function__EntityFilters__categories(untyped_member, index));
  simulation_interfaces__msg__EntityCategory * value =
    (simulation_interfaces__msg__EntityCategory *)(untyped_value);
  *value = *item;
}

void simulation_interfaces__msg__EntityFilters__rosidl_typesupport_introspection_c__assign_function__EntityFilters__categories(
  void * untyped_member, size_t index, const void * untyped_value)
{
  simulation_interfaces__msg__EntityCategory * item =
    ((simulation_interfaces__msg__EntityCategory *)
    simulation_interfaces__msg__EntityFilters__rosidl_typesupport_introspection_c__get_function__EntityFilters__categories(untyped_member, index));
  const simulation_interfaces__msg__EntityCategory * value =
    (const simulation_interfaces__msg__EntityCategory *)(untyped_value);
  *item = *value;
}

bool simulation_interfaces__msg__EntityFilters__rosidl_typesupport_introspection_c__resize_function__EntityFilters__categories(
  void * untyped_member, size_t size)
{
  simulation_interfaces__msg__EntityCategory__Sequence * member =
    (simulation_interfaces__msg__EntityCategory__Sequence *)(untyped_member);
  simulation_interfaces__msg__EntityCategory__Sequence__fini(member);
  return simulation_interfaces__msg__EntityCategory__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember simulation_interfaces__msg__EntityFilters__rosidl_typesupport_introspection_c__EntityFilters_message_member_array[4] = {
  {
    "filter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__msg__EntityFilters, filter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "categories",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__msg__EntityFilters, categories),  // bytes offset in struct
    NULL,  // default value
    simulation_interfaces__msg__EntityFilters__rosidl_typesupport_introspection_c__size_function__EntityFilters__categories,  // size() function pointer
    simulation_interfaces__msg__EntityFilters__rosidl_typesupport_introspection_c__get_const_function__EntityFilters__categories,  // get_const(index) function pointer
    simulation_interfaces__msg__EntityFilters__rosidl_typesupport_introspection_c__get_function__EntityFilters__categories,  // get(index) function pointer
    simulation_interfaces__msg__EntityFilters__rosidl_typesupport_introspection_c__fetch_function__EntityFilters__categories,  // fetch(index, &value) function pointer
    simulation_interfaces__msg__EntityFilters__rosidl_typesupport_introspection_c__assign_function__EntityFilters__categories,  // assign(index, value) function pointer
    simulation_interfaces__msg__EntityFilters__rosidl_typesupport_introspection_c__resize_function__EntityFilters__categories  // resize(index) function pointer
  },
  {
    "tags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__msg__EntityFilters, tags),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__msg__EntityFilters, bounds),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers simulation_interfaces__msg__EntityFilters__rosidl_typesupport_introspection_c__EntityFilters_message_members = {
  "simulation_interfaces__msg",  // message namespace
  "EntityFilters",  // message name
  4,  // number of fields
  sizeof(simulation_interfaces__msg__EntityFilters),
  simulation_interfaces__msg__EntityFilters__rosidl_typesupport_introspection_c__EntityFilters_message_member_array,  // message members
  simulation_interfaces__msg__EntityFilters__rosidl_typesupport_introspection_c__EntityFilters_init_function,  // function to initialize message memory (memory has to be allocated)
  simulation_interfaces__msg__EntityFilters__rosidl_typesupport_introspection_c__EntityFilters_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t simulation_interfaces__msg__EntityFilters__rosidl_typesupport_introspection_c__EntityFilters_message_type_support_handle = {
  0,
  &simulation_interfaces__msg__EntityFilters__rosidl_typesupport_introspection_c__EntityFilters_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simulation_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, msg, EntityFilters)() {
  simulation_interfaces__msg__EntityFilters__rosidl_typesupport_introspection_c__EntityFilters_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, msg, EntityCategory)();
  simulation_interfaces__msg__EntityFilters__rosidl_typesupport_introspection_c__EntityFilters_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, msg, TagsFilter)();
  simulation_interfaces__msg__EntityFilters__rosidl_typesupport_introspection_c__EntityFilters_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, msg, Bounds)();
  if (!simulation_interfaces__msg__EntityFilters__rosidl_typesupport_introspection_c__EntityFilters_message_type_support_handle.typesupport_identifier) {
    simulation_interfaces__msg__EntityFilters__rosidl_typesupport_introspection_c__EntityFilters_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &simulation_interfaces__msg__EntityFilters__rosidl_typesupport_introspection_c__EntityFilters_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from simulation_interfaces:msg/EntityCategory.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "simulation_interfaces/msg/detail/entity_category__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace simulation_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void EntityCategory_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) simulation_interfaces::msg::EntityCategory(_init);
}

void EntityCategory_fini_function(void * message_memory)
{
  auto typed_message = static_cast<simulation_interfaces::msg::EntityCategory *>(message_memory);
  typed_message->~EntityCategory();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EntityCategory_message_member_array[1] = {
  {
    "category",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces::msg::EntityCategory, category),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EntityCategory_message_members = {
  "simulation_interfaces::msg",  // message namespace
  "EntityCategory",  // message name
  1,  // number of fields
  sizeof(simulation_interfaces::msg::EntityCategory),
  EntityCategory_message_member_array,  // message members
  EntityCategory_init_function,  // function to initialize message memory (memory has to be allocated)
  EntityCategory_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EntityCategory_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EntityCategory_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace simulation_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<simulation_interfaces::msg::EntityCategory>()
{
  return &::simulation_interfaces::msg::rosidl_typesupport_introspection_cpp::EntityCategory_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, simulation_interfaces, msg, EntityCategory)() {
  return &::simulation_interfaces::msg::rosidl_typesupport_introspection_cpp::EntityCategory_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

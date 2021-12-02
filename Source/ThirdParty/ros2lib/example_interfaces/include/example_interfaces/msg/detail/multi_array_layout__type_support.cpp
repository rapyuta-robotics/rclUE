// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from example_interfaces:msg/MultiArrayLayout.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "example_interfaces/msg/detail/multi_array_layout__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace example_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MultiArrayLayout_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) example_interfaces::msg::MultiArrayLayout(_init);
}

void MultiArrayLayout_fini_function(void * message_memory)
{
  auto typed_message = static_cast<example_interfaces::msg::MultiArrayLayout *>(message_memory);
  typed_message->~MultiArrayLayout();
}

size_t size_function__MultiArrayLayout__dim(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<example_interfaces::msg::MultiArrayDimension> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MultiArrayLayout__dim(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<example_interfaces::msg::MultiArrayDimension> *>(untyped_member);
  return &member[index];
}

void * get_function__MultiArrayLayout__dim(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<example_interfaces::msg::MultiArrayDimension> *>(untyped_member);
  return &member[index];
}

void resize_function__MultiArrayLayout__dim(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<example_interfaces::msg::MultiArrayDimension> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MultiArrayLayout_message_member_array[2] = {
  {
    "dim",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<example_interfaces::msg::MultiArrayDimension>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(example_interfaces::msg::MultiArrayLayout, dim),  // bytes offset in struct
    nullptr,  // default value
    size_function__MultiArrayLayout__dim,  // size() function pointer
    get_const_function__MultiArrayLayout__dim,  // get_const(index) function pointer
    get_function__MultiArrayLayout__dim,  // get(index) function pointer
    resize_function__MultiArrayLayout__dim  // resize(index) function pointer
  },
  {
    "data_offset",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(example_interfaces::msg::MultiArrayLayout, data_offset),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MultiArrayLayout_message_members = {
  "example_interfaces::msg",  // message namespace
  "MultiArrayLayout",  // message name
  2,  // number of fields
  sizeof(example_interfaces::msg::MultiArrayLayout),
  MultiArrayLayout_message_member_array,  // message members
  MultiArrayLayout_init_function,  // function to initialize message memory (memory has to be allocated)
  MultiArrayLayout_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MultiArrayLayout_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MultiArrayLayout_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace example_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<example_interfaces::msg::MultiArrayLayout>()
{
  return &::example_interfaces::msg::rosidl_typesupport_introspection_cpp::MultiArrayLayout_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, example_interfaces, msg, MultiArrayLayout)() {
  return &::example_interfaces::msg::rosidl_typesupport_introspection_cpp::MultiArrayLayout_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ue_msgs:msg/IntPointDict.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ue_msgs/msg/detail/int_point_dict__functions.h"
#include "ue_msgs/msg/detail/int_point_dict__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ue_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void IntPointDict_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ue_msgs::msg::IntPointDict(_init);
}

void IntPointDict_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ue_msgs::msg::IntPointDict *>(message_memory);
  typed_message->~IntPointDict();
}

size_t size_function__IntPointDict__entries(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ue_msgs::msg::IntPointEntry> *>(untyped_member);
  return member->size();
}

const void * get_const_function__IntPointDict__entries(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ue_msgs::msg::IntPointEntry> *>(untyped_member);
  return &member[index];
}

void * get_function__IntPointDict__entries(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ue_msgs::msg::IntPointEntry> *>(untyped_member);
  return &member[index];
}

void fetch_function__IntPointDict__entries(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ue_msgs::msg::IntPointEntry *>(
    get_const_function__IntPointDict__entries(untyped_member, index));
  auto & value = *reinterpret_cast<ue_msgs::msg::IntPointEntry *>(untyped_value);
  value = item;
}

void assign_function__IntPointDict__entries(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ue_msgs::msg::IntPointEntry *>(
    get_function__IntPointDict__entries(untyped_member, index));
  const auto & value = *reinterpret_cast<const ue_msgs::msg::IntPointEntry *>(untyped_value);
  item = value;
}

void resize_function__IntPointDict__entries(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ue_msgs::msg::IntPointEntry> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember IntPointDict_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs::msg::IntPointDict, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "entries",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ue_msgs::msg::IntPointEntry>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs::msg::IntPointDict, entries),  // bytes offset in struct
    nullptr,  // default value
    size_function__IntPointDict__entries,  // size() function pointer
    get_const_function__IntPointDict__entries,  // get_const(index) function pointer
    get_function__IntPointDict__entries,  // get(index) function pointer
    fetch_function__IntPointDict__entries,  // fetch(index, &value) function pointer
    assign_function__IntPointDict__entries,  // assign(index, value) function pointer
    resize_function__IntPointDict__entries  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers IntPointDict_message_members = {
  "ue_msgs::msg",  // message namespace
  "IntPointDict",  // message name
  2,  // number of fields
  sizeof(ue_msgs::msg::IntPointDict),
  false,  // has_any_key_member_
  IntPointDict_message_member_array,  // message members
  IntPointDict_init_function,  // function to initialize message memory (memory has to be allocated)
  IntPointDict_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t IntPointDict_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &IntPointDict_message_members,
  get_message_typesupport_handle_function,
  &ue_msgs__msg__IntPointDict__get_type_hash,
  &ue_msgs__msg__IntPointDict__get_type_description,
  &ue_msgs__msg__IntPointDict__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ue_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ue_msgs::msg::IntPointDict>()
{
  return &::ue_msgs::msg::rosidl_typesupport_introspection_cpp::IntPointDict_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ue_msgs, msg, IntPointDict)() {
  return &::ue_msgs::msg::rosidl_typesupport_introspection_cpp::IntPointDict_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ue_msgs:msg/OverlappingObjects.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ue_msgs/msg/detail/overlapping_objects__struct.hpp"
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

void OverlappingObjects_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ue_msgs::msg::OverlappingObjects(_init);
}

void OverlappingObjects_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ue_msgs::msg::OverlappingObjects *>(message_memory);
  typed_message->~OverlappingObjects();
}

size_t size_function__OverlappingObjects__actors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__OverlappingObjects__actors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__OverlappingObjects__actors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__OverlappingObjects__actors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__OverlappingObjects__actors(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__OverlappingObjects__actors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__OverlappingObjects__actors(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__OverlappingObjects__actors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__OverlappingObjects__components(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__OverlappingObjects__components(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__OverlappingObjects__components(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__OverlappingObjects__components(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__OverlappingObjects__components(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__OverlappingObjects__components(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__OverlappingObjects__components(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__OverlappingObjects__components(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember OverlappingObjects_message_member_array[2] = {
  {
    "actors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs::msg::OverlappingObjects, actors),  // bytes offset in struct
    nullptr,  // default value
    size_function__OverlappingObjects__actors,  // size() function pointer
    get_const_function__OverlappingObjects__actors,  // get_const(index) function pointer
    get_function__OverlappingObjects__actors,  // get(index) function pointer
    fetch_function__OverlappingObjects__actors,  // fetch(index, &value) function pointer
    assign_function__OverlappingObjects__actors,  // assign(index, value) function pointer
    resize_function__OverlappingObjects__actors  // resize(index) function pointer
  },
  {
    "components",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs::msg::OverlappingObjects, components),  // bytes offset in struct
    nullptr,  // default value
    size_function__OverlappingObjects__components,  // size() function pointer
    get_const_function__OverlappingObjects__components,  // get_const(index) function pointer
    get_function__OverlappingObjects__components,  // get(index) function pointer
    fetch_function__OverlappingObjects__components,  // fetch(index, &value) function pointer
    assign_function__OverlappingObjects__components,  // assign(index, value) function pointer
    resize_function__OverlappingObjects__components  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers OverlappingObjects_message_members = {
  "ue_msgs::msg",  // message namespace
  "OverlappingObjects",  // message name
  2,  // number of fields
  sizeof(ue_msgs::msg::OverlappingObjects),
  OverlappingObjects_message_member_array,  // message members
  OverlappingObjects_init_function,  // function to initialize message memory (memory has to be allocated)
  OverlappingObjects_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t OverlappingObjects_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &OverlappingObjects_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ue_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ue_msgs::msg::OverlappingObjects>()
{
  return &::ue_msgs::msg::rosidl_typesupport_introspection_cpp::OverlappingObjects_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ue_msgs, msg, OverlappingObjects)() {
  return &::ue_msgs::msg::rosidl_typesupport_introspection_cpp::OverlappingObjects_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

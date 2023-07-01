// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ue_msgs:msg/Overlaps.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ue_msgs/msg/detail/overlaps__struct.hpp"
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

void Overlaps_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ue_msgs::msg::Overlaps(_init);
}

void Overlaps_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ue_msgs::msg::Overlaps *>(message_memory);
  typed_message->~Overlaps();
}

size_t size_function__Overlaps__targets(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Overlaps__targets(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__Overlaps__targets(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__Overlaps__targets(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__Overlaps__targets(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__Overlaps__targets(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__Overlaps__targets(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__Overlaps__targets(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Overlaps__overlaps(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ue_msgs::msg::OverlappingObjects> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Overlaps__overlaps(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ue_msgs::msg::OverlappingObjects> *>(untyped_member);
  return &member[index];
}

void * get_function__Overlaps__overlaps(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ue_msgs::msg::OverlappingObjects> *>(untyped_member);
  return &member[index];
}

void fetch_function__Overlaps__overlaps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ue_msgs::msg::OverlappingObjects *>(
    get_const_function__Overlaps__overlaps(untyped_member, index));
  auto & value = *reinterpret_cast<ue_msgs::msg::OverlappingObjects *>(untyped_value);
  value = item;
}

void assign_function__Overlaps__overlaps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ue_msgs::msg::OverlappingObjects *>(
    get_function__Overlaps__overlaps(untyped_member, index));
  const auto & value = *reinterpret_cast<const ue_msgs::msg::OverlappingObjects *>(untyped_value);
  item = value;
}

void resize_function__Overlaps__overlaps(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ue_msgs::msg::OverlappingObjects> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Overlaps_message_member_array[2] = {
  {
    "targets",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs::msg::Overlaps, targets),  // bytes offset in struct
    nullptr,  // default value
    size_function__Overlaps__targets,  // size() function pointer
    get_const_function__Overlaps__targets,  // get_const(index) function pointer
    get_function__Overlaps__targets,  // get(index) function pointer
    fetch_function__Overlaps__targets,  // fetch(index, &value) function pointer
    assign_function__Overlaps__targets,  // assign(index, value) function pointer
    resize_function__Overlaps__targets  // resize(index) function pointer
  },
  {
    "overlaps",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ue_msgs::msg::OverlappingObjects>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs::msg::Overlaps, overlaps),  // bytes offset in struct
    nullptr,  // default value
    size_function__Overlaps__overlaps,  // size() function pointer
    get_const_function__Overlaps__overlaps,  // get_const(index) function pointer
    get_function__Overlaps__overlaps,  // get(index) function pointer
    fetch_function__Overlaps__overlaps,  // fetch(index, &value) function pointer
    assign_function__Overlaps__overlaps,  // assign(index, value) function pointer
    resize_function__Overlaps__overlaps  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Overlaps_message_members = {
  "ue_msgs::msg",  // message namespace
  "Overlaps",  // message name
  2,  // number of fields
  sizeof(ue_msgs::msg::Overlaps),
  Overlaps_message_member_array,  // message members
  Overlaps_init_function,  // function to initialize message memory (memory has to be allocated)
  Overlaps_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Overlaps_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Overlaps_message_members,
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
get_message_type_support_handle<ue_msgs::msg::Overlaps>()
{
  return &::ue_msgs::msg::rosidl_typesupport_introspection_cpp::Overlaps_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ue_msgs, msg, Overlaps)() {
  return &::ue_msgs::msg::rosidl_typesupport_introspection_cpp::Overlaps_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

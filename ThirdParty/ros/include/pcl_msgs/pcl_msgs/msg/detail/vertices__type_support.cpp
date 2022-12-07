// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from pcl_msgs:msg/Vertices.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "pcl_msgs/msg/detail/vertices__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pcl_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Vertices_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pcl_msgs::msg::Vertices(_init);
}

void Vertices_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pcl_msgs::msg::Vertices *>(message_memory);
  typed_message->~Vertices();
}

size_t size_function__Vertices__vertices(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Vertices__vertices(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__Vertices__vertices(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__Vertices__vertices(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__Vertices__vertices(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__Vertices__vertices(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__Vertices__vertices(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

void resize_function__Vertices__vertices(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Vertices_message_member_array[1] = {
  {
    "vertices",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pcl_msgs::msg::Vertices, vertices),  // bytes offset in struct
    nullptr,  // default value
    size_function__Vertices__vertices,  // size() function pointer
    get_const_function__Vertices__vertices,  // get_const(index) function pointer
    get_function__Vertices__vertices,  // get(index) function pointer
    fetch_function__Vertices__vertices,  // fetch(index, &value) function pointer
    assign_function__Vertices__vertices,  // assign(index, value) function pointer
    resize_function__Vertices__vertices  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Vertices_message_members = {
  "pcl_msgs::msg",  // message namespace
  "Vertices",  // message name
  1,  // number of fields
  sizeof(pcl_msgs::msg::Vertices),
  Vertices_message_member_array,  // message members
  Vertices_init_function,  // function to initialize message memory (memory has to be allocated)
  Vertices_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Vertices_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Vertices_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace pcl_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pcl_msgs::msg::Vertices>()
{
  return &::pcl_msgs::msg::rosidl_typesupport_introspection_cpp::Vertices_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pcl_msgs, msg, Vertices)() {
  return &::pcl_msgs::msg::rosidl_typesupport_introspection_cpp::Vertices_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

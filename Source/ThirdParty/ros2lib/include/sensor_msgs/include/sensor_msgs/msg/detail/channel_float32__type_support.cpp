// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from sensor_msgs:msg/ChannelFloat32.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "sensor_msgs/msg/detail/channel_float32__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace sensor_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ChannelFloat32_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) sensor_msgs::msg::ChannelFloat32(_init);
}

void ChannelFloat32_fini_function(void * message_memory)
{
  auto typed_message = static_cast<sensor_msgs::msg::ChannelFloat32 *>(message_memory);
  typed_message->~ChannelFloat32();
}

size_t size_function__ChannelFloat32__values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ChannelFloat32__values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ChannelFloat32__values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__ChannelFloat32__values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ChannelFloat32_message_member_array[2] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs::msg::ChannelFloat32, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs::msg::ChannelFloat32, values),  // bytes offset in struct
    nullptr,  // default value
    size_function__ChannelFloat32__values,  // size() function pointer
    get_const_function__ChannelFloat32__values,  // get_const(index) function pointer
    get_function__ChannelFloat32__values,  // get(index) function pointer
    resize_function__ChannelFloat32__values  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ChannelFloat32_message_members = {
  "sensor_msgs::msg",  // message namespace
  "ChannelFloat32",  // message name
  2,  // number of fields
  sizeof(sensor_msgs::msg::ChannelFloat32),
  ChannelFloat32_message_member_array,  // message members
  ChannelFloat32_init_function,  // function to initialize message memory (memory has to be allocated)
  ChannelFloat32_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ChannelFloat32_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ChannelFloat32_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace sensor_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sensor_msgs::msg::ChannelFloat32>()
{
  return &::sensor_msgs::msg::rosidl_typesupport_introspection_cpp::ChannelFloat32_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sensor_msgs, msg, ChannelFloat32)() {
  return &::sensor_msgs::msg::rosidl_typesupport_introspection_cpp::ChannelFloat32_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

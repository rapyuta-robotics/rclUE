// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from sensor_msgs:msg/LaserEcho.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "sensor_msgs/msg/detail/laser_echo__struct.hpp"
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

void LaserEcho_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) sensor_msgs::msg::LaserEcho(_init);
}

void LaserEcho_fini_function(void * message_memory)
{
  auto typed_message = static_cast<sensor_msgs::msg::LaserEcho *>(message_memory);
  typed_message->~LaserEcho();
}

size_t size_function__LaserEcho__echoes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LaserEcho__echoes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__LaserEcho__echoes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__LaserEcho__echoes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LaserEcho_message_member_array[1] = {
  {
    "echoes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs::msg::LaserEcho, echoes),  // bytes offset in struct
    nullptr,  // default value
    size_function__LaserEcho__echoes,  // size() function pointer
    get_const_function__LaserEcho__echoes,  // get_const(index) function pointer
    get_function__LaserEcho__echoes,  // get(index) function pointer
    resize_function__LaserEcho__echoes  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LaserEcho_message_members = {
  "sensor_msgs::msg",  // message namespace
  "LaserEcho",  // message name
  1,  // number of fields
  sizeof(sensor_msgs::msg::LaserEcho),
  LaserEcho_message_member_array,  // message members
  LaserEcho_init_function,  // function to initialize message memory (memory has to be allocated)
  LaserEcho_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LaserEcho_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LaserEcho_message_members,
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
get_message_type_support_handle<sensor_msgs::msg::LaserEcho>()
{
  return &::sensor_msgs::msg::rosidl_typesupport_introspection_cpp::LaserEcho_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sensor_msgs, msg, LaserEcho)() {
  return &::sensor_msgs::msg::rosidl_typesupport_introspection_cpp::LaserEcho_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

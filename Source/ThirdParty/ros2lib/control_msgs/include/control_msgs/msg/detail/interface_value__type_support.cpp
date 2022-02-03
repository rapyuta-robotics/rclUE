// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from control_msgs:msg/InterfaceValue.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "control_msgs/msg/detail/interface_value__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace control_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void InterfaceValue_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) control_msgs::msg::InterfaceValue(_init);
}

void InterfaceValue_fini_function(void * message_memory)
{
  auto typed_message = static_cast<control_msgs::msg::InterfaceValue *>(message_memory);
  typed_message->~InterfaceValue();
}

size_t size_function__InterfaceValue__interface_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__InterfaceValue__interface_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__InterfaceValue__interface_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__InterfaceValue__interface_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__InterfaceValue__values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__InterfaceValue__values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__InterfaceValue__values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__InterfaceValue__values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember InterfaceValue_message_member_array[2] = {
  {
    "interface_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::msg::InterfaceValue, interface_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__InterfaceValue__interface_names,  // size() function pointer
    get_const_function__InterfaceValue__interface_names,  // get_const(index) function pointer
    get_function__InterfaceValue__interface_names,  // get(index) function pointer
    resize_function__InterfaceValue__interface_names  // resize(index) function pointer
  },
  {
    "values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::msg::InterfaceValue, values),  // bytes offset in struct
    nullptr,  // default value
    size_function__InterfaceValue__values,  // size() function pointer
    get_const_function__InterfaceValue__values,  // get_const(index) function pointer
    get_function__InterfaceValue__values,  // get(index) function pointer
    resize_function__InterfaceValue__values  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers InterfaceValue_message_members = {
  "control_msgs::msg",  // message namespace
  "InterfaceValue",  // message name
  2,  // number of fields
  sizeof(control_msgs::msg::InterfaceValue),
  InterfaceValue_message_member_array,  // message members
  InterfaceValue_init_function,  // function to initialize message memory (memory has to be allocated)
  InterfaceValue_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t InterfaceValue_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &InterfaceValue_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<control_msgs::msg::InterfaceValue>()
{
  return &::control_msgs::msg::rosidl_typesupport_introspection_cpp::InterfaceValue_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, control_msgs, msg, InterfaceValue)() {
  return &::control_msgs::msg::rosidl_typesupport_introspection_cpp::InterfaceValue_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

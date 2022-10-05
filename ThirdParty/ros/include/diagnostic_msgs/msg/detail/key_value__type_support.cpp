// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from diagnostic_msgs:msg/KeyValue.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "diagnostic_msgs/msg/detail/key_value__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace diagnostic_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void KeyValue_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) diagnostic_msgs::msg::KeyValue(_init);
}

void KeyValue_fini_function(void * message_memory)
{
  auto typed_message = static_cast<diagnostic_msgs::msg::KeyValue *>(message_memory);
  typed_message->~KeyValue();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember KeyValue_message_member_array[2] = {
  {
    "key",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(diagnostic_msgs::msg::KeyValue, key),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(diagnostic_msgs::msg::KeyValue, value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers KeyValue_message_members = {
  "diagnostic_msgs::msg",  // message namespace
  "KeyValue",  // message name
  2,  // number of fields
  sizeof(diagnostic_msgs::msg::KeyValue),
  KeyValue_message_member_array,  // message members
  KeyValue_init_function,  // function to initialize message memory (memory has to be allocated)
  KeyValue_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t KeyValue_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &KeyValue_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace diagnostic_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<diagnostic_msgs::msg::KeyValue>()
{
  return &::diagnostic_msgs::msg::rosidl_typesupport_introspection_cpp::KeyValue_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, diagnostic_msgs, msg, KeyValue)() {
  return &::diagnostic_msgs::msg::rosidl_typesupport_introspection_cpp::KeyValue_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

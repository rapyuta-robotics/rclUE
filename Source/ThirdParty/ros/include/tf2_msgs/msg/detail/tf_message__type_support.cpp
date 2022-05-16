// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tf2_msgs:msg/TFMessage.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tf2_msgs/msg/detail/tf_message__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tf2_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TFMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tf2_msgs::msg::TFMessage(_init);
}

void TFMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tf2_msgs::msg::TFMessage *>(message_memory);
  typed_message->~TFMessage();
}

size_t size_function__TFMessage__transforms(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::TransformStamped> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TFMessage__transforms(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::TransformStamped> *>(untyped_member);
  return &member[index];
}

void * get_function__TFMessage__transforms(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::TransformStamped> *>(untyped_member);
  return &member[index];
}

void resize_function__TFMessage__transforms(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::TransformStamped> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TFMessage_message_member_array[1] = {
  {
    "transforms",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::TransformStamped>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_msgs::msg::TFMessage, transforms),  // bytes offset in struct
    nullptr,  // default value
    size_function__TFMessage__transforms,  // size() function pointer
    get_const_function__TFMessage__transforms,  // get_const(index) function pointer
    get_function__TFMessage__transforms,  // get(index) function pointer
    resize_function__TFMessage__transforms  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TFMessage_message_members = {
  "tf2_msgs::msg",  // message namespace
  "TFMessage",  // message name
  1,  // number of fields
  sizeof(tf2_msgs::msg::TFMessage),
  TFMessage_message_member_array,  // message members
  TFMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  TFMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TFMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TFMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace tf2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tf2_msgs::msg::TFMessage>()
{
  return &::tf2_msgs::msg::rosidl_typesupport_introspection_cpp::TFMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tf2_msgs, msg, TFMessage)() {
  return &::tf2_msgs::msg::rosidl_typesupport_introspection_cpp::TFMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from diagnostic_msgs:msg/KeyValue.idl
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__MSG__DETAIL__KEY_VALUE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define DIAGNOSTIC_MSGS__MSG__DETAIL__KEY_VALUE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "diagnostic_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "diagnostic_msgs/msg/detail/key_value__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace diagnostic_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_diagnostic_msgs
cdr_serialize(
  const diagnostic_msgs::msg::KeyValue & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_diagnostic_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  diagnostic_msgs::msg::KeyValue & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_diagnostic_msgs
get_serialized_size(
  const diagnostic_msgs::msg::KeyValue & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_diagnostic_msgs
max_serialized_size_KeyValue(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace diagnostic_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_diagnostic_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, diagnostic_msgs, msg, KeyValue)();

#ifdef __cplusplus
}
#endif

#endif  // DIAGNOSTIC_MSGS__MSG__DETAIL__KEY_VALUE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

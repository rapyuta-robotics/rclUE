// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from control_msgs:msg/PidState.idl
// generated code does not contain a copyright notice


#ifndef CONTROL_MSGS__MSG__PID_STATE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define CONTROL_MSGS__MSG__PID_STATE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "control_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "control_msgs/msg/detail/pid_state__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "control_msgs/msg/dds_connext/PidState_Support.h"
#include "control_msgs/msg/dds_connext/PidState_Plugin.h"
#include "ndds/ndds_cpp.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// forward declaration of internal CDR Stream
struct ConnextStaticCDRStream;

// forward declaration of DDS types
class DDSDomainParticipant;
class DDSDataWriter;
class DDSDataReader;


namespace control_msgs
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__PidState();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_control_msgs
convert_ros_message_to_dds(
  const control_msgs::msg::PidState & ros_message,
  control_msgs::msg::dds_::PidState_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_control_msgs
convert_dds_message_to_ros(
  const control_msgs::msg::dds_::PidState_ & dds_message,
  control_msgs::msg::PidState & ros_message);

bool
to_cdr_stream__PidState(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__PidState(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace control_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  control_msgs, msg,
  PidState)();

#ifdef __cplusplus
}
#endif


#endif  // CONTROL_MSGS__MSG__PID_STATE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

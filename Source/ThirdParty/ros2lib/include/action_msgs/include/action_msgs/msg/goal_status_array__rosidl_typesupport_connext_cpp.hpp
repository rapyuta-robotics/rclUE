// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from action_msgs:msg/GoalStatusArray.idl
// generated code does not contain a copyright notice


#ifndef ACTION_MSGS__MSG__GOAL_STATUS_ARRAY__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define ACTION_MSGS__MSG__GOAL_STATUS_ARRAY__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "action_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "action_msgs/msg/detail/goal_status_array__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "action_msgs/msg/dds_connext/GoalStatusArray_Support.h"
#include "action_msgs/msg/dds_connext/GoalStatusArray_Plugin.h"
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


namespace action_msgs
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__GoalStatusArray();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_action_msgs
convert_ros_message_to_dds(
  const action_msgs::msg::GoalStatusArray & ros_message,
  action_msgs::msg::dds_::GoalStatusArray_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_action_msgs
convert_dds_message_to_ros(
  const action_msgs::msg::dds_::GoalStatusArray_ & dds_message,
  action_msgs::msg::GoalStatusArray & ros_message);

bool
to_cdr_stream__GoalStatusArray(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__GoalStatusArray(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace action_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_action_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  action_msgs, msg,
  GoalStatusArray)();

#ifdef __cplusplus
}
#endif


#endif  // ACTION_MSGS__MSG__GOAL_STATUS_ARRAY__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

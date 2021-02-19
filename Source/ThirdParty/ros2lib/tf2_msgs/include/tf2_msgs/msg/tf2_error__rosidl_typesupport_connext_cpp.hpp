// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from tf2_msgs:msg/TF2Error.idl
// generated code does not contain a copyright notice


#ifndef TF2_MSGS__MSG__TF2_ERROR__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define TF2_MSGS__MSG__TF2_ERROR__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "tf2_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "tf2_msgs/msg/detail/tf2_error__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "tf2_msgs/msg/dds_connext/TF2Error_Support.h"
#include "tf2_msgs/msg/dds_connext/TF2Error_Plugin.h"
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


namespace tf2_msgs
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__TF2Error();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_tf2_msgs
convert_ros_message_to_dds(
  const tf2_msgs::msg::TF2Error & ros_message,
  tf2_msgs::msg::dds_::TF2Error_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_tf2_msgs
convert_dds_message_to_ros(
  const tf2_msgs::msg::dds_::TF2Error_ & dds_message,
  tf2_msgs::msg::TF2Error & ros_message);

bool
to_cdr_stream__TF2Error(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__TF2Error(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace tf2_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_tf2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  tf2_msgs, msg,
  TF2Error)();

#ifdef __cplusplus
}
#endif


#endif  // TF2_MSGS__MSG__TF2_ERROR__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from unique_identifier_msgs:msg/UUID.idl
// generated code does not contain a copyright notice


#ifndef UNIQUE_IDENTIFIER_MSGS__MSG__UUID__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define UNIQUE_IDENTIFIER_MSGS__MSG__UUID__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "unique_identifier_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "unique_identifier_msgs/msg/dds_connext/UUID_Support.h"
#include "unique_identifier_msgs/msg/dds_connext/UUID_Plugin.h"
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


namespace unique_identifier_msgs
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__UUID();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_unique_identifier_msgs
convert_ros_message_to_dds(
  const unique_identifier_msgs::msg::UUID & ros_message,
  unique_identifier_msgs::msg::dds_::UUID_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_unique_identifier_msgs
convert_dds_message_to_ros(
  const unique_identifier_msgs::msg::dds_::UUID_ & dds_message,
  unique_identifier_msgs::msg::UUID & ros_message);

bool
to_cdr_stream__UUID(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__UUID(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace unique_identifier_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_unique_identifier_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  unique_identifier_msgs, msg,
  UUID)();

#ifdef __cplusplus
}
#endif


#endif  // UNIQUE_IDENTIFIER_MSGS__MSG__UUID__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

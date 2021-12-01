// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from example_interfaces:msg/Int8MultiArray.idl
// generated code does not contain a copyright notice


#ifndef EXAMPLE_INTERFACES__MSG__INT8_MULTI_ARRAY__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define EXAMPLE_INTERFACES__MSG__INT8_MULTI_ARRAY__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "example_interfaces/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "example_interfaces/msg/detail/int8_multi_array__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "example_interfaces/msg/dds_connext/Int8MultiArray_Support.h"
#include "example_interfaces/msg/dds_connext/Int8MultiArray_Plugin.h"
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


namespace example_interfaces
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__Int8MultiArray();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_example_interfaces
convert_ros_message_to_dds(
  const example_interfaces::msg::Int8MultiArray & ros_message,
  example_interfaces::msg::dds_::Int8MultiArray_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_example_interfaces
convert_dds_message_to_ros(
  const example_interfaces::msg::dds_::Int8MultiArray_ & dds_message,
  example_interfaces::msg::Int8MultiArray & ros_message);

bool
to_cdr_stream__Int8MultiArray(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__Int8MultiArray(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace example_interfaces


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_example_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  example_interfaces, msg,
  Int8MultiArray)();

#ifdef __cplusplus
}
#endif


#endif  // EXAMPLE_INTERFACES__MSG__INT8_MULTI_ARRAY__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

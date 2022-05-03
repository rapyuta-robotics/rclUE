// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from sensor_msgs:msg/Imu.idl
// generated code does not contain a copyright notice


#ifndef SENSOR_MSGS__MSG__IMU__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define SENSOR_MSGS__MSG__IMU__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "sensor_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "sensor_msgs/msg/detail/imu__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "sensor_msgs/msg/dds_connext/Imu_Support.h"
#include "sensor_msgs/msg/dds_connext/Imu_Plugin.h"
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


namespace sensor_msgs
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__Imu();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_sensor_msgs
convert_ros_message_to_dds(
  const sensor_msgs::msg::Imu & ros_message,
  sensor_msgs::msg::dds_::Imu_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_sensor_msgs
convert_dds_message_to_ros(
  const sensor_msgs::msg::dds_::Imu_ & dds_message,
  sensor_msgs::msg::Imu & ros_message);

bool
to_cdr_stream__Imu(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__Imu(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace sensor_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_sensor_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  sensor_msgs, msg,
  Imu)();

#ifdef __cplusplus
}
#endif


#endif  // SENSOR_MSGS__MSG__IMU__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

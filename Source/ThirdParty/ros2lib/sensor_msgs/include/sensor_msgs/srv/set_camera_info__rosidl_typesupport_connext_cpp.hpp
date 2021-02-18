// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from sensor_msgs:srv/SetCameraInfo.idl
// generated code does not contain a copyright notice


#ifndef SENSOR_MSGS__SRV__SET_CAMERA_INFO__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define SENSOR_MSGS__SRV__SET_CAMERA_INFO__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "sensor_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "sensor_msgs/srv/detail/set_camera_info__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "sensor_msgs/srv/dds_connext/SetCameraInfo_Support.h"
#include "sensor_msgs/srv/dds_connext/SetCameraInfo_Plugin.h"
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

namespace srv
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__SetCameraInfo_Request();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_sensor_msgs
convert_ros_message_to_dds(
  const sensor_msgs::srv::SetCameraInfo_Request & ros_message,
  sensor_msgs::srv::dds_::SetCameraInfo_Request_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_sensor_msgs
convert_dds_message_to_ros(
  const sensor_msgs::srv::dds_::SetCameraInfo_Request_ & dds_message,
  sensor_msgs::srv::SetCameraInfo_Request & ros_message);

bool
to_cdr_stream__SetCameraInfo_Request(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__SetCameraInfo_Request(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace sensor_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_sensor_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  sensor_msgs, srv,
  SetCameraInfo_Request)();

#ifdef __cplusplus
}
#endif


// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "sensor_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
// already included above
// #include "sensor_msgs/srv/detail/set_camera_info__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include "sensor_msgs/srv/dds_connext/SetCameraInfo_Support.h"
// already included above
// #include "sensor_msgs/srv/dds_connext/SetCameraInfo_Plugin.h"
// already included above
// #include "ndds/ndds_cpp.h"

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

namespace srv
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__SetCameraInfo_Response();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_sensor_msgs
convert_ros_message_to_dds(
  const sensor_msgs::srv::SetCameraInfo_Response & ros_message,
  sensor_msgs::srv::dds_::SetCameraInfo_Response_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_sensor_msgs
convert_dds_message_to_ros(
  const sensor_msgs::srv::dds_::SetCameraInfo_Response_ & dds_message,
  sensor_msgs::srv::SetCameraInfo_Response & ros_message);

bool
to_cdr_stream__SetCameraInfo_Response(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__SetCameraInfo_Response(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace sensor_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_sensor_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  sensor_msgs, srv,
  SetCameraInfo_Response)();

#ifdef __cplusplus
}
#endif


#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "sensor_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"

namespace sensor_msgs
{
namespace srv
{
namespace typesupport_connext_cpp
{

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_sensor_msgs
void *
create_requester__SetCameraInfo(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_sensor_msgs
const char *
destroy_requester__SetCameraInfo(
  void * untyped_requester,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_sensor_msgs
int64_t
send_request__SetCameraInfo(
  void * untyped_requester,
  const void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_sensor_msgs
void *
create_replier__SetCameraInfo(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_sensor_msgs
const char *
destroy_replier__SetCameraInfo(
  void * untyped_replier,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_sensor_msgs
bool
take_request__SetCameraInfo(
  void * untyped_replier,
  rmw_service_info_t * request_header,
  void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_sensor_msgs
bool
take_response__SetCameraInfo(
  void * untyped_requester,
  rmw_service_info_t * request_header,
  void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_sensor_msgs
bool
send_response__SetCameraInfo(
  void * untyped_replier,
  const rmw_request_id_t * request_header,
  const void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_sensor_msgs
void *
get_request_datawriter__SetCameraInfo(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_sensor_msgs
void *
get_reply_datareader__SetCameraInfo(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_sensor_msgs
void *
get_request_datareader__SetCameraInfo(void * untyped_replier);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_sensor_msgs
void *
get_reply_datawriter__SetCameraInfo(void * untyped_replier);

}  // namespace typesupport_connext_cpp
}  // namespace srv
}  // namespace sensor_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_sensor_msgs
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  sensor_msgs, srv,
  SetCameraInfo)();

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__SRV__SET_CAMERA_INFO__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

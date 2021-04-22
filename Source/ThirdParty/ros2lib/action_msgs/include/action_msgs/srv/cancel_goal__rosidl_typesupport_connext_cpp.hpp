// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from action_msgs:srv/CancelGoal.idl
// generated code does not contain a copyright notice


#ifndef ACTION_MSGS__SRV__CANCEL_GOAL__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define ACTION_MSGS__SRV__CANCEL_GOAL__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "action_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "action_msgs/srv/detail/cancel_goal__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "action_msgs/srv/dds_connext/CancelGoal_Support.h"
#include "action_msgs/srv/dds_connext/CancelGoal_Plugin.h"
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

namespace srv
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__CancelGoal_Request();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_action_msgs
convert_ros_message_to_dds(
  const action_msgs::srv::CancelGoal_Request & ros_message,
  action_msgs::srv::dds_::CancelGoal_Request_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_action_msgs
convert_dds_message_to_ros(
  const action_msgs::srv::dds_::CancelGoal_Request_ & dds_message,
  action_msgs::srv::CancelGoal_Request & ros_message);

bool
to_cdr_stream__CancelGoal_Request(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__CancelGoal_Request(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace action_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_action_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  action_msgs, srv,
  CancelGoal_Request)();

#ifdef __cplusplus
}
#endif


// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "action_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
// already included above
// #include "action_msgs/srv/detail/cancel_goal__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include "action_msgs/srv/dds_connext/CancelGoal_Support.h"
// already included above
// #include "action_msgs/srv/dds_connext/CancelGoal_Plugin.h"
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


namespace action_msgs
{

namespace srv
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__CancelGoal_Response();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_action_msgs
convert_ros_message_to_dds(
  const action_msgs::srv::CancelGoal_Response & ros_message,
  action_msgs::srv::dds_::CancelGoal_Response_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_action_msgs
convert_dds_message_to_ros(
  const action_msgs::srv::dds_::CancelGoal_Response_ & dds_message,
  action_msgs::srv::CancelGoal_Response & ros_message);

bool
to_cdr_stream__CancelGoal_Response(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__CancelGoal_Response(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace action_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_action_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  action_msgs, srv,
  CancelGoal_Response)();

#ifdef __cplusplus
}
#endif


#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "action_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"

namespace action_msgs
{
namespace srv
{
namespace typesupport_connext_cpp
{

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_action_msgs
void *
create_requester__CancelGoal(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_action_msgs
const char *
destroy_requester__CancelGoal(
  void * untyped_requester,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_action_msgs
int64_t
send_request__CancelGoal(
  void * untyped_requester,
  const void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_action_msgs
void *
create_replier__CancelGoal(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_action_msgs
const char *
destroy_replier__CancelGoal(
  void * untyped_replier,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_action_msgs
bool
take_request__CancelGoal(
  void * untyped_replier,
  rmw_service_info_t * request_header,
  void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_action_msgs
bool
take_response__CancelGoal(
  void * untyped_requester,
  rmw_service_info_t * request_header,
  void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_action_msgs
bool
send_response__CancelGoal(
  void * untyped_replier,
  const rmw_request_id_t * request_header,
  const void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_action_msgs
void *
get_request_datawriter__CancelGoal(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_action_msgs
void *
get_reply_datareader__CancelGoal(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_action_msgs
void *
get_request_datareader__CancelGoal(void * untyped_replier);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_action_msgs
void *
get_reply_datawriter__CancelGoal(void * untyped_replier);

}  // namespace typesupport_connext_cpp
}  // namespace srv
}  // namespace action_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_action_msgs
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  action_msgs, srv,
  CancelGoal)();

#ifdef __cplusplus
}
#endif

#endif  // ACTION_MSGS__SRV__CANCEL_GOAL__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

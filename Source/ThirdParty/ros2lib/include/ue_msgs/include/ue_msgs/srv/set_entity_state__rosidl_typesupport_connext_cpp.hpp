// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from ue_msgs:srv/SetEntityState.idl
// generated code does not contain a copyright notice


#ifndef UE_MSGS__SRV__SET_ENTITY_STATE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define UE_MSGS__SRV__SET_ENTITY_STATE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ue_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "ue_msgs/srv/detail/set_entity_state__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "ue_msgs/srv/dds_connext/SetEntityState_Support.h"
#include "ue_msgs/srv/dds_connext/SetEntityState_Plugin.h"
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


namespace ue_msgs
{

namespace srv
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__SetEntityState_Request();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_ue_msgs
convert_ros_message_to_dds(
  const ue_msgs::srv::SetEntityState_Request & ros_message,
  ue_msgs::srv::dds_::SetEntityState_Request_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_ue_msgs
convert_dds_message_to_ros(
  const ue_msgs::srv::dds_::SetEntityState_Request_ & dds_message,
  ue_msgs::srv::SetEntityState_Request & ros_message);

bool
to_cdr_stream__SetEntityState_Request(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__SetEntityState_Request(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace ue_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_ue_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  ue_msgs, srv,
  SetEntityState_Request)();

#ifdef __cplusplus
}
#endif


// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "ue_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
// already included above
// #include "ue_msgs/srv/detail/set_entity_state__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include "ue_msgs/srv/dds_connext/SetEntityState_Support.h"
// already included above
// #include "ue_msgs/srv/dds_connext/SetEntityState_Plugin.h"
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


namespace ue_msgs
{

namespace srv
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__SetEntityState_Response();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_ue_msgs
convert_ros_message_to_dds(
  const ue_msgs::srv::SetEntityState_Response & ros_message,
  ue_msgs::srv::dds_::SetEntityState_Response_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_ue_msgs
convert_dds_message_to_ros(
  const ue_msgs::srv::dds_::SetEntityState_Response_ & dds_message,
  ue_msgs::srv::SetEntityState_Response & ros_message);

bool
to_cdr_stream__SetEntityState_Response(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__SetEntityState_Response(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace ue_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_ue_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  ue_msgs, srv,
  SetEntityState_Response)();

#ifdef __cplusplus
}
#endif


#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "ue_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"

namespace ue_msgs
{
namespace srv
{
namespace typesupport_connext_cpp
{

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_ue_msgs
void *
create_requester__SetEntityState(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_ue_msgs
const char *
destroy_requester__SetEntityState(
  void * untyped_requester,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_ue_msgs
int64_t
send_request__SetEntityState(
  void * untyped_requester,
  const void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_ue_msgs
void *
create_replier__SetEntityState(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_ue_msgs
const char *
destroy_replier__SetEntityState(
  void * untyped_replier,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_ue_msgs
bool
take_request__SetEntityState(
  void * untyped_replier,
  rmw_service_info_t * request_header,
  void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_ue_msgs
bool
take_response__SetEntityState(
  void * untyped_requester,
  rmw_service_info_t * request_header,
  void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_ue_msgs
bool
send_response__SetEntityState(
  void * untyped_replier,
  const rmw_request_id_t * request_header,
  const void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_ue_msgs
void *
get_request_datawriter__SetEntityState(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_ue_msgs
void *
get_reply_datareader__SetEntityState(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_ue_msgs
void *
get_request_datareader__SetEntityState(void * untyped_replier);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_ue_msgs
void *
get_reply_datawriter__SetEntityState(void * untyped_replier);

}  // namespace typesupport_connext_cpp
}  // namespace srv
}  // namespace ue_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_ue_msgs
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  ue_msgs, srv,
  SetEntityState)();

#ifdef __cplusplus
}
#endif

#endif  // UE_MSGS__SRV__SET_ENTITY_STATE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

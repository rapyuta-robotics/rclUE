// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from ue_msgs:msg/EntityState.idl
// generated code does not contain a copyright notice


#ifndef UE_MSGS__MSG__ENTITY_STATE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define UE_MSGS__MSG__ENTITY_STATE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ue_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "ue_msgs/msg/detail/entity_state__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "ue_msgs/msg/dds_connext/EntityState_Support.h"
#include "ue_msgs/msg/dds_connext/EntityState_Plugin.h"
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

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__EntityState();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_ue_msgs
convert_ros_message_to_dds(
  const ue_msgs::msg::EntityState & ros_message,
  ue_msgs::msg::dds_::EntityState_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_ue_msgs
convert_dds_message_to_ros(
  const ue_msgs::msg::dds_::EntityState_ & dds_message,
  ue_msgs::msg::EntityState & ros_message);

bool
to_cdr_stream__EntityState(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__EntityState(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace ue_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_ue_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  ue_msgs, msg,
  EntityState)();

#ifdef __cplusplus
}
#endif


#endif  // UE_MSGS__MSG__ENTITY_STATE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

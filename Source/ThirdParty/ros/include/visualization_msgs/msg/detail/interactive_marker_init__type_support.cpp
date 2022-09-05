// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from visualization_msgs:msg/InteractiveMarkerInit.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "visualization_msgs/msg/detail/interactive_marker_init__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace visualization_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void InteractiveMarkerInit_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) visualization_msgs::msg::InteractiveMarkerInit(_init);
}

void InteractiveMarkerInit_fini_function(void * message_memory)
{
  auto typed_message = static_cast<visualization_msgs::msg::InteractiveMarkerInit *>(message_memory);
  typed_message->~InteractiveMarkerInit();
}

size_t size_function__InteractiveMarkerInit__markers(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<visualization_msgs::msg::InteractiveMarker> *>(untyped_member);
  return member->size();
}

const void * get_const_function__InteractiveMarkerInit__markers(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<visualization_msgs::msg::InteractiveMarker> *>(untyped_member);
  return &member[index];
}

void * get_function__InteractiveMarkerInit__markers(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<visualization_msgs::msg::InteractiveMarker> *>(untyped_member);
  return &member[index];
}

void resize_function__InteractiveMarkerInit__markers(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<visualization_msgs::msg::InteractiveMarker> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember InteractiveMarkerInit_message_member_array[3] = {
  {
    "server_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs::msg::InteractiveMarkerInit, server_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "seq_num",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs::msg::InteractiveMarkerInit, seq_num),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "markers",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<visualization_msgs::msg::InteractiveMarker>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs::msg::InteractiveMarkerInit, markers),  // bytes offset in struct
    nullptr,  // default value
    size_function__InteractiveMarkerInit__markers,  // size() function pointer
    get_const_function__InteractiveMarkerInit__markers,  // get_const(index) function pointer
    get_function__InteractiveMarkerInit__markers,  // get(index) function pointer
    resize_function__InteractiveMarkerInit__markers  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers InteractiveMarkerInit_message_members = {
  "visualization_msgs::msg",  // message namespace
  "InteractiveMarkerInit",  // message name
  3,  // number of fields
  sizeof(visualization_msgs::msg::InteractiveMarkerInit),
  InteractiveMarkerInit_message_member_array,  // message members
  InteractiveMarkerInit_init_function,  // function to initialize message memory (memory has to be allocated)
  InteractiveMarkerInit_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t InteractiveMarkerInit_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &InteractiveMarkerInit_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace visualization_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<visualization_msgs::msg::InteractiveMarkerInit>()
{
  return &::visualization_msgs::msg::rosidl_typesupport_introspection_cpp::InteractiveMarkerInit_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, visualization_msgs, msg, InteractiveMarkerInit)() {
  return &::visualization_msgs::msg::rosidl_typesupport_introspection_cpp::InteractiveMarkerInit_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

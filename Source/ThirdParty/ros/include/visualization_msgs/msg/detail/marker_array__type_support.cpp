// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from visualization_msgs:msg/MarkerArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "visualization_msgs/msg/detail/marker_array__struct.hpp"
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

void MarkerArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) visualization_msgs::msg::MarkerArray(_init);
}

void MarkerArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<visualization_msgs::msg::MarkerArray *>(message_memory);
  typed_message->~MarkerArray();
}

size_t size_function__MarkerArray__markers(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<visualization_msgs::msg::Marker> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MarkerArray__markers(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<visualization_msgs::msg::Marker> *>(untyped_member);
  return &member[index];
}

void * get_function__MarkerArray__markers(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<visualization_msgs::msg::Marker> *>(untyped_member);
  return &member[index];
}

void resize_function__MarkerArray__markers(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<visualization_msgs::msg::Marker> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MarkerArray_message_member_array[1] = {
  {
    "markers",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<visualization_msgs::msg::Marker>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs::msg::MarkerArray, markers),  // bytes offset in struct
    nullptr,  // default value
    size_function__MarkerArray__markers,  // size() function pointer
    get_const_function__MarkerArray__markers,  // get_const(index) function pointer
    get_function__MarkerArray__markers,  // get(index) function pointer
    resize_function__MarkerArray__markers  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MarkerArray_message_members = {
  "visualization_msgs::msg",  // message namespace
  "MarkerArray",  // message name
  1,  // number of fields
  sizeof(visualization_msgs::msg::MarkerArray),
  MarkerArray_message_member_array,  // message members
  MarkerArray_init_function,  // function to initialize message memory (memory has to be allocated)
  MarkerArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MarkerArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MarkerArray_message_members,
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
get_message_type_support_handle<visualization_msgs::msg::MarkerArray>()
{
  return &::visualization_msgs::msg::rosidl_typesupport_introspection_cpp::MarkerArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, visualization_msgs, msg, MarkerArray)() {
  return &::visualization_msgs::msg::rosidl_typesupport_introspection_cpp::MarkerArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

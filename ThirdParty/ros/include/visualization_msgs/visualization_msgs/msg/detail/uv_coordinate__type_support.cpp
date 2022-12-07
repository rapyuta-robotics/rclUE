// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from visualization_msgs:msg/UVCoordinate.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "visualization_msgs/msg/detail/uv_coordinate__struct.hpp"
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

void UVCoordinate_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) visualization_msgs::msg::UVCoordinate(_init);
}

void UVCoordinate_fini_function(void * message_memory)
{
  auto typed_message = static_cast<visualization_msgs::msg::UVCoordinate *>(message_memory);
  typed_message->~UVCoordinate();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember UVCoordinate_message_member_array[2] = {
  {
    "u",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs::msg::UVCoordinate, u),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "v",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs::msg::UVCoordinate, v),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers UVCoordinate_message_members = {
  "visualization_msgs::msg",  // message namespace
  "UVCoordinate",  // message name
  2,  // number of fields
  sizeof(visualization_msgs::msg::UVCoordinate),
  UVCoordinate_message_member_array,  // message members
  UVCoordinate_init_function,  // function to initialize message memory (memory has to be allocated)
  UVCoordinate_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t UVCoordinate_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &UVCoordinate_message_members,
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
get_message_type_support_handle<visualization_msgs::msg::UVCoordinate>()
{
  return &::visualization_msgs::msg::rosidl_typesupport_introspection_cpp::UVCoordinate_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, visualization_msgs, msg, UVCoordinate)() {
  return &::visualization_msgs::msg::rosidl_typesupport_introspection_cpp::UVCoordinate_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

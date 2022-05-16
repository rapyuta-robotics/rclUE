// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from geometry_msgs:msg/Vector3Stamped.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "geometry_msgs/msg/detail/vector3_stamped__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace geometry_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Vector3Stamped_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) geometry_msgs::msg::Vector3Stamped(_init);
}

void Vector3Stamped_fini_function(void * message_memory)
{
  auto typed_message = static_cast<geometry_msgs::msg::Vector3Stamped *>(message_memory);
  typed_message->~Vector3Stamped();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Vector3Stamped_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geometry_msgs::msg::Vector3Stamped, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vector",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geometry_msgs::msg::Vector3Stamped, vector),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Vector3Stamped_message_members = {
  "geometry_msgs::msg",  // message namespace
  "Vector3Stamped",  // message name
  2,  // number of fields
  sizeof(geometry_msgs::msg::Vector3Stamped),
  Vector3Stamped_message_member_array,  // message members
  Vector3Stamped_init_function,  // function to initialize message memory (memory has to be allocated)
  Vector3Stamped_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Vector3Stamped_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Vector3Stamped_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace geometry_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<geometry_msgs::msg::Vector3Stamped>()
{
  return &::geometry_msgs::msg::rosidl_typesupport_introspection_cpp::Vector3Stamped_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, geometry_msgs, msg, Vector3Stamped)() {
  return &::geometry_msgs::msg::rosidl_typesupport_introspection_cpp::Vector3Stamped_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

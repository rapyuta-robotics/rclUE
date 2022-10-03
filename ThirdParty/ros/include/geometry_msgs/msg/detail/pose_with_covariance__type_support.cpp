// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from geometry_msgs:msg/PoseWithCovariance.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.hpp"
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

void PoseWithCovariance_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) geometry_msgs::msg::PoseWithCovariance(_init);
}

void PoseWithCovariance_fini_function(void * message_memory)
{
  auto typed_message = static_cast<geometry_msgs::msg::PoseWithCovariance *>(message_memory);
  typed_message->~PoseWithCovariance();
}

size_t size_function__PoseWithCovariance__covariance(const void * untyped_member)
{
  (void)untyped_member;
  return 36;
}

const void * get_const_function__PoseWithCovariance__covariance(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 36> *>(untyped_member);
  return &member[index];
}

void * get_function__PoseWithCovariance__covariance(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 36> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PoseWithCovariance_message_member_array[2] = {
  {
    "pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geometry_msgs::msg::PoseWithCovariance, pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "covariance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    36,  // array size
    false,  // is upper bound
    offsetof(geometry_msgs::msg::PoseWithCovariance, covariance),  // bytes offset in struct
    nullptr,  // default value
    size_function__PoseWithCovariance__covariance,  // size() function pointer
    get_const_function__PoseWithCovariance__covariance,  // get_const(index) function pointer
    get_function__PoseWithCovariance__covariance,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PoseWithCovariance_message_members = {
  "geometry_msgs::msg",  // message namespace
  "PoseWithCovariance",  // message name
  2,  // number of fields
  sizeof(geometry_msgs::msg::PoseWithCovariance),
  PoseWithCovariance_message_member_array,  // message members
  PoseWithCovariance_init_function,  // function to initialize message memory (memory has to be allocated)
  PoseWithCovariance_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PoseWithCovariance_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PoseWithCovariance_message_members,
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
get_message_type_support_handle<geometry_msgs::msg::PoseWithCovariance>()
{
  return &::geometry_msgs::msg::rosidl_typesupport_introspection_cpp::PoseWithCovariance_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, geometry_msgs, msg, PoseWithCovariance)() {
  return &::geometry_msgs::msg::rosidl_typesupport_introspection_cpp::PoseWithCovariance_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

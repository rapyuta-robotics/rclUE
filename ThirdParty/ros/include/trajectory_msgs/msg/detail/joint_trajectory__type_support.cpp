// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from trajectory_msgs:msg/JointTrajectory.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace trajectory_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void JointTrajectory_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) trajectory_msgs::msg::JointTrajectory(_init);
}

void JointTrajectory_fini_function(void * message_memory)
{
  auto typed_message = static_cast<trajectory_msgs::msg::JointTrajectory *>(message_memory);
  typed_message->~JointTrajectory();
}

size_t size_function__JointTrajectory__joint_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointTrajectory__joint_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__JointTrajectory__joint_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__JointTrajectory__joint_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__JointTrajectory__points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<trajectory_msgs::msg::JointTrajectoryPoint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointTrajectory__points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<trajectory_msgs::msg::JointTrajectoryPoint> *>(untyped_member);
  return &member[index];
}

void * get_function__JointTrajectory__points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<trajectory_msgs::msg::JointTrajectoryPoint> *>(untyped_member);
  return &member[index];
}

void resize_function__JointTrajectory__points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<trajectory_msgs::msg::JointTrajectoryPoint> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember JointTrajectory_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(trajectory_msgs::msg::JointTrajectory, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(trajectory_msgs::msg::JointTrajectory, joint_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointTrajectory__joint_names,  // size() function pointer
    get_const_function__JointTrajectory__joint_names,  // get_const(index) function pointer
    get_function__JointTrajectory__joint_names,  // get(index) function pointer
    resize_function__JointTrajectory__joint_names  // resize(index) function pointer
  },
  {
    "points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<trajectory_msgs::msg::JointTrajectoryPoint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(trajectory_msgs::msg::JointTrajectory, points),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointTrajectory__points,  // size() function pointer
    get_const_function__JointTrajectory__points,  // get_const(index) function pointer
    get_function__JointTrajectory__points,  // get(index) function pointer
    resize_function__JointTrajectory__points  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JointTrajectory_message_members = {
  "trajectory_msgs::msg",  // message namespace
  "JointTrajectory",  // message name
  3,  // number of fields
  sizeof(trajectory_msgs::msg::JointTrajectory),
  JointTrajectory_message_member_array,  // message members
  JointTrajectory_init_function,  // function to initialize message memory (memory has to be allocated)
  JointTrajectory_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t JointTrajectory_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JointTrajectory_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace trajectory_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<trajectory_msgs::msg::JointTrajectory>()
{
  return &::trajectory_msgs::msg::rosidl_typesupport_introspection_cpp::JointTrajectory_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, trajectory_msgs, msg, JointTrajectory)() {
  return &::trajectory_msgs::msg::rosidl_typesupport_introspection_cpp::JointTrajectory_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

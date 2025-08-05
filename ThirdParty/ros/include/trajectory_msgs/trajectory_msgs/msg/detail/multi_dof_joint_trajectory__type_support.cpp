// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from trajectory_msgs:msg/MultiDOFJointTrajectory.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory__struct.hpp"
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

void MultiDOFJointTrajectory_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) trajectory_msgs::msg::MultiDOFJointTrajectory(_init);
}

void MultiDOFJointTrajectory_fini_function(void * message_memory)
{
  auto typed_message = static_cast<trajectory_msgs::msg::MultiDOFJointTrajectory *>(message_memory);
  typed_message->~MultiDOFJointTrajectory();
}

size_t size_function__MultiDOFJointTrajectory__joint_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MultiDOFJointTrajectory__joint_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__MultiDOFJointTrajectory__joint_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__MultiDOFJointTrajectory__joint_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__MultiDOFJointTrajectory__joint_names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__MultiDOFJointTrajectory__joint_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__MultiDOFJointTrajectory__joint_names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__MultiDOFJointTrajectory__joint_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MultiDOFJointTrajectory__points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MultiDOFJointTrajectory__points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint> *>(untyped_member);
  return &member[index];
}

void * get_function__MultiDOFJointTrajectory__points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint> *>(untyped_member);
  return &member[index];
}

void fetch_function__MultiDOFJointTrajectory__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const trajectory_msgs::msg::MultiDOFJointTrajectoryPoint *>(
    get_const_function__MultiDOFJointTrajectory__points(untyped_member, index));
  auto & value = *reinterpret_cast<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint *>(untyped_value);
  value = item;
}

void assign_function__MultiDOFJointTrajectory__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint *>(
    get_function__MultiDOFJointTrajectory__points(untyped_member, index));
  const auto & value = *reinterpret_cast<const trajectory_msgs::msg::MultiDOFJointTrajectoryPoint *>(untyped_value);
  item = value;
}

void resize_function__MultiDOFJointTrajectory__points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MultiDOFJointTrajectory_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(trajectory_msgs::msg::MultiDOFJointTrajectory, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
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
    offsetof(trajectory_msgs::msg::MultiDOFJointTrajectory, joint_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__MultiDOFJointTrajectory__joint_names,  // size() function pointer
    get_const_function__MultiDOFJointTrajectory__joint_names,  // get_const(index) function pointer
    get_function__MultiDOFJointTrajectory__joint_names,  // get(index) function pointer
    fetch_function__MultiDOFJointTrajectory__joint_names,  // fetch(index, &value) function pointer
    assign_function__MultiDOFJointTrajectory__joint_names,  // assign(index, value) function pointer
    resize_function__MultiDOFJointTrajectory__joint_names  // resize(index) function pointer
  },
  {
    "points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(trajectory_msgs::msg::MultiDOFJointTrajectory, points),  // bytes offset in struct
    nullptr,  // default value
    size_function__MultiDOFJointTrajectory__points,  // size() function pointer
    get_const_function__MultiDOFJointTrajectory__points,  // get_const(index) function pointer
    get_function__MultiDOFJointTrajectory__points,  // get(index) function pointer
    fetch_function__MultiDOFJointTrajectory__points,  // fetch(index, &value) function pointer
    assign_function__MultiDOFJointTrajectory__points,  // assign(index, value) function pointer
    resize_function__MultiDOFJointTrajectory__points  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MultiDOFJointTrajectory_message_members = {
  "trajectory_msgs::msg",  // message namespace
  "MultiDOFJointTrajectory",  // message name
  3,  // number of fields
  sizeof(trajectory_msgs::msg::MultiDOFJointTrajectory),
  MultiDOFJointTrajectory_message_member_array,  // message members
  MultiDOFJointTrajectory_init_function,  // function to initialize message memory (memory has to be allocated)
  MultiDOFJointTrajectory_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MultiDOFJointTrajectory_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MultiDOFJointTrajectory_message_members,
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
get_message_type_support_handle<trajectory_msgs::msg::MultiDOFJointTrajectory>()
{
  return &::trajectory_msgs::msg::rosidl_typesupport_introspection_cpp::MultiDOFJointTrajectory_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, trajectory_msgs, msg, MultiDOFJointTrajectory)() {
  return &::trajectory_msgs::msg::rosidl_typesupport_introspection_cpp::MultiDOFJointTrajectory_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

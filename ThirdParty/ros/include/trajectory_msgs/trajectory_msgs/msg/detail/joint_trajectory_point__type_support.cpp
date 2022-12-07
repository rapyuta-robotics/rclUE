// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from trajectory_msgs:msg/JointTrajectoryPoint.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "trajectory_msgs/msg/detail/joint_trajectory_point__struct.hpp"
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

void JointTrajectoryPoint_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) trajectory_msgs::msg::JointTrajectoryPoint(_init);
}

void JointTrajectoryPoint_fini_function(void * message_memory)
{
  auto typed_message = static_cast<trajectory_msgs::msg::JointTrajectoryPoint *>(message_memory);
  typed_message->~JointTrajectoryPoint();
}

size_t size_function__JointTrajectoryPoint__positions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointTrajectoryPoint__positions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__JointTrajectoryPoint__positions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointTrajectoryPoint__positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__JointTrajectoryPoint__positions(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__JointTrajectoryPoint__positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__JointTrajectoryPoint__positions(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__JointTrajectoryPoint__positions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__JointTrajectoryPoint__velocities(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointTrajectoryPoint__velocities(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__JointTrajectoryPoint__velocities(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointTrajectoryPoint__velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__JointTrajectoryPoint__velocities(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__JointTrajectoryPoint__velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__JointTrajectoryPoint__velocities(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__JointTrajectoryPoint__velocities(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__JointTrajectoryPoint__accelerations(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointTrajectoryPoint__accelerations(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__JointTrajectoryPoint__accelerations(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointTrajectoryPoint__accelerations(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__JointTrajectoryPoint__accelerations(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__JointTrajectoryPoint__accelerations(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__JointTrajectoryPoint__accelerations(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__JointTrajectoryPoint__accelerations(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__JointTrajectoryPoint__effort(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointTrajectoryPoint__effort(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__JointTrajectoryPoint__effort(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointTrajectoryPoint__effort(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__JointTrajectoryPoint__effort(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__JointTrajectoryPoint__effort(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__JointTrajectoryPoint__effort(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__JointTrajectoryPoint__effort(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember JointTrajectoryPoint_message_member_array[5] = {
  {
    "positions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(trajectory_msgs::msg::JointTrajectoryPoint, positions),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointTrajectoryPoint__positions,  // size() function pointer
    get_const_function__JointTrajectoryPoint__positions,  // get_const(index) function pointer
    get_function__JointTrajectoryPoint__positions,  // get(index) function pointer
    fetch_function__JointTrajectoryPoint__positions,  // fetch(index, &value) function pointer
    assign_function__JointTrajectoryPoint__positions,  // assign(index, value) function pointer
    resize_function__JointTrajectoryPoint__positions  // resize(index) function pointer
  },
  {
    "velocities",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(trajectory_msgs::msg::JointTrajectoryPoint, velocities),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointTrajectoryPoint__velocities,  // size() function pointer
    get_const_function__JointTrajectoryPoint__velocities,  // get_const(index) function pointer
    get_function__JointTrajectoryPoint__velocities,  // get(index) function pointer
    fetch_function__JointTrajectoryPoint__velocities,  // fetch(index, &value) function pointer
    assign_function__JointTrajectoryPoint__velocities,  // assign(index, value) function pointer
    resize_function__JointTrajectoryPoint__velocities  // resize(index) function pointer
  },
  {
    "accelerations",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(trajectory_msgs::msg::JointTrajectoryPoint, accelerations),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointTrajectoryPoint__accelerations,  // size() function pointer
    get_const_function__JointTrajectoryPoint__accelerations,  // get_const(index) function pointer
    get_function__JointTrajectoryPoint__accelerations,  // get(index) function pointer
    fetch_function__JointTrajectoryPoint__accelerations,  // fetch(index, &value) function pointer
    assign_function__JointTrajectoryPoint__accelerations,  // assign(index, value) function pointer
    resize_function__JointTrajectoryPoint__accelerations  // resize(index) function pointer
  },
  {
    "effort",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(trajectory_msgs::msg::JointTrajectoryPoint, effort),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointTrajectoryPoint__effort,  // size() function pointer
    get_const_function__JointTrajectoryPoint__effort,  // get_const(index) function pointer
    get_function__JointTrajectoryPoint__effort,  // get(index) function pointer
    fetch_function__JointTrajectoryPoint__effort,  // fetch(index, &value) function pointer
    assign_function__JointTrajectoryPoint__effort,  // assign(index, value) function pointer
    resize_function__JointTrajectoryPoint__effort  // resize(index) function pointer
  },
  {
    "time_from_start",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Duration>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(trajectory_msgs::msg::JointTrajectoryPoint, time_from_start),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JointTrajectoryPoint_message_members = {
  "trajectory_msgs::msg",  // message namespace
  "JointTrajectoryPoint",  // message name
  5,  // number of fields
  sizeof(trajectory_msgs::msg::JointTrajectoryPoint),
  JointTrajectoryPoint_message_member_array,  // message members
  JointTrajectoryPoint_init_function,  // function to initialize message memory (memory has to be allocated)
  JointTrajectoryPoint_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t JointTrajectoryPoint_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JointTrajectoryPoint_message_members,
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
get_message_type_support_handle<trajectory_msgs::msg::JointTrajectoryPoint>()
{
  return &::trajectory_msgs::msg::rosidl_typesupport_introspection_cpp::JointTrajectoryPoint_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, trajectory_msgs, msg, JointTrajectoryPoint)() {
  return &::trajectory_msgs::msg::rosidl_typesupport_introspection_cpp::JointTrajectoryPoint_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

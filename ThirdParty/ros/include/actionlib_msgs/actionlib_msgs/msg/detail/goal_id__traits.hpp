// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from actionlib_msgs:msg/GoalID.idl
// generated code does not contain a copyright notice

#ifndef ACTIONLIB_MSGS__MSG__DETAIL__GOAL_ID__TRAITS_HPP_
#define ACTIONLIB_MSGS__MSG__DETAIL__GOAL_ID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "actionlib_msgs/msg/detail/goal_id__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace actionlib_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GoalID & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GoalID & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GoalID & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace actionlib_msgs

namespace rosidl_generator_traits
{

[[deprecated("use actionlib_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const actionlib_msgs::msg::GoalID & msg,
  std::ostream & out, size_t indentation = 0)
{
  actionlib_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use actionlib_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const actionlib_msgs::msg::GoalID & msg)
{
  return actionlib_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<actionlib_msgs::msg::GoalID>()
{
  return "actionlib_msgs::msg::GoalID";
}

template<>
inline const char * name<actionlib_msgs::msg::GoalID>()
{
  return "actionlib_msgs/msg/GoalID";
}

template<>
struct has_fixed_size<actionlib_msgs::msg::GoalID>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<actionlib_msgs::msg::GoalID>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<actionlib_msgs::msg::GoalID>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ACTIONLIB_MSGS__MSG__DETAIL__GOAL_ID__TRAITS_HPP_

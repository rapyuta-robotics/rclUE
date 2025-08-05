// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from actionlib_msgs:msg/GoalStatus.idl
// generated code does not contain a copyright notice

#ifndef ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS__TRAITS_HPP_
#define ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "actionlib_msgs/msg/detail/goal_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'goal_id'
#include "actionlib_msgs/msg/detail/goal_id__traits.hpp"

namespace actionlib_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GoalStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: text
  {
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GoalStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GoalStatus & msg, bool use_flow_style = false)
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
  const actionlib_msgs::msg::GoalStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  actionlib_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use actionlib_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const actionlib_msgs::msg::GoalStatus & msg)
{
  return actionlib_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<actionlib_msgs::msg::GoalStatus>()
{
  return "actionlib_msgs::msg::GoalStatus";
}

template<>
inline const char * name<actionlib_msgs::msg::GoalStatus>()
{
  return "actionlib_msgs/msg/GoalStatus";
}

template<>
struct has_fixed_size<actionlib_msgs::msg::GoalStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<actionlib_msgs::msg::GoalStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<actionlib_msgs::msg::GoalStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS__TRAITS_HPP_

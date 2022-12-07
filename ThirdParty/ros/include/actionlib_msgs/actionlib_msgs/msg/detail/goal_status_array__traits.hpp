// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from actionlib_msgs:msg/GoalStatusArray.idl
// generated code does not contain a copyright notice

#ifndef ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS_ARRAY__TRAITS_HPP_
#define ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "actionlib_msgs/msg/detail/goal_status_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'status_list'
#include "actionlib_msgs/msg/detail/goal_status__traits.hpp"

namespace actionlib_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GoalStatusArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: status_list
  {
    if (msg.status_list.size() == 0) {
      out << "status_list: []";
    } else {
      out << "status_list: [";
      size_t pending_items = msg.status_list.size();
      for (auto item : msg.status_list) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GoalStatusArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: status_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.status_list.size() == 0) {
      out << "status_list: []\n";
    } else {
      out << "status_list:\n";
      for (auto item : msg.status_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GoalStatusArray & msg, bool use_flow_style = false)
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
  const actionlib_msgs::msg::GoalStatusArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  actionlib_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use actionlib_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const actionlib_msgs::msg::GoalStatusArray & msg)
{
  return actionlib_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<actionlib_msgs::msg::GoalStatusArray>()
{
  return "actionlib_msgs::msg::GoalStatusArray";
}

template<>
inline const char * name<actionlib_msgs::msg::GoalStatusArray>()
{
  return "actionlib_msgs/msg/GoalStatusArray";
}

template<>
struct has_fixed_size<actionlib_msgs::msg::GoalStatusArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<actionlib_msgs::msg::GoalStatusArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<actionlib_msgs::msg::GoalStatusArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS_ARRAY__TRAITS_HPP_

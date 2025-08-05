// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav_msgs:srv/GetPlan.idl
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__SRV__DETAIL__GET_PLAN__TRAITS_HPP_
#define NAV_MSGS__SRV__DETAIL__GET_PLAN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nav_msgs/srv/detail/get_plan__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'start'
// Member 'goal'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace nav_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPlan_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: start
  {
    out << "start: ";
    to_flow_style_yaml(msg.start, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
    out << ", ";
  }

  // member: tolerance
  {
    out << "tolerance: ";
    rosidl_generator_traits::value_to_yaml(msg.tolerance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPlan_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start:\n";
    to_block_style_yaml(msg.start, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }

  // member: tolerance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tolerance: ";
    rosidl_generator_traits::value_to_yaml(msg.tolerance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPlan_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace nav_msgs

namespace rosidl_generator_traits
{

[[deprecated("use nav_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const nav_msgs::srv::GetPlan_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const nav_msgs::srv::GetPlan_Request & msg)
{
  return nav_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<nav_msgs::srv::GetPlan_Request>()
{
  return "nav_msgs::srv::GetPlan_Request";
}

template<>
inline const char * name<nav_msgs::srv::GetPlan_Request>()
{
  return "nav_msgs/srv/GetPlan_Request";
}

template<>
struct has_fixed_size<nav_msgs::srv::GetPlan_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct has_bounded_size<nav_msgs::srv::GetPlan_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct is_message<nav_msgs::srv::GetPlan_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'plan'
#include "nav_msgs/msg/detail/path__traits.hpp"

namespace nav_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPlan_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: plan
  {
    out << "plan: ";
    to_flow_style_yaml(msg.plan, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPlan_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: plan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plan:\n";
    to_block_style_yaml(msg.plan, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPlan_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace nav_msgs

namespace rosidl_generator_traits
{

[[deprecated("use nav_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const nav_msgs::srv::GetPlan_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const nav_msgs::srv::GetPlan_Response & msg)
{
  return nav_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<nav_msgs::srv::GetPlan_Response>()
{
  return "nav_msgs::srv::GetPlan_Response";
}

template<>
inline const char * name<nav_msgs::srv::GetPlan_Response>()
{
  return "nav_msgs/srv/GetPlan_Response";
}

template<>
struct has_fixed_size<nav_msgs::srv::GetPlan_Response>
  : std::integral_constant<bool, has_fixed_size<nav_msgs::msg::Path>::value> {};

template<>
struct has_bounded_size<nav_msgs::srv::GetPlan_Response>
  : std::integral_constant<bool, has_bounded_size<nav_msgs::msg::Path>::value> {};

template<>
struct is_message<nav_msgs::srv::GetPlan_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav_msgs::srv::GetPlan>()
{
  return "nav_msgs::srv::GetPlan";
}

template<>
inline const char * name<nav_msgs::srv::GetPlan>()
{
  return "nav_msgs/srv/GetPlan";
}

template<>
struct has_fixed_size<nav_msgs::srv::GetPlan>
  : std::integral_constant<
    bool,
    has_fixed_size<nav_msgs::srv::GetPlan_Request>::value &&
    has_fixed_size<nav_msgs::srv::GetPlan_Response>::value
  >
{
};

template<>
struct has_bounded_size<nav_msgs::srv::GetPlan>
  : std::integral_constant<
    bool,
    has_bounded_size<nav_msgs::srv::GetPlan_Request>::value &&
    has_bounded_size<nav_msgs::srv::GetPlan_Response>::value
  >
{
};

template<>
struct is_service<nav_msgs::srv::GetPlan>
  : std::true_type
{
};

template<>
struct is_service_request<nav_msgs::srv::GetPlan_Request>
  : std::true_type
{
};

template<>
struct is_service_response<nav_msgs::srv::GetPlan_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NAV_MSGS__SRV__DETAIL__GET_PLAN__TRAITS_HPP_

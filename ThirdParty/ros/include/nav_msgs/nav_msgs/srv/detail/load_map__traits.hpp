// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav_msgs:srv/LoadMap.idl
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__SRV__DETAIL__LOAD_MAP__TRAITS_HPP_
#define NAV_MSGS__SRV__DETAIL__LOAD_MAP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nav_msgs/srv/detail/load_map__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace nav_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const LoadMap_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: map_url
  {
    out << "map_url: ";
    rosidl_generator_traits::value_to_yaml(msg.map_url, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LoadMap_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: map_url
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_url: ";
    rosidl_generator_traits::value_to_yaml(msg.map_url, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LoadMap_Request & msg, bool use_flow_style = false)
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
  const nav_msgs::srv::LoadMap_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const nav_msgs::srv::LoadMap_Request & msg)
{
  return nav_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<nav_msgs::srv::LoadMap_Request>()
{
  return "nav_msgs::srv::LoadMap_Request";
}

template<>
inline const char * name<nav_msgs::srv::LoadMap_Request>()
{
  return "nav_msgs/srv/LoadMap_Request";
}

template<>
struct has_fixed_size<nav_msgs::srv::LoadMap_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nav_msgs::srv::LoadMap_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nav_msgs::srv::LoadMap_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'map'
#include "nav_msgs/msg/detail/occupancy_grid__traits.hpp"

namespace nav_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const LoadMap_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: map
  {
    out << "map: ";
    to_flow_style_yaml(msg.map, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LoadMap_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: map
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map:\n";
    to_block_style_yaml(msg.map, out, indentation + 2);
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LoadMap_Response & msg, bool use_flow_style = false)
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
  const nav_msgs::srv::LoadMap_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const nav_msgs::srv::LoadMap_Response & msg)
{
  return nav_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<nav_msgs::srv::LoadMap_Response>()
{
  return "nav_msgs::srv::LoadMap_Response";
}

template<>
inline const char * name<nav_msgs::srv::LoadMap_Response>()
{
  return "nav_msgs/srv/LoadMap_Response";
}

template<>
struct has_fixed_size<nav_msgs::srv::LoadMap_Response>
  : std::integral_constant<bool, has_fixed_size<nav_msgs::msg::OccupancyGrid>::value> {};

template<>
struct has_bounded_size<nav_msgs::srv::LoadMap_Response>
  : std::integral_constant<bool, has_bounded_size<nav_msgs::msg::OccupancyGrid>::value> {};

template<>
struct is_message<nav_msgs::srv::LoadMap_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav_msgs::srv::LoadMap>()
{
  return "nav_msgs::srv::LoadMap";
}

template<>
inline const char * name<nav_msgs::srv::LoadMap>()
{
  return "nav_msgs/srv/LoadMap";
}

template<>
struct has_fixed_size<nav_msgs::srv::LoadMap>
  : std::integral_constant<
    bool,
    has_fixed_size<nav_msgs::srv::LoadMap_Request>::value &&
    has_fixed_size<nav_msgs::srv::LoadMap_Response>::value
  >
{
};

template<>
struct has_bounded_size<nav_msgs::srv::LoadMap>
  : std::integral_constant<
    bool,
    has_bounded_size<nav_msgs::srv::LoadMap_Request>::value &&
    has_bounded_size<nav_msgs::srv::LoadMap_Response>::value
  >
{
};

template<>
struct is_service<nav_msgs::srv::LoadMap>
  : std::true_type
{
};

template<>
struct is_service_request<nav_msgs::srv::LoadMap_Request>
  : std::true_type
{
};

template<>
struct is_service_response<nav_msgs::srv::LoadMap_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NAV_MSGS__SRV__DETAIL__LOAD_MAP__TRAITS_HPP_

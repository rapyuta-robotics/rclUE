// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from visualization_msgs:srv/GetInteractiveMarkers.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__SRV__DETAIL__GET_INTERACTIVE_MARKERS__TRAITS_HPP_
#define VISUALIZATION_MSGS__SRV__DETAIL__GET_INTERACTIVE_MARKERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "visualization_msgs/srv/detail/get_interactive_markers__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace visualization_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetInteractiveMarkers_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetInteractiveMarkers_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetInteractiveMarkers_Request & msg, bool use_flow_style = false)
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

}  // namespace visualization_msgs

namespace rosidl_generator_traits
{

[[deprecated("use visualization_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const visualization_msgs::srv::GetInteractiveMarkers_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  visualization_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use visualization_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const visualization_msgs::srv::GetInteractiveMarkers_Request & msg)
{
  return visualization_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<visualization_msgs::srv::GetInteractiveMarkers_Request>()
{
  return "visualization_msgs::srv::GetInteractiveMarkers_Request";
}

template<>
inline const char * name<visualization_msgs::srv::GetInteractiveMarkers_Request>()
{
  return "visualization_msgs/srv/GetInteractiveMarkers_Request";
}

template<>
struct has_fixed_size<visualization_msgs::srv::GetInteractiveMarkers_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<visualization_msgs::srv::GetInteractiveMarkers_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<visualization_msgs::srv::GetInteractiveMarkers_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'markers'
#include "visualization_msgs/msg/detail/interactive_marker__traits.hpp"

namespace visualization_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetInteractiveMarkers_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: sequence_number
  {
    out << "sequence_number: ";
    rosidl_generator_traits::value_to_yaml(msg.sequence_number, out);
    out << ", ";
  }

  // member: markers
  {
    if (msg.markers.size() == 0) {
      out << "markers: []";
    } else {
      out << "markers: [";
      size_t pending_items = msg.markers.size();
      for (auto item : msg.markers) {
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
  const GetInteractiveMarkers_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sequence_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sequence_number: ";
    rosidl_generator_traits::value_to_yaml(msg.sequence_number, out);
    out << "\n";
  }

  // member: markers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.markers.size() == 0) {
      out << "markers: []\n";
    } else {
      out << "markers:\n";
      for (auto item : msg.markers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetInteractiveMarkers_Response & msg, bool use_flow_style = false)
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

}  // namespace visualization_msgs

namespace rosidl_generator_traits
{

[[deprecated("use visualization_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const visualization_msgs::srv::GetInteractiveMarkers_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  visualization_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use visualization_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const visualization_msgs::srv::GetInteractiveMarkers_Response & msg)
{
  return visualization_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<visualization_msgs::srv::GetInteractiveMarkers_Response>()
{
  return "visualization_msgs::srv::GetInteractiveMarkers_Response";
}

template<>
inline const char * name<visualization_msgs::srv::GetInteractiveMarkers_Response>()
{
  return "visualization_msgs/srv/GetInteractiveMarkers_Response";
}

template<>
struct has_fixed_size<visualization_msgs::srv::GetInteractiveMarkers_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<visualization_msgs::srv::GetInteractiveMarkers_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<visualization_msgs::srv::GetInteractiveMarkers_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<visualization_msgs::srv::GetInteractiveMarkers>()
{
  return "visualization_msgs::srv::GetInteractiveMarkers";
}

template<>
inline const char * name<visualization_msgs::srv::GetInteractiveMarkers>()
{
  return "visualization_msgs/srv/GetInteractiveMarkers";
}

template<>
struct has_fixed_size<visualization_msgs::srv::GetInteractiveMarkers>
  : std::integral_constant<
    bool,
    has_fixed_size<visualization_msgs::srv::GetInteractiveMarkers_Request>::value &&
    has_fixed_size<visualization_msgs::srv::GetInteractiveMarkers_Response>::value
  >
{
};

template<>
struct has_bounded_size<visualization_msgs::srv::GetInteractiveMarkers>
  : std::integral_constant<
    bool,
    has_bounded_size<visualization_msgs::srv::GetInteractiveMarkers_Request>::value &&
    has_bounded_size<visualization_msgs::srv::GetInteractiveMarkers_Response>::value
  >
{
};

template<>
struct is_service<visualization_msgs::srv::GetInteractiveMarkers>
  : std::true_type
{
};

template<>
struct is_service_request<visualization_msgs::srv::GetInteractiveMarkers_Request>
  : std::true_type
{
};

template<>
struct is_service_response<visualization_msgs::srv::GetInteractiveMarkers_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // VISUALIZATION_MSGS__SRV__DETAIL__GET_INTERACTIVE_MARKERS__TRAITS_HPP_

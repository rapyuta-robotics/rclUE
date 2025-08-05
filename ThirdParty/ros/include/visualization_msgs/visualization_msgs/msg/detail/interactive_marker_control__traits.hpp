// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from visualization_msgs:msg/InteractiveMarkerControl.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_CONTROL__TRAITS_HPP_
#define VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "visualization_msgs/msg/detail/interactive_marker_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"
// Member 'markers'
#include "visualization_msgs/msg/detail/marker__traits.hpp"

namespace visualization_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const InteractiveMarkerControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: orientation
  {
    out << "orientation: ";
    to_flow_style_yaml(msg.orientation, out);
    out << ", ";
  }

  // member: orientation_mode
  {
    out << "orientation_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation_mode, out);
    out << ", ";
  }

  // member: interaction_mode
  {
    out << "interaction_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.interaction_mode, out);
    out << ", ";
  }

  // member: always_visible
  {
    out << "always_visible: ";
    rosidl_generator_traits::value_to_yaml(msg.always_visible, out);
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
    out << ", ";
  }

  // member: independent_marker_orientation
  {
    out << "independent_marker_orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.independent_marker_orientation, out);
    out << ", ";
  }

  // member: description
  {
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InteractiveMarkerControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation:\n";
    to_block_style_yaml(msg.orientation, out, indentation + 2);
  }

  // member: orientation_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation_mode, out);
    out << "\n";
  }

  // member: interaction_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "interaction_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.interaction_mode, out);
    out << "\n";
  }

  // member: always_visible
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "always_visible: ";
    rosidl_generator_traits::value_to_yaml(msg.always_visible, out);
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

  // member: independent_marker_orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "independent_marker_orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.independent_marker_orientation, out);
    out << "\n";
  }

  // member: description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InteractiveMarkerControl & msg, bool use_flow_style = false)
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

}  // namespace visualization_msgs

namespace rosidl_generator_traits
{

[[deprecated("use visualization_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const visualization_msgs::msg::InteractiveMarkerControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  visualization_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use visualization_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const visualization_msgs::msg::InteractiveMarkerControl & msg)
{
  return visualization_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<visualization_msgs::msg::InteractiveMarkerControl>()
{
  return "visualization_msgs::msg::InteractiveMarkerControl";
}

template<>
inline const char * name<visualization_msgs::msg::InteractiveMarkerControl>()
{
  return "visualization_msgs/msg/InteractiveMarkerControl";
}

template<>
struct has_fixed_size<visualization_msgs::msg::InteractiveMarkerControl>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<visualization_msgs::msg::InteractiveMarkerControl>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<visualization_msgs::msg::InteractiveMarkerControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_CONTROL__TRAITS_HPP_

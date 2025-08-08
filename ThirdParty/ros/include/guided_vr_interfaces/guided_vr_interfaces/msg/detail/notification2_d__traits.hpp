// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from guided_vr_interfaces:msg/Notification2D.idl
// generated code does not contain a copyright notice

#ifndef GUIDED_VR_INTERFACES__MSG__DETAIL__NOTIFICATION2_D__TRAITS_HPP_
#define GUIDED_VR_INTERFACES__MSG__DETAIL__NOTIFICATION2_D__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "guided_vr_interfaces/msg/detail/notification2_d__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'source'
// Member 'desc'
#include "std_msgs/msg/detail/string__traits.hpp"
// Member 'level'
#include "std_msgs/msg/detail/u_int8__traits.hpp"
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'polygon'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace guided_vr_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Notification2D & msg,
  std::ostream & out)
{
  out << "{";
  // member: source
  {
    out << "source: ";
    to_flow_style_yaml(msg.source, out);
    out << ", ";
  }

  // member: desc
  {
    out << "desc: ";
    to_flow_style_yaml(msg.desc, out);
    out << ", ";
  }

  // member: level
  {
    out << "level: ";
    to_flow_style_yaml(msg.level, out);
    out << ", ";
  }

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
    out << ", ";
  }

  // member: polygon
  {
    if (msg.polygon.size() == 0) {
      out << "polygon: []";
    } else {
      out << "polygon: [";
      size_t pending_items = msg.polygon.size();
      for (auto item : msg.polygon) {
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
  const Notification2D & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source:\n";
    to_block_style_yaml(msg.source, out, indentation + 2);
  }

  // member: desc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "desc:\n";
    to_block_style_yaml(msg.desc, out, indentation + 2);
  }

  // member: level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "level:\n";
    to_block_style_yaml(msg.level, out, indentation + 2);
  }

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

  // member: polygon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.polygon.size() == 0) {
      out << "polygon: []\n";
    } else {
      out << "polygon:\n";
      for (auto item : msg.polygon) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Notification2D & msg, bool use_flow_style = false)
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

}  // namespace guided_vr_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use guided_vr_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const guided_vr_interfaces::msg::Notification2D & msg,
  std::ostream & out, size_t indentation = 0)
{
  guided_vr_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use guided_vr_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const guided_vr_interfaces::msg::Notification2D & msg)
{
  return guided_vr_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<guided_vr_interfaces::msg::Notification2D>()
{
  return "guided_vr_interfaces::msg::Notification2D";
}

template<>
inline const char * name<guided_vr_interfaces::msg::Notification2D>()
{
  return "guided_vr_interfaces/msg/Notification2D";
}

template<>
struct has_fixed_size<guided_vr_interfaces::msg::Notification2D>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<guided_vr_interfaces::msg::Notification2D>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<guided_vr_interfaces::msg::Notification2D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GUIDED_VR_INTERFACES__MSG__DETAIL__NOTIFICATION2_D__TRAITS_HPP_

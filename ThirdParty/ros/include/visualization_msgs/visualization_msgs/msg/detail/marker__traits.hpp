// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from visualization_msgs:msg/Marker.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__MARKER__TRAITS_HPP_
#define VISUALIZATION_MSGS__MSG__DETAIL__MARKER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "visualization_msgs/msg/detail/marker__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'scale'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'color'
// Member 'colors'
#include "std_msgs/msg/detail/color_rgba__traits.hpp"
// Member 'lifetime'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"
// Member 'points'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'texture'
#include "sensor_msgs/msg/detail/compressed_image__traits.hpp"
// Member 'uv_coordinates'
#include "visualization_msgs/msg/detail/uv_coordinate__traits.hpp"
// Member 'mesh_file'
#include "visualization_msgs/msg/detail/mesh_file__traits.hpp"

namespace visualization_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Marker & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: ns
  {
    out << "ns: ";
    rosidl_generator_traits::value_to_yaml(msg.ns, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: action
  {
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: scale
  {
    out << "scale: ";
    to_flow_style_yaml(msg.scale, out);
    out << ", ";
  }

  // member: color
  {
    out << "color: ";
    to_flow_style_yaml(msg.color, out);
    out << ", ";
  }

  // member: lifetime
  {
    out << "lifetime: ";
    to_flow_style_yaml(msg.lifetime, out);
    out << ", ";
  }

  // member: frame_locked
  {
    out << "frame_locked: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_locked, out);
    out << ", ";
  }

  // member: points
  {
    if (msg.points.size() == 0) {
      out << "points: []";
    } else {
      out << "points: [";
      size_t pending_items = msg.points.size();
      for (auto item : msg.points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: colors
  {
    if (msg.colors.size() == 0) {
      out << "colors: []";
    } else {
      out << "colors: [";
      size_t pending_items = msg.colors.size();
      for (auto item : msg.colors) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: texture_resource
  {
    out << "texture_resource: ";
    rosidl_generator_traits::value_to_yaml(msg.texture_resource, out);
    out << ", ";
  }

  // member: texture
  {
    out << "texture: ";
    to_flow_style_yaml(msg.texture, out);
    out << ", ";
  }

  // member: uv_coordinates
  {
    if (msg.uv_coordinates.size() == 0) {
      out << "uv_coordinates: []";
    } else {
      out << "uv_coordinates: [";
      size_t pending_items = msg.uv_coordinates.size();
      for (auto item : msg.uv_coordinates) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: text
  {
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
    out << ", ";
  }

  // member: mesh_resource
  {
    out << "mesh_resource: ";
    rosidl_generator_traits::value_to_yaml(msg.mesh_resource, out);
    out << ", ";
  }

  // member: mesh_file
  {
    out << "mesh_file: ";
    to_flow_style_yaml(msg.mesh_file, out);
    out << ", ";
  }

  // member: mesh_use_embedded_materials
  {
    out << "mesh_use_embedded_materials: ";
    rosidl_generator_traits::value_to_yaml(msg.mesh_use_embedded_materials, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Marker & msg,
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

  // member: ns
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ns: ";
    rosidl_generator_traits::value_to_yaml(msg.ns, out);
    out << "\n";
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

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scale:\n";
    to_block_style_yaml(msg.scale, out, indentation + 2);
  }

  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color:\n";
    to_block_style_yaml(msg.color, out, indentation + 2);
  }

  // member: lifetime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lifetime:\n";
    to_block_style_yaml(msg.lifetime, out, indentation + 2);
  }

  // member: frame_locked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_locked: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_locked, out);
    out << "\n";
  }

  // member: points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.points.size() == 0) {
      out << "points: []\n";
    } else {
      out << "points:\n";
      for (auto item : msg.points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: colors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.colors.size() == 0) {
      out << "colors: []\n";
    } else {
      out << "colors:\n";
      for (auto item : msg.colors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: texture_resource
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "texture_resource: ";
    rosidl_generator_traits::value_to_yaml(msg.texture_resource, out);
    out << "\n";
  }

  // member: texture
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "texture:\n";
    to_block_style_yaml(msg.texture, out, indentation + 2);
  }

  // member: uv_coordinates
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.uv_coordinates.size() == 0) {
      out << "uv_coordinates: []\n";
    } else {
      out << "uv_coordinates:\n";
      for (auto item : msg.uv_coordinates) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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

  // member: mesh_resource
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mesh_resource: ";
    rosidl_generator_traits::value_to_yaml(msg.mesh_resource, out);
    out << "\n";
  }

  // member: mesh_file
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mesh_file:\n";
    to_block_style_yaml(msg.mesh_file, out, indentation + 2);
  }

  // member: mesh_use_embedded_materials
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mesh_use_embedded_materials: ";
    rosidl_generator_traits::value_to_yaml(msg.mesh_use_embedded_materials, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Marker & msg, bool use_flow_style = false)
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
  const visualization_msgs::msg::Marker & msg,
  std::ostream & out, size_t indentation = 0)
{
  visualization_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use visualization_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const visualization_msgs::msg::Marker & msg)
{
  return visualization_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<visualization_msgs::msg::Marker>()
{
  return "visualization_msgs::msg::Marker";
}

template<>
inline const char * name<visualization_msgs::msg::Marker>()
{
  return "visualization_msgs/msg/Marker";
}

template<>
struct has_fixed_size<visualization_msgs::msg::Marker>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<visualization_msgs::msg::Marker>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<visualization_msgs::msg::Marker>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__MARKER__TRAITS_HPP_

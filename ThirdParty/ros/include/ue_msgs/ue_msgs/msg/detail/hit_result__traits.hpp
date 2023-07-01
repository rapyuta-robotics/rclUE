// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ue_msgs:msg/HitResult.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__HIT_RESULT__TRAITS_HPP_
#define UE_MSGS__MSG__DETAIL__HIT_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ue_msgs/msg/detail/hit_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'impact_normal'
// Member 'normal'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'impact_point'
// Member 'location'
// Member 'trace_start'
// Member 'trace_end'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace ue_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HitResult & msg,
  std::ostream & out)
{
  out << "{";
  // member: blocking_hit
  {
    out << "blocking_hit: ";
    rosidl_generator_traits::value_to_yaml(msg.blocking_hit, out);
    out << ", ";
  }

  // member: start_penetrating
  {
    out << "start_penetrating: ";
    rosidl_generator_traits::value_to_yaml(msg.start_penetrating, out);
    out << ", ";
  }

  // member: component_name
  {
    out << "component_name: ";
    rosidl_generator_traits::value_to_yaml(msg.component_name, out);
    out << ", ";
  }

  // member: actor_name
  {
    out << "actor_name: ";
    rosidl_generator_traits::value_to_yaml(msg.actor_name, out);
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << ", ";
  }

  // member: element_index
  {
    out << "element_index: ";
    rosidl_generator_traits::value_to_yaml(msg.element_index, out);
    out << ", ";
  }

  // member: face_index
  {
    out << "face_index: ";
    rosidl_generator_traits::value_to_yaml(msg.face_index, out);
    out << ", ";
  }

  // member: bone_name
  {
    out << "bone_name: ";
    rosidl_generator_traits::value_to_yaml(msg.bone_name, out);
    out << ", ";
  }

  // member: item
  {
    out << "item: ";
    rosidl_generator_traits::value_to_yaml(msg.item, out);
    out << ", ";
  }

  // member: my_bone_name
  {
    out << "my_bone_name: ";
    rosidl_generator_traits::value_to_yaml(msg.my_bone_name, out);
    out << ", ";
  }

  // member: my_item
  {
    out << "my_item: ";
    rosidl_generator_traits::value_to_yaml(msg.my_item, out);
    out << ", ";
  }

  // member: penetration_depth
  {
    out << "penetration_depth: ";
    rosidl_generator_traits::value_to_yaml(msg.penetration_depth, out);
    out << ", ";
  }

  // member: physics_material_name
  {
    out << "physics_material_name: ";
    rosidl_generator_traits::value_to_yaml(msg.physics_material_name, out);
    out << ", ";
  }

  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << ", ";
  }

  // member: impact_normal
  {
    out << "impact_normal: ";
    to_flow_style_yaml(msg.impact_normal, out);
    out << ", ";
  }

  // member: impact_point
  {
    out << "impact_point: ";
    to_flow_style_yaml(msg.impact_point, out);
    out << ", ";
  }

  // member: normal
  {
    out << "normal: ";
    to_flow_style_yaml(msg.normal, out);
    out << ", ";
  }

  // member: location
  {
    out << "location: ";
    to_flow_style_yaml(msg.location, out);
    out << ", ";
  }

  // member: trace_start
  {
    out << "trace_start: ";
    to_flow_style_yaml(msg.trace_start, out);
    out << ", ";
  }

  // member: trace_end
  {
    out << "trace_end: ";
    to_flow_style_yaml(msg.trace_end, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HitResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: blocking_hit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blocking_hit: ";
    rosidl_generator_traits::value_to_yaml(msg.blocking_hit, out);
    out << "\n";
  }

  // member: start_penetrating
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_penetrating: ";
    rosidl_generator_traits::value_to_yaml(msg.start_penetrating, out);
    out << "\n";
  }

  // member: component_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "component_name: ";
    rosidl_generator_traits::value_to_yaml(msg.component_name, out);
    out << "\n";
  }

  // member: actor_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "actor_name: ";
    rosidl_generator_traits::value_to_yaml(msg.actor_name, out);
    out << "\n";
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }

  // member: element_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "element_index: ";
    rosidl_generator_traits::value_to_yaml(msg.element_index, out);
    out << "\n";
  }

  // member: face_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "face_index: ";
    rosidl_generator_traits::value_to_yaml(msg.face_index, out);
    out << "\n";
  }

  // member: bone_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bone_name: ";
    rosidl_generator_traits::value_to_yaml(msg.bone_name, out);
    out << "\n";
  }

  // member: item
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "item: ";
    rosidl_generator_traits::value_to_yaml(msg.item, out);
    out << "\n";
  }

  // member: my_bone_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "my_bone_name: ";
    rosidl_generator_traits::value_to_yaml(msg.my_bone_name, out);
    out << "\n";
  }

  // member: my_item
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "my_item: ";
    rosidl_generator_traits::value_to_yaml(msg.my_item, out);
    out << "\n";
  }

  // member: penetration_depth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "penetration_depth: ";
    rosidl_generator_traits::value_to_yaml(msg.penetration_depth, out);
    out << "\n";
  }

  // member: physics_material_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "physics_material_name: ";
    rosidl_generator_traits::value_to_yaml(msg.physics_material_name, out);
    out << "\n";
  }

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << "\n";
  }

  // member: impact_normal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "impact_normal:\n";
    to_block_style_yaml(msg.impact_normal, out, indentation + 2);
  }

  // member: impact_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "impact_point:\n";
    to_block_style_yaml(msg.impact_point, out, indentation + 2);
  }

  // member: normal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "normal:\n";
    to_block_style_yaml(msg.normal, out, indentation + 2);
  }

  // member: location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "location:\n";
    to_block_style_yaml(msg.location, out, indentation + 2);
  }

  // member: trace_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trace_start:\n";
    to_block_style_yaml(msg.trace_start, out, indentation + 2);
  }

  // member: trace_end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trace_end:\n";
    to_block_style_yaml(msg.trace_end, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HitResult & msg, bool use_flow_style = false)
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

}  // namespace ue_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ue_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ue_msgs::msg::HitResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  ue_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ue_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ue_msgs::msg::HitResult & msg)
{
  return ue_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ue_msgs::msg::HitResult>()
{
  return "ue_msgs::msg::HitResult";
}

template<>
inline const char * name<ue_msgs::msg::HitResult>()
{
  return "ue_msgs/msg/HitResult";
}

template<>
struct has_fixed_size<ue_msgs::msg::HitResult>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ue_msgs::msg::HitResult>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ue_msgs::msg::HitResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UE_MSGS__MSG__DETAIL__HIT_RESULT__TRAITS_HPP_

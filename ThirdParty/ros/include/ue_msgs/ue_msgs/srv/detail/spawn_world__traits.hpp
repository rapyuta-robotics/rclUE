// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ue_msgs:srv/SpawnWorld.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__SRV__DETAIL__SPAWN_WORLD__TRAITS_HPP_
#define UE_MSGS__SRV__DETAIL__SPAWN_WORLD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ue_msgs/srv/detail/spawn_world__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace ue_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SpawnWorld_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: world_model
  {
    out << "world_model: ";
    rosidl_generator_traits::value_to_yaml(msg.world_model, out);
    out << ", ";
  }

  // member: world_instance_name
  {
    out << "world_instance_name: ";
    rosidl_generator_traits::value_to_yaml(msg.world_instance_name, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: json_parameters
  {
    out << "json_parameters: ";
    rosidl_generator_traits::value_to_yaml(msg.json_parameters, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SpawnWorld_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: world_model
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "world_model: ";
    rosidl_generator_traits::value_to_yaml(msg.world_model, out);
    out << "\n";
  }

  // member: world_instance_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "world_instance_name: ";
    rosidl_generator_traits::value_to_yaml(msg.world_instance_name, out);
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

  // member: json_parameters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "json_parameters: ";
    rosidl_generator_traits::value_to_yaml(msg.json_parameters, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SpawnWorld_Request & msg, bool use_flow_style = false)
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

}  // namespace ue_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ue_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ue_msgs::srv::SpawnWorld_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ue_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ue_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ue_msgs::srv::SpawnWorld_Request & msg)
{
  return ue_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ue_msgs::srv::SpawnWorld_Request>()
{
  return "ue_msgs::srv::SpawnWorld_Request";
}

template<>
inline const char * name<ue_msgs::srv::SpawnWorld_Request>()
{
  return "ue_msgs/srv/SpawnWorld_Request";
}

template<>
struct has_fixed_size<ue_msgs::srv::SpawnWorld_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ue_msgs::srv::SpawnWorld_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ue_msgs::srv::SpawnWorld_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ue_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SpawnWorld_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: status_message
  {
    out << "status_message: ";
    rosidl_generator_traits::value_to_yaml(msg.status_message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SpawnWorld_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: status_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_message: ";
    rosidl_generator_traits::value_to_yaml(msg.status_message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SpawnWorld_Response & msg, bool use_flow_style = false)
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

}  // namespace ue_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ue_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ue_msgs::srv::SpawnWorld_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ue_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ue_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ue_msgs::srv::SpawnWorld_Response & msg)
{
  return ue_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ue_msgs::srv::SpawnWorld_Response>()
{
  return "ue_msgs::srv::SpawnWorld_Response";
}

template<>
inline const char * name<ue_msgs::srv::SpawnWorld_Response>()
{
  return "ue_msgs/srv/SpawnWorld_Response";
}

template<>
struct has_fixed_size<ue_msgs::srv::SpawnWorld_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ue_msgs::srv::SpawnWorld_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ue_msgs::srv::SpawnWorld_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ue_msgs::srv::SpawnWorld>()
{
  return "ue_msgs::srv::SpawnWorld";
}

template<>
inline const char * name<ue_msgs::srv::SpawnWorld>()
{
  return "ue_msgs/srv/SpawnWorld";
}

template<>
struct has_fixed_size<ue_msgs::srv::SpawnWorld>
  : std::integral_constant<
    bool,
    has_fixed_size<ue_msgs::srv::SpawnWorld_Request>::value &&
    has_fixed_size<ue_msgs::srv::SpawnWorld_Response>::value
  >
{
};

template<>
struct has_bounded_size<ue_msgs::srv::SpawnWorld>
  : std::integral_constant<
    bool,
    has_bounded_size<ue_msgs::srv::SpawnWorld_Request>::value &&
    has_bounded_size<ue_msgs::srv::SpawnWorld_Response>::value
  >
{
};

template<>
struct is_service<ue_msgs::srv::SpawnWorld>
  : std::true_type
{
};

template<>
struct is_service_request<ue_msgs::srv::SpawnWorld_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ue_msgs::srv::SpawnWorld_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UE_MSGS__SRV__DETAIL__SPAWN_WORLD__TRAITS_HPP_

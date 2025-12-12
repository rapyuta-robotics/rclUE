// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simulation_interfaces:srv/SpawnEntity.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__SPAWN_ENTITY__TRAITS_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__SPAWN_ENTITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "simulation_interfaces/srv/detail/spawn_entity__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'entity_resource'
#include "simulation_interfaces/msg/detail/resource__traits.hpp"
// Member 'initial_pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace simulation_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SpawnEntity_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: allow_renaming
  {
    out << "allow_renaming: ";
    rosidl_generator_traits::value_to_yaml(msg.allow_renaming, out);
    out << ", ";
  }

  // member: entity_resource
  {
    out << "entity_resource: ";
    to_flow_style_yaml(msg.entity_resource, out);
    out << ", ";
  }

  // member: entity_namespace
  {
    out << "entity_namespace: ";
    rosidl_generator_traits::value_to_yaml(msg.entity_namespace, out);
    out << ", ";
  }

  // member: initial_pose
  {
    out << "initial_pose: ";
    to_flow_style_yaml(msg.initial_pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SpawnEntity_Request & msg,
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

  // member: allow_renaming
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "allow_renaming: ";
    rosidl_generator_traits::value_to_yaml(msg.allow_renaming, out);
    out << "\n";
  }

  // member: entity_resource
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "entity_resource:\n";
    to_block_style_yaml(msg.entity_resource, out, indentation + 2);
  }

  // member: entity_namespace
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "entity_namespace: ";
    rosidl_generator_traits::value_to_yaml(msg.entity_namespace, out);
    out << "\n";
  }

  // member: initial_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initial_pose:\n";
    to_block_style_yaml(msg.initial_pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SpawnEntity_Request & msg, bool use_flow_style = false)
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

}  // namespace simulation_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use simulation_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const simulation_interfaces::srv::SpawnEntity_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  simulation_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simulation_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const simulation_interfaces::srv::SpawnEntity_Request & msg)
{
  return simulation_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<simulation_interfaces::srv::SpawnEntity_Request>()
{
  return "simulation_interfaces::srv::SpawnEntity_Request";
}

template<>
inline const char * name<simulation_interfaces::srv::SpawnEntity_Request>()
{
  return "simulation_interfaces/srv/SpawnEntity_Request";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::SpawnEntity_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<simulation_interfaces::srv::SpawnEntity_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<simulation_interfaces::srv::SpawnEntity_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__traits.hpp"

namespace simulation_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SpawnEntity_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
    out << ", ";
  }

  // member: entity_name
  {
    out << "entity_name: ";
    rosidl_generator_traits::value_to_yaml(msg.entity_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SpawnEntity_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }

  // member: entity_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "entity_name: ";
    rosidl_generator_traits::value_to_yaml(msg.entity_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SpawnEntity_Response & msg, bool use_flow_style = false)
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

}  // namespace simulation_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use simulation_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const simulation_interfaces::srv::SpawnEntity_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  simulation_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simulation_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const simulation_interfaces::srv::SpawnEntity_Response & msg)
{
  return simulation_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<simulation_interfaces::srv::SpawnEntity_Response>()
{
  return "simulation_interfaces::srv::SpawnEntity_Response";
}

template<>
inline const char * name<simulation_interfaces::srv::SpawnEntity_Response>()
{
  return "simulation_interfaces/srv/SpawnEntity_Response";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::SpawnEntity_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<simulation_interfaces::srv::SpawnEntity_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<simulation_interfaces::srv::SpawnEntity_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::srv::SpawnEntity>()
{
  return "simulation_interfaces::srv::SpawnEntity";
}

template<>
inline const char * name<simulation_interfaces::srv::SpawnEntity>()
{
  return "simulation_interfaces/srv/SpawnEntity";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::SpawnEntity>
  : std::integral_constant<
    bool,
    has_fixed_size<simulation_interfaces::srv::SpawnEntity_Request>::value &&
    has_fixed_size<simulation_interfaces::srv::SpawnEntity_Response>::value
  >
{
};

template<>
struct has_bounded_size<simulation_interfaces::srv::SpawnEntity>
  : std::integral_constant<
    bool,
    has_bounded_size<simulation_interfaces::srv::SpawnEntity_Request>::value &&
    has_bounded_size<simulation_interfaces::srv::SpawnEntity_Response>::value
  >
{
};

template<>
struct is_service<simulation_interfaces::srv::SpawnEntity>
  : std::true_type
{
};

template<>
struct is_service_request<simulation_interfaces::srv::SpawnEntity_Request>
  : std::true_type
{
};

template<>
struct is_service_response<simulation_interfaces::srv::SpawnEntity_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__SPAWN_ENTITY__TRAITS_HPP_

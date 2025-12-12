// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simulation_interfaces:msg/SimulatorFeatures.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__SIMULATOR_FEATURES__TRAITS_HPP_
#define SIMULATION_INTERFACES__MSG__DETAIL__SIMULATOR_FEATURES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "simulation_interfaces/msg/detail/simulator_features__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace simulation_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SimulatorFeatures & msg,
  std::ostream & out)
{
  out << "{";
  // member: features
  {
    if (msg.features.size() == 0) {
      out << "features: []";
    } else {
      out << "features: [";
      size_t pending_items = msg.features.size();
      for (auto item : msg.features) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: spawn_formats
  {
    if (msg.spawn_formats.size() == 0) {
      out << "spawn_formats: []";
    } else {
      out << "spawn_formats: [";
      size_t pending_items = msg.spawn_formats.size();
      for (auto item : msg.spawn_formats) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: custom_info
  {
    out << "custom_info: ";
    rosidl_generator_traits::value_to_yaml(msg.custom_info, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SimulatorFeatures & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: features
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.features.size() == 0) {
      out << "features: []\n";
    } else {
      out << "features:\n";
      for (auto item : msg.features) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: spawn_formats
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.spawn_formats.size() == 0) {
      out << "spawn_formats: []\n";
    } else {
      out << "spawn_formats:\n";
      for (auto item : msg.spawn_formats) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: custom_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "custom_info: ";
    rosidl_generator_traits::value_to_yaml(msg.custom_info, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SimulatorFeatures & msg, bool use_flow_style = false)
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

}  // namespace simulation_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use simulation_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const simulation_interfaces::msg::SimulatorFeatures & msg,
  std::ostream & out, size_t indentation = 0)
{
  simulation_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simulation_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const simulation_interfaces::msg::SimulatorFeatures & msg)
{
  return simulation_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<simulation_interfaces::msg::SimulatorFeatures>()
{
  return "simulation_interfaces::msg::SimulatorFeatures";
}

template<>
inline const char * name<simulation_interfaces::msg::SimulatorFeatures>()
{
  return "simulation_interfaces/msg/SimulatorFeatures";
}

template<>
struct has_fixed_size<simulation_interfaces::msg::SimulatorFeatures>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<simulation_interfaces::msg::SimulatorFeatures>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<simulation_interfaces::msg::SimulatorFeatures>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__SIMULATOR_FEATURES__TRAITS_HPP_

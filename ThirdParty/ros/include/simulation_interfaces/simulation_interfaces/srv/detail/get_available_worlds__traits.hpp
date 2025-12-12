// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simulation_interfaces:srv/GetAvailableWorlds.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_AVAILABLE_WORLDS__TRAITS_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_AVAILABLE_WORLDS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "simulation_interfaces/srv/detail/get_available_worlds__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'filter'
#include "simulation_interfaces/msg/detail/tags_filter__traits.hpp"

namespace simulation_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetAvailableWorlds_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: additional_sources
  {
    if (msg.additional_sources.size() == 0) {
      out << "additional_sources: []";
    } else {
      out << "additional_sources: [";
      size_t pending_items = msg.additional_sources.size();
      for (auto item : msg.additional_sources) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: filter
  {
    out << "filter: ";
    to_flow_style_yaml(msg.filter, out);
    out << ", ";
  }

  // member: offline_only
  {
    out << "offline_only: ";
    rosidl_generator_traits::value_to_yaml(msg.offline_only, out);
    out << ", ";
  }

  // member: continue_on_error
  {
    out << "continue_on_error: ";
    rosidl_generator_traits::value_to_yaml(msg.continue_on_error, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetAvailableWorlds_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: additional_sources
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.additional_sources.size() == 0) {
      out << "additional_sources: []\n";
    } else {
      out << "additional_sources:\n";
      for (auto item : msg.additional_sources) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: filter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filter:\n";
    to_block_style_yaml(msg.filter, out, indentation + 2);
  }

  // member: offline_only
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offline_only: ";
    rosidl_generator_traits::value_to_yaml(msg.offline_only, out);
    out << "\n";
  }

  // member: continue_on_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "continue_on_error: ";
    rosidl_generator_traits::value_to_yaml(msg.continue_on_error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetAvailableWorlds_Request & msg, bool use_flow_style = false)
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
  const simulation_interfaces::srv::GetAvailableWorlds_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  simulation_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simulation_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const simulation_interfaces::srv::GetAvailableWorlds_Request & msg)
{
  return simulation_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<simulation_interfaces::srv::GetAvailableWorlds_Request>()
{
  return "simulation_interfaces::srv::GetAvailableWorlds_Request";
}

template<>
inline const char * name<simulation_interfaces::srv::GetAvailableWorlds_Request>()
{
  return "simulation_interfaces/srv/GetAvailableWorlds_Request";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::GetAvailableWorlds_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<simulation_interfaces::srv::GetAvailableWorlds_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<simulation_interfaces::srv::GetAvailableWorlds_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__traits.hpp"
// Member 'worlds'
#include "simulation_interfaces/msg/detail/world_resource__traits.hpp"

namespace simulation_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetAvailableWorlds_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
    out << ", ";
  }

  // member: worlds
  {
    if (msg.worlds.size() == 0) {
      out << "worlds: []";
    } else {
      out << "worlds: [";
      size_t pending_items = msg.worlds.size();
      for (auto item : msg.worlds) {
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
  const GetAvailableWorlds_Response & msg,
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

  // member: worlds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.worlds.size() == 0) {
      out << "worlds: []\n";
    } else {
      out << "worlds:\n";
      for (auto item : msg.worlds) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetAvailableWorlds_Response & msg, bool use_flow_style = false)
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
  const simulation_interfaces::srv::GetAvailableWorlds_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  simulation_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simulation_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const simulation_interfaces::srv::GetAvailableWorlds_Response & msg)
{
  return simulation_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<simulation_interfaces::srv::GetAvailableWorlds_Response>()
{
  return "simulation_interfaces::srv::GetAvailableWorlds_Response";
}

template<>
inline const char * name<simulation_interfaces::srv::GetAvailableWorlds_Response>()
{
  return "simulation_interfaces/srv/GetAvailableWorlds_Response";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::GetAvailableWorlds_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<simulation_interfaces::srv::GetAvailableWorlds_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<simulation_interfaces::srv::GetAvailableWorlds_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::srv::GetAvailableWorlds>()
{
  return "simulation_interfaces::srv::GetAvailableWorlds";
}

template<>
inline const char * name<simulation_interfaces::srv::GetAvailableWorlds>()
{
  return "simulation_interfaces/srv/GetAvailableWorlds";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::GetAvailableWorlds>
  : std::integral_constant<
    bool,
    has_fixed_size<simulation_interfaces::srv::GetAvailableWorlds_Request>::value &&
    has_fixed_size<simulation_interfaces::srv::GetAvailableWorlds_Response>::value
  >
{
};

template<>
struct has_bounded_size<simulation_interfaces::srv::GetAvailableWorlds>
  : std::integral_constant<
    bool,
    has_bounded_size<simulation_interfaces::srv::GetAvailableWorlds_Request>::value &&
    has_bounded_size<simulation_interfaces::srv::GetAvailableWorlds_Response>::value
  >
{
};

template<>
struct is_service<simulation_interfaces::srv::GetAvailableWorlds>
  : std::true_type
{
};

template<>
struct is_service_request<simulation_interfaces::srv::GetAvailableWorlds_Request>
  : std::true_type
{
};

template<>
struct is_service_response<simulation_interfaces::srv::GetAvailableWorlds_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_AVAILABLE_WORLDS__TRAITS_HPP_

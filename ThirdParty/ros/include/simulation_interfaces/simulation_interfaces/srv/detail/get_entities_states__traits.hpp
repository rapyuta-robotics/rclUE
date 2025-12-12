// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simulation_interfaces:srv/GetEntitiesStates.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITIES_STATES__TRAITS_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITIES_STATES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "simulation_interfaces/srv/detail/get_entities_states__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'filters'
#include "simulation_interfaces/msg/detail/entity_filters__traits.hpp"

namespace simulation_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetEntitiesStates_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: filters
  {
    out << "filters: ";
    to_flow_style_yaml(msg.filters, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetEntitiesStates_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: filters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filters:\n";
    to_block_style_yaml(msg.filters, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetEntitiesStates_Request & msg, bool use_flow_style = false)
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
  const simulation_interfaces::srv::GetEntitiesStates_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  simulation_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simulation_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const simulation_interfaces::srv::GetEntitiesStates_Request & msg)
{
  return simulation_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<simulation_interfaces::srv::GetEntitiesStates_Request>()
{
  return "simulation_interfaces::srv::GetEntitiesStates_Request";
}

template<>
inline const char * name<simulation_interfaces::srv::GetEntitiesStates_Request>()
{
  return "simulation_interfaces/srv/GetEntitiesStates_Request";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::GetEntitiesStates_Request>
  : std::integral_constant<bool, has_fixed_size<simulation_interfaces::msg::EntityFilters>::value> {};

template<>
struct has_bounded_size<simulation_interfaces::srv::GetEntitiesStates_Request>
  : std::integral_constant<bool, has_bounded_size<simulation_interfaces::msg::EntityFilters>::value> {};

template<>
struct is_message<simulation_interfaces::srv::GetEntitiesStates_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__traits.hpp"
// Member 'states'
#include "simulation_interfaces/msg/detail/entity_state__traits.hpp"

namespace simulation_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetEntitiesStates_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
    out << ", ";
  }

  // member: entities
  {
    if (msg.entities.size() == 0) {
      out << "entities: []";
    } else {
      out << "entities: [";
      size_t pending_items = msg.entities.size();
      for (auto item : msg.entities) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: states
  {
    if (msg.states.size() == 0) {
      out << "states: []";
    } else {
      out << "states: [";
      size_t pending_items = msg.states.size();
      for (auto item : msg.states) {
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
  const GetEntitiesStates_Response & msg,
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

  // member: entities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.entities.size() == 0) {
      out << "entities: []\n";
    } else {
      out << "entities:\n";
      for (auto item : msg.entities) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.states.size() == 0) {
      out << "states: []\n";
    } else {
      out << "states:\n";
      for (auto item : msg.states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetEntitiesStates_Response & msg, bool use_flow_style = false)
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
  const simulation_interfaces::srv::GetEntitiesStates_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  simulation_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simulation_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const simulation_interfaces::srv::GetEntitiesStates_Response & msg)
{
  return simulation_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<simulation_interfaces::srv::GetEntitiesStates_Response>()
{
  return "simulation_interfaces::srv::GetEntitiesStates_Response";
}

template<>
inline const char * name<simulation_interfaces::srv::GetEntitiesStates_Response>()
{
  return "simulation_interfaces/srv/GetEntitiesStates_Response";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::GetEntitiesStates_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<simulation_interfaces::srv::GetEntitiesStates_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<simulation_interfaces::srv::GetEntitiesStates_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::srv::GetEntitiesStates>()
{
  return "simulation_interfaces::srv::GetEntitiesStates";
}

template<>
inline const char * name<simulation_interfaces::srv::GetEntitiesStates>()
{
  return "simulation_interfaces/srv/GetEntitiesStates";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::GetEntitiesStates>
  : std::integral_constant<
    bool,
    has_fixed_size<simulation_interfaces::srv::GetEntitiesStates_Request>::value &&
    has_fixed_size<simulation_interfaces::srv::GetEntitiesStates_Response>::value
  >
{
};

template<>
struct has_bounded_size<simulation_interfaces::srv::GetEntitiesStates>
  : std::integral_constant<
    bool,
    has_bounded_size<simulation_interfaces::srv::GetEntitiesStates_Request>::value &&
    has_bounded_size<simulation_interfaces::srv::GetEntitiesStates_Response>::value
  >
{
};

template<>
struct is_service<simulation_interfaces::srv::GetEntitiesStates>
  : std::true_type
{
};

template<>
struct is_service_request<simulation_interfaces::srv::GetEntitiesStates_Request>
  : std::true_type
{
};

template<>
struct is_service_response<simulation_interfaces::srv::GetEntitiesStates_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITIES_STATES__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simulation_interfaces:srv/GetEntityBounds.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "simulation_interfaces/srv/get_entity_bounds.hpp"


#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITY_BOUNDS__TRAITS_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITY_BOUNDS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "simulation_interfaces/srv/detail/get_entity_bounds__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace simulation_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetEntityBounds_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: entity
  {
    out << "entity: ";
    rosidl_generator_traits::value_to_yaml(msg.entity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetEntityBounds_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: entity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "entity: ";
    rosidl_generator_traits::value_to_yaml(msg.entity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetEntityBounds_Request & msg, bool use_flow_style = false)
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
  const simulation_interfaces::srv::GetEntityBounds_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  simulation_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simulation_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const simulation_interfaces::srv::GetEntityBounds_Request & msg)
{
  return simulation_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<simulation_interfaces::srv::GetEntityBounds_Request>()
{
  return "simulation_interfaces::srv::GetEntityBounds_Request";
}

template<>
inline const char * name<simulation_interfaces::srv::GetEntityBounds_Request>()
{
  return "simulation_interfaces/srv/GetEntityBounds_Request";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::GetEntityBounds_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<simulation_interfaces::srv::GetEntityBounds_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<simulation_interfaces::srv::GetEntityBounds_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__traits.hpp"
// Member 'bounds'
#include "simulation_interfaces/msg/detail/bounds__traits.hpp"

namespace simulation_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetEntityBounds_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
    out << ", ";
  }

  // member: bounds
  {
    out << "bounds: ";
    to_flow_style_yaml(msg.bounds, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetEntityBounds_Response & msg,
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

  // member: bounds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bounds:\n";
    to_block_style_yaml(msg.bounds, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetEntityBounds_Response & msg, bool use_flow_style = false)
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
  const simulation_interfaces::srv::GetEntityBounds_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  simulation_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simulation_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const simulation_interfaces::srv::GetEntityBounds_Response & msg)
{
  return simulation_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<simulation_interfaces::srv::GetEntityBounds_Response>()
{
  return "simulation_interfaces::srv::GetEntityBounds_Response";
}

template<>
inline const char * name<simulation_interfaces::srv::GetEntityBounds_Response>()
{
  return "simulation_interfaces/srv/GetEntityBounds_Response";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::GetEntityBounds_Response>
  : std::integral_constant<bool, has_fixed_size<simulation_interfaces::msg::Bounds>::value && has_fixed_size<simulation_interfaces::msg::Result>::value> {};

template<>
struct has_bounded_size<simulation_interfaces::srv::GetEntityBounds_Response>
  : std::integral_constant<bool, has_bounded_size<simulation_interfaces::msg::Bounds>::value && has_bounded_size<simulation_interfaces::msg::Result>::value> {};

template<>
struct is_message<simulation_interfaces::srv::GetEntityBounds_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace simulation_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetEntityBounds_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
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
  const GetEntityBounds_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetEntityBounds_Event & msg, bool use_flow_style = false)
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
  const simulation_interfaces::srv::GetEntityBounds_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  simulation_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simulation_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const simulation_interfaces::srv::GetEntityBounds_Event & msg)
{
  return simulation_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<simulation_interfaces::srv::GetEntityBounds_Event>()
{
  return "simulation_interfaces::srv::GetEntityBounds_Event";
}

template<>
inline const char * name<simulation_interfaces::srv::GetEntityBounds_Event>()
{
  return "simulation_interfaces/srv/GetEntityBounds_Event";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::GetEntityBounds_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<simulation_interfaces::srv::GetEntityBounds_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<simulation_interfaces::srv::GetEntityBounds_Request>::value && has_bounded_size<simulation_interfaces::srv::GetEntityBounds_Response>::value> {};

template<>
struct is_message<simulation_interfaces::srv::GetEntityBounds_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::srv::GetEntityBounds>()
{
  return "simulation_interfaces::srv::GetEntityBounds";
}

template<>
inline const char * name<simulation_interfaces::srv::GetEntityBounds>()
{
  return "simulation_interfaces/srv/GetEntityBounds";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::GetEntityBounds>
  : std::integral_constant<
    bool,
    has_fixed_size<simulation_interfaces::srv::GetEntityBounds_Request>::value &&
    has_fixed_size<simulation_interfaces::srv::GetEntityBounds_Response>::value
  >
{
};

template<>
struct has_bounded_size<simulation_interfaces::srv::GetEntityBounds>
  : std::integral_constant<
    bool,
    has_bounded_size<simulation_interfaces::srv::GetEntityBounds_Request>::value &&
    has_bounded_size<simulation_interfaces::srv::GetEntityBounds_Response>::value
  >
{
};

template<>
struct is_service<simulation_interfaces::srv::GetEntityBounds>
  : std::true_type
{
};

template<>
struct is_service_request<simulation_interfaces::srv::GetEntityBounds_Request>
  : std::true_type
{
};

template<>
struct is_service_response<simulation_interfaces::srv::GetEntityBounds_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITY_BOUNDS__TRAITS_HPP_

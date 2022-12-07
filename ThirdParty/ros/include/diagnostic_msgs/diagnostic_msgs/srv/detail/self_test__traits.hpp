// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from diagnostic_msgs:srv/SelfTest.idl
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__SRV__DETAIL__SELF_TEST__TRAITS_HPP_
#define DIAGNOSTIC_MSGS__SRV__DETAIL__SELF_TEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "diagnostic_msgs/srv/detail/self_test__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace diagnostic_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SelfTest_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SelfTest_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SelfTest_Request & msg, bool use_flow_style = false)
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

}  // namespace diagnostic_msgs

namespace rosidl_generator_traits
{

[[deprecated("use diagnostic_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const diagnostic_msgs::srv::SelfTest_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  diagnostic_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use diagnostic_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const diagnostic_msgs::srv::SelfTest_Request & msg)
{
  return diagnostic_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<diagnostic_msgs::srv::SelfTest_Request>()
{
  return "diagnostic_msgs::srv::SelfTest_Request";
}

template<>
inline const char * name<diagnostic_msgs::srv::SelfTest_Request>()
{
  return "diagnostic_msgs/srv/SelfTest_Request";
}

template<>
struct has_fixed_size<diagnostic_msgs::srv::SelfTest_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<diagnostic_msgs::srv::SelfTest_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<diagnostic_msgs::srv::SelfTest_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'status'
#include "diagnostic_msgs/msg/detail/diagnostic_status__traits.hpp"

namespace diagnostic_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SelfTest_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: passed
  {
    out << "passed: ";
    rosidl_generator_traits::character_value_to_yaml(msg.passed, out);
    out << ", ";
  }

  // member: status
  {
    if (msg.status.size() == 0) {
      out << "status: []";
    } else {
      out << "status: [";
      size_t pending_items = msg.status.size();
      for (auto item : msg.status) {
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
  const SelfTest_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: passed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "passed: ";
    rosidl_generator_traits::character_value_to_yaml(msg.passed, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.status.size() == 0) {
      out << "status: []\n";
    } else {
      out << "status:\n";
      for (auto item : msg.status) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SelfTest_Response & msg, bool use_flow_style = false)
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

}  // namespace diagnostic_msgs

namespace rosidl_generator_traits
{

[[deprecated("use diagnostic_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const diagnostic_msgs::srv::SelfTest_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  diagnostic_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use diagnostic_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const diagnostic_msgs::srv::SelfTest_Response & msg)
{
  return diagnostic_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<diagnostic_msgs::srv::SelfTest_Response>()
{
  return "diagnostic_msgs::srv::SelfTest_Response";
}

template<>
inline const char * name<diagnostic_msgs::srv::SelfTest_Response>()
{
  return "diagnostic_msgs/srv/SelfTest_Response";
}

template<>
struct has_fixed_size<diagnostic_msgs::srv::SelfTest_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<diagnostic_msgs::srv::SelfTest_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<diagnostic_msgs::srv::SelfTest_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<diagnostic_msgs::srv::SelfTest>()
{
  return "diagnostic_msgs::srv::SelfTest";
}

template<>
inline const char * name<diagnostic_msgs::srv::SelfTest>()
{
  return "diagnostic_msgs/srv/SelfTest";
}

template<>
struct has_fixed_size<diagnostic_msgs::srv::SelfTest>
  : std::integral_constant<
    bool,
    has_fixed_size<diagnostic_msgs::srv::SelfTest_Request>::value &&
    has_fixed_size<diagnostic_msgs::srv::SelfTest_Response>::value
  >
{
};

template<>
struct has_bounded_size<diagnostic_msgs::srv::SelfTest>
  : std::integral_constant<
    bool,
    has_bounded_size<diagnostic_msgs::srv::SelfTest_Request>::value &&
    has_bounded_size<diagnostic_msgs::srv::SelfTest_Response>::value
  >
{
};

template<>
struct is_service<diagnostic_msgs::srv::SelfTest>
  : std::true_type
{
};

template<>
struct is_service_request<diagnostic_msgs::srv::SelfTest_Request>
  : std::true_type
{
};

template<>
struct is_service_response<diagnostic_msgs::srv::SelfTest_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DIAGNOSTIC_MSGS__SRV__DETAIL__SELF_TEST__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pcl_msgs:srv/UpdateFilename.idl
// generated code does not contain a copyright notice

#ifndef PCL_MSGS__SRV__DETAIL__UPDATE_FILENAME__TRAITS_HPP_
#define PCL_MSGS__SRV__DETAIL__UPDATE_FILENAME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pcl_msgs/srv/detail/update_filename__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pcl_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const UpdateFilename_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: filename
  {
    out << "filename: ";
    rosidl_generator_traits::value_to_yaml(msg.filename, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UpdateFilename_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: filename
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filename: ";
    rosidl_generator_traits::value_to_yaml(msg.filename, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UpdateFilename_Request & msg, bool use_flow_style = false)
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

}  // namespace pcl_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pcl_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pcl_msgs::srv::UpdateFilename_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  pcl_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pcl_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const pcl_msgs::srv::UpdateFilename_Request & msg)
{
  return pcl_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pcl_msgs::srv::UpdateFilename_Request>()
{
  return "pcl_msgs::srv::UpdateFilename_Request";
}

template<>
inline const char * name<pcl_msgs::srv::UpdateFilename_Request>()
{
  return "pcl_msgs/srv/UpdateFilename_Request";
}

template<>
struct has_fixed_size<pcl_msgs::srv::UpdateFilename_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pcl_msgs::srv::UpdateFilename_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pcl_msgs::srv::UpdateFilename_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace pcl_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const UpdateFilename_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UpdateFilename_Response & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UpdateFilename_Response & msg, bool use_flow_style = false)
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

}  // namespace pcl_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pcl_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pcl_msgs::srv::UpdateFilename_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  pcl_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pcl_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const pcl_msgs::srv::UpdateFilename_Response & msg)
{
  return pcl_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pcl_msgs::srv::UpdateFilename_Response>()
{
  return "pcl_msgs::srv::UpdateFilename_Response";
}

template<>
inline const char * name<pcl_msgs::srv::UpdateFilename_Response>()
{
  return "pcl_msgs/srv/UpdateFilename_Response";
}

template<>
struct has_fixed_size<pcl_msgs::srv::UpdateFilename_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pcl_msgs::srv::UpdateFilename_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pcl_msgs::srv::UpdateFilename_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pcl_msgs::srv::UpdateFilename>()
{
  return "pcl_msgs::srv::UpdateFilename";
}

template<>
inline const char * name<pcl_msgs::srv::UpdateFilename>()
{
  return "pcl_msgs/srv/UpdateFilename";
}

template<>
struct has_fixed_size<pcl_msgs::srv::UpdateFilename>
  : std::integral_constant<
    bool,
    has_fixed_size<pcl_msgs::srv::UpdateFilename_Request>::value &&
    has_fixed_size<pcl_msgs::srv::UpdateFilename_Response>::value
  >
{
};

template<>
struct has_bounded_size<pcl_msgs::srv::UpdateFilename>
  : std::integral_constant<
    bool,
    has_bounded_size<pcl_msgs::srv::UpdateFilename_Request>::value &&
    has_bounded_size<pcl_msgs::srv::UpdateFilename_Response>::value
  >
{
};

template<>
struct is_service<pcl_msgs::srv::UpdateFilename>
  : std::true_type
{
};

template<>
struct is_service_request<pcl_msgs::srv::UpdateFilename_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pcl_msgs::srv::UpdateFilename_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PCL_MSGS__SRV__DETAIL__UPDATE_FILENAME__TRAITS_HPP_

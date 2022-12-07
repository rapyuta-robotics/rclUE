// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_msgs:srv/SetCameraInfo.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__SRV__DETAIL__SET_CAMERA_INFO__TRAITS_HPP_
#define SENSOR_MSGS__SRV__DETAIL__SET_CAMERA_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sensor_msgs/srv/detail/set_camera_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'camera_info'
#include "sensor_msgs/msg/detail/camera_info__traits.hpp"

namespace sensor_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetCameraInfo_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: camera_info
  {
    out << "camera_info: ";
    to_flow_style_yaml(msg.camera_info, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetCameraInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: camera_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_info:\n";
    to_block_style_yaml(msg.camera_info, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetCameraInfo_Request & msg, bool use_flow_style = false)
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

}  // namespace sensor_msgs

namespace rosidl_generator_traits
{

[[deprecated("use sensor_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sensor_msgs::srv::SetCameraInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  sensor_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sensor_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const sensor_msgs::srv::SetCameraInfo_Request & msg)
{
  return sensor_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<sensor_msgs::srv::SetCameraInfo_Request>()
{
  return "sensor_msgs::srv::SetCameraInfo_Request";
}

template<>
inline const char * name<sensor_msgs::srv::SetCameraInfo_Request>()
{
  return "sensor_msgs/srv/SetCameraInfo_Request";
}

template<>
struct has_fixed_size<sensor_msgs::srv::SetCameraInfo_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::CameraInfo>::value> {};

template<>
struct has_bounded_size<sensor_msgs::srv::SetCameraInfo_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::CameraInfo>::value> {};

template<>
struct is_message<sensor_msgs::srv::SetCameraInfo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace sensor_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetCameraInfo_Response & msg,
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
  const SetCameraInfo_Response & msg,
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

inline std::string to_yaml(const SetCameraInfo_Response & msg, bool use_flow_style = false)
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

}  // namespace sensor_msgs

namespace rosidl_generator_traits
{

[[deprecated("use sensor_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sensor_msgs::srv::SetCameraInfo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  sensor_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sensor_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const sensor_msgs::srv::SetCameraInfo_Response & msg)
{
  return sensor_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<sensor_msgs::srv::SetCameraInfo_Response>()
{
  return "sensor_msgs::srv::SetCameraInfo_Response";
}

template<>
inline const char * name<sensor_msgs::srv::SetCameraInfo_Response>()
{
  return "sensor_msgs/srv/SetCameraInfo_Response";
}

template<>
struct has_fixed_size<sensor_msgs::srv::SetCameraInfo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sensor_msgs::srv::SetCameraInfo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sensor_msgs::srv::SetCameraInfo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sensor_msgs::srv::SetCameraInfo>()
{
  return "sensor_msgs::srv::SetCameraInfo";
}

template<>
inline const char * name<sensor_msgs::srv::SetCameraInfo>()
{
  return "sensor_msgs/srv/SetCameraInfo";
}

template<>
struct has_fixed_size<sensor_msgs::srv::SetCameraInfo>
  : std::integral_constant<
    bool,
    has_fixed_size<sensor_msgs::srv::SetCameraInfo_Request>::value &&
    has_fixed_size<sensor_msgs::srv::SetCameraInfo_Response>::value
  >
{
};

template<>
struct has_bounded_size<sensor_msgs::srv::SetCameraInfo>
  : std::integral_constant<
    bool,
    has_bounded_size<sensor_msgs::srv::SetCameraInfo_Request>::value &&
    has_bounded_size<sensor_msgs::srv::SetCameraInfo_Response>::value
  >
{
};

template<>
struct is_service<sensor_msgs::srv::SetCameraInfo>
  : std::true_type
{
};

template<>
struct is_service_request<sensor_msgs::srv::SetCameraInfo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<sensor_msgs::srv::SetCameraInfo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_MSGS__SRV__DETAIL__SET_CAMERA_INFO__TRAITS_HPP_

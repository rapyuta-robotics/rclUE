// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_msgs:srv/SetCameraInfo.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__SRV__DETAIL__SET_CAMERA_INFO__TRAITS_HPP_
#define SENSOR_MSGS__SRV__DETAIL__SET_CAMERA_INFO__TRAITS_HPP_

#include "sensor_msgs/srv/detail/set_camera_info__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'camera_info'
#include "sensor_msgs/msg/detail/camera_info__traits.hpp"

namespace rosidl_generator_traits
{

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

namespace rosidl_generator_traits
{

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

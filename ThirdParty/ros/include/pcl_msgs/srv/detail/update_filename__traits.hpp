// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pcl_msgs:srv/UpdateFilename.idl
// generated code does not contain a copyright notice

#ifndef PCL_MSGS__SRV__DETAIL__UPDATE_FILENAME__TRAITS_HPP_
#define PCL_MSGS__SRV__DETAIL__UPDATE_FILENAME__TRAITS_HPP_

#include "pcl_msgs/srv/detail/update_filename__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

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

namespace rosidl_generator_traits
{

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

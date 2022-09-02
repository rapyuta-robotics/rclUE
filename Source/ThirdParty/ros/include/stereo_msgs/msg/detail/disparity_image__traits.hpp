// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from stereo_msgs:msg/DisparityImage.idl
// generated code does not contain a copyright notice

#ifndef STEREO_MSGS__MSG__DETAIL__DISPARITY_IMAGE__TRAITS_HPP_
#define STEREO_MSGS__MSG__DETAIL__DISPARITY_IMAGE__TRAITS_HPP_

#include "stereo_msgs/msg/detail/disparity_image__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"
// Member 'valid_window'
#include "sensor_msgs/msg/detail/region_of_interest__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<stereo_msgs::msg::DisparityImage>()
{
  return "stereo_msgs::msg::DisparityImage";
}

template<>
inline const char * name<stereo_msgs::msg::DisparityImage>()
{
  return "stereo_msgs/msg/DisparityImage";
}

template<>
struct has_fixed_size<stereo_msgs::msg::DisparityImage>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value && has_fixed_size<sensor_msgs::msg::RegionOfInterest>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<stereo_msgs::msg::DisparityImage>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value && has_bounded_size<sensor_msgs::msg::RegionOfInterest>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<stereo_msgs::msg::DisparityImage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STEREO_MSGS__MSG__DETAIL__DISPARITY_IMAGE__TRAITS_HPP_

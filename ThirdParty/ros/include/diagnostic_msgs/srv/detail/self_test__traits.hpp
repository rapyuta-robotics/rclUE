// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from diagnostic_msgs:srv/SelfTest.idl
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__SRV__DETAIL__SELF_TEST__TRAITS_HPP_
#define DIAGNOSTIC_MSGS__SRV__DETAIL__SELF_TEST__TRAITS_HPP_

#include "diagnostic_msgs/srv/detail/self_test__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

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

namespace rosidl_generator_traits
{

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

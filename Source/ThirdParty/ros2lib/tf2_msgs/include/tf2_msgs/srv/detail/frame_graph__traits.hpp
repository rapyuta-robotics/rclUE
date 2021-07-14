// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tf2_msgs:srv/FrameGraph.idl
// generated code does not contain a copyright notice

#ifndef TF2_MSGS__SRV__DETAIL__FRAME_GRAPH__TRAITS_HPP_
#define TF2_MSGS__SRV__DETAIL__FRAME_GRAPH__TRAITS_HPP_

#include "tf2_msgs/srv/detail/frame_graph__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tf2_msgs::srv::FrameGraph_Request>()
{
  return "tf2_msgs::srv::FrameGraph_Request";
}

template<>
inline const char * name<tf2_msgs::srv::FrameGraph_Request>()
{
  return "tf2_msgs/srv/FrameGraph_Request";
}

template<>
struct has_fixed_size<tf2_msgs::srv::FrameGraph_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tf2_msgs::srv::FrameGraph_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tf2_msgs::srv::FrameGraph_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tf2_msgs::srv::FrameGraph_Response>()
{
  return "tf2_msgs::srv::FrameGraph_Response";
}

template<>
inline const char * name<tf2_msgs::srv::FrameGraph_Response>()
{
  return "tf2_msgs/srv/FrameGraph_Response";
}

template<>
struct has_fixed_size<tf2_msgs::srv::FrameGraph_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tf2_msgs::srv::FrameGraph_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tf2_msgs::srv::FrameGraph_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tf2_msgs::srv::FrameGraph>()
{
  return "tf2_msgs::srv::FrameGraph";
}

template<>
inline const char * name<tf2_msgs::srv::FrameGraph>()
{
  return "tf2_msgs/srv/FrameGraph";
}

template<>
struct has_fixed_size<tf2_msgs::srv::FrameGraph>
  : std::integral_constant<
    bool,
    has_fixed_size<tf2_msgs::srv::FrameGraph_Request>::value &&
    has_fixed_size<tf2_msgs::srv::FrameGraph_Response>::value
  >
{
};

template<>
struct has_bounded_size<tf2_msgs::srv::FrameGraph>
  : std::integral_constant<
    bool,
    has_bounded_size<tf2_msgs::srv::FrameGraph_Request>::value &&
    has_bounded_size<tf2_msgs::srv::FrameGraph_Response>::value
  >
{
};

template<>
struct is_service<tf2_msgs::srv::FrameGraph>
  : std::true_type
{
};

template<>
struct is_service_request<tf2_msgs::srv::FrameGraph_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tf2_msgs::srv::FrameGraph_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TF2_MSGS__SRV__DETAIL__FRAME_GRAPH__TRAITS_HPP_

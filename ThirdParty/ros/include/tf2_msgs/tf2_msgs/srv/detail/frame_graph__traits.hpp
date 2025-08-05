// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tf2_msgs:srv/FrameGraph.idl
// generated code does not contain a copyright notice

#ifndef TF2_MSGS__SRV__DETAIL__FRAME_GRAPH__TRAITS_HPP_
#define TF2_MSGS__SRV__DETAIL__FRAME_GRAPH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tf2_msgs/srv/detail/frame_graph__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tf2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const FrameGraph_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FrameGraph_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FrameGraph_Request & msg, bool use_flow_style = false)
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

}  // namespace tf2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tf2_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tf2_msgs::srv::FrameGraph_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tf2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tf2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tf2_msgs::srv::FrameGraph_Request & msg)
{
  return tf2_msgs::srv::to_yaml(msg);
}

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

namespace tf2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const FrameGraph_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: frame_yaml
  {
    out << "frame_yaml: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_yaml, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FrameGraph_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: frame_yaml
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_yaml: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_yaml, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FrameGraph_Response & msg, bool use_flow_style = false)
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

}  // namespace tf2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tf2_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tf2_msgs::srv::FrameGraph_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tf2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tf2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tf2_msgs::srv::FrameGraph_Response & msg)
{
  return tf2_msgs::srv::to_yaml(msg);
}

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

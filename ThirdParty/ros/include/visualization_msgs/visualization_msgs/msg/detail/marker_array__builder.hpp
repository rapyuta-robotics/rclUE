// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from visualization_msgs:msg/MarkerArray.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__MARKER_ARRAY__BUILDER_HPP_
#define VISUALIZATION_MSGS__MSG__DETAIL__MARKER_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "visualization_msgs/msg/detail/marker_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace visualization_msgs
{

namespace msg
{

namespace builder
{

class Init_MarkerArray_markers
{
public:
  Init_MarkerArray_markers()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::visualization_msgs::msg::MarkerArray markers(::visualization_msgs::msg::MarkerArray::_markers_type arg)
  {
    msg_.markers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::visualization_msgs::msg::MarkerArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::visualization_msgs::msg::MarkerArray>()
{
  return visualization_msgs::msg::builder::Init_MarkerArray_markers();
}

}  // namespace visualization_msgs

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__MARKER_ARRAY__BUILDER_HPP_

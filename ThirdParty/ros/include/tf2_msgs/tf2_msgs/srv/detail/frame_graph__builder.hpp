// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tf2_msgs:srv/FrameGraph.idl
// generated code does not contain a copyright notice

#ifndef TF2_MSGS__SRV__DETAIL__FRAME_GRAPH__BUILDER_HPP_
#define TF2_MSGS__SRV__DETAIL__FRAME_GRAPH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tf2_msgs/srv/detail/frame_graph__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tf2_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tf2_msgs::srv::FrameGraph_Request>()
{
  return ::tf2_msgs::srv::FrameGraph_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace tf2_msgs


namespace tf2_msgs
{

namespace srv
{

namespace builder
{

class Init_FrameGraph_Response_frame_yaml
{
public:
  Init_FrameGraph_Response_frame_yaml()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tf2_msgs::srv::FrameGraph_Response frame_yaml(::tf2_msgs::srv::FrameGraph_Response::_frame_yaml_type arg)
  {
    msg_.frame_yaml = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tf2_msgs::srv::FrameGraph_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tf2_msgs::srv::FrameGraph_Response>()
{
  return tf2_msgs::srv::builder::Init_FrameGraph_Response_frame_yaml();
}

}  // namespace tf2_msgs

#endif  // TF2_MSGS__SRV__DETAIL__FRAME_GRAPH__BUILDER_HPP_

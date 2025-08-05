// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tf2_msgs:msg/TFMessage.idl
// generated code does not contain a copyright notice

#ifndef TF2_MSGS__MSG__DETAIL__TF_MESSAGE__BUILDER_HPP_
#define TF2_MSGS__MSG__DETAIL__TF_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tf2_msgs/msg/detail/tf_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tf2_msgs
{

namespace msg
{

namespace builder
{

class Init_TFMessage_transforms
{
public:
  Init_TFMessage_transforms()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tf2_msgs::msg::TFMessage transforms(::tf2_msgs::msg::TFMessage::_transforms_type arg)
  {
    msg_.transforms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tf2_msgs::msg::TFMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tf2_msgs::msg::TFMessage>()
{
  return tf2_msgs::msg::builder::Init_TFMessage_transforms();
}

}  // namespace tf2_msgs

#endif  // TF2_MSGS__MSG__DETAIL__TF_MESSAGE__BUILDER_HPP_

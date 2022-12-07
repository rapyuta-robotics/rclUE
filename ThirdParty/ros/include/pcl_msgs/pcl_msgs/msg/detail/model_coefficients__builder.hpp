// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pcl_msgs:msg/ModelCoefficients.idl
// generated code does not contain a copyright notice

#ifndef PCL_MSGS__MSG__DETAIL__MODEL_COEFFICIENTS__BUILDER_HPP_
#define PCL_MSGS__MSG__DETAIL__MODEL_COEFFICIENTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pcl_msgs/msg/detail/model_coefficients__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pcl_msgs
{

namespace msg
{

namespace builder
{

class Init_ModelCoefficients_values
{
public:
  explicit Init_ModelCoefficients_values(::pcl_msgs::msg::ModelCoefficients & msg)
  : msg_(msg)
  {}
  ::pcl_msgs::msg::ModelCoefficients values(::pcl_msgs::msg::ModelCoefficients::_values_type arg)
  {
    msg_.values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pcl_msgs::msg::ModelCoefficients msg_;
};

class Init_ModelCoefficients_header
{
public:
  Init_ModelCoefficients_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ModelCoefficients_values header(::pcl_msgs::msg::ModelCoefficients::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ModelCoefficients_values(msg_);
  }

private:
  ::pcl_msgs::msg::ModelCoefficients msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pcl_msgs::msg::ModelCoefficients>()
{
  return pcl_msgs::msg::builder::Init_ModelCoefficients_header();
}

}  // namespace pcl_msgs

#endif  // PCL_MSGS__MSG__DETAIL__MODEL_COEFFICIENTS__BUILDER_HPP_

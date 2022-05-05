// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rcl_interfaces:srv/DescribeParameters.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__SRV__DETAIL__DESCRIBE_PARAMETERS__BUILDER_HPP_
#define RCL_INTERFACES__SRV__DETAIL__DESCRIBE_PARAMETERS__BUILDER_HPP_

#include "rcl_interfaces/srv/detail/describe_parameters__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rcl_interfaces
{

namespace srv
{

namespace builder
{

class Init_DescribeParameters_Request_names
{
public:
  Init_DescribeParameters_Request_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rcl_interfaces::srv::DescribeParameters_Request names(::rcl_interfaces::srv::DescribeParameters_Request::_names_type arg)
  {
    msg_.names = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rcl_interfaces::srv::DescribeParameters_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rcl_interfaces::srv::DescribeParameters_Request>()
{
  return rcl_interfaces::srv::builder::Init_DescribeParameters_Request_names();
}

}  // namespace rcl_interfaces


namespace rcl_interfaces
{

namespace srv
{

namespace builder
{

class Init_DescribeParameters_Response_descriptors
{
public:
  Init_DescribeParameters_Response_descriptors()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rcl_interfaces::srv::DescribeParameters_Response descriptors(::rcl_interfaces::srv::DescribeParameters_Response::_descriptors_type arg)
  {
    msg_.descriptors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rcl_interfaces::srv::DescribeParameters_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rcl_interfaces::srv::DescribeParameters_Response>()
{
  return rcl_interfaces::srv::builder::Init_DescribeParameters_Response_descriptors();
}

}  // namespace rcl_interfaces

#endif  // RCL_INTERFACES__SRV__DETAIL__DESCRIBE_PARAMETERS__BUILDER_HPP_

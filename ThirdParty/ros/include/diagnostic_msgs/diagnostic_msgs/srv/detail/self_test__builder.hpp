// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from diagnostic_msgs:srv/SelfTest.idl
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__SRV__DETAIL__SELF_TEST__BUILDER_HPP_
#define DIAGNOSTIC_MSGS__SRV__DETAIL__SELF_TEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "diagnostic_msgs/srv/detail/self_test__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace diagnostic_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::diagnostic_msgs::srv::SelfTest_Request>()
{
  return ::diagnostic_msgs::srv::SelfTest_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace diagnostic_msgs


namespace diagnostic_msgs
{

namespace srv
{

namespace builder
{

class Init_SelfTest_Response_status
{
public:
  explicit Init_SelfTest_Response_status(::diagnostic_msgs::srv::SelfTest_Response & msg)
  : msg_(msg)
  {}
  ::diagnostic_msgs::srv::SelfTest_Response status(::diagnostic_msgs::srv::SelfTest_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::diagnostic_msgs::srv::SelfTest_Response msg_;
};

class Init_SelfTest_Response_passed
{
public:
  explicit Init_SelfTest_Response_passed(::diagnostic_msgs::srv::SelfTest_Response & msg)
  : msg_(msg)
  {}
  Init_SelfTest_Response_status passed(::diagnostic_msgs::srv::SelfTest_Response::_passed_type arg)
  {
    msg_.passed = std::move(arg);
    return Init_SelfTest_Response_status(msg_);
  }

private:
  ::diagnostic_msgs::srv::SelfTest_Response msg_;
};

class Init_SelfTest_Response_id
{
public:
  Init_SelfTest_Response_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SelfTest_Response_passed id(::diagnostic_msgs::srv::SelfTest_Response::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SelfTest_Response_passed(msg_);
  }

private:
  ::diagnostic_msgs::srv::SelfTest_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::diagnostic_msgs::srv::SelfTest_Response>()
{
  return diagnostic_msgs::srv::builder::Init_SelfTest_Response_id();
}

}  // namespace diagnostic_msgs

#endif  // DIAGNOSTIC_MSGS__SRV__DETAIL__SELF_TEST__BUILDER_HPP_

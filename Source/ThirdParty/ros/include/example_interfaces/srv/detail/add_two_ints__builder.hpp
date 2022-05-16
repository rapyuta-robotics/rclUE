// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from example_interfaces:srv/AddTwoInts.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__SRV__DETAIL__ADD_TWO_INTS__BUILDER_HPP_
#define EXAMPLE_INTERFACES__SRV__DETAIL__ADD_TWO_INTS__BUILDER_HPP_

#include "example_interfaces/srv/detail/add_two_ints__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace example_interfaces
{

namespace srv
{

namespace builder
{

class Init_AddTwoInts_Request_b
{
public:
  explicit Init_AddTwoInts_Request_b(::example_interfaces::srv::AddTwoInts_Request & msg)
  : msg_(msg)
  {}
  ::example_interfaces::srv::AddTwoInts_Request b(::example_interfaces::srv::AddTwoInts_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::example_interfaces::srv::AddTwoInts_Request msg_;
};

class Init_AddTwoInts_Request_a
{
public:
  Init_AddTwoInts_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddTwoInts_Request_b a(::example_interfaces::srv::AddTwoInts_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_AddTwoInts_Request_b(msg_);
  }

private:
  ::example_interfaces::srv::AddTwoInts_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::example_interfaces::srv::AddTwoInts_Request>()
{
  return example_interfaces::srv::builder::Init_AddTwoInts_Request_a();
}

}  // namespace example_interfaces


namespace example_interfaces
{

namespace srv
{

namespace builder
{

class Init_AddTwoInts_Response_sum
{
public:
  Init_AddTwoInts_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::example_interfaces::srv::AddTwoInts_Response sum(::example_interfaces::srv::AddTwoInts_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::example_interfaces::srv::AddTwoInts_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::example_interfaces::srv::AddTwoInts_Response>()
{
  return example_interfaces::srv::builder::Init_AddTwoInts_Response_sum();
}

}  // namespace example_interfaces

#endif  // EXAMPLE_INTERFACES__SRV__DETAIL__ADD_TWO_INTS__BUILDER_HPP_

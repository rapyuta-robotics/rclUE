// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from std_srvs:srv/SetBool.idl
// generated code does not contain a copyright notice

#ifndef STD_SRVS__SRV__DETAIL__SET_BOOL__BUILDER_HPP_
#define STD_SRVS__SRV__DETAIL__SET_BOOL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "std_srvs/srv/detail/set_bool__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace std_srvs
{

namespace srv
{

namespace builder
{

class Init_SetBool_Request_data
{
public:
  Init_SetBool_Request_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::std_srvs::srv::SetBool_Request data(::std_srvs::srv::SetBool_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::std_srvs::srv::SetBool_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::std_srvs::srv::SetBool_Request>()
{
  return std_srvs::srv::builder::Init_SetBool_Request_data();
}

}  // namespace std_srvs


namespace std_srvs
{

namespace srv
{

namespace builder
{

class Init_SetBool_Response_message
{
public:
  explicit Init_SetBool_Response_message(::std_srvs::srv::SetBool_Response & msg)
  : msg_(msg)
  {}
  ::std_srvs::srv::SetBool_Response message(::std_srvs::srv::SetBool_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::std_srvs::srv::SetBool_Response msg_;
};

class Init_SetBool_Response_success
{
public:
  Init_SetBool_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetBool_Response_message success(::std_srvs::srv::SetBool_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetBool_Response_message(msg_);
  }

private:
  ::std_srvs::srv::SetBool_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::std_srvs::srv::SetBool_Response>()
{
  return std_srvs::srv::builder::Init_SetBool_Response_success();
}

}  // namespace std_srvs

#endif  // STD_SRVS__SRV__DETAIL__SET_BOOL__BUILDER_HPP_

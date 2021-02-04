// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ue4_interfaces:srv/UE4SrvExample.idl
// generated code does not contain a copyright notice

#ifndef UE4_INTERFACES__SRV__DETAIL__UE4_SRV_EXAMPLE__BUILDER_HPP_
#define UE4_INTERFACES__SRV__DETAIL__UE4_SRV_EXAMPLE__BUILDER_HPP_

#include "ue4_interfaces/srv/detail/ue4_srv_example__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ue4_interfaces
{

namespace srv
{

namespace builder
{

class Init_UE4SrvExample_Request_b
{
public:
  explicit Init_UE4SrvExample_Request_b(::ue4_interfaces::srv::UE4SrvExample_Request & msg)
  : msg_(msg)
  {}
  ::ue4_interfaces::srv::UE4SrvExample_Request b(::ue4_interfaces::srv::UE4SrvExample_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ue4_interfaces::srv::UE4SrvExample_Request msg_;
};

class Init_UE4SrvExample_Request_a
{
public:
  Init_UE4SrvExample_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UE4SrvExample_Request_b a(::ue4_interfaces::srv::UE4SrvExample_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_UE4SrvExample_Request_b(msg_);
  }

private:
  ::ue4_interfaces::srv::UE4SrvExample_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ue4_interfaces::srv::UE4SrvExample_Request>()
{
  return ue4_interfaces::srv::builder::Init_UE4SrvExample_Request_a();
}

}  // namespace ue4_interfaces


namespace ue4_interfaces
{

namespace srv
{

namespace builder
{

class Init_UE4SrvExample_Response_res
{
public:
  Init_UE4SrvExample_Response_res()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ue4_interfaces::srv::UE4SrvExample_Response res(::ue4_interfaces::srv::UE4SrvExample_Response::_res_type arg)
  {
    msg_.res = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ue4_interfaces::srv::UE4SrvExample_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ue4_interfaces::srv::UE4SrvExample_Response>()
{
  return ue4_interfaces::srv::builder::Init_UE4SrvExample_Response_res();
}

}  // namespace ue4_interfaces

#endif  // UE4_INTERFACES__SRV__DETAIL__UE4_SRV_EXAMPLE__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from std_srvs:srv/Empty.idl
// generated code does not contain a copyright notice

#ifndef STD_SRVS__SRV__DETAIL__EMPTY__BUILDER_HPP_
#define STD_SRVS__SRV__DETAIL__EMPTY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "std_srvs/srv/detail/empty__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace std_srvs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::std_srvs::srv::Empty_Request>()
{
  return ::std_srvs::srv::Empty_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace std_srvs


namespace std_srvs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::std_srvs::srv::Empty_Response>()
{
  return ::std_srvs::srv::Empty_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace std_srvs

#endif  // STD_SRVS__SRV__DETAIL__EMPTY__BUILDER_HPP_

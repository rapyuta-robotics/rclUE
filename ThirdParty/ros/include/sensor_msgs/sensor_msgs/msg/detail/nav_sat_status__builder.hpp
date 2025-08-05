// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensor_msgs:msg/NavSatStatus.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__NAV_SAT_STATUS__BUILDER_HPP_
#define SENSOR_MSGS__MSG__DETAIL__NAV_SAT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sensor_msgs/msg/detail/nav_sat_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sensor_msgs
{

namespace msg
{

namespace builder
{

class Init_NavSatStatus_service
{
public:
  explicit Init_NavSatStatus_service(::sensor_msgs::msg::NavSatStatus & msg)
  : msg_(msg)
  {}
  ::sensor_msgs::msg::NavSatStatus service(::sensor_msgs::msg::NavSatStatus::_service_type arg)
  {
    msg_.service = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_msgs::msg::NavSatStatus msg_;
};

class Init_NavSatStatus_status
{
public:
  Init_NavSatStatus_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavSatStatus_service status(::sensor_msgs::msg::NavSatStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_NavSatStatus_service(msg_);
  }

private:
  ::sensor_msgs::msg::NavSatStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_msgs::msg::NavSatStatus>()
{
  return sensor_msgs::msg::builder::Init_NavSatStatus_status();
}

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__DETAIL__NAV_SAT_STATUS__BUILDER_HPP_

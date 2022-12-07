// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensor_msgs:msg/MagneticField.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__MAGNETIC_FIELD__BUILDER_HPP_
#define SENSOR_MSGS__MSG__DETAIL__MAGNETIC_FIELD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sensor_msgs/msg/detail/magnetic_field__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sensor_msgs
{

namespace msg
{

namespace builder
{

class Init_MagneticField_magnetic_field_covariance
{
public:
  explicit Init_MagneticField_magnetic_field_covariance(::sensor_msgs::msg::MagneticField & msg)
  : msg_(msg)
  {}
  ::sensor_msgs::msg::MagneticField magnetic_field_covariance(::sensor_msgs::msg::MagneticField::_magnetic_field_covariance_type arg)
  {
    msg_.magnetic_field_covariance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_msgs::msg::MagneticField msg_;
};

class Init_MagneticField_magnetic_field
{
public:
  explicit Init_MagneticField_magnetic_field(::sensor_msgs::msg::MagneticField & msg)
  : msg_(msg)
  {}
  Init_MagneticField_magnetic_field_covariance magnetic_field(::sensor_msgs::msg::MagneticField::_magnetic_field_type arg)
  {
    msg_.magnetic_field = std::move(arg);
    return Init_MagneticField_magnetic_field_covariance(msg_);
  }

private:
  ::sensor_msgs::msg::MagneticField msg_;
};

class Init_MagneticField_header
{
public:
  Init_MagneticField_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MagneticField_magnetic_field header(::sensor_msgs::msg::MagneticField::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MagneticField_magnetic_field(msg_);
  }

private:
  ::sensor_msgs::msg::MagneticField msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_msgs::msg::MagneticField>()
{
  return sensor_msgs::msg::builder::Init_MagneticField_header();
}

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__DETAIL__MAGNETIC_FIELD__BUILDER_HPP_

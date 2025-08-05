// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensor_msgs:msg/Imu.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__IMU__BUILDER_HPP_
#define SENSOR_MSGS__MSG__DETAIL__IMU__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sensor_msgs/msg/detail/imu__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sensor_msgs
{

namespace msg
{

namespace builder
{

class Init_Imu_linear_acceleration_covariance
{
public:
  explicit Init_Imu_linear_acceleration_covariance(::sensor_msgs::msg::Imu & msg)
  : msg_(msg)
  {}
  ::sensor_msgs::msg::Imu linear_acceleration_covariance(::sensor_msgs::msg::Imu::_linear_acceleration_covariance_type arg)
  {
    msg_.linear_acceleration_covariance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_msgs::msg::Imu msg_;
};

class Init_Imu_linear_acceleration
{
public:
  explicit Init_Imu_linear_acceleration(::sensor_msgs::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_linear_acceleration_covariance linear_acceleration(::sensor_msgs::msg::Imu::_linear_acceleration_type arg)
  {
    msg_.linear_acceleration = std::move(arg);
    return Init_Imu_linear_acceleration_covariance(msg_);
  }

private:
  ::sensor_msgs::msg::Imu msg_;
};

class Init_Imu_angular_velocity_covariance
{
public:
  explicit Init_Imu_angular_velocity_covariance(::sensor_msgs::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_linear_acceleration angular_velocity_covariance(::sensor_msgs::msg::Imu::_angular_velocity_covariance_type arg)
  {
    msg_.angular_velocity_covariance = std::move(arg);
    return Init_Imu_linear_acceleration(msg_);
  }

private:
  ::sensor_msgs::msg::Imu msg_;
};

class Init_Imu_angular_velocity
{
public:
  explicit Init_Imu_angular_velocity(::sensor_msgs::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_angular_velocity_covariance angular_velocity(::sensor_msgs::msg::Imu::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_Imu_angular_velocity_covariance(msg_);
  }

private:
  ::sensor_msgs::msg::Imu msg_;
};

class Init_Imu_orientation_covariance
{
public:
  explicit Init_Imu_orientation_covariance(::sensor_msgs::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_angular_velocity orientation_covariance(::sensor_msgs::msg::Imu::_orientation_covariance_type arg)
  {
    msg_.orientation_covariance = std::move(arg);
    return Init_Imu_angular_velocity(msg_);
  }

private:
  ::sensor_msgs::msg::Imu msg_;
};

class Init_Imu_orientation
{
public:
  explicit Init_Imu_orientation(::sensor_msgs::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_orientation_covariance orientation(::sensor_msgs::msg::Imu::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_Imu_orientation_covariance(msg_);
  }

private:
  ::sensor_msgs::msg::Imu msg_;
};

class Init_Imu_header
{
public:
  Init_Imu_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Imu_orientation header(::sensor_msgs::msg::Imu::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Imu_orientation(msg_);
  }

private:
  ::sensor_msgs::msg::Imu msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_msgs::msg::Imu>()
{
  return sensor_msgs::msg::builder::Init_Imu_header();
}

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__DETAIL__IMU__BUILDER_HPP_

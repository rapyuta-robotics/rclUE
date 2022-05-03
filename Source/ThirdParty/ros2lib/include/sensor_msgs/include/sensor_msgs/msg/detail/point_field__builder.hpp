// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensor_msgs:msg/PointField.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__POINT_FIELD__BUILDER_HPP_
#define SENSOR_MSGS__MSG__DETAIL__POINT_FIELD__BUILDER_HPP_

#include "sensor_msgs/msg/detail/point_field__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace sensor_msgs
{

namespace msg
{

namespace builder
{

class Init_PointField_count
{
public:
  explicit Init_PointField_count(::sensor_msgs::msg::PointField & msg)
  : msg_(msg)
  {}
  ::sensor_msgs::msg::PointField count(::sensor_msgs::msg::PointField::_count_type arg)
  {
    msg_.count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_msgs::msg::PointField msg_;
};

class Init_PointField_datatype
{
public:
  explicit Init_PointField_datatype(::sensor_msgs::msg::PointField & msg)
  : msg_(msg)
  {}
  Init_PointField_count datatype(::sensor_msgs::msg::PointField::_datatype_type arg)
  {
    msg_.datatype = std::move(arg);
    return Init_PointField_count(msg_);
  }

private:
  ::sensor_msgs::msg::PointField msg_;
};

class Init_PointField_offset
{
public:
  explicit Init_PointField_offset(::sensor_msgs::msg::PointField & msg)
  : msg_(msg)
  {}
  Init_PointField_datatype offset(::sensor_msgs::msg::PointField::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return Init_PointField_datatype(msg_);
  }

private:
  ::sensor_msgs::msg::PointField msg_;
};

class Init_PointField_name
{
public:
  Init_PointField_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointField_offset name(::sensor_msgs::msg::PointField::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_PointField_offset(msg_);
  }

private:
  ::sensor_msgs::msg::PointField msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_msgs::msg::PointField>()
{
  return sensor_msgs::msg::builder::Init_PointField_name();
}

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__DETAIL__POINT_FIELD__BUILDER_HPP_

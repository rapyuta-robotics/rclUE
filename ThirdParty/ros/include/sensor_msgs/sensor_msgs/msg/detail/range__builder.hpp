// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensor_msgs:msg/Range.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__RANGE__BUILDER_HPP_
#define SENSOR_MSGS__MSG__DETAIL__RANGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sensor_msgs/msg/detail/range__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sensor_msgs
{

namespace msg
{

namespace builder
{

class Init_Range_range
{
public:
  explicit Init_Range_range(::sensor_msgs::msg::Range & msg)
  : msg_(msg)
  {}
  ::sensor_msgs::msg::Range range(::sensor_msgs::msg::Range::_range_type arg)
  {
    msg_.range = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_msgs::msg::Range msg_;
};

class Init_Range_max_range
{
public:
  explicit Init_Range_max_range(::sensor_msgs::msg::Range & msg)
  : msg_(msg)
  {}
  Init_Range_range max_range(::sensor_msgs::msg::Range::_max_range_type arg)
  {
    msg_.max_range = std::move(arg);
    return Init_Range_range(msg_);
  }

private:
  ::sensor_msgs::msg::Range msg_;
};

class Init_Range_min_range
{
public:
  explicit Init_Range_min_range(::sensor_msgs::msg::Range & msg)
  : msg_(msg)
  {}
  Init_Range_max_range min_range(::sensor_msgs::msg::Range::_min_range_type arg)
  {
    msg_.min_range = std::move(arg);
    return Init_Range_max_range(msg_);
  }

private:
  ::sensor_msgs::msg::Range msg_;
};

class Init_Range_field_of_view
{
public:
  explicit Init_Range_field_of_view(::sensor_msgs::msg::Range & msg)
  : msg_(msg)
  {}
  Init_Range_min_range field_of_view(::sensor_msgs::msg::Range::_field_of_view_type arg)
  {
    msg_.field_of_view = std::move(arg);
    return Init_Range_min_range(msg_);
  }

private:
  ::sensor_msgs::msg::Range msg_;
};

class Init_Range_radiation_type
{
public:
  explicit Init_Range_radiation_type(::sensor_msgs::msg::Range & msg)
  : msg_(msg)
  {}
  Init_Range_field_of_view radiation_type(::sensor_msgs::msg::Range::_radiation_type_type arg)
  {
    msg_.radiation_type = std::move(arg);
    return Init_Range_field_of_view(msg_);
  }

private:
  ::sensor_msgs::msg::Range msg_;
};

class Init_Range_header
{
public:
  Init_Range_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Range_radiation_type header(::sensor_msgs::msg::Range::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Range_radiation_type(msg_);
  }

private:
  ::sensor_msgs::msg::Range msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_msgs::msg::Range>()
{
  return sensor_msgs::msg::builder::Init_Range_header();
}

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__DETAIL__RANGE__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensor_msgs:msg/RegionOfInterest.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__REGION_OF_INTEREST__BUILDER_HPP_
#define SENSOR_MSGS__MSG__DETAIL__REGION_OF_INTEREST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sensor_msgs/msg/detail/region_of_interest__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sensor_msgs
{

namespace msg
{

namespace builder
{

class Init_RegionOfInterest_do_rectify
{
public:
  explicit Init_RegionOfInterest_do_rectify(::sensor_msgs::msg::RegionOfInterest & msg)
  : msg_(msg)
  {}
  ::sensor_msgs::msg::RegionOfInterest do_rectify(::sensor_msgs::msg::RegionOfInterest::_do_rectify_type arg)
  {
    msg_.do_rectify = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_msgs::msg::RegionOfInterest msg_;
};

class Init_RegionOfInterest_width
{
public:
  explicit Init_RegionOfInterest_width(::sensor_msgs::msg::RegionOfInterest & msg)
  : msg_(msg)
  {}
  Init_RegionOfInterest_do_rectify width(::sensor_msgs::msg::RegionOfInterest::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_RegionOfInterest_do_rectify(msg_);
  }

private:
  ::sensor_msgs::msg::RegionOfInterest msg_;
};

class Init_RegionOfInterest_height
{
public:
  explicit Init_RegionOfInterest_height(::sensor_msgs::msg::RegionOfInterest & msg)
  : msg_(msg)
  {}
  Init_RegionOfInterest_width height(::sensor_msgs::msg::RegionOfInterest::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_RegionOfInterest_width(msg_);
  }

private:
  ::sensor_msgs::msg::RegionOfInterest msg_;
};

class Init_RegionOfInterest_y_offset
{
public:
  explicit Init_RegionOfInterest_y_offset(::sensor_msgs::msg::RegionOfInterest & msg)
  : msg_(msg)
  {}
  Init_RegionOfInterest_height y_offset(::sensor_msgs::msg::RegionOfInterest::_y_offset_type arg)
  {
    msg_.y_offset = std::move(arg);
    return Init_RegionOfInterest_height(msg_);
  }

private:
  ::sensor_msgs::msg::RegionOfInterest msg_;
};

class Init_RegionOfInterest_x_offset
{
public:
  Init_RegionOfInterest_x_offset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RegionOfInterest_y_offset x_offset(::sensor_msgs::msg::RegionOfInterest::_x_offset_type arg)
  {
    msg_.x_offset = std::move(arg);
    return Init_RegionOfInterest_y_offset(msg_);
  }

private:
  ::sensor_msgs::msg::RegionOfInterest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_msgs::msg::RegionOfInterest>()
{
  return sensor_msgs::msg::builder::Init_RegionOfInterest_x_offset();
}

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__DETAIL__REGION_OF_INTEREST__BUILDER_HPP_

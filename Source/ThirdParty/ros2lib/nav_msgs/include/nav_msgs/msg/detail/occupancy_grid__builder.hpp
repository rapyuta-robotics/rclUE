// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav_msgs:msg/OccupancyGrid.idl
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__MSG__DETAIL__OCCUPANCY_GRID__BUILDER_HPP_
#define NAV_MSGS__MSG__DETAIL__OCCUPANCY_GRID__BUILDER_HPP_

#include "nav_msgs/msg/detail/occupancy_grid__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace nav_msgs
{

namespace msg
{

namespace builder
{

class Init_OccupancyGrid_data
{
public:
  explicit Init_OccupancyGrid_data(::nav_msgs::msg::OccupancyGrid & msg)
  : msg_(msg)
  {}
  ::nav_msgs::msg::OccupancyGrid data(::nav_msgs::msg::OccupancyGrid::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav_msgs::msg::OccupancyGrid msg_;
};

class Init_OccupancyGrid_info
{
public:
  explicit Init_OccupancyGrid_info(::nav_msgs::msg::OccupancyGrid & msg)
  : msg_(msg)
  {}
  Init_OccupancyGrid_data info(::nav_msgs::msg::OccupancyGrid::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_OccupancyGrid_data(msg_);
  }

private:
  ::nav_msgs::msg::OccupancyGrid msg_;
};

class Init_OccupancyGrid_header
{
public:
  Init_OccupancyGrid_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OccupancyGrid_info header(::nav_msgs::msg::OccupancyGrid::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_OccupancyGrid_info(msg_);
  }

private:
  ::nav_msgs::msg::OccupancyGrid msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav_msgs::msg::OccupancyGrid>()
{
  return nav_msgs::msg::builder::Init_OccupancyGrid_header();
}

}  // namespace nav_msgs

#endif  // NAV_MSGS__MSG__DETAIL__OCCUPANCY_GRID__BUILDER_HPP_

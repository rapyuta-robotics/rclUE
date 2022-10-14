// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav_msgs:msg/GridCells.idl
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__MSG__DETAIL__GRID_CELLS__BUILDER_HPP_
#define NAV_MSGS__MSG__DETAIL__GRID_CELLS__BUILDER_HPP_

#include "nav_msgs/msg/detail/grid_cells__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace nav_msgs
{

namespace msg
{

namespace builder
{

class Init_GridCells_cells
{
public:
  explicit Init_GridCells_cells(::nav_msgs::msg::GridCells & msg)
  : msg_(msg)
  {}
  ::nav_msgs::msg::GridCells cells(::nav_msgs::msg::GridCells::_cells_type arg)
  {
    msg_.cells = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav_msgs::msg::GridCells msg_;
};

class Init_GridCells_cell_height
{
public:
  explicit Init_GridCells_cell_height(::nav_msgs::msg::GridCells & msg)
  : msg_(msg)
  {}
  Init_GridCells_cells cell_height(::nav_msgs::msg::GridCells::_cell_height_type arg)
  {
    msg_.cell_height = std::move(arg);
    return Init_GridCells_cells(msg_);
  }

private:
  ::nav_msgs::msg::GridCells msg_;
};

class Init_GridCells_cell_width
{
public:
  explicit Init_GridCells_cell_width(::nav_msgs::msg::GridCells & msg)
  : msg_(msg)
  {}
  Init_GridCells_cell_height cell_width(::nav_msgs::msg::GridCells::_cell_width_type arg)
  {
    msg_.cell_width = std::move(arg);
    return Init_GridCells_cell_height(msg_);
  }

private:
  ::nav_msgs::msg::GridCells msg_;
};

class Init_GridCells_header
{
public:
  Init_GridCells_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GridCells_cell_width header(::nav_msgs::msg::GridCells::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GridCells_cell_width(msg_);
  }

private:
  ::nav_msgs::msg::GridCells msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav_msgs::msg::GridCells>()
{
  return nav_msgs::msg::builder::Init_GridCells_header();
}

}  // namespace nav_msgs

#endif  // NAV_MSGS__MSG__DETAIL__GRID_CELLS__BUILDER_HPP_

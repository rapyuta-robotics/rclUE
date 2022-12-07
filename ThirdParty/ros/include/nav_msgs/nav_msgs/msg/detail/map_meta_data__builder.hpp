// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav_msgs:msg/MapMetaData.idl
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__MSG__DETAIL__MAP_META_DATA__BUILDER_HPP_
#define NAV_MSGS__MSG__DETAIL__MAP_META_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav_msgs/msg/detail/map_meta_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav_msgs
{

namespace msg
{

namespace builder
{

class Init_MapMetaData_origin
{
public:
  explicit Init_MapMetaData_origin(::nav_msgs::msg::MapMetaData & msg)
  : msg_(msg)
  {}
  ::nav_msgs::msg::MapMetaData origin(::nav_msgs::msg::MapMetaData::_origin_type arg)
  {
    msg_.origin = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav_msgs::msg::MapMetaData msg_;
};

class Init_MapMetaData_height
{
public:
  explicit Init_MapMetaData_height(::nav_msgs::msg::MapMetaData & msg)
  : msg_(msg)
  {}
  Init_MapMetaData_origin height(::nav_msgs::msg::MapMetaData::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_MapMetaData_origin(msg_);
  }

private:
  ::nav_msgs::msg::MapMetaData msg_;
};

class Init_MapMetaData_width
{
public:
  explicit Init_MapMetaData_width(::nav_msgs::msg::MapMetaData & msg)
  : msg_(msg)
  {}
  Init_MapMetaData_height width(::nav_msgs::msg::MapMetaData::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_MapMetaData_height(msg_);
  }

private:
  ::nav_msgs::msg::MapMetaData msg_;
};

class Init_MapMetaData_resolution
{
public:
  explicit Init_MapMetaData_resolution(::nav_msgs::msg::MapMetaData & msg)
  : msg_(msg)
  {}
  Init_MapMetaData_width resolution(::nav_msgs::msg::MapMetaData::_resolution_type arg)
  {
    msg_.resolution = std::move(arg);
    return Init_MapMetaData_width(msg_);
  }

private:
  ::nav_msgs::msg::MapMetaData msg_;
};

class Init_MapMetaData_map_load_time
{
public:
  Init_MapMetaData_map_load_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapMetaData_resolution map_load_time(::nav_msgs::msg::MapMetaData::_map_load_time_type arg)
  {
    msg_.map_load_time = std::move(arg);
    return Init_MapMetaData_resolution(msg_);
  }

private:
  ::nav_msgs::msg::MapMetaData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav_msgs::msg::MapMetaData>()
{
  return nav_msgs::msg::builder::Init_MapMetaData_map_load_time();
}

}  // namespace nav_msgs

#endif  // NAV_MSGS__MSG__DETAIL__MAP_META_DATA__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulation_interfaces:msg/TagsFilter.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__TAGS_FILTER__BUILDER_HPP_
#define SIMULATION_INTERFACES__MSG__DETAIL__TAGS_FILTER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulation_interfaces/msg/detail/tags_filter__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simulation_interfaces
{

namespace msg
{

namespace builder
{

class Init_TagsFilter_filter_mode
{
public:
  explicit Init_TagsFilter_filter_mode(::simulation_interfaces::msg::TagsFilter & msg)
  : msg_(msg)
  {}
  ::simulation_interfaces::msg::TagsFilter filter_mode(::simulation_interfaces::msg::TagsFilter::_filter_mode_type arg)
  {
    msg_.filter_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::msg::TagsFilter msg_;
};

class Init_TagsFilter_tags
{
public:
  Init_TagsFilter_tags()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TagsFilter_filter_mode tags(::simulation_interfaces::msg::TagsFilter::_tags_type arg)
  {
    msg_.tags = std::move(arg);
    return Init_TagsFilter_filter_mode(msg_);
  }

private:
  ::simulation_interfaces::msg::TagsFilter msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::msg::TagsFilter>()
{
  return simulation_interfaces::msg::builder::Init_TagsFilter_tags();
}

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__TAGS_FILTER__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from visualization_msgs:msg/MenuEntry.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__MENU_ENTRY__BUILDER_HPP_
#define VISUALIZATION_MSGS__MSG__DETAIL__MENU_ENTRY__BUILDER_HPP_

#include "visualization_msgs/msg/detail/menu_entry__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace visualization_msgs
{

namespace msg
{

namespace builder
{

class Init_MenuEntry_command_type
{
public:
  explicit Init_MenuEntry_command_type(::visualization_msgs::msg::MenuEntry & msg)
  : msg_(msg)
  {}
  ::visualization_msgs::msg::MenuEntry command_type(::visualization_msgs::msg::MenuEntry::_command_type_type arg)
  {
    msg_.command_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::visualization_msgs::msg::MenuEntry msg_;
};

class Init_MenuEntry_command
{
public:
  explicit Init_MenuEntry_command(::visualization_msgs::msg::MenuEntry & msg)
  : msg_(msg)
  {}
  Init_MenuEntry_command_type command(::visualization_msgs::msg::MenuEntry::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_MenuEntry_command_type(msg_);
  }

private:
  ::visualization_msgs::msg::MenuEntry msg_;
};

class Init_MenuEntry_title
{
public:
  explicit Init_MenuEntry_title(::visualization_msgs::msg::MenuEntry & msg)
  : msg_(msg)
  {}
  Init_MenuEntry_command title(::visualization_msgs::msg::MenuEntry::_title_type arg)
  {
    msg_.title = std::move(arg);
    return Init_MenuEntry_command(msg_);
  }

private:
  ::visualization_msgs::msg::MenuEntry msg_;
};

class Init_MenuEntry_parent_id
{
public:
  explicit Init_MenuEntry_parent_id(::visualization_msgs::msg::MenuEntry & msg)
  : msg_(msg)
  {}
  Init_MenuEntry_title parent_id(::visualization_msgs::msg::MenuEntry::_parent_id_type arg)
  {
    msg_.parent_id = std::move(arg);
    return Init_MenuEntry_title(msg_);
  }

private:
  ::visualization_msgs::msg::MenuEntry msg_;
};

class Init_MenuEntry_id
{
public:
  Init_MenuEntry_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MenuEntry_parent_id id(::visualization_msgs::msg::MenuEntry::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_MenuEntry_parent_id(msg_);
  }

private:
  ::visualization_msgs::msg::MenuEntry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::visualization_msgs::msg::MenuEntry>()
{
  return visualization_msgs::msg::builder::Init_MenuEntry_id();
}

}  // namespace visualization_msgs

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__MENU_ENTRY__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensor_msgs:msg/MultiDOFJointState.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__MULTI_DOF_JOINT_STATE__BUILDER_HPP_
#define SENSOR_MSGS__MSG__DETAIL__MULTI_DOF_JOINT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sensor_msgs/msg/detail/multi_dof_joint_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sensor_msgs
{

namespace msg
{

namespace builder
{

class Init_MultiDOFJointState_wrench
{
public:
  explicit Init_MultiDOFJointState_wrench(::sensor_msgs::msg::MultiDOFJointState & msg)
  : msg_(msg)
  {}
  ::sensor_msgs::msg::MultiDOFJointState wrench(::sensor_msgs::msg::MultiDOFJointState::_wrench_type arg)
  {
    msg_.wrench = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_msgs::msg::MultiDOFJointState msg_;
};

class Init_MultiDOFJointState_twist
{
public:
  explicit Init_MultiDOFJointState_twist(::sensor_msgs::msg::MultiDOFJointState & msg)
  : msg_(msg)
  {}
  Init_MultiDOFJointState_wrench twist(::sensor_msgs::msg::MultiDOFJointState::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_MultiDOFJointState_wrench(msg_);
  }

private:
  ::sensor_msgs::msg::MultiDOFJointState msg_;
};

class Init_MultiDOFJointState_transforms
{
public:
  explicit Init_MultiDOFJointState_transforms(::sensor_msgs::msg::MultiDOFJointState & msg)
  : msg_(msg)
  {}
  Init_MultiDOFJointState_twist transforms(::sensor_msgs::msg::MultiDOFJointState::_transforms_type arg)
  {
    msg_.transforms = std::move(arg);
    return Init_MultiDOFJointState_twist(msg_);
  }

private:
  ::sensor_msgs::msg::MultiDOFJointState msg_;
};

class Init_MultiDOFJointState_joint_names
{
public:
  explicit Init_MultiDOFJointState_joint_names(::sensor_msgs::msg::MultiDOFJointState & msg)
  : msg_(msg)
  {}
  Init_MultiDOFJointState_transforms joint_names(::sensor_msgs::msg::MultiDOFJointState::_joint_names_type arg)
  {
    msg_.joint_names = std::move(arg);
    return Init_MultiDOFJointState_transforms(msg_);
  }

private:
  ::sensor_msgs::msg::MultiDOFJointState msg_;
};

class Init_MultiDOFJointState_header
{
public:
  Init_MultiDOFJointState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiDOFJointState_joint_names header(::sensor_msgs::msg::MultiDOFJointState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MultiDOFJointState_joint_names(msg_);
  }

private:
  ::sensor_msgs::msg::MultiDOFJointState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_msgs::msg::MultiDOFJointState>()
{
  return sensor_msgs::msg::builder::Init_MultiDOFJointState_header();
}

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__DETAIL__MULTI_DOF_JOINT_STATE__BUILDER_HPP_

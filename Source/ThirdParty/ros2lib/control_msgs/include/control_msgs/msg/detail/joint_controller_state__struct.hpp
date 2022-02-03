// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from control_msgs:msg/JointControllerState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__JOINT_CONTROLLER_STATE__STRUCT_HPP_
#define CONTROL_MSGS__MSG__DETAIL__JOINT_CONTROLLER_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__control_msgs__msg__JointControllerState __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__msg__JointControllerState __declspec(deprecated)
#endif

namespace control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointControllerState_
{
  using Type = JointControllerState_<ContainerAllocator>;

  explicit JointControllerState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->set_point = 0.0;
      this->process_value = 0.0;
      this->process_value_dot = 0.0;
      this->error = 0.0;
      this->time_step = 0.0;
      this->command = 0.0;
      this->p = 0.0;
      this->i = 0.0;
      this->d = 0.0;
      this->i_clamp = 0.0;
      this->antiwindup = false;
    }
  }

  explicit JointControllerState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->set_point = 0.0;
      this->process_value = 0.0;
      this->process_value_dot = 0.0;
      this->error = 0.0;
      this->time_step = 0.0;
      this->command = 0.0;
      this->p = 0.0;
      this->i = 0.0;
      this->d = 0.0;
      this->i_clamp = 0.0;
      this->antiwindup = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _set_point_type =
    double;
  _set_point_type set_point;
  using _process_value_type =
    double;
  _process_value_type process_value;
  using _process_value_dot_type =
    double;
  _process_value_dot_type process_value_dot;
  using _error_type =
    double;
  _error_type error;
  using _time_step_type =
    double;
  _time_step_type time_step;
  using _command_type =
    double;
  _command_type command;
  using _p_type =
    double;
  _p_type p;
  using _i_type =
    double;
  _i_type i;
  using _d_type =
    double;
  _d_type d;
  using _i_clamp_type =
    double;
  _i_clamp_type i_clamp;
  using _antiwindup_type =
    bool;
  _antiwindup_type antiwindup;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__set_point(
    const double & _arg)
  {
    this->set_point = _arg;
    return *this;
  }
  Type & set__process_value(
    const double & _arg)
  {
    this->process_value = _arg;
    return *this;
  }
  Type & set__process_value_dot(
    const double & _arg)
  {
    this->process_value_dot = _arg;
    return *this;
  }
  Type & set__error(
    const double & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__time_step(
    const double & _arg)
  {
    this->time_step = _arg;
    return *this;
  }
  Type & set__command(
    const double & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__p(
    const double & _arg)
  {
    this->p = _arg;
    return *this;
  }
  Type & set__i(
    const double & _arg)
  {
    this->i = _arg;
    return *this;
  }
  Type & set__d(
    const double & _arg)
  {
    this->d = _arg;
    return *this;
  }
  Type & set__i_clamp(
    const double & _arg)
  {
    this->i_clamp = _arg;
    return *this;
  }
  Type & set__antiwindup(
    const bool & _arg)
  {
    this->antiwindup = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_msgs::msg::JointControllerState_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::msg::JointControllerState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::msg::JointControllerState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::msg::JointControllerState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::JointControllerState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::JointControllerState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::JointControllerState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::JointControllerState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::msg::JointControllerState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::msg::JointControllerState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__msg__JointControllerState
    std::shared_ptr<control_msgs::msg::JointControllerState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__msg__JointControllerState
    std::shared_ptr<control_msgs::msg::JointControllerState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointControllerState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->set_point != other.set_point) {
      return false;
    }
    if (this->process_value != other.process_value) {
      return false;
    }
    if (this->process_value_dot != other.process_value_dot) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    if (this->time_step != other.time_step) {
      return false;
    }
    if (this->command != other.command) {
      return false;
    }
    if (this->p != other.p) {
      return false;
    }
    if (this->i != other.i) {
      return false;
    }
    if (this->d != other.d) {
      return false;
    }
    if (this->i_clamp != other.i_clamp) {
      return false;
    }
    if (this->antiwindup != other.antiwindup) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointControllerState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointControllerState_

// alias to use template instance with default allocator
using JointControllerState =
  control_msgs::msg::JointControllerState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__JOINT_CONTROLLER_STATE__STRUCT_HPP_

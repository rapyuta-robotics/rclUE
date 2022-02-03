// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from control_msgs:msg/PidState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__PID_STATE__STRUCT_HPP_
#define CONTROL_MSGS__MSG__DETAIL__PID_STATE__STRUCT_HPP_

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
// Member 'timestep'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__control_msgs__msg__PidState __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__msg__PidState __declspec(deprecated)
#endif

namespace control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PidState_
{
  using Type = PidState_<ContainerAllocator>;

  explicit PidState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    timestep(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error = 0.0;
      this->error_dot = 0.0;
      this->p_error = 0.0;
      this->i_error = 0.0;
      this->d_error = 0.0;
      this->p_term = 0.0;
      this->i_term = 0.0;
      this->d_term = 0.0;
      this->i_max = 0.0;
      this->i_min = 0.0;
      this->output = 0.0;
    }
  }

  explicit PidState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    timestep(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error = 0.0;
      this->error_dot = 0.0;
      this->p_error = 0.0;
      this->i_error = 0.0;
      this->d_error = 0.0;
      this->p_term = 0.0;
      this->i_term = 0.0;
      this->d_term = 0.0;
      this->i_max = 0.0;
      this->i_min = 0.0;
      this->output = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _timestep_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _timestep_type timestep;
  using _error_type =
    double;
  _error_type error;
  using _error_dot_type =
    double;
  _error_dot_type error_dot;
  using _p_error_type =
    double;
  _p_error_type p_error;
  using _i_error_type =
    double;
  _i_error_type i_error;
  using _d_error_type =
    double;
  _d_error_type d_error;
  using _p_term_type =
    double;
  _p_term_type p_term;
  using _i_term_type =
    double;
  _i_term_type i_term;
  using _d_term_type =
    double;
  _d_term_type d_term;
  using _i_max_type =
    double;
  _i_max_type i_max;
  using _i_min_type =
    double;
  _i_min_type i_min;
  using _output_type =
    double;
  _output_type output;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__timestep(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->timestep = _arg;
    return *this;
  }
  Type & set__error(
    const double & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__error_dot(
    const double & _arg)
  {
    this->error_dot = _arg;
    return *this;
  }
  Type & set__p_error(
    const double & _arg)
  {
    this->p_error = _arg;
    return *this;
  }
  Type & set__i_error(
    const double & _arg)
  {
    this->i_error = _arg;
    return *this;
  }
  Type & set__d_error(
    const double & _arg)
  {
    this->d_error = _arg;
    return *this;
  }
  Type & set__p_term(
    const double & _arg)
  {
    this->p_term = _arg;
    return *this;
  }
  Type & set__i_term(
    const double & _arg)
  {
    this->i_term = _arg;
    return *this;
  }
  Type & set__d_term(
    const double & _arg)
  {
    this->d_term = _arg;
    return *this;
  }
  Type & set__i_max(
    const double & _arg)
  {
    this->i_max = _arg;
    return *this;
  }
  Type & set__i_min(
    const double & _arg)
  {
    this->i_min = _arg;
    return *this;
  }
  Type & set__output(
    const double & _arg)
  {
    this->output = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_msgs::msg::PidState_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::msg::PidState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::msg::PidState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::msg::PidState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::PidState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::PidState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::PidState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::PidState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::msg::PidState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::msg::PidState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__msg__PidState
    std::shared_ptr<control_msgs::msg::PidState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__msg__PidState
    std::shared_ptr<control_msgs::msg::PidState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PidState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->timestep != other.timestep) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    if (this->error_dot != other.error_dot) {
      return false;
    }
    if (this->p_error != other.p_error) {
      return false;
    }
    if (this->i_error != other.i_error) {
      return false;
    }
    if (this->d_error != other.d_error) {
      return false;
    }
    if (this->p_term != other.p_term) {
      return false;
    }
    if (this->i_term != other.i_term) {
      return false;
    }
    if (this->d_term != other.d_term) {
      return false;
    }
    if (this->i_max != other.i_max) {
      return false;
    }
    if (this->i_min != other.i_min) {
      return false;
    }
    if (this->output != other.output) {
      return false;
    }
    return true;
  }
  bool operator!=(const PidState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PidState_

// alias to use template instance with default allocator
using PidState =
  control_msgs::msg::PidState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__PID_STATE__STRUCT_HPP_

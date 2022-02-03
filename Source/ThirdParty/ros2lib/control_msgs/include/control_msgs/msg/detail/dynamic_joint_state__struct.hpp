// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from control_msgs:msg/DynamicJointState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__DYNAMIC_JOINT_STATE__STRUCT_HPP_
#define CONTROL_MSGS__MSG__DETAIL__DYNAMIC_JOINT_STATE__STRUCT_HPP_

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
// Member 'interface_values'
#include "control_msgs/msg/detail/interface_value__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__control_msgs__msg__DynamicJointState __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__msg__DynamicJointState __declspec(deprecated)
#endif

namespace control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DynamicJointState_
{
  using Type = DynamicJointState_<ContainerAllocator>;

  explicit DynamicJointState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit DynamicJointState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _joint_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _joint_names_type joint_names;
  using _interface_values_type =
    std::vector<control_msgs::msg::InterfaceValue_<ContainerAllocator>, typename ContainerAllocator::template rebind<control_msgs::msg::InterfaceValue_<ContainerAllocator>>::other>;
  _interface_values_type interface_values;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__joint_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->joint_names = _arg;
    return *this;
  }
  Type & set__interface_values(
    const std::vector<control_msgs::msg::InterfaceValue_<ContainerAllocator>, typename ContainerAllocator::template rebind<control_msgs::msg::InterfaceValue_<ContainerAllocator>>::other> & _arg)
  {
    this->interface_values = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_msgs::msg::DynamicJointState_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::msg::DynamicJointState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::msg::DynamicJointState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::msg::DynamicJointState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::DynamicJointState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::DynamicJointState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::DynamicJointState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::DynamicJointState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::msg::DynamicJointState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::msg::DynamicJointState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__msg__DynamicJointState
    std::shared_ptr<control_msgs::msg::DynamicJointState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__msg__DynamicJointState
    std::shared_ptr<control_msgs::msg::DynamicJointState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DynamicJointState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->joint_names != other.joint_names) {
      return false;
    }
    if (this->interface_values != other.interface_values) {
      return false;
    }
    return true;
  }
  bool operator!=(const DynamicJointState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DynamicJointState_

// alias to use template instance with default allocator
using DynamicJointState =
  control_msgs::msg::DynamicJointState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__DYNAMIC_JOINT_STATE__STRUCT_HPP_

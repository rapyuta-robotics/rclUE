// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sensor_msgs:msg/MultiDOFJointState.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__MULTI_DOF_JOINT_STATE__STRUCT_HPP_
#define SENSOR_MSGS__MSG__DETAIL__MULTI_DOF_JOINT_STATE__STRUCT_HPP_

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
// Member 'transforms'
#include "geometry_msgs/msg/detail/transform__struct.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.hpp"
// Member 'wrench'
#include "geometry_msgs/msg/detail/wrench__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sensor_msgs__msg__MultiDOFJointState __attribute__((deprecated))
#else
# define DEPRECATED__sensor_msgs__msg__MultiDOFJointState __declspec(deprecated)
#endif

namespace sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MultiDOFJointState_
{
  using Type = MultiDOFJointState_<ContainerAllocator>;

  explicit MultiDOFJointState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit MultiDOFJointState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  using _transforms_type =
    std::vector<geometry_msgs::msg::Transform_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Transform_<ContainerAllocator>>::other>;
  _transforms_type transforms;
  using _twist_type =
    std::vector<geometry_msgs::msg::Twist_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Twist_<ContainerAllocator>>::other>;
  _twist_type twist;
  using _wrench_type =
    std::vector<geometry_msgs::msg::Wrench_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Wrench_<ContainerAllocator>>::other>;
  _wrench_type wrench;

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
  Type & set__transforms(
    const std::vector<geometry_msgs::msg::Transform_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Transform_<ContainerAllocator>>::other> & _arg)
  {
    this->transforms = _arg;
    return *this;
  }
  Type & set__twist(
    const std::vector<geometry_msgs::msg::Twist_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Twist_<ContainerAllocator>>::other> & _arg)
  {
    this->twist = _arg;
    return *this;
  }
  Type & set__wrench(
    const std::vector<geometry_msgs::msg::Wrench_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Wrench_<ContainerAllocator>>::other> & _arg)
  {
    this->wrench = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sensor_msgs::msg::MultiDOFJointState_<ContainerAllocator> *;
  using ConstRawPtr =
    const sensor_msgs::msg::MultiDOFJointState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sensor_msgs::msg::MultiDOFJointState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sensor_msgs::msg::MultiDOFJointState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sensor_msgs::msg::MultiDOFJointState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sensor_msgs::msg::MultiDOFJointState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sensor_msgs::msg::MultiDOFJointState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sensor_msgs::msg::MultiDOFJointState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sensor_msgs::msg::MultiDOFJointState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sensor_msgs::msg::MultiDOFJointState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sensor_msgs__msg__MultiDOFJointState
    std::shared_ptr<sensor_msgs::msg::MultiDOFJointState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sensor_msgs__msg__MultiDOFJointState
    std::shared_ptr<sensor_msgs::msg::MultiDOFJointState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MultiDOFJointState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->joint_names != other.joint_names) {
      return false;
    }
    if (this->transforms != other.transforms) {
      return false;
    }
    if (this->twist != other.twist) {
      return false;
    }
    if (this->wrench != other.wrench) {
      return false;
    }
    return true;
  }
  bool operator!=(const MultiDOFJointState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MultiDOFJointState_

// alias to use template instance with default allocator
using MultiDOFJointState =
  sensor_msgs::msg::MultiDOFJointState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__DETAIL__MULTI_DOF_JOINT_STATE__STRUCT_HPP_

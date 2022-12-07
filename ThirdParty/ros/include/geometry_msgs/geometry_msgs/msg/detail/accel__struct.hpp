// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from geometry_msgs:msg/Accel.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__ACCEL__STRUCT_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__ACCEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'linear'
// Member 'angular'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__geometry_msgs__msg__Accel __attribute__((deprecated))
#else
# define DEPRECATED__geometry_msgs__msg__Accel __declspec(deprecated)
#endif

namespace geometry_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Accel_
{
  using Type = Accel_<ContainerAllocator>;

  explicit Accel_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : linear(_init),
    angular(_init)
  {
    (void)_init;
  }

  explicit Accel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : linear(_alloc, _init),
    angular(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _linear_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _linear_type linear;
  using _angular_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _angular_type angular;

  // setters for named parameter idiom
  Type & set__linear(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->linear = _arg;
    return *this;
  }
  Type & set__angular(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->angular = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    geometry_msgs::msg::Accel_<ContainerAllocator> *;
  using ConstRawPtr =
    const geometry_msgs::msg::Accel_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<geometry_msgs::msg::Accel_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<geometry_msgs::msg::Accel_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      geometry_msgs::msg::Accel_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<geometry_msgs::msg::Accel_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      geometry_msgs::msg::Accel_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<geometry_msgs::msg::Accel_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<geometry_msgs::msg::Accel_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<geometry_msgs::msg::Accel_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__geometry_msgs__msg__Accel
    std::shared_ptr<geometry_msgs::msg::Accel_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__geometry_msgs__msg__Accel
    std::shared_ptr<geometry_msgs::msg::Accel_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Accel_ & other) const
  {
    if (this->linear != other.linear) {
      return false;
    }
    if (this->angular != other.angular) {
      return false;
    }
    return true;
  }
  bool operator!=(const Accel_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Accel_

// alias to use template instance with default allocator
using Accel =
  geometry_msgs::msg::Accel_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__DETAIL__ACCEL__STRUCT_HPP_

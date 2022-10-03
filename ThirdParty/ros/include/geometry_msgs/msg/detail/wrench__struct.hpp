// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from geometry_msgs:msg/Wrench.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__WRENCH__STRUCT_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__WRENCH__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'force'
// Member 'torque'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__geometry_msgs__msg__Wrench __attribute__((deprecated))
#else
# define DEPRECATED__geometry_msgs__msg__Wrench __declspec(deprecated)
#endif

namespace geometry_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Wrench_
{
  using Type = Wrench_<ContainerAllocator>;

  explicit Wrench_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : force(_init),
    torque(_init)
  {
    (void)_init;
  }

  explicit Wrench_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : force(_alloc, _init),
    torque(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _force_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _force_type force;
  using _torque_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _torque_type torque;

  // setters for named parameter idiom
  Type & set__force(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->force = _arg;
    return *this;
  }
  Type & set__torque(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->torque = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    geometry_msgs::msg::Wrench_<ContainerAllocator> *;
  using ConstRawPtr =
    const geometry_msgs::msg::Wrench_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<geometry_msgs::msg::Wrench_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<geometry_msgs::msg::Wrench_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      geometry_msgs::msg::Wrench_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<geometry_msgs::msg::Wrench_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      geometry_msgs::msg::Wrench_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<geometry_msgs::msg::Wrench_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<geometry_msgs::msg::Wrench_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<geometry_msgs::msg::Wrench_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__geometry_msgs__msg__Wrench
    std::shared_ptr<geometry_msgs::msg::Wrench_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__geometry_msgs__msg__Wrench
    std::shared_ptr<geometry_msgs::msg::Wrench_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Wrench_ & other) const
  {
    if (this->force != other.force) {
      return false;
    }
    if (this->torque != other.torque) {
      return false;
    }
    return true;
  }
  bool operator!=(const Wrench_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Wrench_

// alias to use template instance with default allocator
using Wrench =
  geometry_msgs::msg::Wrench_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__DETAIL__WRENCH__STRUCT_HPP_

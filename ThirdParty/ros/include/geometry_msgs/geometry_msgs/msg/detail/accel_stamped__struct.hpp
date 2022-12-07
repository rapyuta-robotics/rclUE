// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from geometry_msgs:msg/AccelStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__ACCEL_STAMPED__STRUCT_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__ACCEL_STAMPED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'accel'
#include "geometry_msgs/msg/detail/accel__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__geometry_msgs__msg__AccelStamped __attribute__((deprecated))
#else
# define DEPRECATED__geometry_msgs__msg__AccelStamped __declspec(deprecated)
#endif

namespace geometry_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AccelStamped_
{
  using Type = AccelStamped_<ContainerAllocator>;

  explicit AccelStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    accel(_init)
  {
    (void)_init;
  }

  explicit AccelStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    accel(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _accel_type =
    geometry_msgs::msg::Accel_<ContainerAllocator>;
  _accel_type accel;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__accel(
    const geometry_msgs::msg::Accel_<ContainerAllocator> & _arg)
  {
    this->accel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    geometry_msgs::msg::AccelStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const geometry_msgs::msg::AccelStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<geometry_msgs::msg::AccelStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<geometry_msgs::msg::AccelStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      geometry_msgs::msg::AccelStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<geometry_msgs::msg::AccelStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      geometry_msgs::msg::AccelStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<geometry_msgs::msg::AccelStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<geometry_msgs::msg::AccelStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<geometry_msgs::msg::AccelStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__geometry_msgs__msg__AccelStamped
    std::shared_ptr<geometry_msgs::msg::AccelStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__geometry_msgs__msg__AccelStamped
    std::shared_ptr<geometry_msgs::msg::AccelStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AccelStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->accel != other.accel) {
      return false;
    }
    return true;
  }
  bool operator!=(const AccelStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AccelStamped_

// alias to use template instance with default allocator
using AccelStamped =
  geometry_msgs::msg::AccelStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__DETAIL__ACCEL_STAMPED__STRUCT_HPP_

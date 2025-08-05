// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sensor_msgs:msg/LaserEcho.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__LASER_ECHO__STRUCT_HPP_
#define SENSOR_MSGS__MSG__DETAIL__LASER_ECHO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sensor_msgs__msg__LaserEcho __attribute__((deprecated))
#else
# define DEPRECATED__sensor_msgs__msg__LaserEcho __declspec(deprecated)
#endif

namespace sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaserEcho_
{
  using Type = LaserEcho_<ContainerAllocator>;

  explicit LaserEcho_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit LaserEcho_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _echoes_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _echoes_type echoes;

  // setters for named parameter idiom
  Type & set__echoes(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->echoes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sensor_msgs::msg::LaserEcho_<ContainerAllocator> *;
  using ConstRawPtr =
    const sensor_msgs::msg::LaserEcho_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sensor_msgs::msg::LaserEcho_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sensor_msgs::msg::LaserEcho_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sensor_msgs::msg::LaserEcho_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sensor_msgs::msg::LaserEcho_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sensor_msgs::msg::LaserEcho_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sensor_msgs::msg::LaserEcho_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sensor_msgs::msg::LaserEcho_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sensor_msgs::msg::LaserEcho_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sensor_msgs__msg__LaserEcho
    std::shared_ptr<sensor_msgs::msg::LaserEcho_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sensor_msgs__msg__LaserEcho
    std::shared_ptr<sensor_msgs::msg::LaserEcho_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaserEcho_ & other) const
  {
    if (this->echoes != other.echoes) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaserEcho_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaserEcho_

// alias to use template instance with default allocator
using LaserEcho =
  sensor_msgs::msg::LaserEcho_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__DETAIL__LASER_ECHO__STRUCT_HPP_

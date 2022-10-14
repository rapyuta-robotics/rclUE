// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sensor_msgs:msg/FluidPressure.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__FLUID_PRESSURE__STRUCT_HPP_
#define SENSOR_MSGS__MSG__DETAIL__FLUID_PRESSURE__STRUCT_HPP_

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
# define DEPRECATED__sensor_msgs__msg__FluidPressure __attribute__((deprecated))
#else
# define DEPRECATED__sensor_msgs__msg__FluidPressure __declspec(deprecated)
#endif

namespace sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FluidPressure_
{
  using Type = FluidPressure_<ContainerAllocator>;

  explicit FluidPressure_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fluid_pressure = 0.0;
      this->variance = 0.0;
    }
  }

  explicit FluidPressure_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fluid_pressure = 0.0;
      this->variance = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _fluid_pressure_type =
    double;
  _fluid_pressure_type fluid_pressure;
  using _variance_type =
    double;
  _variance_type variance;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__fluid_pressure(
    const double & _arg)
  {
    this->fluid_pressure = _arg;
    return *this;
  }
  Type & set__variance(
    const double & _arg)
  {
    this->variance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sensor_msgs::msg::FluidPressure_<ContainerAllocator> *;
  using ConstRawPtr =
    const sensor_msgs::msg::FluidPressure_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sensor_msgs::msg::FluidPressure_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sensor_msgs::msg::FluidPressure_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sensor_msgs::msg::FluidPressure_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sensor_msgs::msg::FluidPressure_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sensor_msgs::msg::FluidPressure_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sensor_msgs::msg::FluidPressure_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sensor_msgs::msg::FluidPressure_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sensor_msgs::msg::FluidPressure_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sensor_msgs__msg__FluidPressure
    std::shared_ptr<sensor_msgs::msg::FluidPressure_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sensor_msgs__msg__FluidPressure
    std::shared_ptr<sensor_msgs::msg::FluidPressure_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FluidPressure_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->fluid_pressure != other.fluid_pressure) {
      return false;
    }
    if (this->variance != other.variance) {
      return false;
    }
    return true;
  }
  bool operator!=(const FluidPressure_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FluidPressure_

// alias to use template instance with default allocator
using FluidPressure =
  sensor_msgs::msg::FluidPressure_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__DETAIL__FLUID_PRESSURE__STRUCT_HPP_

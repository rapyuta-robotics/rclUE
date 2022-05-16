// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sensor_msgs:msg/RelativeHumidity.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__RELATIVE_HUMIDITY__STRUCT_HPP_
#define SENSOR_MSGS__MSG__DETAIL__RELATIVE_HUMIDITY__STRUCT_HPP_

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
# define DEPRECATED__sensor_msgs__msg__RelativeHumidity __attribute__((deprecated))
#else
# define DEPRECATED__sensor_msgs__msg__RelativeHumidity __declspec(deprecated)
#endif

namespace sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RelativeHumidity_
{
  using Type = RelativeHumidity_<ContainerAllocator>;

  explicit RelativeHumidity_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->relative_humidity = 0.0;
      this->variance = 0.0;
    }
  }

  explicit RelativeHumidity_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->relative_humidity = 0.0;
      this->variance = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _relative_humidity_type =
    double;
  _relative_humidity_type relative_humidity;
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
  Type & set__relative_humidity(
    const double & _arg)
  {
    this->relative_humidity = _arg;
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
    sensor_msgs::msg::RelativeHumidity_<ContainerAllocator> *;
  using ConstRawPtr =
    const sensor_msgs::msg::RelativeHumidity_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sensor_msgs::msg::RelativeHumidity_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sensor_msgs::msg::RelativeHumidity_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sensor_msgs::msg::RelativeHumidity_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sensor_msgs::msg::RelativeHumidity_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sensor_msgs::msg::RelativeHumidity_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sensor_msgs::msg::RelativeHumidity_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sensor_msgs::msg::RelativeHumidity_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sensor_msgs::msg::RelativeHumidity_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sensor_msgs__msg__RelativeHumidity
    std::shared_ptr<sensor_msgs::msg::RelativeHumidity_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sensor_msgs__msg__RelativeHumidity
    std::shared_ptr<sensor_msgs::msg::RelativeHumidity_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RelativeHumidity_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->relative_humidity != other.relative_humidity) {
      return false;
    }
    if (this->variance != other.variance) {
      return false;
    }
    return true;
  }
  bool operator!=(const RelativeHumidity_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RelativeHumidity_

// alias to use template instance with default allocator
using RelativeHumidity =
  sensor_msgs::msg::RelativeHumidity_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__DETAIL__RELATIVE_HUMIDITY__STRUCT_HPP_

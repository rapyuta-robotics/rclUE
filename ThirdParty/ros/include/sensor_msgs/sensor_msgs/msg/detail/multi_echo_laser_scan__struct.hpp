// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sensor_msgs:msg/MultiEchoLaserScan.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__MULTI_ECHO_LASER_SCAN__STRUCT_HPP_
#define SENSOR_MSGS__MSG__DETAIL__MULTI_ECHO_LASER_SCAN__STRUCT_HPP_

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
// Member 'ranges'
// Member 'intensities'
#include "sensor_msgs/msg/detail/laser_echo__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sensor_msgs__msg__MultiEchoLaserScan __attribute__((deprecated))
#else
# define DEPRECATED__sensor_msgs__msg__MultiEchoLaserScan __declspec(deprecated)
#endif

namespace sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MultiEchoLaserScan_
{
  using Type = MultiEchoLaserScan_<ContainerAllocator>;

  explicit MultiEchoLaserScan_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle_min = 0.0f;
      this->angle_max = 0.0f;
      this->angle_increment = 0.0f;
      this->time_increment = 0.0f;
      this->scan_time = 0.0f;
      this->range_min = 0.0f;
      this->range_max = 0.0f;
    }
  }

  explicit MultiEchoLaserScan_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle_min = 0.0f;
      this->angle_max = 0.0f;
      this->angle_increment = 0.0f;
      this->time_increment = 0.0f;
      this->scan_time = 0.0f;
      this->range_min = 0.0f;
      this->range_max = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _angle_min_type =
    float;
  _angle_min_type angle_min;
  using _angle_max_type =
    float;
  _angle_max_type angle_max;
  using _angle_increment_type =
    float;
  _angle_increment_type angle_increment;
  using _time_increment_type =
    float;
  _time_increment_type time_increment;
  using _scan_time_type =
    float;
  _scan_time_type scan_time;
  using _range_min_type =
    float;
  _range_min_type range_min;
  using _range_max_type =
    float;
  _range_max_type range_max;
  using _ranges_type =
    std::vector<sensor_msgs::msg::LaserEcho_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::LaserEcho_<ContainerAllocator>>>;
  _ranges_type ranges;
  using _intensities_type =
    std::vector<sensor_msgs::msg::LaserEcho_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::LaserEcho_<ContainerAllocator>>>;
  _intensities_type intensities;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__angle_min(
    const float & _arg)
  {
    this->angle_min = _arg;
    return *this;
  }
  Type & set__angle_max(
    const float & _arg)
  {
    this->angle_max = _arg;
    return *this;
  }
  Type & set__angle_increment(
    const float & _arg)
  {
    this->angle_increment = _arg;
    return *this;
  }
  Type & set__time_increment(
    const float & _arg)
  {
    this->time_increment = _arg;
    return *this;
  }
  Type & set__scan_time(
    const float & _arg)
  {
    this->scan_time = _arg;
    return *this;
  }
  Type & set__range_min(
    const float & _arg)
  {
    this->range_min = _arg;
    return *this;
  }
  Type & set__range_max(
    const float & _arg)
  {
    this->range_max = _arg;
    return *this;
  }
  Type & set__ranges(
    const std::vector<sensor_msgs::msg::LaserEcho_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::LaserEcho_<ContainerAllocator>>> & _arg)
  {
    this->ranges = _arg;
    return *this;
  }
  Type & set__intensities(
    const std::vector<sensor_msgs::msg::LaserEcho_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::LaserEcho_<ContainerAllocator>>> & _arg)
  {
    this->intensities = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sensor_msgs::msg::MultiEchoLaserScan_<ContainerAllocator> *;
  using ConstRawPtr =
    const sensor_msgs::msg::MultiEchoLaserScan_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sensor_msgs::msg::MultiEchoLaserScan_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sensor_msgs::msg::MultiEchoLaserScan_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sensor_msgs::msg::MultiEchoLaserScan_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sensor_msgs::msg::MultiEchoLaserScan_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sensor_msgs::msg::MultiEchoLaserScan_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sensor_msgs::msg::MultiEchoLaserScan_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sensor_msgs::msg::MultiEchoLaserScan_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sensor_msgs::msg::MultiEchoLaserScan_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sensor_msgs__msg__MultiEchoLaserScan
    std::shared_ptr<sensor_msgs::msg::MultiEchoLaserScan_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sensor_msgs__msg__MultiEchoLaserScan
    std::shared_ptr<sensor_msgs::msg::MultiEchoLaserScan_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MultiEchoLaserScan_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->angle_min != other.angle_min) {
      return false;
    }
    if (this->angle_max != other.angle_max) {
      return false;
    }
    if (this->angle_increment != other.angle_increment) {
      return false;
    }
    if (this->time_increment != other.time_increment) {
      return false;
    }
    if (this->scan_time != other.scan_time) {
      return false;
    }
    if (this->range_min != other.range_min) {
      return false;
    }
    if (this->range_max != other.range_max) {
      return false;
    }
    if (this->ranges != other.ranges) {
      return false;
    }
    if (this->intensities != other.intensities) {
      return false;
    }
    return true;
  }
  bool operator!=(const MultiEchoLaserScan_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MultiEchoLaserScan_

// alias to use template instance with default allocator
using MultiEchoLaserScan =
  sensor_msgs::msg::MultiEchoLaserScan_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__DETAIL__MULTI_ECHO_LASER_SCAN__STRUCT_HPP_

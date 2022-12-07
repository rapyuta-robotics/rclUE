// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sensor_msgs:msg/MagneticField.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__MAGNETIC_FIELD__STRUCT_HPP_
#define SENSOR_MSGS__MSG__DETAIL__MAGNETIC_FIELD__STRUCT_HPP_

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
// Member 'magnetic_field'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sensor_msgs__msg__MagneticField __attribute__((deprecated))
#else
# define DEPRECATED__sensor_msgs__msg__MagneticField __declspec(deprecated)
#endif

namespace sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MagneticField_
{
  using Type = MagneticField_<ContainerAllocator>;

  explicit MagneticField_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    magnetic_field(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 9>::iterator, double>(this->magnetic_field_covariance.begin(), this->magnetic_field_covariance.end(), 0.0);
    }
  }

  explicit MagneticField_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    magnetic_field(_alloc, _init),
    magnetic_field_covariance(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 9>::iterator, double>(this->magnetic_field_covariance.begin(), this->magnetic_field_covariance.end(), 0.0);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _magnetic_field_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _magnetic_field_type magnetic_field;
  using _magnetic_field_covariance_type =
    std::array<double, 9>;
  _magnetic_field_covariance_type magnetic_field_covariance;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__magnetic_field(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->magnetic_field = _arg;
    return *this;
  }
  Type & set__magnetic_field_covariance(
    const std::array<double, 9> & _arg)
  {
    this->magnetic_field_covariance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sensor_msgs::msg::MagneticField_<ContainerAllocator> *;
  using ConstRawPtr =
    const sensor_msgs::msg::MagneticField_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sensor_msgs::msg::MagneticField_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sensor_msgs::msg::MagneticField_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sensor_msgs::msg::MagneticField_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sensor_msgs::msg::MagneticField_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sensor_msgs::msg::MagneticField_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sensor_msgs::msg::MagneticField_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sensor_msgs::msg::MagneticField_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sensor_msgs::msg::MagneticField_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sensor_msgs__msg__MagneticField
    std::shared_ptr<sensor_msgs::msg::MagneticField_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sensor_msgs__msg__MagneticField
    std::shared_ptr<sensor_msgs::msg::MagneticField_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MagneticField_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->magnetic_field != other.magnetic_field) {
      return false;
    }
    if (this->magnetic_field_covariance != other.magnetic_field_covariance) {
      return false;
    }
    return true;
  }
  bool operator!=(const MagneticField_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MagneticField_

// alias to use template instance with default allocator
using MagneticField =
  sensor_msgs::msg::MagneticField_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__DETAIL__MAGNETIC_FIELD__STRUCT_HPP_

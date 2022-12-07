// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sensor_msgs:msg/PointField.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__POINT_FIELD__STRUCT_HPP_
#define SENSOR_MSGS__MSG__DETAIL__POINT_FIELD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sensor_msgs__msg__PointField __attribute__((deprecated))
#else
# define DEPRECATED__sensor_msgs__msg__PointField __declspec(deprecated)
#endif

namespace sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PointField_
{
  using Type = PointField_<ContainerAllocator>;

  explicit PointField_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->offset = 0ul;
      this->datatype = 0;
      this->count = 0ul;
    }
  }

  explicit PointField_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->offset = 0ul;
      this->datatype = 0;
      this->count = 0ul;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _offset_type =
    uint32_t;
  _offset_type offset;
  using _datatype_type =
    uint8_t;
  _datatype_type datatype;
  using _count_type =
    uint32_t;
  _count_type count;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__offset(
    const uint32_t & _arg)
  {
    this->offset = _arg;
    return *this;
  }
  Type & set__datatype(
    const uint8_t & _arg)
  {
    this->datatype = _arg;
    return *this;
  }
  Type & set__count(
    const uint32_t & _arg)
  {
    this->count = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t INT8 =
    1u;
  static constexpr uint8_t UINT8 =
    2u;
  static constexpr uint8_t INT16 =
    3u;
  static constexpr uint8_t UINT16 =
    4u;
  static constexpr uint8_t INT32 =
    5u;
  static constexpr uint8_t UINT32 =
    6u;
  static constexpr uint8_t FLOAT32 =
    7u;
  static constexpr uint8_t FLOAT64 =
    8u;

  // pointer types
  using RawPtr =
    sensor_msgs::msg::PointField_<ContainerAllocator> *;
  using ConstRawPtr =
    const sensor_msgs::msg::PointField_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sensor_msgs::msg::PointField_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sensor_msgs::msg::PointField_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sensor_msgs::msg::PointField_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sensor_msgs::msg::PointField_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sensor_msgs::msg::PointField_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sensor_msgs::msg::PointField_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sensor_msgs::msg::PointField_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sensor_msgs::msg::PointField_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sensor_msgs__msg__PointField
    std::shared_ptr<sensor_msgs::msg::PointField_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sensor_msgs__msg__PointField
    std::shared_ptr<sensor_msgs::msg::PointField_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointField_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->offset != other.offset) {
      return false;
    }
    if (this->datatype != other.datatype) {
      return false;
    }
    if (this->count != other.count) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointField_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointField_

// alias to use template instance with default allocator
using PointField =
  sensor_msgs::msg::PointField_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t PointField_<ContainerAllocator>::INT8;
template<typename ContainerAllocator>
constexpr uint8_t PointField_<ContainerAllocator>::UINT8;
template<typename ContainerAllocator>
constexpr uint8_t PointField_<ContainerAllocator>::INT16;
template<typename ContainerAllocator>
constexpr uint8_t PointField_<ContainerAllocator>::UINT16;
template<typename ContainerAllocator>
constexpr uint8_t PointField_<ContainerAllocator>::INT32;
template<typename ContainerAllocator>
constexpr uint8_t PointField_<ContainerAllocator>::UINT32;
template<typename ContainerAllocator>
constexpr uint8_t PointField_<ContainerAllocator>::FLOAT32;
template<typename ContainerAllocator>
constexpr uint8_t PointField_<ContainerAllocator>::FLOAT64;

}  // namespace msg

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__DETAIL__POINT_FIELD__STRUCT_HPP_

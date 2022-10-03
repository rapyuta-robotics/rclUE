// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sensor_msgs:msg/PointCloud2.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__POINT_CLOUD2__STRUCT_HPP_
#define SENSOR_MSGS__MSG__DETAIL__POINT_CLOUD2__STRUCT_HPP_

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
// Member 'fields'
#include "sensor_msgs/msg/detail/point_field__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sensor_msgs__msg__PointCloud2 __attribute__((deprecated))
#else
# define DEPRECATED__sensor_msgs__msg__PointCloud2 __declspec(deprecated)
#endif

namespace sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PointCloud2_
{
  using Type = PointCloud2_<ContainerAllocator>;

  explicit PointCloud2_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height = 0ul;
      this->width = 0ul;
      this->is_bigendian = false;
      this->point_step = 0ul;
      this->row_step = 0ul;
      this->is_dense = false;
    }
  }

  explicit PointCloud2_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height = 0ul;
      this->width = 0ul;
      this->is_bigendian = false;
      this->point_step = 0ul;
      this->row_step = 0ul;
      this->is_dense = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _height_type =
    uint32_t;
  _height_type height;
  using _width_type =
    uint32_t;
  _width_type width;
  using _fields_type =
    std::vector<sensor_msgs::msg::PointField_<ContainerAllocator>, typename ContainerAllocator::template rebind<sensor_msgs::msg::PointField_<ContainerAllocator>>::other>;
  _fields_type fields;
  using _is_bigendian_type =
    bool;
  _is_bigendian_type is_bigendian;
  using _point_step_type =
    uint32_t;
  _point_step_type point_step;
  using _row_step_type =
    uint32_t;
  _row_step_type row_step;
  using _data_type =
    std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _data_type data;
  using _is_dense_type =
    bool;
  _is_dense_type is_dense;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__height(
    const uint32_t & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__width(
    const uint32_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__fields(
    const std::vector<sensor_msgs::msg::PointField_<ContainerAllocator>, typename ContainerAllocator::template rebind<sensor_msgs::msg::PointField_<ContainerAllocator>>::other> & _arg)
  {
    this->fields = _arg;
    return *this;
  }
  Type & set__is_bigendian(
    const bool & _arg)
  {
    this->is_bigendian = _arg;
    return *this;
  }
  Type & set__point_step(
    const uint32_t & _arg)
  {
    this->point_step = _arg;
    return *this;
  }
  Type & set__row_step(
    const uint32_t & _arg)
  {
    this->row_step = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__is_dense(
    const bool & _arg)
  {
    this->is_dense = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator> *;
  using ConstRawPtr =
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sensor_msgs::msg::PointCloud2_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sensor_msgs::msg::PointCloud2_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sensor_msgs::msg::PointCloud2_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sensor_msgs::msg::PointCloud2_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sensor_msgs::msg::PointCloud2_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sensor_msgs::msg::PointCloud2_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sensor_msgs::msg::PointCloud2_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sensor_msgs::msg::PointCloud2_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sensor_msgs__msg__PointCloud2
    std::shared_ptr<sensor_msgs::msg::PointCloud2_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sensor_msgs__msg__PointCloud2
    std::shared_ptr<sensor_msgs::msg::PointCloud2_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointCloud2_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->fields != other.fields) {
      return false;
    }
    if (this->is_bigendian != other.is_bigendian) {
      return false;
    }
    if (this->point_step != other.point_step) {
      return false;
    }
    if (this->row_step != other.row_step) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    if (this->is_dense != other.is_dense) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointCloud2_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointCloud2_

// alias to use template instance with default allocator
using PointCloud2 =
  sensor_msgs::msg::PointCloud2_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__DETAIL__POINT_CLOUD2__STRUCT_HPP_

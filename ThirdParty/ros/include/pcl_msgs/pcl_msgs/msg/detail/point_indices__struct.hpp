// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pcl_msgs:msg/PointIndices.idl
// generated code does not contain a copyright notice

#ifndef PCL_MSGS__MSG__DETAIL__POINT_INDICES__STRUCT_HPP_
#define PCL_MSGS__MSG__DETAIL__POINT_INDICES__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__pcl_msgs__msg__PointIndices __attribute__((deprecated))
#else
# define DEPRECATED__pcl_msgs__msg__PointIndices __declspec(deprecated)
#endif

namespace pcl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PointIndices_
{
  using Type = PointIndices_<ContainerAllocator>;

  explicit PointIndices_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit PointIndices_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _indices_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _indices_type indices;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__indices(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->indices = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pcl_msgs::msg::PointIndices_<ContainerAllocator> *;
  using ConstRawPtr =
    const pcl_msgs::msg::PointIndices_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pcl_msgs::msg::PointIndices_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pcl_msgs::msg::PointIndices_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pcl_msgs::msg::PointIndices_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pcl_msgs::msg::PointIndices_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pcl_msgs::msg::PointIndices_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pcl_msgs::msg::PointIndices_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pcl_msgs::msg::PointIndices_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pcl_msgs::msg::PointIndices_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pcl_msgs__msg__PointIndices
    std::shared_ptr<pcl_msgs::msg::PointIndices_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pcl_msgs__msg__PointIndices
    std::shared_ptr<pcl_msgs::msg::PointIndices_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointIndices_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->indices != other.indices) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointIndices_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointIndices_

// alias to use template instance with default allocator
using PointIndices =
  pcl_msgs::msg::PointIndices_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pcl_msgs

#endif  // PCL_MSGS__MSG__DETAIL__POINT_INDICES__STRUCT_HPP_

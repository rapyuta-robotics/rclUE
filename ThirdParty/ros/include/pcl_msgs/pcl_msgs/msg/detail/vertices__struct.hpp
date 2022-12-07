// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pcl_msgs:msg/Vertices.idl
// generated code does not contain a copyright notice

#ifndef PCL_MSGS__MSG__DETAIL__VERTICES__STRUCT_HPP_
#define PCL_MSGS__MSG__DETAIL__VERTICES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pcl_msgs__msg__Vertices __attribute__((deprecated))
#else
# define DEPRECATED__pcl_msgs__msg__Vertices __declspec(deprecated)
#endif

namespace pcl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Vertices_
{
  using Type = Vertices_<ContainerAllocator>;

  explicit Vertices_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Vertices_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _vertices_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _vertices_type vertices;

  // setters for named parameter idiom
  Type & set__vertices(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->vertices = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pcl_msgs::msg::Vertices_<ContainerAllocator> *;
  using ConstRawPtr =
    const pcl_msgs::msg::Vertices_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pcl_msgs::msg::Vertices_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pcl_msgs::msg::Vertices_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pcl_msgs::msg::Vertices_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pcl_msgs::msg::Vertices_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pcl_msgs::msg::Vertices_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pcl_msgs::msg::Vertices_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pcl_msgs::msg::Vertices_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pcl_msgs::msg::Vertices_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pcl_msgs__msg__Vertices
    std::shared_ptr<pcl_msgs::msg::Vertices_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pcl_msgs__msg__Vertices
    std::shared_ptr<pcl_msgs::msg::Vertices_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Vertices_ & other) const
  {
    if (this->vertices != other.vertices) {
      return false;
    }
    return true;
  }
  bool operator!=(const Vertices_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Vertices_

// alias to use template instance with default allocator
using Vertices =
  pcl_msgs::msg::Vertices_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pcl_msgs

#endif  // PCL_MSGS__MSG__DETAIL__VERTICES__STRUCT_HPP_

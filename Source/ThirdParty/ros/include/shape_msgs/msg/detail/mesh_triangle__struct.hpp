// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from shape_msgs:msg/MeshTriangle.idl
// generated code does not contain a copyright notice

#ifndef SHAPE_MSGS__MSG__DETAIL__MESH_TRIANGLE__STRUCT_HPP_
#define SHAPE_MSGS__MSG__DETAIL__MESH_TRIANGLE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__shape_msgs__msg__MeshTriangle __attribute__((deprecated))
#else
# define DEPRECATED__shape_msgs__msg__MeshTriangle __declspec(deprecated)
#endif

namespace shape_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MeshTriangle_
{
  using Type = MeshTriangle_<ContainerAllocator>;

  explicit MeshTriangle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint32_t, 3>::iterator, uint32_t>(this->vertex_indices.begin(), this->vertex_indices.end(), 0ul);
    }
  }

  explicit MeshTriangle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : vertex_indices(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint32_t, 3>::iterator, uint32_t>(this->vertex_indices.begin(), this->vertex_indices.end(), 0ul);
    }
  }

  // field types and members
  using _vertex_indices_type =
    std::array<uint32_t, 3>;
  _vertex_indices_type vertex_indices;

  // setters for named parameter idiom
  Type & set__vertex_indices(
    const std::array<uint32_t, 3> & _arg)
  {
    this->vertex_indices = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    shape_msgs::msg::MeshTriangle_<ContainerAllocator> *;
  using ConstRawPtr =
    const shape_msgs::msg::MeshTriangle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<shape_msgs::msg::MeshTriangle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<shape_msgs::msg::MeshTriangle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      shape_msgs::msg::MeshTriangle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<shape_msgs::msg::MeshTriangle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      shape_msgs::msg::MeshTriangle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<shape_msgs::msg::MeshTriangle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<shape_msgs::msg::MeshTriangle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<shape_msgs::msg::MeshTriangle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__shape_msgs__msg__MeshTriangle
    std::shared_ptr<shape_msgs::msg::MeshTriangle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__shape_msgs__msg__MeshTriangle
    std::shared_ptr<shape_msgs::msg::MeshTriangle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MeshTriangle_ & other) const
  {
    if (this->vertex_indices != other.vertex_indices) {
      return false;
    }
    return true;
  }
  bool operator!=(const MeshTriangle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MeshTriangle_

// alias to use template instance with default allocator
using MeshTriangle =
  shape_msgs::msg::MeshTriangle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace shape_msgs

#endif  // SHAPE_MSGS__MSG__DETAIL__MESH_TRIANGLE__STRUCT_HPP_

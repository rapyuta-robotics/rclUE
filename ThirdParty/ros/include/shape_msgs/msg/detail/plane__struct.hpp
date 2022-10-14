// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from shape_msgs:msg/Plane.idl
// generated code does not contain a copyright notice

#ifndef SHAPE_MSGS__MSG__DETAIL__PLANE__STRUCT_HPP_
#define SHAPE_MSGS__MSG__DETAIL__PLANE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__shape_msgs__msg__Plane __attribute__((deprecated))
#else
# define DEPRECATED__shape_msgs__msg__Plane __declspec(deprecated)
#endif

namespace shape_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Plane_
{
  using Type = Plane_<ContainerAllocator>;

  explicit Plane_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 4>::iterator, double>(this->coef.begin(), this->coef.end(), 0.0);
    }
  }

  explicit Plane_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : coef(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 4>::iterator, double>(this->coef.begin(), this->coef.end(), 0.0);
    }
  }

  // field types and members
  using _coef_type =
    std::array<double, 4>;
  _coef_type coef;

  // setters for named parameter idiom
  Type & set__coef(
    const std::array<double, 4> & _arg)
  {
    this->coef = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    shape_msgs::msg::Plane_<ContainerAllocator> *;
  using ConstRawPtr =
    const shape_msgs::msg::Plane_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<shape_msgs::msg::Plane_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<shape_msgs::msg::Plane_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      shape_msgs::msg::Plane_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<shape_msgs::msg::Plane_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      shape_msgs::msg::Plane_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<shape_msgs::msg::Plane_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<shape_msgs::msg::Plane_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<shape_msgs::msg::Plane_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__shape_msgs__msg__Plane
    std::shared_ptr<shape_msgs::msg::Plane_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__shape_msgs__msg__Plane
    std::shared_ptr<shape_msgs::msg::Plane_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Plane_ & other) const
  {
    if (this->coef != other.coef) {
      return false;
    }
    return true;
  }
  bool operator!=(const Plane_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Plane_

// alias to use template instance with default allocator
using Plane =
  shape_msgs::msg::Plane_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace shape_msgs

#endif  // SHAPE_MSGS__MSG__DETAIL__PLANE__STRUCT_HPP_

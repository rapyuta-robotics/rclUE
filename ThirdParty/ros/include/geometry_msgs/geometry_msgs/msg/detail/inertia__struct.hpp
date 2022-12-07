// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from geometry_msgs:msg/Inertia.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__INERTIA__STRUCT_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__INERTIA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'com'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__geometry_msgs__msg__Inertia __attribute__((deprecated))
#else
# define DEPRECATED__geometry_msgs__msg__Inertia __declspec(deprecated)
#endif

namespace geometry_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Inertia_
{
  using Type = Inertia_<ContainerAllocator>;

  explicit Inertia_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : com(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->m = 0.0;
      this->ixx = 0.0;
      this->ixy = 0.0;
      this->ixz = 0.0;
      this->iyy = 0.0;
      this->iyz = 0.0;
      this->izz = 0.0;
    }
  }

  explicit Inertia_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : com(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->m = 0.0;
      this->ixx = 0.0;
      this->ixy = 0.0;
      this->ixz = 0.0;
      this->iyy = 0.0;
      this->iyz = 0.0;
      this->izz = 0.0;
    }
  }

  // field types and members
  using _m_type =
    double;
  _m_type m;
  using _com_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _com_type com;
  using _ixx_type =
    double;
  _ixx_type ixx;
  using _ixy_type =
    double;
  _ixy_type ixy;
  using _ixz_type =
    double;
  _ixz_type ixz;
  using _iyy_type =
    double;
  _iyy_type iyy;
  using _iyz_type =
    double;
  _iyz_type iyz;
  using _izz_type =
    double;
  _izz_type izz;

  // setters for named parameter idiom
  Type & set__m(
    const double & _arg)
  {
    this->m = _arg;
    return *this;
  }
  Type & set__com(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->com = _arg;
    return *this;
  }
  Type & set__ixx(
    const double & _arg)
  {
    this->ixx = _arg;
    return *this;
  }
  Type & set__ixy(
    const double & _arg)
  {
    this->ixy = _arg;
    return *this;
  }
  Type & set__ixz(
    const double & _arg)
  {
    this->ixz = _arg;
    return *this;
  }
  Type & set__iyy(
    const double & _arg)
  {
    this->iyy = _arg;
    return *this;
  }
  Type & set__iyz(
    const double & _arg)
  {
    this->iyz = _arg;
    return *this;
  }
  Type & set__izz(
    const double & _arg)
  {
    this->izz = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    geometry_msgs::msg::Inertia_<ContainerAllocator> *;
  using ConstRawPtr =
    const geometry_msgs::msg::Inertia_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<geometry_msgs::msg::Inertia_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<geometry_msgs::msg::Inertia_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      geometry_msgs::msg::Inertia_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<geometry_msgs::msg::Inertia_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      geometry_msgs::msg::Inertia_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<geometry_msgs::msg::Inertia_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<geometry_msgs::msg::Inertia_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<geometry_msgs::msg::Inertia_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__geometry_msgs__msg__Inertia
    std::shared_ptr<geometry_msgs::msg::Inertia_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__geometry_msgs__msg__Inertia
    std::shared_ptr<geometry_msgs::msg::Inertia_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Inertia_ & other) const
  {
    if (this->m != other.m) {
      return false;
    }
    if (this->com != other.com) {
      return false;
    }
    if (this->ixx != other.ixx) {
      return false;
    }
    if (this->ixy != other.ixy) {
      return false;
    }
    if (this->ixz != other.ixz) {
      return false;
    }
    if (this->iyy != other.iyy) {
      return false;
    }
    if (this->iyz != other.iyz) {
      return false;
    }
    if (this->izz != other.izz) {
      return false;
    }
    return true;
  }
  bool operator!=(const Inertia_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Inertia_

// alias to use template instance with default allocator
using Inertia =
  geometry_msgs::msg::Inertia_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__DETAIL__INERTIA__STRUCT_HPP_

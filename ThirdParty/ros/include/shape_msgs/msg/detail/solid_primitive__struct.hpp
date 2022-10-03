// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from shape_msgs:msg/SolidPrimitive.idl
// generated code does not contain a copyright notice

#ifndef SHAPE_MSGS__MSG__DETAIL__SOLID_PRIMITIVE__STRUCT_HPP_
#define SHAPE_MSGS__MSG__DETAIL__SOLID_PRIMITIVE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__shape_msgs__msg__SolidPrimitive __attribute__((deprecated))
#else
# define DEPRECATED__shape_msgs__msg__SolidPrimitive __declspec(deprecated)
#endif

namespace shape_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SolidPrimitive_
{
  using Type = SolidPrimitive_<ContainerAllocator>;

  explicit SolidPrimitive_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  explicit SolidPrimitive_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  // field types and members
  using _type_type =
    uint8_t;
  _type_type type;
  using _dimensions_type =
    rosidl_runtime_cpp::BoundedVector<double, 3, typename ContainerAllocator::template rebind<double>::other>;
  _dimensions_type dimensions;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__dimensions(
    const rosidl_runtime_cpp::BoundedVector<double, 3, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->dimensions = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t BOX =
    1u;
  static constexpr uint8_t SPHERE =
    2u;
  static constexpr uint8_t CYLINDER =
    3u;
  static constexpr uint8_t CONE =
    4u;
  static constexpr uint8_t BOX_X =
    0u;
  static constexpr uint8_t BOX_Y =
    1u;
  static constexpr uint8_t BOX_Z =
    2u;
  static constexpr uint8_t SPHERE_RADIUS =
    0u;
  static constexpr uint8_t CYLINDER_HEIGHT =
    0u;
  static constexpr uint8_t CYLINDER_RADIUS =
    1u;
  static constexpr uint8_t CONE_HEIGHT =
    0u;
  static constexpr uint8_t CONE_RADIUS =
    1u;

  // pointer types
  using RawPtr =
    shape_msgs::msg::SolidPrimitive_<ContainerAllocator> *;
  using ConstRawPtr =
    const shape_msgs::msg::SolidPrimitive_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<shape_msgs::msg::SolidPrimitive_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<shape_msgs::msg::SolidPrimitive_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      shape_msgs::msg::SolidPrimitive_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<shape_msgs::msg::SolidPrimitive_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      shape_msgs::msg::SolidPrimitive_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<shape_msgs::msg::SolidPrimitive_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<shape_msgs::msg::SolidPrimitive_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<shape_msgs::msg::SolidPrimitive_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__shape_msgs__msg__SolidPrimitive
    std::shared_ptr<shape_msgs::msg::SolidPrimitive_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__shape_msgs__msg__SolidPrimitive
    std::shared_ptr<shape_msgs::msg::SolidPrimitive_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SolidPrimitive_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->dimensions != other.dimensions) {
      return false;
    }
    return true;
  }
  bool operator!=(const SolidPrimitive_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SolidPrimitive_

// alias to use template instance with default allocator
using SolidPrimitive =
  shape_msgs::msg::SolidPrimitive_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t SolidPrimitive_<ContainerAllocator>::BOX;
template<typename ContainerAllocator>
constexpr uint8_t SolidPrimitive_<ContainerAllocator>::SPHERE;
template<typename ContainerAllocator>
constexpr uint8_t SolidPrimitive_<ContainerAllocator>::CYLINDER;
template<typename ContainerAllocator>
constexpr uint8_t SolidPrimitive_<ContainerAllocator>::CONE;
template<typename ContainerAllocator>
constexpr uint8_t SolidPrimitive_<ContainerAllocator>::BOX_X;
template<typename ContainerAllocator>
constexpr uint8_t SolidPrimitive_<ContainerAllocator>::BOX_Y;
template<typename ContainerAllocator>
constexpr uint8_t SolidPrimitive_<ContainerAllocator>::BOX_Z;
template<typename ContainerAllocator>
constexpr uint8_t SolidPrimitive_<ContainerAllocator>::SPHERE_RADIUS;
template<typename ContainerAllocator>
constexpr uint8_t SolidPrimitive_<ContainerAllocator>::CYLINDER_HEIGHT;
template<typename ContainerAllocator>
constexpr uint8_t SolidPrimitive_<ContainerAllocator>::CYLINDER_RADIUS;
template<typename ContainerAllocator>
constexpr uint8_t SolidPrimitive_<ContainerAllocator>::CONE_HEIGHT;
template<typename ContainerAllocator>
constexpr uint8_t SolidPrimitive_<ContainerAllocator>::CONE_RADIUS;

}  // namespace msg

}  // namespace shape_msgs

#endif  // SHAPE_MSGS__MSG__DETAIL__SOLID_PRIMITIVE__STRUCT_HPP_

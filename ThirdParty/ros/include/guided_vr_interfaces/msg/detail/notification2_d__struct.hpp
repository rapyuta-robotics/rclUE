// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from guided_vr_interfaces:msg/Notification2D.idl
// generated code does not contain a copyright notice

#ifndef GUIDED_VR_INTERFACES__MSG__DETAIL__NOTIFICATION2_D__STRUCT_HPP_
#define GUIDED_VR_INTERFACES__MSG__DETAIL__NOTIFICATION2_D__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'source'
#include "std_msgs/msg/detail/string__struct.hpp"
// Member 'level'
#include "std_msgs/msg/detail/u_int8__struct.hpp"
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'polygon'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__guided_vr_interfaces__msg__Notification2D __attribute__((deprecated))
#else
# define DEPRECATED__guided_vr_interfaces__msg__Notification2D __declspec(deprecated)
#endif

namespace guided_vr_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Notification2D_
{
  using Type = Notification2D_<ContainerAllocator>;

  explicit Notification2D_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : source(_init),
    level(_init),
    stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
    }
  }

  explicit Notification2D_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : source(_alloc, _init),
    level(_alloc, _init),
    stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
    }
  }

  // field types and members
  using _source_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _source_type source;
  using _level_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _level_type level;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _id_type =
    uint32_t;
  _id_type id;
  using _polygon_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _polygon_type polygon;

  // setters for named parameter idiom
  Type & set__source(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->source = _arg;
    return *this;
  }
  Type & set__level(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->level = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__polygon(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->polygon = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    guided_vr_interfaces::msg::Notification2D_<ContainerAllocator> *;
  using ConstRawPtr =
    const guided_vr_interfaces::msg::Notification2D_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<guided_vr_interfaces::msg::Notification2D_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<guided_vr_interfaces::msg::Notification2D_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      guided_vr_interfaces::msg::Notification2D_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<guided_vr_interfaces::msg::Notification2D_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      guided_vr_interfaces::msg::Notification2D_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<guided_vr_interfaces::msg::Notification2D_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<guided_vr_interfaces::msg::Notification2D_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<guided_vr_interfaces::msg::Notification2D_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__guided_vr_interfaces__msg__Notification2D
    std::shared_ptr<guided_vr_interfaces::msg::Notification2D_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__guided_vr_interfaces__msg__Notification2D
    std::shared_ptr<guided_vr_interfaces::msg::Notification2D_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Notification2D_ & other) const
  {
    if (this->source != other.source) {
      return false;
    }
    if (this->level != other.level) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->polygon != other.polygon) {
      return false;
    }
    return true;
  }
  bool operator!=(const Notification2D_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Notification2D_

// alias to use template instance with default allocator
using Notification2D =
  guided_vr_interfaces::msg::Notification2D_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace guided_vr_interfaces

#endif  // GUIDED_VR_INTERFACES__MSG__DETAIL__NOTIFICATION2_D__STRUCT_HPP_

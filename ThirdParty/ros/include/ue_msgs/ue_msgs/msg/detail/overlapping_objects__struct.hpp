// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ue_msgs:msg/OverlappingObjects.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__OVERLAPPING_OBJECTS__STRUCT_HPP_
#define UE_MSGS__MSG__DETAIL__OVERLAPPING_OBJECTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ue_msgs__msg__OverlappingObjects __attribute__((deprecated))
#else
# define DEPRECATED__ue_msgs__msg__OverlappingObjects __declspec(deprecated)
#endif

namespace ue_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OverlappingObjects_
{
  using Type = OverlappingObjects_<ContainerAllocator>;

  explicit OverlappingObjects_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit OverlappingObjects_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _actors_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _actors_type actors;
  using _components_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _components_type components;

  // setters for named parameter idiom
  Type & set__actors(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->actors = _arg;
    return *this;
  }
  Type & set__components(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->components = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ue_msgs::msg::OverlappingObjects_<ContainerAllocator> *;
  using ConstRawPtr =
    const ue_msgs::msg::OverlappingObjects_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ue_msgs::msg::OverlappingObjects_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ue_msgs::msg::OverlappingObjects_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ue_msgs::msg::OverlappingObjects_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::msg::OverlappingObjects_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ue_msgs::msg::OverlappingObjects_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::msg::OverlappingObjects_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ue_msgs::msg::OverlappingObjects_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ue_msgs::msg::OverlappingObjects_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ue_msgs__msg__OverlappingObjects
    std::shared_ptr<ue_msgs::msg::OverlappingObjects_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ue_msgs__msg__OverlappingObjects
    std::shared_ptr<ue_msgs::msg::OverlappingObjects_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OverlappingObjects_ & other) const
  {
    if (this->actors != other.actors) {
      return false;
    }
    if (this->components != other.components) {
      return false;
    }
    return true;
  }
  bool operator!=(const OverlappingObjects_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OverlappingObjects_

// alias to use template instance with default allocator
using OverlappingObjects =
  ue_msgs::msg::OverlappingObjects_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ue_msgs

#endif  // UE_MSGS__MSG__DETAIL__OVERLAPPING_OBJECTS__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ue_msgs:msg/Overlaps.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__OVERLAPS__STRUCT_HPP_
#define UE_MSGS__MSG__DETAIL__OVERLAPS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'overlaps'
#include "ue_msgs/msg/detail/overlapping_objects__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ue_msgs__msg__Overlaps __attribute__((deprecated))
#else
# define DEPRECATED__ue_msgs__msg__Overlaps __declspec(deprecated)
#endif

namespace ue_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Overlaps_
{
  using Type = Overlaps_<ContainerAllocator>;

  explicit Overlaps_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Overlaps_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _targets_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _targets_type targets;
  using _overlaps_type =
    std::vector<ue_msgs::msg::OverlappingObjects_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ue_msgs::msg::OverlappingObjects_<ContainerAllocator>>>;
  _overlaps_type overlaps;

  // setters for named parameter idiom
  Type & set__targets(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->targets = _arg;
    return *this;
  }
  Type & set__overlaps(
    const std::vector<ue_msgs::msg::OverlappingObjects_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ue_msgs::msg::OverlappingObjects_<ContainerAllocator>>> & _arg)
  {
    this->overlaps = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ue_msgs::msg::Overlaps_<ContainerAllocator> *;
  using ConstRawPtr =
    const ue_msgs::msg::Overlaps_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ue_msgs::msg::Overlaps_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ue_msgs::msg::Overlaps_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ue_msgs::msg::Overlaps_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::msg::Overlaps_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ue_msgs::msg::Overlaps_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::msg::Overlaps_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ue_msgs::msg::Overlaps_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ue_msgs::msg::Overlaps_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ue_msgs__msg__Overlaps
    std::shared_ptr<ue_msgs::msg::Overlaps_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ue_msgs__msg__Overlaps
    std::shared_ptr<ue_msgs::msg::Overlaps_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Overlaps_ & other) const
  {
    if (this->targets != other.targets) {
      return false;
    }
    if (this->overlaps != other.overlaps) {
      return false;
    }
    return true;
  }
  bool operator!=(const Overlaps_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Overlaps_

// alias to use template instance with default allocator
using Overlaps =
  ue_msgs::msg::Overlaps_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ue_msgs

#endif  // UE_MSGS__MSG__DETAIL__OVERLAPS__STRUCT_HPP_

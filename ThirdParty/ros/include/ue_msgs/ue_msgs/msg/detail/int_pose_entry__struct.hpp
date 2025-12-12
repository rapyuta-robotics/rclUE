// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ue_msgs:msg/IntPoseEntry.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__INT_POSE_ENTRY__STRUCT_HPP_
#define UE_MSGS__MSG__DETAIL__INT_POSE_ENTRY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'value'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ue_msgs__msg__IntPoseEntry __attribute__((deprecated))
#else
# define DEPRECATED__ue_msgs__msg__IntPoseEntry __declspec(deprecated)
#endif

namespace ue_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IntPoseEntry_
{
  using Type = IntPoseEntry_<ContainerAllocator>;

  explicit IntPoseEntry_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : value(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->key = 0l;
    }
  }

  explicit IntPoseEntry_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : value(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->key = 0l;
    }
  }

  // field types and members
  using _key_type =
    int32_t;
  _key_type key;
  using _value_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _value_type value;

  // setters for named parameter idiom
  Type & set__key(
    const int32_t & _arg)
  {
    this->key = _arg;
    return *this;
  }
  Type & set__value(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ue_msgs::msg::IntPoseEntry_<ContainerAllocator> *;
  using ConstRawPtr =
    const ue_msgs::msg::IntPoseEntry_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ue_msgs::msg::IntPoseEntry_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ue_msgs::msg::IntPoseEntry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ue_msgs::msg::IntPoseEntry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::msg::IntPoseEntry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ue_msgs::msg::IntPoseEntry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::msg::IntPoseEntry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ue_msgs::msg::IntPoseEntry_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ue_msgs::msg::IntPoseEntry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ue_msgs__msg__IntPoseEntry
    std::shared_ptr<ue_msgs::msg::IntPoseEntry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ue_msgs__msg__IntPoseEntry
    std::shared_ptr<ue_msgs::msg::IntPoseEntry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IntPoseEntry_ & other) const
  {
    if (this->key != other.key) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const IntPoseEntry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IntPoseEntry_

// alias to use template instance with default allocator
using IntPoseEntry =
  ue_msgs::msg::IntPoseEntry_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ue_msgs

#endif  // UE_MSGS__MSG__DETAIL__INT_POSE_ENTRY__STRUCT_HPP_

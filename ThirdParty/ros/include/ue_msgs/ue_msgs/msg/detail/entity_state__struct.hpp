// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ue_msgs:msg/EntityState.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__ENTITY_STATE__STRUCT_HPP_
#define UE_MSGS__MSG__DETAIL__ENTITY_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ue_msgs__msg__EntityState __attribute__((deprecated))
#else
# define DEPRECATED__ue_msgs__msg__EntityState __declspec(deprecated)
#endif

namespace ue_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EntityState_
{
  using Type = EntityState_<ContainerAllocator>;

  explicit EntityState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init),
    twist(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->reference_frame = "";
    }
  }

  explicit EntityState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    pose(_alloc, _init),
    twist(_alloc, _init),
    reference_frame(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->reference_frame = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _twist_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _twist_type twist;
  using _reference_frame_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _reference_frame_type reference_frame;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__twist(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->twist = _arg;
    return *this;
  }
  Type & set__reference_frame(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->reference_frame = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ue_msgs::msg::EntityState_<ContainerAllocator> *;
  using ConstRawPtr =
    const ue_msgs::msg::EntityState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ue_msgs::msg::EntityState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ue_msgs::msg::EntityState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ue_msgs::msg::EntityState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::msg::EntityState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ue_msgs::msg::EntityState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::msg::EntityState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ue_msgs::msg::EntityState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ue_msgs::msg::EntityState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ue_msgs__msg__EntityState
    std::shared_ptr<ue_msgs::msg::EntityState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ue_msgs__msg__EntityState
    std::shared_ptr<ue_msgs::msg::EntityState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EntityState_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->twist != other.twist) {
      return false;
    }
    if (this->reference_frame != other.reference_frame) {
      return false;
    }
    return true;
  }
  bool operator!=(const EntityState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EntityState_

// alias to use template instance with default allocator
using EntityState =
  ue_msgs::msg::EntityState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ue_msgs

#endif  // UE_MSGS__MSG__DETAIL__ENTITY_STATE__STRUCT_HPP_

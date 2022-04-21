// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ue_msgs:msg/SpawnEntityState.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__SPAWN_ENTITY_STATE__STRUCT_HPP_
#define UE_MSGS__MSG__DETAIL__SPAWN_ENTITY_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'state'
#include "ue_msgs/msg/detail/entity_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ue_msgs__msg__SpawnEntityState __attribute__((deprecated))
#else
# define DEPRECATED__ue_msgs__msg__SpawnEntityState __declspec(deprecated)
#endif

namespace ue_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpawnEntityState_
{
  using Type = SpawnEntityState_<ContainerAllocator>;

  explicit SpawnEntityState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->xml = "";
    }
  }

  explicit SpawnEntityState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : xml(_alloc),
    state(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->xml = "";
    }
  }

  // field types and members
  using _xml_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _xml_type xml;
  using _state_type =
    ue_msgs::msg::EntityState_<ContainerAllocator>;
  _state_type state;
  using _tags_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _tags_type tags;

  // setters for named parameter idiom
  Type & set__xml(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->xml = _arg;
    return *this;
  }
  Type & set__state(
    const ue_msgs::msg::EntityState_<ContainerAllocator> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__tags(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->tags = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ue_msgs::msg::SpawnEntityState_<ContainerAllocator> *;
  using ConstRawPtr =
    const ue_msgs::msg::SpawnEntityState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ue_msgs::msg::SpawnEntityState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ue_msgs::msg::SpawnEntityState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ue_msgs::msg::SpawnEntityState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::msg::SpawnEntityState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ue_msgs::msg::SpawnEntityState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::msg::SpawnEntityState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ue_msgs::msg::SpawnEntityState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ue_msgs::msg::SpawnEntityState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ue_msgs__msg__SpawnEntityState
    std::shared_ptr<ue_msgs::msg::SpawnEntityState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ue_msgs__msg__SpawnEntityState
    std::shared_ptr<ue_msgs::msg::SpawnEntityState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpawnEntityState_ & other) const
  {
    if (this->xml != other.xml) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->tags != other.tags) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpawnEntityState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpawnEntityState_

// alias to use template instance with default allocator
using SpawnEntityState =
  ue_msgs::msg::SpawnEntityState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ue_msgs

#endif  // UE_MSGS__MSG__DETAIL__SPAWN_ENTITY_STATE__STRUCT_HPP_

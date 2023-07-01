// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ue_msgs:msg/HitEvent.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__HIT_EVENT__STRUCT_HPP_
#define UE_MSGS__MSG__DETAIL__HIT_EVENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'normal_impluse'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'hit_result'
#include "ue_msgs/msg/detail/hit_result__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ue_msgs__msg__HitEvent __attribute__((deprecated))
#else
# define DEPRECATED__ue_msgs__msg__HitEvent __declspec(deprecated)
#endif

namespace ue_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HitEvent_
{
  using Type = HitEvent_<ContainerAllocator>;

  explicit HitEvent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : normal_impluse(_init),
    hit_result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->self_name = "";
      this->other_actor_name = "";
      this->other_component_name = "";
    }
  }

  explicit HitEvent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : self_name(_alloc),
    other_actor_name(_alloc),
    normal_impluse(_alloc, _init),
    hit_result(_alloc, _init),
    other_component_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->self_name = "";
      this->other_actor_name = "";
      this->other_component_name = "";
    }
  }

  // field types and members
  using _self_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _self_name_type self_name;
  using _other_actor_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _other_actor_name_type other_actor_name;
  using _normal_impluse_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _normal_impluse_type normal_impluse;
  using _hit_result_type =
    ue_msgs::msg::HitResult_<ContainerAllocator>;
  _hit_result_type hit_result;
  using _other_component_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _other_component_name_type other_component_name;

  // setters for named parameter idiom
  Type & set__self_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->self_name = _arg;
    return *this;
  }
  Type & set__other_actor_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->other_actor_name = _arg;
    return *this;
  }
  Type & set__normal_impluse(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->normal_impluse = _arg;
    return *this;
  }
  Type & set__hit_result(
    const ue_msgs::msg::HitResult_<ContainerAllocator> & _arg)
  {
    this->hit_result = _arg;
    return *this;
  }
  Type & set__other_component_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->other_component_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ue_msgs::msg::HitEvent_<ContainerAllocator> *;
  using ConstRawPtr =
    const ue_msgs::msg::HitEvent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ue_msgs::msg::HitEvent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ue_msgs::msg::HitEvent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ue_msgs::msg::HitEvent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::msg::HitEvent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ue_msgs::msg::HitEvent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::msg::HitEvent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ue_msgs::msg::HitEvent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ue_msgs::msg::HitEvent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ue_msgs__msg__HitEvent
    std::shared_ptr<ue_msgs::msg::HitEvent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ue_msgs__msg__HitEvent
    std::shared_ptr<ue_msgs::msg::HitEvent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HitEvent_ & other) const
  {
    if (this->self_name != other.self_name) {
      return false;
    }
    if (this->other_actor_name != other.other_actor_name) {
      return false;
    }
    if (this->normal_impluse != other.normal_impluse) {
      return false;
    }
    if (this->hit_result != other.hit_result) {
      return false;
    }
    if (this->other_component_name != other.other_component_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const HitEvent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HitEvent_

// alias to use template instance with default allocator
using HitEvent =
  ue_msgs::msg::HitEvent_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ue_msgs

#endif  // UE_MSGS__MSG__DETAIL__HIT_EVENT__STRUCT_HPP_

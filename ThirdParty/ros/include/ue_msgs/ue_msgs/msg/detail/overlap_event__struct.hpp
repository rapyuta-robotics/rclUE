// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ue_msgs:msg/OverlapEvent.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__OVERLAP_EVENT__STRUCT_HPP_
#define UE_MSGS__MSG__DETAIL__OVERLAP_EVENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'sweep_result'
#include "ue_msgs/msg/detail/hit_result__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ue_msgs__msg__OverlapEvent __attribute__((deprecated))
#else
# define DEPRECATED__ue_msgs__msg__OverlapEvent __declspec(deprecated)
#endif

namespace ue_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OverlapEvent_
{
  using Type = OverlapEvent_<ContainerAllocator>;

  explicit OverlapEvent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sweep_result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->begin = false;
      this->self_name = "";
      this->other_actor_name = "";
      this->other_component_name = "";
      this->other_body_index = 0l;
      this->from_sweep = false;
    }
  }

  explicit OverlapEvent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : self_name(_alloc),
    other_actor_name(_alloc),
    other_component_name(_alloc),
    sweep_result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->begin = false;
      this->self_name = "";
      this->other_actor_name = "";
      this->other_component_name = "";
      this->other_body_index = 0l;
      this->from_sweep = false;
    }
  }

  // field types and members
  using _begin_type =
    bool;
  _begin_type begin;
  using _self_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _self_name_type self_name;
  using _other_actor_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _other_actor_name_type other_actor_name;
  using _other_component_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _other_component_name_type other_component_name;
  using _other_body_index_type =
    int32_t;
  _other_body_index_type other_body_index;
  using _from_sweep_type =
    bool;
  _from_sweep_type from_sweep;
  using _sweep_result_type =
    ue_msgs::msg::HitResult_<ContainerAllocator>;
  _sweep_result_type sweep_result;

  // setters for named parameter idiom
  Type & set__begin(
    const bool & _arg)
  {
    this->begin = _arg;
    return *this;
  }
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
  Type & set__other_component_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->other_component_name = _arg;
    return *this;
  }
  Type & set__other_body_index(
    const int32_t & _arg)
  {
    this->other_body_index = _arg;
    return *this;
  }
  Type & set__from_sweep(
    const bool & _arg)
  {
    this->from_sweep = _arg;
    return *this;
  }
  Type & set__sweep_result(
    const ue_msgs::msg::HitResult_<ContainerAllocator> & _arg)
  {
    this->sweep_result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ue_msgs::msg::OverlapEvent_<ContainerAllocator> *;
  using ConstRawPtr =
    const ue_msgs::msg::OverlapEvent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ue_msgs::msg::OverlapEvent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ue_msgs::msg::OverlapEvent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ue_msgs::msg::OverlapEvent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::msg::OverlapEvent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ue_msgs::msg::OverlapEvent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::msg::OverlapEvent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ue_msgs::msg::OverlapEvent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ue_msgs::msg::OverlapEvent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ue_msgs__msg__OverlapEvent
    std::shared_ptr<ue_msgs::msg::OverlapEvent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ue_msgs__msg__OverlapEvent
    std::shared_ptr<ue_msgs::msg::OverlapEvent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OverlapEvent_ & other) const
  {
    if (this->begin != other.begin) {
      return false;
    }
    if (this->self_name != other.self_name) {
      return false;
    }
    if (this->other_actor_name != other.other_actor_name) {
      return false;
    }
    if (this->other_component_name != other.other_component_name) {
      return false;
    }
    if (this->other_body_index != other.other_body_index) {
      return false;
    }
    if (this->from_sweep != other.from_sweep) {
      return false;
    }
    if (this->sweep_result != other.sweep_result) {
      return false;
    }
    return true;
  }
  bool operator!=(const OverlapEvent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OverlapEvent_

// alias to use template instance with default allocator
using OverlapEvent =
  ue_msgs::msg::OverlapEvent_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ue_msgs

#endif  // UE_MSGS__MSG__DETAIL__OVERLAP_EVENT__STRUCT_HPP_

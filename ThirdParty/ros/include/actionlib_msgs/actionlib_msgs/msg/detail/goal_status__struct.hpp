// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from actionlib_msgs:msg/GoalStatus.idl
// generated code does not contain a copyright notice

#ifndef ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS__STRUCT_HPP_
#define ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'goal_id'
#include "actionlib_msgs/msg/detail/goal_id__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__actionlib_msgs__msg__GoalStatus __attribute__((deprecated))
#else
# define DEPRECATED__actionlib_msgs__msg__GoalStatus __declspec(deprecated)
#endif

namespace actionlib_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GoalStatus_
{
  using Type = GoalStatus_<ContainerAllocator>;

  explicit GoalStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->text = "";
    }
  }

  explicit GoalStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    text(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->text = "";
    }
  }

  // field types and members
  using _goal_id_type =
    actionlib_msgs::msg::GoalID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _status_type =
    uint8_t;
  _status_type status;
  using _text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _text_type text;

  // setters for named parameter idiom
  Type & set__goal_id(
    const actionlib_msgs::msg::GoalID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->text = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t PENDING =
    0u;
  static constexpr uint8_t ACTIVE =
    1u;
  static constexpr uint8_t PREEMPTED =
    2u;
  static constexpr uint8_t SUCCEEDED =
    3u;
  static constexpr uint8_t ABORTED =
    4u;
  static constexpr uint8_t REJECTED =
    5u;
  static constexpr uint8_t PREEMPTING =
    6u;
  static constexpr uint8_t RECALLING =
    7u;
  static constexpr uint8_t RECALLED =
    8u;
  static constexpr uint8_t LOST =
    9u;

  // pointer types
  using RawPtr =
    actionlib_msgs::msg::GoalStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const actionlib_msgs::msg::GoalStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<actionlib_msgs::msg::GoalStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<actionlib_msgs::msg::GoalStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      actionlib_msgs::msg::GoalStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<actionlib_msgs::msg::GoalStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      actionlib_msgs::msg::GoalStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<actionlib_msgs::msg::GoalStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<actionlib_msgs::msg::GoalStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<actionlib_msgs::msg::GoalStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__actionlib_msgs__msg__GoalStatus
    std::shared_ptr<actionlib_msgs::msg::GoalStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__actionlib_msgs__msg__GoalStatus
    std::shared_ptr<actionlib_msgs::msg::GoalStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoalStatus_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->text != other.text) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoalStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoalStatus_

// alias to use template instance with default allocator
using GoalStatus =
  actionlib_msgs::msg::GoalStatus_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t GoalStatus_<ContainerAllocator>::PENDING;
template<typename ContainerAllocator>
constexpr uint8_t GoalStatus_<ContainerAllocator>::ACTIVE;
template<typename ContainerAllocator>
constexpr uint8_t GoalStatus_<ContainerAllocator>::PREEMPTED;
template<typename ContainerAllocator>
constexpr uint8_t GoalStatus_<ContainerAllocator>::SUCCEEDED;
template<typename ContainerAllocator>
constexpr uint8_t GoalStatus_<ContainerAllocator>::ABORTED;
template<typename ContainerAllocator>
constexpr uint8_t GoalStatus_<ContainerAllocator>::REJECTED;
template<typename ContainerAllocator>
constexpr uint8_t GoalStatus_<ContainerAllocator>::PREEMPTING;
template<typename ContainerAllocator>
constexpr uint8_t GoalStatus_<ContainerAllocator>::RECALLING;
template<typename ContainerAllocator>
constexpr uint8_t GoalStatus_<ContainerAllocator>::RECALLED;
template<typename ContainerAllocator>
constexpr uint8_t GoalStatus_<ContainerAllocator>::LOST;

}  // namespace msg

}  // namespace actionlib_msgs

#endif  // ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS__STRUCT_HPP_

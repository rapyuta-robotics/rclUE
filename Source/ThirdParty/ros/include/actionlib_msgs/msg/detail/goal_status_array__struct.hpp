// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from actionlib_msgs:msg/GoalStatusArray.idl
// generated code does not contain a copyright notice

#ifndef ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS_ARRAY__STRUCT_HPP_
#define ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS_ARRAY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'status_list'
#include "actionlib_msgs/msg/detail/goal_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__actionlib_msgs__msg__GoalStatusArray __attribute__((deprecated))
#else
# define DEPRECATED__actionlib_msgs__msg__GoalStatusArray __declspec(deprecated)
#endif

namespace actionlib_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GoalStatusArray_
{
  using Type = GoalStatusArray_<ContainerAllocator>;

  explicit GoalStatusArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit GoalStatusArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _status_list_type =
    std::vector<actionlib_msgs::msg::GoalStatus_<ContainerAllocator>, typename ContainerAllocator::template rebind<actionlib_msgs::msg::GoalStatus_<ContainerAllocator>>::other>;
  _status_list_type status_list;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__status_list(
    const std::vector<actionlib_msgs::msg::GoalStatus_<ContainerAllocator>, typename ContainerAllocator::template rebind<actionlib_msgs::msg::GoalStatus_<ContainerAllocator>>::other> & _arg)
  {
    this->status_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    actionlib_msgs::msg::GoalStatusArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const actionlib_msgs::msg::GoalStatusArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<actionlib_msgs::msg::GoalStatusArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<actionlib_msgs::msg::GoalStatusArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      actionlib_msgs::msg::GoalStatusArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<actionlib_msgs::msg::GoalStatusArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      actionlib_msgs::msg::GoalStatusArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<actionlib_msgs::msg::GoalStatusArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<actionlib_msgs::msg::GoalStatusArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<actionlib_msgs::msg::GoalStatusArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__actionlib_msgs__msg__GoalStatusArray
    std::shared_ptr<actionlib_msgs::msg::GoalStatusArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__actionlib_msgs__msg__GoalStatusArray
    std::shared_ptr<actionlib_msgs::msg::GoalStatusArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoalStatusArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->status_list != other.status_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoalStatusArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoalStatusArray_

// alias to use template instance with default allocator
using GoalStatusArray =
  actionlib_msgs::msg::GoalStatusArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace actionlib_msgs

#endif  // ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS_ARRAY__STRUCT_HPP_

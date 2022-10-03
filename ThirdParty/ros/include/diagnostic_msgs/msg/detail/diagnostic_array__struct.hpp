// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from diagnostic_msgs:msg/DiagnosticArray.idl
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__MSG__DETAIL__DIAGNOSTIC_ARRAY__STRUCT_HPP_
#define DIAGNOSTIC_MSGS__MSG__DETAIL__DIAGNOSTIC_ARRAY__STRUCT_HPP_

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
// Member 'status'
#include "diagnostic_msgs/msg/detail/diagnostic_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__diagnostic_msgs__msg__DiagnosticArray __attribute__((deprecated))
#else
# define DEPRECATED__diagnostic_msgs__msg__DiagnosticArray __declspec(deprecated)
#endif

namespace diagnostic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DiagnosticArray_
{
  using Type = DiagnosticArray_<ContainerAllocator>;

  explicit DiagnosticArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit DiagnosticArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _status_type =
    std::vector<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>, typename ContainerAllocator::template rebind<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>>::other>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__status(
    const std::vector<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>, typename ContainerAllocator::template rebind<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>>::other> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    diagnostic_msgs::msg::DiagnosticArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const diagnostic_msgs::msg::DiagnosticArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<diagnostic_msgs::msg::DiagnosticArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<diagnostic_msgs::msg::DiagnosticArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      diagnostic_msgs::msg::DiagnosticArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<diagnostic_msgs::msg::DiagnosticArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      diagnostic_msgs::msg::DiagnosticArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<diagnostic_msgs::msg::DiagnosticArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<diagnostic_msgs::msg::DiagnosticArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<diagnostic_msgs::msg::DiagnosticArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__diagnostic_msgs__msg__DiagnosticArray
    std::shared_ptr<diagnostic_msgs::msg::DiagnosticArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__diagnostic_msgs__msg__DiagnosticArray
    std::shared_ptr<diagnostic_msgs::msg::DiagnosticArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DiagnosticArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const DiagnosticArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DiagnosticArray_

// alias to use template instance with default allocator
using DiagnosticArray =
  diagnostic_msgs::msg::DiagnosticArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace diagnostic_msgs

#endif  // DIAGNOSTIC_MSGS__MSG__DETAIL__DIAGNOSTIC_ARRAY__STRUCT_HPP_

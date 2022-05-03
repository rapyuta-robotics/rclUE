// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rcl_interfaces:msg/FloatingPointRange.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__MSG__DETAIL__FLOATING_POINT_RANGE__STRUCT_HPP_
#define RCL_INTERFACES__MSG__DETAIL__FLOATING_POINT_RANGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__rcl_interfaces__msg__FloatingPointRange __attribute__((deprecated))
#else
# define DEPRECATED__rcl_interfaces__msg__FloatingPointRange __declspec(deprecated)
#endif

namespace rcl_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FloatingPointRange_
{
  using Type = FloatingPointRange_<ContainerAllocator>;

  explicit FloatingPointRange_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->from_value = 0.0;
      this->to_value = 0.0;
      this->step = 0.0;
    }
  }

  explicit FloatingPointRange_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->from_value = 0.0;
      this->to_value = 0.0;
      this->step = 0.0;
    }
  }

  // field types and members
  using _from_value_type =
    double;
  _from_value_type from_value;
  using _to_value_type =
    double;
  _to_value_type to_value;
  using _step_type =
    double;
  _step_type step;

  // setters for named parameter idiom
  Type & set__from_value(
    const double & _arg)
  {
    this->from_value = _arg;
    return *this;
  }
  Type & set__to_value(
    const double & _arg)
  {
    this->to_value = _arg;
    return *this;
  }
  Type & set__step(
    const double & _arg)
  {
    this->step = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rcl_interfaces::msg::FloatingPointRange_<ContainerAllocator> *;
  using ConstRawPtr =
    const rcl_interfaces::msg::FloatingPointRange_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rcl_interfaces::msg::FloatingPointRange_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rcl_interfaces::msg::FloatingPointRange_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rcl_interfaces::msg::FloatingPointRange_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rcl_interfaces::msg::FloatingPointRange_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rcl_interfaces::msg::FloatingPointRange_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rcl_interfaces::msg::FloatingPointRange_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rcl_interfaces::msg::FloatingPointRange_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rcl_interfaces::msg::FloatingPointRange_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rcl_interfaces__msg__FloatingPointRange
    std::shared_ptr<rcl_interfaces::msg::FloatingPointRange_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rcl_interfaces__msg__FloatingPointRange
    std::shared_ptr<rcl_interfaces::msg::FloatingPointRange_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FloatingPointRange_ & other) const
  {
    if (this->from_value != other.from_value) {
      return false;
    }
    if (this->to_value != other.to_value) {
      return false;
    }
    if (this->step != other.step) {
      return false;
    }
    return true;
  }
  bool operator!=(const FloatingPointRange_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FloatingPointRange_

// alias to use template instance with default allocator
using FloatingPointRange =
  rcl_interfaces::msg::FloatingPointRange_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rcl_interfaces

#endif  // RCL_INTERFACES__MSG__DETAIL__FLOATING_POINT_RANGE__STRUCT_HPP_

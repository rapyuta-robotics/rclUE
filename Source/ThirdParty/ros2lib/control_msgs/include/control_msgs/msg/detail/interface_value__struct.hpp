// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from control_msgs:msg/InterfaceValue.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__INTERFACE_VALUE__STRUCT_HPP_
#define CONTROL_MSGS__MSG__DETAIL__INTERFACE_VALUE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__control_msgs__msg__InterfaceValue __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__msg__InterfaceValue __declspec(deprecated)
#endif

namespace control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InterfaceValue_
{
  using Type = InterfaceValue_<ContainerAllocator>;

  explicit InterfaceValue_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit InterfaceValue_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _interface_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _interface_names_type interface_names;
  using _values_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _values_type values;

  // setters for named parameter idiom
  Type & set__interface_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->interface_names = _arg;
    return *this;
  }
  Type & set__values(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->values = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_msgs::msg::InterfaceValue_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::msg::InterfaceValue_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::msg::InterfaceValue_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::msg::InterfaceValue_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::InterfaceValue_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::InterfaceValue_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::InterfaceValue_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::InterfaceValue_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::msg::InterfaceValue_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::msg::InterfaceValue_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__msg__InterfaceValue
    std::shared_ptr<control_msgs::msg::InterfaceValue_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__msg__InterfaceValue
    std::shared_ptr<control_msgs::msg::InterfaceValue_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InterfaceValue_ & other) const
  {
    if (this->interface_names != other.interface_names) {
      return false;
    }
    if (this->values != other.values) {
      return false;
    }
    return true;
  }
  bool operator!=(const InterfaceValue_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InterfaceValue_

// alias to use template instance with default allocator
using InterfaceValue =
  control_msgs::msg::InterfaceValue_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__INTERFACE_VALUE__STRUCT_HPP_

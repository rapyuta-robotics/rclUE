// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from example_interfaces:msg/WString.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__W_STRING__STRUCT_HPP_
#define EXAMPLE_INTERFACES__MSG__DETAIL__W_STRING__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__example_interfaces__msg__WString __attribute__((deprecated))
#else
# define DEPRECATED__example_interfaces__msg__WString __declspec(deprecated)
#endif

namespace example_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WString_
{
  using Type = WString_<ContainerAllocator>;

  explicit WString_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = u"";
    }
  }

  explicit WString_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = u"";
    }
  }

  // field types and members
  using _data_type =
    std::basic_string<char16_t, std::char_traits<char16_t>, typename ContainerAllocator::template rebind<char16_t>::other>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std::basic_string<char16_t, std::char_traits<char16_t>, typename ContainerAllocator::template rebind<char16_t>::other> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    example_interfaces::msg::WString_<ContainerAllocator> *;
  using ConstRawPtr =
    const example_interfaces::msg::WString_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<example_interfaces::msg::WString_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<example_interfaces::msg::WString_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      example_interfaces::msg::WString_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::msg::WString_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      example_interfaces::msg::WString_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::msg::WString_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<example_interfaces::msg::WString_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<example_interfaces::msg::WString_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__example_interfaces__msg__WString
    std::shared_ptr<example_interfaces::msg::WString_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__example_interfaces__msg__WString
    std::shared_ptr<example_interfaces::msg::WString_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WString_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const WString_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WString_

// alias to use template instance with default allocator
using WString =
  example_interfaces::msg::WString_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace example_interfaces

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__W_STRING__STRUCT_HPP_

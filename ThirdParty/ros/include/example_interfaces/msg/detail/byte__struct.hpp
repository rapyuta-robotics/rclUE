// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from example_interfaces:msg/Byte.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__BYTE__STRUCT_HPP_
#define EXAMPLE_INTERFACES__MSG__DETAIL__BYTE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__example_interfaces__msg__Byte __attribute__((deprecated))
#else
# define DEPRECATED__example_interfaces__msg__Byte __declspec(deprecated)
#endif

namespace example_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Byte_
{
  using Type = Byte_<ContainerAllocator>;

  explicit Byte_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = 0;
    }
  }

  explicit Byte_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = 0;
    }
  }

  // field types and members
  using _data_type =
    unsigned char;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const unsigned char & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    example_interfaces::msg::Byte_<ContainerAllocator> *;
  using ConstRawPtr =
    const example_interfaces::msg::Byte_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<example_interfaces::msg::Byte_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<example_interfaces::msg::Byte_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      example_interfaces::msg::Byte_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::msg::Byte_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      example_interfaces::msg::Byte_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::msg::Byte_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<example_interfaces::msg::Byte_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<example_interfaces::msg::Byte_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__example_interfaces__msg__Byte
    std::shared_ptr<example_interfaces::msg::Byte_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__example_interfaces__msg__Byte
    std::shared_ptr<example_interfaces::msg::Byte_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Byte_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Byte_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Byte_

// alias to use template instance with default allocator
using Byte =
  example_interfaces::msg::Byte_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace example_interfaces

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__BYTE__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from example_interfaces:msg/MultiArrayLayout.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__MULTI_ARRAY_LAYOUT__STRUCT_HPP_
#define EXAMPLE_INTERFACES__MSG__DETAIL__MULTI_ARRAY_LAYOUT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'dim'
#include "example_interfaces/msg/detail/multi_array_dimension__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__example_interfaces__msg__MultiArrayLayout __attribute__((deprecated))
#else
# define DEPRECATED__example_interfaces__msg__MultiArrayLayout __declspec(deprecated)
#endif

namespace example_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MultiArrayLayout_
{
  using Type = MultiArrayLayout_<ContainerAllocator>;

  explicit MultiArrayLayout_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data_offset = 0ul;
    }
  }

  explicit MultiArrayLayout_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data_offset = 0ul;
    }
  }

  // field types and members
  using _dim_type =
    std::vector<example_interfaces::msg::MultiArrayDimension_<ContainerAllocator>, typename ContainerAllocator::template rebind<example_interfaces::msg::MultiArrayDimension_<ContainerAllocator>>::other>;
  _dim_type dim;
  using _data_offset_type =
    uint32_t;
  _data_offset_type data_offset;

  // setters for named parameter idiom
  Type & set__dim(
    const std::vector<example_interfaces::msg::MultiArrayDimension_<ContainerAllocator>, typename ContainerAllocator::template rebind<example_interfaces::msg::MultiArrayDimension_<ContainerAllocator>>::other> & _arg)
  {
    this->dim = _arg;
    return *this;
  }
  Type & set__data_offset(
    const uint32_t & _arg)
  {
    this->data_offset = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    example_interfaces::msg::MultiArrayLayout_<ContainerAllocator> *;
  using ConstRawPtr =
    const example_interfaces::msg::MultiArrayLayout_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<example_interfaces::msg::MultiArrayLayout_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<example_interfaces::msg::MultiArrayLayout_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      example_interfaces::msg::MultiArrayLayout_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::msg::MultiArrayLayout_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      example_interfaces::msg::MultiArrayLayout_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::msg::MultiArrayLayout_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<example_interfaces::msg::MultiArrayLayout_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<example_interfaces::msg::MultiArrayLayout_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__example_interfaces__msg__MultiArrayLayout
    std::shared_ptr<example_interfaces::msg::MultiArrayLayout_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__example_interfaces__msg__MultiArrayLayout
    std::shared_ptr<example_interfaces::msg::MultiArrayLayout_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MultiArrayLayout_ & other) const
  {
    if (this->dim != other.dim) {
      return false;
    }
    if (this->data_offset != other.data_offset) {
      return false;
    }
    return true;
  }
  bool operator!=(const MultiArrayLayout_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MultiArrayLayout_

// alias to use template instance with default allocator
using MultiArrayLayout =
  example_interfaces::msg::MultiArrayLayout_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace example_interfaces

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__MULTI_ARRAY_LAYOUT__STRUCT_HPP_

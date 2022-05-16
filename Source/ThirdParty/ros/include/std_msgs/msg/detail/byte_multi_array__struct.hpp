// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from std_msgs:msg/ByteMultiArray.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__BYTE_MULTI_ARRAY__STRUCT_HPP_
#define STD_MSGS__MSG__DETAIL__BYTE_MULTI_ARRAY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'layout'
#include "std_msgs/msg/detail/multi_array_layout__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__std_msgs__msg__ByteMultiArray __attribute__((deprecated))
#else
# define DEPRECATED__std_msgs__msg__ByteMultiArray __declspec(deprecated)
#endif

namespace std_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ByteMultiArray_
{
  using Type = ByteMultiArray_<ContainerAllocator>;

  explicit ByteMultiArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : layout(_init)
  {
    (void)_init;
  }

  explicit ByteMultiArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : layout(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _layout_type =
    std_msgs::msg::MultiArrayLayout_<ContainerAllocator>;
  _layout_type layout;
  using _data_type =
    std::vector<unsigned char, typename ContainerAllocator::template rebind<unsigned char>::other>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__layout(
    const std_msgs::msg::MultiArrayLayout_<ContainerAllocator> & _arg)
  {
    this->layout = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<unsigned char, typename ContainerAllocator::template rebind<unsigned char>::other> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    std_msgs::msg::ByteMultiArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const std_msgs::msg::ByteMultiArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<std_msgs::msg::ByteMultiArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<std_msgs::msg::ByteMultiArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      std_msgs::msg::ByteMultiArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<std_msgs::msg::ByteMultiArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      std_msgs::msg::ByteMultiArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<std_msgs::msg::ByteMultiArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<std_msgs::msg::ByteMultiArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<std_msgs::msg::ByteMultiArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__std_msgs__msg__ByteMultiArray
    std::shared_ptr<std_msgs::msg::ByteMultiArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__std_msgs__msg__ByteMultiArray
    std::shared_ptr<std_msgs::msg::ByteMultiArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ByteMultiArray_ & other) const
  {
    if (this->layout != other.layout) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const ByteMultiArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ByteMultiArray_

// alias to use template instance with default allocator
using ByteMultiArray =
  std_msgs::msg::ByteMultiArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace std_msgs

#endif  // STD_MSGS__MSG__DETAIL__BYTE_MULTI_ARRAY__STRUCT_HPP_

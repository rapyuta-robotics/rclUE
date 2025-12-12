// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from simulation_interfaces:msg/TagsFilter.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__TAGS_FILTER__STRUCT_HPP_
#define SIMULATION_INTERFACES__MSG__DETAIL__TAGS_FILTER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__simulation_interfaces__msg__TagsFilter __attribute__((deprecated))
#else
# define DEPRECATED__simulation_interfaces__msg__TagsFilter __declspec(deprecated)
#endif

namespace simulation_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TagsFilter_
{
  using Type = TagsFilter_<ContainerAllocator>;

  explicit TagsFilter_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filter_mode = 0;
    }
  }

  explicit TagsFilter_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filter_mode = 0;
    }
  }

  // field types and members
  using _tags_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _tags_type tags;
  using _filter_mode_type =
    uint8_t;
  _filter_mode_type filter_mode;

  // setters for named parameter idiom
  Type & set__tags(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->tags = _arg;
    return *this;
  }
  Type & set__filter_mode(
    const uint8_t & _arg)
  {
    this->filter_mode = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t FILTER_MODE_ANY =
    0u;
  static constexpr uint8_t FILTER_MODE_ALL =
    1u;

  // pointer types
  using RawPtr =
    simulation_interfaces::msg::TagsFilter_<ContainerAllocator> *;
  using ConstRawPtr =
    const simulation_interfaces::msg::TagsFilter_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simulation_interfaces::msg::TagsFilter_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simulation_interfaces::msg::TagsFilter_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::msg::TagsFilter_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::msg::TagsFilter_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::msg::TagsFilter_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::msg::TagsFilter_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simulation_interfaces::msg::TagsFilter_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simulation_interfaces::msg::TagsFilter_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simulation_interfaces__msg__TagsFilter
    std::shared_ptr<simulation_interfaces::msg::TagsFilter_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simulation_interfaces__msg__TagsFilter
    std::shared_ptr<simulation_interfaces::msg::TagsFilter_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TagsFilter_ & other) const
  {
    if (this->tags != other.tags) {
      return false;
    }
    if (this->filter_mode != other.filter_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const TagsFilter_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TagsFilter_

// alias to use template instance with default allocator
using TagsFilter =
  simulation_interfaces::msg::TagsFilter_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TagsFilter_<ContainerAllocator>::FILTER_MODE_ANY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TagsFilter_<ContainerAllocator>::FILTER_MODE_ALL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__TAGS_FILTER__STRUCT_HPP_

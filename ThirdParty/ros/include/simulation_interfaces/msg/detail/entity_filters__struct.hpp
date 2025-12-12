// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from simulation_interfaces:msg/EntityFilters.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_FILTERS__STRUCT_HPP_
#define SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_FILTERS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'categories'
#include "simulation_interfaces/msg/detail/entity_category__struct.hpp"
// Member 'tags'
#include "simulation_interfaces/msg/detail/tags_filter__struct.hpp"
// Member 'bounds'
#include "simulation_interfaces/msg/detail/bounds__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__simulation_interfaces__msg__EntityFilters __attribute__((deprecated))
#else
# define DEPRECATED__simulation_interfaces__msg__EntityFilters __declspec(deprecated)
#endif

namespace simulation_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EntityFilters_
{
  using Type = EntityFilters_<ContainerAllocator>;

  explicit EntityFilters_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tags(_init),
    bounds(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filter = "";
    }
  }

  explicit EntityFilters_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : filter(_alloc),
    tags(_alloc, _init),
    bounds(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filter = "";
    }
  }

  // field types and members
  using _filter_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _filter_type filter;
  using _categories_type =
    std::vector<simulation_interfaces::msg::EntityCategory_<ContainerAllocator>, typename ContainerAllocator::template rebind<simulation_interfaces::msg::EntityCategory_<ContainerAllocator>>::other>;
  _categories_type categories;
  using _tags_type =
    simulation_interfaces::msg::TagsFilter_<ContainerAllocator>;
  _tags_type tags;
  using _bounds_type =
    simulation_interfaces::msg::Bounds_<ContainerAllocator>;
  _bounds_type bounds;

  // setters for named parameter idiom
  Type & set__filter(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->filter = _arg;
    return *this;
  }
  Type & set__categories(
    const std::vector<simulation_interfaces::msg::EntityCategory_<ContainerAllocator>, typename ContainerAllocator::template rebind<simulation_interfaces::msg::EntityCategory_<ContainerAllocator>>::other> & _arg)
  {
    this->categories = _arg;
    return *this;
  }
  Type & set__tags(
    const simulation_interfaces::msg::TagsFilter_<ContainerAllocator> & _arg)
  {
    this->tags = _arg;
    return *this;
  }
  Type & set__bounds(
    const simulation_interfaces::msg::Bounds_<ContainerAllocator> & _arg)
  {
    this->bounds = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simulation_interfaces::msg::EntityFilters_<ContainerAllocator> *;
  using ConstRawPtr =
    const simulation_interfaces::msg::EntityFilters_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simulation_interfaces::msg::EntityFilters_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simulation_interfaces::msg::EntityFilters_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::msg::EntityFilters_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::msg::EntityFilters_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::msg::EntityFilters_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::msg::EntityFilters_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simulation_interfaces::msg::EntityFilters_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simulation_interfaces::msg::EntityFilters_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simulation_interfaces__msg__EntityFilters
    std::shared_ptr<simulation_interfaces::msg::EntityFilters_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simulation_interfaces__msg__EntityFilters
    std::shared_ptr<simulation_interfaces::msg::EntityFilters_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EntityFilters_ & other) const
  {
    if (this->filter != other.filter) {
      return false;
    }
    if (this->categories != other.categories) {
      return false;
    }
    if (this->tags != other.tags) {
      return false;
    }
    if (this->bounds != other.bounds) {
      return false;
    }
    return true;
  }
  bool operator!=(const EntityFilters_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EntityFilters_

// alias to use template instance with default allocator
using EntityFilters =
  simulation_interfaces::msg::EntityFilters_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_FILTERS__STRUCT_HPP_

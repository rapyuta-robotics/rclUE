// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from simulation_interfaces:msg/EntityInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "simulation_interfaces/msg/entity_info.hpp"


#ifndef SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_INFO__STRUCT_HPP_
#define SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'category'
#include "simulation_interfaces/msg/detail/entity_category__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__simulation_interfaces__msg__EntityInfo __attribute__((deprecated))
#else
# define DEPRECATED__simulation_interfaces__msg__EntityInfo __declspec(deprecated)
#endif

namespace simulation_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EntityInfo_
{
  using Type = EntityInfo_<ContainerAllocator>;

  explicit EntityInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : category(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->description = "";
    }
  }

  explicit EntityInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : category(_alloc, _init),
    description(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->description = "";
    }
  }

  // field types and members
  using _category_type =
    simulation_interfaces::msg::EntityCategory_<ContainerAllocator>;
  _category_type category;
  using _description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _description_type description;
  using _tags_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _tags_type tags;

  // setters for named parameter idiom
  Type & set__category(
    const simulation_interfaces::msg::EntityCategory_<ContainerAllocator> & _arg)
  {
    this->category = _arg;
    return *this;
  }
  Type & set__description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->description = _arg;
    return *this;
  }
  Type & set__tags(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->tags = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simulation_interfaces::msg::EntityInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const simulation_interfaces::msg::EntityInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simulation_interfaces::msg::EntityInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simulation_interfaces::msg::EntityInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::msg::EntityInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::msg::EntityInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::msg::EntityInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::msg::EntityInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simulation_interfaces::msg::EntityInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simulation_interfaces::msg::EntityInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simulation_interfaces__msg__EntityInfo
    std::shared_ptr<simulation_interfaces::msg::EntityInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simulation_interfaces__msg__EntityInfo
    std::shared_ptr<simulation_interfaces::msg::EntityInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EntityInfo_ & other) const
  {
    if (this->category != other.category) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    if (this->tags != other.tags) {
      return false;
    }
    return true;
  }
  bool operator!=(const EntityInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EntityInfo_

// alias to use template instance with default allocator
using EntityInfo =
  simulation_interfaces::msg::EntityInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_INFO__STRUCT_HPP_

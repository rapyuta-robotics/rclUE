// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from simulation_interfaces:msg/Spawnable.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "simulation_interfaces/msg/spawnable.hpp"


#ifndef SIMULATION_INTERFACES__MSG__DETAIL__SPAWNABLE__STRUCT_HPP_
#define SIMULATION_INTERFACES__MSG__DETAIL__SPAWNABLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'entity_resource'
#include "simulation_interfaces/msg/detail/resource__struct.hpp"
// Member 'spawn_bounds'
#include "simulation_interfaces/msg/detail/bounds__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__simulation_interfaces__msg__Spawnable __attribute__((deprecated))
#else
# define DEPRECATED__simulation_interfaces__msg__Spawnable __declspec(deprecated)
#endif

namespace simulation_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Spawnable_
{
  using Type = Spawnable_<ContainerAllocator>;

  explicit Spawnable_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : entity_resource(_init),
    spawn_bounds(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->description = "";
    }
  }

  explicit Spawnable_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : entity_resource(_alloc, _init),
    description(_alloc),
    spawn_bounds(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->description = "";
    }
  }

  // field types and members
  using _entity_resource_type =
    simulation_interfaces::msg::Resource_<ContainerAllocator>;
  _entity_resource_type entity_resource;
  using _description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _description_type description;
  using _spawn_bounds_type =
    simulation_interfaces::msg::Bounds_<ContainerAllocator>;
  _spawn_bounds_type spawn_bounds;

  // setters for named parameter idiom
  Type & set__entity_resource(
    const simulation_interfaces::msg::Resource_<ContainerAllocator> & _arg)
  {
    this->entity_resource = _arg;
    return *this;
  }
  Type & set__description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->description = _arg;
    return *this;
  }
  Type & set__spawn_bounds(
    const simulation_interfaces::msg::Bounds_<ContainerAllocator> & _arg)
  {
    this->spawn_bounds = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simulation_interfaces::msg::Spawnable_<ContainerAllocator> *;
  using ConstRawPtr =
    const simulation_interfaces::msg::Spawnable_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simulation_interfaces::msg::Spawnable_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simulation_interfaces::msg::Spawnable_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::msg::Spawnable_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::msg::Spawnable_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::msg::Spawnable_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::msg::Spawnable_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simulation_interfaces::msg::Spawnable_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simulation_interfaces::msg::Spawnable_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simulation_interfaces__msg__Spawnable
    std::shared_ptr<simulation_interfaces::msg::Spawnable_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simulation_interfaces__msg__Spawnable
    std::shared_ptr<simulation_interfaces::msg::Spawnable_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Spawnable_ & other) const
  {
    if (this->entity_resource != other.entity_resource) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    if (this->spawn_bounds != other.spawn_bounds) {
      return false;
    }
    return true;
  }
  bool operator!=(const Spawnable_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Spawnable_

// alias to use template instance with default allocator
using Spawnable =
  simulation_interfaces::msg::Spawnable_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__SPAWNABLE__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from simulation_interfaces:msg/WorldResource.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "simulation_interfaces/msg/world_resource.hpp"


#ifndef SIMULATION_INTERFACES__MSG__DETAIL__WORLD_RESOURCE__STRUCT_HPP_
#define SIMULATION_INTERFACES__MSG__DETAIL__WORLD_RESOURCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'world_resource'
#include "simulation_interfaces/msg/detail/resource__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__simulation_interfaces__msg__WorldResource __attribute__((deprecated))
#else
# define DEPRECATED__simulation_interfaces__msg__WorldResource __declspec(deprecated)
#endif

namespace simulation_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WorldResource_
{
  using Type = WorldResource_<ContainerAllocator>;

  explicit WorldResource_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : world_resource(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->description = "";
    }
  }

  explicit WorldResource_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    world_resource(_alloc, _init),
    description(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->description = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _world_resource_type =
    simulation_interfaces::msg::Resource_<ContainerAllocator>;
  _world_resource_type world_resource;
  using _description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _description_type description;
  using _tags_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _tags_type tags;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__world_resource(
    const simulation_interfaces::msg::Resource_<ContainerAllocator> & _arg)
  {
    this->world_resource = _arg;
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
    simulation_interfaces::msg::WorldResource_<ContainerAllocator> *;
  using ConstRawPtr =
    const simulation_interfaces::msg::WorldResource_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simulation_interfaces::msg::WorldResource_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simulation_interfaces::msg::WorldResource_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::msg::WorldResource_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::msg::WorldResource_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::msg::WorldResource_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::msg::WorldResource_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simulation_interfaces::msg::WorldResource_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simulation_interfaces::msg::WorldResource_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simulation_interfaces__msg__WorldResource
    std::shared_ptr<simulation_interfaces::msg::WorldResource_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simulation_interfaces__msg__WorldResource
    std::shared_ptr<simulation_interfaces::msg::WorldResource_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WorldResource_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->world_resource != other.world_resource) {
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
  bool operator!=(const WorldResource_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WorldResource_

// alias to use template instance with default allocator
using WorldResource =
  simulation_interfaces::msg::WorldResource_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__WORLD_RESOURCE__STRUCT_HPP_

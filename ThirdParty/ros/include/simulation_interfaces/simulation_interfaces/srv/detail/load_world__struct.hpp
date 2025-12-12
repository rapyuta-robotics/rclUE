// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from simulation_interfaces:srv/LoadWorld.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__LOAD_WORLD__STRUCT_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__LOAD_WORLD__STRUCT_HPP_

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
# define DEPRECATED__simulation_interfaces__srv__LoadWorld_Request __attribute__((deprecated))
#else
# define DEPRECATED__simulation_interfaces__srv__LoadWorld_Request __declspec(deprecated)
#endif

namespace simulation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LoadWorld_Request_
{
  using Type = LoadWorld_Request_<ContainerAllocator>;

  explicit LoadWorld_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : world_resource(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fail_on_unsupported_element = false;
      this->ignore_missing_or_unsupported_assets = false;
    }
  }

  explicit LoadWorld_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : world_resource(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fail_on_unsupported_element = false;
      this->ignore_missing_or_unsupported_assets = false;
    }
  }

  // field types and members
  using _world_resource_type =
    simulation_interfaces::msg::Resource_<ContainerAllocator>;
  _world_resource_type world_resource;
  using _fail_on_unsupported_element_type =
    bool;
  _fail_on_unsupported_element_type fail_on_unsupported_element;
  using _ignore_missing_or_unsupported_assets_type =
    bool;
  _ignore_missing_or_unsupported_assets_type ignore_missing_or_unsupported_assets;

  // setters for named parameter idiom
  Type & set__world_resource(
    const simulation_interfaces::msg::Resource_<ContainerAllocator> & _arg)
  {
    this->world_resource = _arg;
    return *this;
  }
  Type & set__fail_on_unsupported_element(
    const bool & _arg)
  {
    this->fail_on_unsupported_element = _arg;
    return *this;
  }
  Type & set__ignore_missing_or_unsupported_assets(
    const bool & _arg)
  {
    this->ignore_missing_or_unsupported_assets = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simulation_interfaces::srv::LoadWorld_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const simulation_interfaces::srv::LoadWorld_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simulation_interfaces::srv::LoadWorld_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simulation_interfaces::srv::LoadWorld_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::LoadWorld_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::LoadWorld_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::LoadWorld_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::LoadWorld_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simulation_interfaces::srv::LoadWorld_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simulation_interfaces::srv::LoadWorld_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simulation_interfaces__srv__LoadWorld_Request
    std::shared_ptr<simulation_interfaces::srv::LoadWorld_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simulation_interfaces__srv__LoadWorld_Request
    std::shared_ptr<simulation_interfaces::srv::LoadWorld_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LoadWorld_Request_ & other) const
  {
    if (this->world_resource != other.world_resource) {
      return false;
    }
    if (this->fail_on_unsupported_element != other.fail_on_unsupported_element) {
      return false;
    }
    if (this->ignore_missing_or_unsupported_assets != other.ignore_missing_or_unsupported_assets) {
      return false;
    }
    return true;
  }
  bool operator!=(const LoadWorld_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LoadWorld_Request_

// alias to use template instance with default allocator
using LoadWorld_Request =
  simulation_interfaces::srv::LoadWorld_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace simulation_interfaces


// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__struct.hpp"
// Member 'world'
#include "simulation_interfaces/msg/detail/world_resource__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__simulation_interfaces__srv__LoadWorld_Response __attribute__((deprecated))
#else
# define DEPRECATED__simulation_interfaces__srv__LoadWorld_Response __declspec(deprecated)
#endif

namespace simulation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LoadWorld_Response_
{
  using Type = LoadWorld_Response_<ContainerAllocator>;

  explicit LoadWorld_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init),
    world(_init)
  {
    (void)_init;
  }

  explicit LoadWorld_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init),
    world(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _result_type =
    simulation_interfaces::msg::Result_<ContainerAllocator>;
  _result_type result;
  using _world_type =
    simulation_interfaces::msg::WorldResource_<ContainerAllocator>;
  _world_type world;

  // setters for named parameter idiom
  Type & set__result(
    const simulation_interfaces::msg::Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__world(
    const simulation_interfaces::msg::WorldResource_<ContainerAllocator> & _arg)
  {
    this->world = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNSUPPORTED_FORMAT =
    101u;
  static constexpr uint8_t NO_RESOURCE =
    102u;
  static constexpr uint8_t RESOURCE_PARSE_ERROR =
    103u;
  static constexpr uint8_t MISSING_ASSETS =
    104u;
  static constexpr uint8_t UNSUPPORTED_ASSETS =
    105u;
  static constexpr uint8_t UNSUPPORTED_ELEMENTS =
    106u;

  // pointer types
  using RawPtr =
    simulation_interfaces::srv::LoadWorld_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const simulation_interfaces::srv::LoadWorld_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simulation_interfaces::srv::LoadWorld_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simulation_interfaces::srv::LoadWorld_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::LoadWorld_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::LoadWorld_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::LoadWorld_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::LoadWorld_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simulation_interfaces::srv::LoadWorld_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simulation_interfaces::srv::LoadWorld_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simulation_interfaces__srv__LoadWorld_Response
    std::shared_ptr<simulation_interfaces::srv::LoadWorld_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simulation_interfaces__srv__LoadWorld_Response
    std::shared_ptr<simulation_interfaces::srv::LoadWorld_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LoadWorld_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->world != other.world) {
      return false;
    }
    return true;
  }
  bool operator!=(const LoadWorld_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LoadWorld_Response_

// alias to use template instance with default allocator
using LoadWorld_Response =
  simulation_interfaces::srv::LoadWorld_Response_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LoadWorld_Response_<ContainerAllocator>::UNSUPPORTED_FORMAT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LoadWorld_Response_<ContainerAllocator>::NO_RESOURCE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LoadWorld_Response_<ContainerAllocator>::RESOURCE_PARSE_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LoadWorld_Response_<ContainerAllocator>::MISSING_ASSETS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LoadWorld_Response_<ContainerAllocator>::UNSUPPORTED_ASSETS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LoadWorld_Response_<ContainerAllocator>::UNSUPPORTED_ELEMENTS;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace simulation_interfaces

namespace simulation_interfaces
{

namespace srv
{

struct LoadWorld
{
  using Request = simulation_interfaces::srv::LoadWorld_Request;
  using Response = simulation_interfaces::srv::LoadWorld_Response;
};

}  // namespace srv

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__LOAD_WORLD__STRUCT_HPP_

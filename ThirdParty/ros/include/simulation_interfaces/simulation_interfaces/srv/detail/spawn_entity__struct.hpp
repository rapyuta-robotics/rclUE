// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from simulation_interfaces:srv/SpawnEntity.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__SPAWN_ENTITY__STRUCT_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__SPAWN_ENTITY__STRUCT_HPP_

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
// Member 'initial_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__simulation_interfaces__srv__SpawnEntity_Request __attribute__((deprecated))
#else
# define DEPRECATED__simulation_interfaces__srv__SpawnEntity_Request __declspec(deprecated)
#endif

namespace simulation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SpawnEntity_Request_
{
  using Type = SpawnEntity_Request_<ContainerAllocator>;

  explicit SpawnEntity_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : entity_resource(_init),
    initial_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->allow_renaming = false;
      this->entity_namespace = "";
    }
  }

  explicit SpawnEntity_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    entity_resource(_alloc, _init),
    entity_namespace(_alloc),
    initial_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->allow_renaming = false;
      this->entity_namespace = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _allow_renaming_type =
    bool;
  _allow_renaming_type allow_renaming;
  using _entity_resource_type =
    simulation_interfaces::msg::Resource_<ContainerAllocator>;
  _entity_resource_type entity_resource;
  using _entity_namespace_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _entity_namespace_type entity_namespace;
  using _initial_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _initial_pose_type initial_pose;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__allow_renaming(
    const bool & _arg)
  {
    this->allow_renaming = _arg;
    return *this;
  }
  Type & set__entity_resource(
    const simulation_interfaces::msg::Resource_<ContainerAllocator> & _arg)
  {
    this->entity_resource = _arg;
    return *this;
  }
  Type & set__entity_namespace(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->entity_namespace = _arg;
    return *this;
  }
  Type & set__initial_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->initial_pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simulation_interfaces::srv::SpawnEntity_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const simulation_interfaces::srv::SpawnEntity_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simulation_interfaces::srv::SpawnEntity_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simulation_interfaces::srv::SpawnEntity_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::SpawnEntity_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::SpawnEntity_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::SpawnEntity_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::SpawnEntity_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simulation_interfaces::srv::SpawnEntity_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simulation_interfaces::srv::SpawnEntity_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simulation_interfaces__srv__SpawnEntity_Request
    std::shared_ptr<simulation_interfaces::srv::SpawnEntity_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simulation_interfaces__srv__SpawnEntity_Request
    std::shared_ptr<simulation_interfaces::srv::SpawnEntity_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpawnEntity_Request_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->allow_renaming != other.allow_renaming) {
      return false;
    }
    if (this->entity_resource != other.entity_resource) {
      return false;
    }
    if (this->entity_namespace != other.entity_namespace) {
      return false;
    }
    if (this->initial_pose != other.initial_pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpawnEntity_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpawnEntity_Request_

// alias to use template instance with default allocator
using SpawnEntity_Request =
  simulation_interfaces::srv::SpawnEntity_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace simulation_interfaces


// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__simulation_interfaces__srv__SpawnEntity_Response __attribute__((deprecated))
#else
# define DEPRECATED__simulation_interfaces__srv__SpawnEntity_Response __declspec(deprecated)
#endif

namespace simulation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SpawnEntity_Response_
{
  using Type = SpawnEntity_Response_<ContainerAllocator>;

  explicit SpawnEntity_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->entity_name = "";
    }
  }

  explicit SpawnEntity_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init),
    entity_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->entity_name = "";
    }
  }

  // field types and members
  using _result_type =
    simulation_interfaces::msg::Result_<ContainerAllocator>;
  _result_type result;
  using _entity_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _entity_name_type entity_name;

  // setters for named parameter idiom
  Type & set__result(
    const simulation_interfaces::msg::Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__entity_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->entity_name = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NAME_NOT_UNIQUE =
    101u;
  static constexpr uint8_t NAME_INVALID =
    102u;
  static constexpr uint8_t UNSUPPORTED_FORMAT =
    103u;
  static constexpr uint8_t NO_RESOURCE =
    104u;
  static constexpr uint8_t NAMESPACE_INVALID =
    105u;
  static constexpr uint8_t RESOURCE_PARSE_ERROR =
    106u;
  static constexpr uint8_t MISSING_ASSETS =
    107u;
  static constexpr uint8_t UNSUPPORTED_ASSETS =
    108u;
  static constexpr uint8_t INVALID_POSE =
    109u;

  // pointer types
  using RawPtr =
    simulation_interfaces::srv::SpawnEntity_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const simulation_interfaces::srv::SpawnEntity_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simulation_interfaces::srv::SpawnEntity_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simulation_interfaces::srv::SpawnEntity_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::SpawnEntity_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::SpawnEntity_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::SpawnEntity_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::SpawnEntity_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simulation_interfaces::srv::SpawnEntity_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simulation_interfaces::srv::SpawnEntity_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simulation_interfaces__srv__SpawnEntity_Response
    std::shared_ptr<simulation_interfaces::srv::SpawnEntity_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simulation_interfaces__srv__SpawnEntity_Response
    std::shared_ptr<simulation_interfaces::srv::SpawnEntity_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpawnEntity_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->entity_name != other.entity_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpawnEntity_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpawnEntity_Response_

// alias to use template instance with default allocator
using SpawnEntity_Response =
  simulation_interfaces::srv::SpawnEntity_Response_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpawnEntity_Response_<ContainerAllocator>::NAME_NOT_UNIQUE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpawnEntity_Response_<ContainerAllocator>::NAME_INVALID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpawnEntity_Response_<ContainerAllocator>::UNSUPPORTED_FORMAT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpawnEntity_Response_<ContainerAllocator>::NO_RESOURCE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpawnEntity_Response_<ContainerAllocator>::NAMESPACE_INVALID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpawnEntity_Response_<ContainerAllocator>::RESOURCE_PARSE_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpawnEntity_Response_<ContainerAllocator>::MISSING_ASSETS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpawnEntity_Response_<ContainerAllocator>::UNSUPPORTED_ASSETS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpawnEntity_Response_<ContainerAllocator>::INVALID_POSE;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace simulation_interfaces

namespace simulation_interfaces
{

namespace srv
{

struct SpawnEntity
{
  using Request = simulation_interfaces::srv::SpawnEntity_Request;
  using Response = simulation_interfaces::srv::SpawnEntity_Response;
};

}  // namespace srv

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__SPAWN_ENTITY__STRUCT_HPP_

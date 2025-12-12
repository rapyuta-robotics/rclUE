// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from simulation_interfaces:srv/GetSpawnables.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_SPAWNABLES__STRUCT_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_SPAWNABLES__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__simulation_interfaces__srv__GetSpawnables_Request __attribute__((deprecated))
#else
# define DEPRECATED__simulation_interfaces__srv__GetSpawnables_Request __declspec(deprecated)
#endif

namespace simulation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetSpawnables_Request_
{
  using Type = GetSpawnables_Request_<ContainerAllocator>;

  explicit GetSpawnables_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetSpawnables_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _sources_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _sources_type sources;

  // setters for named parameter idiom
  Type & set__sources(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->sources = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simulation_interfaces::srv::GetSpawnables_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const simulation_interfaces::srv::GetSpawnables_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simulation_interfaces::srv::GetSpawnables_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simulation_interfaces::srv::GetSpawnables_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::GetSpawnables_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::GetSpawnables_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::GetSpawnables_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::GetSpawnables_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simulation_interfaces::srv::GetSpawnables_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simulation_interfaces::srv::GetSpawnables_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simulation_interfaces__srv__GetSpawnables_Request
    std::shared_ptr<simulation_interfaces::srv::GetSpawnables_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simulation_interfaces__srv__GetSpawnables_Request
    std::shared_ptr<simulation_interfaces::srv::GetSpawnables_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetSpawnables_Request_ & other) const
  {
    if (this->sources != other.sources) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetSpawnables_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetSpawnables_Request_

// alias to use template instance with default allocator
using GetSpawnables_Request =
  simulation_interfaces::srv::GetSpawnables_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace simulation_interfaces


// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__struct.hpp"
// Member 'spawnables'
#include "simulation_interfaces/msg/detail/spawnable__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__simulation_interfaces__srv__GetSpawnables_Response __attribute__((deprecated))
#else
# define DEPRECATED__simulation_interfaces__srv__GetSpawnables_Response __declspec(deprecated)
#endif

namespace simulation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetSpawnables_Response_
{
  using Type = GetSpawnables_Response_<ContainerAllocator>;

  explicit GetSpawnables_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    (void)_init;
  }

  explicit GetSpawnables_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _result_type =
    simulation_interfaces::msg::Result_<ContainerAllocator>;
  _result_type result;
  using _spawnables_type =
    std::vector<simulation_interfaces::msg::Spawnable_<ContainerAllocator>, typename ContainerAllocator::template rebind<simulation_interfaces::msg::Spawnable_<ContainerAllocator>>::other>;
  _spawnables_type spawnables;

  // setters for named parameter idiom
  Type & set__result(
    const simulation_interfaces::msg::Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__spawnables(
    const std::vector<simulation_interfaces::msg::Spawnable_<ContainerAllocator>, typename ContainerAllocator::template rebind<simulation_interfaces::msg::Spawnable_<ContainerAllocator>>::other> & _arg)
  {
    this->spawnables = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simulation_interfaces::srv::GetSpawnables_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const simulation_interfaces::srv::GetSpawnables_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simulation_interfaces::srv::GetSpawnables_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simulation_interfaces::srv::GetSpawnables_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::GetSpawnables_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::GetSpawnables_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::GetSpawnables_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::GetSpawnables_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simulation_interfaces::srv::GetSpawnables_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simulation_interfaces::srv::GetSpawnables_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simulation_interfaces__srv__GetSpawnables_Response
    std::shared_ptr<simulation_interfaces::srv::GetSpawnables_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simulation_interfaces__srv__GetSpawnables_Response
    std::shared_ptr<simulation_interfaces::srv::GetSpawnables_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetSpawnables_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->spawnables != other.spawnables) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetSpawnables_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetSpawnables_Response_

// alias to use template instance with default allocator
using GetSpawnables_Response =
  simulation_interfaces::srv::GetSpawnables_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace simulation_interfaces

namespace simulation_interfaces
{

namespace srv
{

struct GetSpawnables
{
  using Request = simulation_interfaces::srv::GetSpawnables_Request;
  using Response = simulation_interfaces::srv::GetSpawnables_Response;
};

}  // namespace srv

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_SPAWNABLES__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from simulation_interfaces:srv/GetEntitiesStates.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITIES_STATES__STRUCT_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITIES_STATES__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'filters'
#include "simulation_interfaces/msg/detail/entity_filters__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__simulation_interfaces__srv__GetEntitiesStates_Request __attribute__((deprecated))
#else
# define DEPRECATED__simulation_interfaces__srv__GetEntitiesStates_Request __declspec(deprecated)
#endif

namespace simulation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetEntitiesStates_Request_
{
  using Type = GetEntitiesStates_Request_<ContainerAllocator>;

  explicit GetEntitiesStates_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : filters(_init)
  {
    (void)_init;
  }

  explicit GetEntitiesStates_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : filters(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _filters_type =
    simulation_interfaces::msg::EntityFilters_<ContainerAllocator>;
  _filters_type filters;

  // setters for named parameter idiom
  Type & set__filters(
    const simulation_interfaces::msg::EntityFilters_<ContainerAllocator> & _arg)
  {
    this->filters = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simulation_interfaces::srv::GetEntitiesStates_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const simulation_interfaces::srv::GetEntitiesStates_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simulation_interfaces::srv::GetEntitiesStates_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simulation_interfaces::srv::GetEntitiesStates_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::GetEntitiesStates_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::GetEntitiesStates_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::GetEntitiesStates_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::GetEntitiesStates_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simulation_interfaces::srv::GetEntitiesStates_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simulation_interfaces::srv::GetEntitiesStates_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simulation_interfaces__srv__GetEntitiesStates_Request
    std::shared_ptr<simulation_interfaces::srv::GetEntitiesStates_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simulation_interfaces__srv__GetEntitiesStates_Request
    std::shared_ptr<simulation_interfaces::srv::GetEntitiesStates_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetEntitiesStates_Request_ & other) const
  {
    if (this->filters != other.filters) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetEntitiesStates_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetEntitiesStates_Request_

// alias to use template instance with default allocator
using GetEntitiesStates_Request =
  simulation_interfaces::srv::GetEntitiesStates_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace simulation_interfaces


// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__struct.hpp"
// Member 'states'
#include "simulation_interfaces/msg/detail/entity_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__simulation_interfaces__srv__GetEntitiesStates_Response __attribute__((deprecated))
#else
# define DEPRECATED__simulation_interfaces__srv__GetEntitiesStates_Response __declspec(deprecated)
#endif

namespace simulation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetEntitiesStates_Response_
{
  using Type = GetEntitiesStates_Response_<ContainerAllocator>;

  explicit GetEntitiesStates_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    (void)_init;
  }

  explicit GetEntitiesStates_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _result_type =
    simulation_interfaces::msg::Result_<ContainerAllocator>;
  _result_type result;
  using _entities_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _entities_type entities;
  using _states_type =
    std::vector<simulation_interfaces::msg::EntityState_<ContainerAllocator>, typename ContainerAllocator::template rebind<simulation_interfaces::msg::EntityState_<ContainerAllocator>>::other>;
  _states_type states;

  // setters for named parameter idiom
  Type & set__result(
    const simulation_interfaces::msg::Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__entities(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->entities = _arg;
    return *this;
  }
  Type & set__states(
    const std::vector<simulation_interfaces::msg::EntityState_<ContainerAllocator>, typename ContainerAllocator::template rebind<simulation_interfaces::msg::EntityState_<ContainerAllocator>>::other> & _arg)
  {
    this->states = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simulation_interfaces::srv::GetEntitiesStates_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const simulation_interfaces::srv::GetEntitiesStates_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simulation_interfaces::srv::GetEntitiesStates_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simulation_interfaces::srv::GetEntitiesStates_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::GetEntitiesStates_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::GetEntitiesStates_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::GetEntitiesStates_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::GetEntitiesStates_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simulation_interfaces::srv::GetEntitiesStates_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simulation_interfaces::srv::GetEntitiesStates_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simulation_interfaces__srv__GetEntitiesStates_Response
    std::shared_ptr<simulation_interfaces::srv::GetEntitiesStates_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simulation_interfaces__srv__GetEntitiesStates_Response
    std::shared_ptr<simulation_interfaces::srv::GetEntitiesStates_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetEntitiesStates_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->entities != other.entities) {
      return false;
    }
    if (this->states != other.states) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetEntitiesStates_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetEntitiesStates_Response_

// alias to use template instance with default allocator
using GetEntitiesStates_Response =
  simulation_interfaces::srv::GetEntitiesStates_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace simulation_interfaces

namespace simulation_interfaces
{

namespace srv
{

struct GetEntitiesStates
{
  using Request = simulation_interfaces::srv::GetEntitiesStates_Request;
  using Response = simulation_interfaces::srv::GetEntitiesStates_Response;
};

}  // namespace srv

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITIES_STATES__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from simulation_interfaces:srv/SetEntityState.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__SET_ENTITY_STATE__STRUCT_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__SET_ENTITY_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'state'
#include "simulation_interfaces/msg/detail/entity_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__simulation_interfaces__srv__SetEntityState_Request __attribute__((deprecated))
#else
# define DEPRECATED__simulation_interfaces__srv__SetEntityState_Request __declspec(deprecated)
#endif

namespace simulation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetEntityState_Request_
{
  using Type = SetEntityState_Request_<ContainerAllocator>;

  explicit SetEntityState_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->entity = "";
      this->set_pose = false;
      this->set_twist = false;
      this->set_acceleration = false;
    }
  }

  explicit SetEntityState_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : entity(_alloc),
    state(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->entity = "";
      this->set_pose = false;
      this->set_twist = false;
      this->set_acceleration = false;
    }
  }

  // field types and members
  using _entity_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _entity_type entity;
  using _state_type =
    simulation_interfaces::msg::EntityState_<ContainerAllocator>;
  _state_type state;
  using _set_pose_type =
    bool;
  _set_pose_type set_pose;
  using _set_twist_type =
    bool;
  _set_twist_type set_twist;
  using _set_acceleration_type =
    bool;
  _set_acceleration_type set_acceleration;

  // setters for named parameter idiom
  Type & set__entity(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->entity = _arg;
    return *this;
  }
  Type & set__state(
    const simulation_interfaces::msg::EntityState_<ContainerAllocator> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__set_pose(
    const bool & _arg)
  {
    this->set_pose = _arg;
    return *this;
  }
  Type & set__set_twist(
    const bool & _arg)
  {
    this->set_twist = _arg;
    return *this;
  }
  Type & set__set_acceleration(
    const bool & _arg)
  {
    this->set_acceleration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simulation_interfaces::srv::SetEntityState_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const simulation_interfaces::srv::SetEntityState_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simulation_interfaces::srv::SetEntityState_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simulation_interfaces::srv::SetEntityState_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::SetEntityState_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::SetEntityState_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::SetEntityState_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::SetEntityState_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simulation_interfaces::srv::SetEntityState_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simulation_interfaces::srv::SetEntityState_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simulation_interfaces__srv__SetEntityState_Request
    std::shared_ptr<simulation_interfaces::srv::SetEntityState_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simulation_interfaces__srv__SetEntityState_Request
    std::shared_ptr<simulation_interfaces::srv::SetEntityState_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetEntityState_Request_ & other) const
  {
    if (this->entity != other.entity) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->set_pose != other.set_pose) {
      return false;
    }
    if (this->set_twist != other.set_twist) {
      return false;
    }
    if (this->set_acceleration != other.set_acceleration) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetEntityState_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetEntityState_Request_

// alias to use template instance with default allocator
using SetEntityState_Request =
  simulation_interfaces::srv::SetEntityState_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace simulation_interfaces


// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__simulation_interfaces__srv__SetEntityState_Response __attribute__((deprecated))
#else
# define DEPRECATED__simulation_interfaces__srv__SetEntityState_Response __declspec(deprecated)
#endif

namespace simulation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetEntityState_Response_
{
  using Type = SetEntityState_Response_<ContainerAllocator>;

  explicit SetEntityState_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    (void)_init;
  }

  explicit SetEntityState_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _result_type =
    simulation_interfaces::msg::Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const simulation_interfaces::msg::Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t INVALID_POSE =
    101u;

  // pointer types
  using RawPtr =
    simulation_interfaces::srv::SetEntityState_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const simulation_interfaces::srv::SetEntityState_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simulation_interfaces::srv::SetEntityState_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simulation_interfaces::srv::SetEntityState_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::SetEntityState_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::SetEntityState_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::SetEntityState_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::SetEntityState_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simulation_interfaces::srv::SetEntityState_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simulation_interfaces::srv::SetEntityState_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simulation_interfaces__srv__SetEntityState_Response
    std::shared_ptr<simulation_interfaces::srv::SetEntityState_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simulation_interfaces__srv__SetEntityState_Response
    std::shared_ptr<simulation_interfaces::srv::SetEntityState_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetEntityState_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetEntityState_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetEntityState_Response_

// alias to use template instance with default allocator
using SetEntityState_Response =
  simulation_interfaces::srv::SetEntityState_Response_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetEntityState_Response_<ContainerAllocator>::INVALID_POSE;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace simulation_interfaces

namespace simulation_interfaces
{

namespace srv
{

struct SetEntityState
{
  using Request = simulation_interfaces::srv::SetEntityState_Request;
  using Response = simulation_interfaces::srv::SetEntityState_Response;
};

}  // namespace srv

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__SET_ENTITY_STATE__STRUCT_HPP_

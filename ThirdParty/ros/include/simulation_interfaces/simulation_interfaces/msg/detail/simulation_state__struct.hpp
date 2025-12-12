// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from simulation_interfaces:msg/SimulationState.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__SIMULATION_STATE__STRUCT_HPP_
#define SIMULATION_INTERFACES__MSG__DETAIL__SIMULATION_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__simulation_interfaces__msg__SimulationState __attribute__((deprecated))
#else
# define DEPRECATED__simulation_interfaces__msg__SimulationState __declspec(deprecated)
#endif

namespace simulation_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SimulationState_
{
  using Type = SimulationState_<ContainerAllocator>;

  explicit SimulationState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
    }
  }

  explicit SimulationState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
    }
  }

  // field types and members
  using _state_type =
    uint8_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STATE_STOPPED =
    0u;
  static constexpr uint8_t STATE_PLAYING =
    1u;
  static constexpr uint8_t STATE_PAUSED =
    2u;
  static constexpr uint8_t STATE_QUITTING =
    3u;
  static constexpr uint8_t STATE_NO_WORLD =
    4u;
  static constexpr uint8_t STATE_LOADING_WORLD =
    5u;

  // pointer types
  using RawPtr =
    simulation_interfaces::msg::SimulationState_<ContainerAllocator> *;
  using ConstRawPtr =
    const simulation_interfaces::msg::SimulationState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simulation_interfaces::msg::SimulationState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simulation_interfaces::msg::SimulationState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::msg::SimulationState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::msg::SimulationState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::msg::SimulationState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::msg::SimulationState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simulation_interfaces::msg::SimulationState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simulation_interfaces::msg::SimulationState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simulation_interfaces__msg__SimulationState
    std::shared_ptr<simulation_interfaces::msg::SimulationState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simulation_interfaces__msg__SimulationState
    std::shared_ptr<simulation_interfaces::msg::SimulationState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SimulationState_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const SimulationState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SimulationState_

// alias to use template instance with default allocator
using SimulationState =
  simulation_interfaces::msg::SimulationState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulationState_<ContainerAllocator>::STATE_STOPPED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulationState_<ContainerAllocator>::STATE_PLAYING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulationState_<ContainerAllocator>::STATE_PAUSED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulationState_<ContainerAllocator>::STATE_QUITTING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulationState_<ContainerAllocator>::STATE_NO_WORLD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulationState_<ContainerAllocator>::STATE_LOADING_WORLD;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__SIMULATION_STATE__STRUCT_HPP_

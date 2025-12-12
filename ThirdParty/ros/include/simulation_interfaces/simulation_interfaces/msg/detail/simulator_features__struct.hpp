// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from simulation_interfaces:msg/SimulatorFeatures.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "simulation_interfaces/msg/simulator_features.hpp"


#ifndef SIMULATION_INTERFACES__MSG__DETAIL__SIMULATOR_FEATURES__STRUCT_HPP_
#define SIMULATION_INTERFACES__MSG__DETAIL__SIMULATOR_FEATURES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__simulation_interfaces__msg__SimulatorFeatures __attribute__((deprecated))
#else
# define DEPRECATED__simulation_interfaces__msg__SimulatorFeatures __declspec(deprecated)
#endif

namespace simulation_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SimulatorFeatures_
{
  using Type = SimulatorFeatures_<ContainerAllocator>;

  explicit SimulatorFeatures_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->custom_info = "";
    }
  }

  explicit SimulatorFeatures_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : custom_info(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->custom_info = "";
    }
  }

  // field types and members
  using _features_type =
    std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>>;
  _features_type features;
  using _spawn_formats_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _spawn_formats_type spawn_formats;
  using _custom_info_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _custom_info_type custom_info;

  // setters for named parameter idiom
  Type & set__features(
    const std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>> & _arg)
  {
    this->features = _arg;
    return *this;
  }
  Type & set__spawn_formats(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->spawn_formats = _arg;
    return *this;
  }
  Type & set__custom_info(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->custom_info = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SPAWNING =
    0u;
  static constexpr uint8_t DELETING =
    1u;
  static constexpr uint8_t NAMED_POSES =
    2u;
  static constexpr uint8_t POSE_BOUNDS =
    3u;
  static constexpr uint8_t ENTITY_TAGS =
    4u;
  static constexpr uint8_t ENTITY_BOUNDS =
    5u;
  static constexpr uint8_t ENTITY_BOUNDS_BOX =
    6u;
  static constexpr uint8_t ENTITY_BOUNDS_CONVEX =
    7u;
  static constexpr uint8_t ENTITY_CATEGORIES =
    8u;
  static constexpr uint8_t SPAWNING_RESOURCE_STRING =
    9u;
  static constexpr uint8_t ENTITY_STATE_GETTING =
    10u;
  static constexpr uint8_t ENTITY_STATE_SETTING =
    11u;
  static constexpr uint8_t ENTITY_INFO_GETTING =
    12u;
  static constexpr uint8_t ENTITY_INFO_SETTING =
    13u;
  static constexpr uint8_t SPAWNABLES =
    14u;
  static constexpr uint8_t SIMULATION_RESET =
    20u;
  static constexpr uint8_t SIMULATION_RESET_TIME =
    21u;
  static constexpr uint8_t SIMULATION_RESET_STATE =
    22u;
  static constexpr uint8_t SIMULATION_RESET_SPAWNED =
    23u;
  static constexpr uint8_t SIMULATION_STATE_GETTING =
    24u;
  static constexpr uint8_t SIMULATION_STATE_SETTING =
    25u;
  static constexpr uint8_t SIMULATION_STATE_PAUSE =
    26u;
  static constexpr uint8_t STEP_SIMULATION_SINGLE =
    31u;
  static constexpr uint8_t STEP_SIMULATION_MULTIPLE =
    32u;
  static constexpr uint8_t STEP_SIMULATION_ACTION =
    33u;
  static constexpr uint8_t WORLD_LOADING =
    40u;
  static constexpr uint8_t WORLD_RESOURCE_STRING =
    41u;
  static constexpr uint8_t WORLD_TAGS =
    42u;
  static constexpr uint8_t WORLD_UNLOADING =
    43u;
  static constexpr uint8_t WORLD_INFO_GETTING =
    44u;
  static constexpr uint8_t AVAILABLE_WORLDS =
    45u;

  // pointer types
  using RawPtr =
    simulation_interfaces::msg::SimulatorFeatures_<ContainerAllocator> *;
  using ConstRawPtr =
    const simulation_interfaces::msg::SimulatorFeatures_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simulation_interfaces::msg::SimulatorFeatures_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simulation_interfaces::msg::SimulatorFeatures_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::msg::SimulatorFeatures_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::msg::SimulatorFeatures_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::msg::SimulatorFeatures_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::msg::SimulatorFeatures_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simulation_interfaces::msg::SimulatorFeatures_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simulation_interfaces::msg::SimulatorFeatures_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simulation_interfaces__msg__SimulatorFeatures
    std::shared_ptr<simulation_interfaces::msg::SimulatorFeatures_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simulation_interfaces__msg__SimulatorFeatures
    std::shared_ptr<simulation_interfaces::msg::SimulatorFeatures_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SimulatorFeatures_ & other) const
  {
    if (this->features != other.features) {
      return false;
    }
    if (this->spawn_formats != other.spawn_formats) {
      return false;
    }
    if (this->custom_info != other.custom_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const SimulatorFeatures_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SimulatorFeatures_

// alias to use template instance with default allocator
using SimulatorFeatures =
  simulation_interfaces::msg::SimulatorFeatures_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulatorFeatures_<ContainerAllocator>::SPAWNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulatorFeatures_<ContainerAllocator>::DELETING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulatorFeatures_<ContainerAllocator>::NAMED_POSES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulatorFeatures_<ContainerAllocator>::POSE_BOUNDS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulatorFeatures_<ContainerAllocator>::ENTITY_TAGS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulatorFeatures_<ContainerAllocator>::ENTITY_BOUNDS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulatorFeatures_<ContainerAllocator>::ENTITY_BOUNDS_BOX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulatorFeatures_<ContainerAllocator>::ENTITY_BOUNDS_CONVEX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulatorFeatures_<ContainerAllocator>::ENTITY_CATEGORIES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulatorFeatures_<ContainerAllocator>::SPAWNING_RESOURCE_STRING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulatorFeatures_<ContainerAllocator>::ENTITY_STATE_GETTING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulatorFeatures_<ContainerAllocator>::ENTITY_STATE_SETTING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulatorFeatures_<ContainerAllocator>::ENTITY_INFO_GETTING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulatorFeatures_<ContainerAllocator>::ENTITY_INFO_SETTING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulatorFeatures_<ContainerAllocator>::SPAWNABLES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulatorFeatures_<ContainerAllocator>::SIMULATION_RESET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulatorFeatures_<ContainerAllocator>::SIMULATION_RESET_TIME;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulatorFeatures_<ContainerAllocator>::SIMULATION_RESET_STATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulatorFeatures_<ContainerAllocator>::SIMULATION_RESET_SPAWNED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulatorFeatures_<ContainerAllocator>::SIMULATION_STATE_GETTING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulatorFeatures_<ContainerAllocator>::SIMULATION_STATE_SETTING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulatorFeatures_<ContainerAllocator>::SIMULATION_STATE_PAUSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulatorFeatures_<ContainerAllocator>::STEP_SIMULATION_SINGLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulatorFeatures_<ContainerAllocator>::STEP_SIMULATION_MULTIPLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulatorFeatures_<ContainerAllocator>::STEP_SIMULATION_ACTION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulatorFeatures_<ContainerAllocator>::WORLD_LOADING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulatorFeatures_<ContainerAllocator>::WORLD_RESOURCE_STRING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulatorFeatures_<ContainerAllocator>::WORLD_TAGS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulatorFeatures_<ContainerAllocator>::WORLD_UNLOADING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulatorFeatures_<ContainerAllocator>::WORLD_INFO_GETTING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulatorFeatures_<ContainerAllocator>::AVAILABLE_WORLDS;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__SIMULATOR_FEATURES__STRUCT_HPP_

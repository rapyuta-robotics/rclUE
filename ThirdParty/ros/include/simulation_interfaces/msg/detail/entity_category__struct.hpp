// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from simulation_interfaces:msg/EntityCategory.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_CATEGORY__STRUCT_HPP_
#define SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_CATEGORY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__simulation_interfaces__msg__EntityCategory __attribute__((deprecated))
#else
# define DEPRECATED__simulation_interfaces__msg__EntityCategory __declspec(deprecated)
#endif

namespace simulation_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EntityCategory_
{
  using Type = EntityCategory_<ContainerAllocator>;

  explicit EntityCategory_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->category = 0;
    }
  }

  explicit EntityCategory_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->category = 0;
    }
  }

  // field types and members
  using _category_type =
    uint8_t;
  _category_type category;

  // setters for named parameter idiom
  Type & set__category(
    const uint8_t & _arg)
  {
    this->category = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CATEGORY_OBJECT =
    0u;
  static constexpr uint8_t CATEGORY_ROBOT =
    1u;
  static constexpr uint8_t CATEGORY_HUMAN =
    2u;
  static constexpr uint8_t CATEGORY_DYNAMIC_OBJECT =
    4u;
  static constexpr uint8_t CATEGORY_STATIC_OBJECT =
    5u;

  // pointer types
  using RawPtr =
    simulation_interfaces::msg::EntityCategory_<ContainerAllocator> *;
  using ConstRawPtr =
    const simulation_interfaces::msg::EntityCategory_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simulation_interfaces::msg::EntityCategory_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simulation_interfaces::msg::EntityCategory_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::msg::EntityCategory_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::msg::EntityCategory_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::msg::EntityCategory_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::msg::EntityCategory_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simulation_interfaces::msg::EntityCategory_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simulation_interfaces::msg::EntityCategory_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simulation_interfaces__msg__EntityCategory
    std::shared_ptr<simulation_interfaces::msg::EntityCategory_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simulation_interfaces__msg__EntityCategory
    std::shared_ptr<simulation_interfaces::msg::EntityCategory_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EntityCategory_ & other) const
  {
    if (this->category != other.category) {
      return false;
    }
    return true;
  }
  bool operator!=(const EntityCategory_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EntityCategory_

// alias to use template instance with default allocator
using EntityCategory =
  simulation_interfaces::msg::EntityCategory_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t EntityCategory_<ContainerAllocator>::CATEGORY_OBJECT;
template<typename ContainerAllocator>
constexpr uint8_t EntityCategory_<ContainerAllocator>::CATEGORY_ROBOT;
template<typename ContainerAllocator>
constexpr uint8_t EntityCategory_<ContainerAllocator>::CATEGORY_HUMAN;
template<typename ContainerAllocator>
constexpr uint8_t EntityCategory_<ContainerAllocator>::CATEGORY_DYNAMIC_OBJECT;
template<typename ContainerAllocator>
constexpr uint8_t EntityCategory_<ContainerAllocator>::CATEGORY_STATIC_OBJECT;

}  // namespace msg

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_CATEGORY__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ue_msgs:msg/EntityStateMultiArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ue_msgs/msg/entity_state_multi_array.hpp"


#ifndef UE_MSGS__MSG__DETAIL__ENTITY_STATE_MULTI_ARRAY__STRUCT_HPP_
#define UE_MSGS__MSG__DETAIL__ENTITY_STATE_MULTI_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'entity_states'
#include "ue_msgs/msg/detail/entity_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ue_msgs__msg__EntityStateMultiArray __attribute__((deprecated))
#else
# define DEPRECATED__ue_msgs__msg__EntityStateMultiArray __declspec(deprecated)
#endif

namespace ue_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EntityStateMultiArray_
{
  using Type = EntityStateMultiArray_<ContainerAllocator>;

  explicit EntityStateMultiArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit EntityStateMultiArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _entity_states_type =
    std::vector<ue_msgs::msg::EntityState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ue_msgs::msg::EntityState_<ContainerAllocator>>>;
  _entity_states_type entity_states;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__entity_states(
    const std::vector<ue_msgs::msg::EntityState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ue_msgs::msg::EntityState_<ContainerAllocator>>> & _arg)
  {
    this->entity_states = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ue_msgs::msg::EntityStateMultiArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const ue_msgs::msg::EntityStateMultiArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ue_msgs::msg::EntityStateMultiArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ue_msgs::msg::EntityStateMultiArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ue_msgs::msg::EntityStateMultiArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::msg::EntityStateMultiArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ue_msgs::msg::EntityStateMultiArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::msg::EntityStateMultiArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ue_msgs::msg::EntityStateMultiArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ue_msgs::msg::EntityStateMultiArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ue_msgs__msg__EntityStateMultiArray
    std::shared_ptr<ue_msgs::msg::EntityStateMultiArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ue_msgs__msg__EntityStateMultiArray
    std::shared_ptr<ue_msgs::msg::EntityStateMultiArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EntityStateMultiArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->entity_states != other.entity_states) {
      return false;
    }
    return true;
  }
  bool operator!=(const EntityStateMultiArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EntityStateMultiArray_

// alias to use template instance with default allocator
using EntityStateMultiArray =
  ue_msgs::msg::EntityStateMultiArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ue_msgs

#endif  // UE_MSGS__MSG__DETAIL__ENTITY_STATE_MULTI_ARRAY__STRUCT_HPP_

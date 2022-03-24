// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ue_msgs:srv/SpawnWorld.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__SRV__DETAIL__SPAWN_WORLD__STRUCT_HPP_
#define UE_MSGS__SRV__DETAIL__SPAWN_WORLD__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'state'
#include "ue_msgs/msg/detail/entity_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ue_msgs__srv__SpawnWorld_Request __attribute__((deprecated))
#else
# define DEPRECATED__ue_msgs__srv__SpawnWorld_Request __declspec(deprecated)
#endif

namespace ue_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SpawnWorld_Request_
{
  using Type = SpawnWorld_Request_<ContainerAllocator>;

  explicit SpawnWorld_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->world_model = "";
    }
  }

  explicit SpawnWorld_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : world_model(_alloc),
    state(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->world_model = "";
    }
  }

  // field types and members
  using _world_model_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _world_model_type world_model;
  using _state_type =
    ue_msgs::msg::EntityState_<ContainerAllocator>;
  _state_type state;

  // setters for named parameter idiom
  Type & set__world_model(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->world_model = _arg;
    return *this;
  }
  Type & set__state(
    const ue_msgs::msg::EntityState_<ContainerAllocator> & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ue_msgs::srv::SpawnWorld_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ue_msgs::srv::SpawnWorld_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ue_msgs::srv::SpawnWorld_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ue_msgs::srv::SpawnWorld_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ue_msgs::srv::SpawnWorld_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::srv::SpawnWorld_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ue_msgs::srv::SpawnWorld_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::srv::SpawnWorld_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ue_msgs::srv::SpawnWorld_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ue_msgs::srv::SpawnWorld_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ue_msgs__srv__SpawnWorld_Request
    std::shared_ptr<ue_msgs::srv::SpawnWorld_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ue_msgs__srv__SpawnWorld_Request
    std::shared_ptr<ue_msgs::srv::SpawnWorld_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpawnWorld_Request_ & other) const
  {
    if (this->world_model != other.world_model) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpawnWorld_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpawnWorld_Request_

// alias to use template instance with default allocator
using SpawnWorld_Request =
  ue_msgs::srv::SpawnWorld_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ue_msgs


#ifndef _WIN32
# define DEPRECATED__ue_msgs__srv__SpawnWorld_Response __attribute__((deprecated))
#else
# define DEPRECATED__ue_msgs__srv__SpawnWorld_Response __declspec(deprecated)
#endif

namespace ue_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SpawnWorld_Response_
{
  using Type = SpawnWorld_Response_<ContainerAllocator>;

  explicit SpawnWorld_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->status_message = "";
    }
  }

  explicit SpawnWorld_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->status_message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _status_message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _status_message_type status_message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__status_message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->status_message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ue_msgs::srv::SpawnWorld_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ue_msgs::srv::SpawnWorld_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ue_msgs::srv::SpawnWorld_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ue_msgs::srv::SpawnWorld_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ue_msgs::srv::SpawnWorld_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::srv::SpawnWorld_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ue_msgs::srv::SpawnWorld_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::srv::SpawnWorld_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ue_msgs::srv::SpawnWorld_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ue_msgs::srv::SpawnWorld_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ue_msgs__srv__SpawnWorld_Response
    std::shared_ptr<ue_msgs::srv::SpawnWorld_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ue_msgs__srv__SpawnWorld_Response
    std::shared_ptr<ue_msgs::srv::SpawnWorld_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpawnWorld_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->status_message != other.status_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpawnWorld_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpawnWorld_Response_

// alias to use template instance with default allocator
using SpawnWorld_Response =
  ue_msgs::srv::SpawnWorld_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ue_msgs

namespace ue_msgs
{

namespace srv
{

struct SpawnWorld
{
  using Request = ue_msgs::srv::SpawnWorld_Request;
  using Response = ue_msgs::srv::SpawnWorld_Response;
};

}  // namespace srv

}  // namespace ue_msgs

#endif  // UE_MSGS__SRV__DETAIL__SPAWN_WORLD__STRUCT_HPP_

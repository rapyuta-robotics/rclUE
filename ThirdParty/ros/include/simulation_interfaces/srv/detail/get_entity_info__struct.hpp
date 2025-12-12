// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from simulation_interfaces:srv/GetEntityInfo.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITY_INFO__STRUCT_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITY_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__simulation_interfaces__srv__GetEntityInfo_Request __attribute__((deprecated))
#else
# define DEPRECATED__simulation_interfaces__srv__GetEntityInfo_Request __declspec(deprecated)
#endif

namespace simulation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetEntityInfo_Request_
{
  using Type = GetEntityInfo_Request_<ContainerAllocator>;

  explicit GetEntityInfo_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->entity = "";
    }
  }

  explicit GetEntityInfo_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : entity(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->entity = "";
    }
  }

  // field types and members
  using _entity_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _entity_type entity;

  // setters for named parameter idiom
  Type & set__entity(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->entity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simulation_interfaces::srv::GetEntityInfo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const simulation_interfaces::srv::GetEntityInfo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simulation_interfaces::srv::GetEntityInfo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simulation_interfaces::srv::GetEntityInfo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::GetEntityInfo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::GetEntityInfo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::GetEntityInfo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::GetEntityInfo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simulation_interfaces::srv::GetEntityInfo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simulation_interfaces::srv::GetEntityInfo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simulation_interfaces__srv__GetEntityInfo_Request
    std::shared_ptr<simulation_interfaces::srv::GetEntityInfo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simulation_interfaces__srv__GetEntityInfo_Request
    std::shared_ptr<simulation_interfaces::srv::GetEntityInfo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetEntityInfo_Request_ & other) const
  {
    if (this->entity != other.entity) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetEntityInfo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetEntityInfo_Request_

// alias to use template instance with default allocator
using GetEntityInfo_Request =
  simulation_interfaces::srv::GetEntityInfo_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace simulation_interfaces


// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__struct.hpp"
// Member 'info'
#include "simulation_interfaces/msg/detail/entity_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__simulation_interfaces__srv__GetEntityInfo_Response __attribute__((deprecated))
#else
# define DEPRECATED__simulation_interfaces__srv__GetEntityInfo_Response __declspec(deprecated)
#endif

namespace simulation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetEntityInfo_Response_
{
  using Type = GetEntityInfo_Response_<ContainerAllocator>;

  explicit GetEntityInfo_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init),
    info(_init)
  {
    (void)_init;
  }

  explicit GetEntityInfo_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init),
    info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _result_type =
    simulation_interfaces::msg::Result_<ContainerAllocator>;
  _result_type result;
  using _info_type =
    simulation_interfaces::msg::EntityInfo_<ContainerAllocator>;
  _info_type info;

  // setters for named parameter idiom
  Type & set__result(
    const simulation_interfaces::msg::Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__info(
    const simulation_interfaces::msg::EntityInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simulation_interfaces::srv::GetEntityInfo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const simulation_interfaces::srv::GetEntityInfo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simulation_interfaces::srv::GetEntityInfo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simulation_interfaces::srv::GetEntityInfo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::GetEntityInfo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::GetEntityInfo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::GetEntityInfo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::GetEntityInfo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simulation_interfaces::srv::GetEntityInfo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simulation_interfaces::srv::GetEntityInfo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simulation_interfaces__srv__GetEntityInfo_Response
    std::shared_ptr<simulation_interfaces::srv::GetEntityInfo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simulation_interfaces__srv__GetEntityInfo_Response
    std::shared_ptr<simulation_interfaces::srv::GetEntityInfo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetEntityInfo_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->info != other.info) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetEntityInfo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetEntityInfo_Response_

// alias to use template instance with default allocator
using GetEntityInfo_Response =
  simulation_interfaces::srv::GetEntityInfo_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace simulation_interfaces

namespace simulation_interfaces
{

namespace srv
{

struct GetEntityInfo
{
  using Request = simulation_interfaces::srv::GetEntityInfo_Request;
  using Response = simulation_interfaces::srv::GetEntityInfo_Response;
};

}  // namespace srv

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITY_INFO__STRUCT_HPP_

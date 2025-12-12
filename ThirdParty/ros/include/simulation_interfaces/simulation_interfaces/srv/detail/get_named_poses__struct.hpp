// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from simulation_interfaces:srv/GetNamedPoses.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_NAMED_POSES__STRUCT_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_NAMED_POSES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'tags'
#include "simulation_interfaces/msg/detail/tags_filter__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__simulation_interfaces__srv__GetNamedPoses_Request __attribute__((deprecated))
#else
# define DEPRECATED__simulation_interfaces__srv__GetNamedPoses_Request __declspec(deprecated)
#endif

namespace simulation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetNamedPoses_Request_
{
  using Type = GetNamedPoses_Request_<ContainerAllocator>;

  explicit GetNamedPoses_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tags(_init)
  {
    (void)_init;
  }

  explicit GetNamedPoses_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tags(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _tags_type =
    simulation_interfaces::msg::TagsFilter_<ContainerAllocator>;
  _tags_type tags;

  // setters for named parameter idiom
  Type & set__tags(
    const simulation_interfaces::msg::TagsFilter_<ContainerAllocator> & _arg)
  {
    this->tags = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simulation_interfaces::srv::GetNamedPoses_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const simulation_interfaces::srv::GetNamedPoses_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simulation_interfaces::srv::GetNamedPoses_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simulation_interfaces::srv::GetNamedPoses_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::GetNamedPoses_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::GetNamedPoses_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::GetNamedPoses_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::GetNamedPoses_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simulation_interfaces::srv::GetNamedPoses_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simulation_interfaces::srv::GetNamedPoses_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simulation_interfaces__srv__GetNamedPoses_Request
    std::shared_ptr<simulation_interfaces::srv::GetNamedPoses_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simulation_interfaces__srv__GetNamedPoses_Request
    std::shared_ptr<simulation_interfaces::srv::GetNamedPoses_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetNamedPoses_Request_ & other) const
  {
    if (this->tags != other.tags) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetNamedPoses_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetNamedPoses_Request_

// alias to use template instance with default allocator
using GetNamedPoses_Request =
  simulation_interfaces::srv::GetNamedPoses_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace simulation_interfaces


// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__struct.hpp"
// Member 'poses'
#include "simulation_interfaces/msg/detail/named_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__simulation_interfaces__srv__GetNamedPoses_Response __attribute__((deprecated))
#else
# define DEPRECATED__simulation_interfaces__srv__GetNamedPoses_Response __declspec(deprecated)
#endif

namespace simulation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetNamedPoses_Response_
{
  using Type = GetNamedPoses_Response_<ContainerAllocator>;

  explicit GetNamedPoses_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    (void)_init;
  }

  explicit GetNamedPoses_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _result_type =
    simulation_interfaces::msg::Result_<ContainerAllocator>;
  _result_type result;
  using _poses_type =
    std::vector<simulation_interfaces::msg::NamedPose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<simulation_interfaces::msg::NamedPose_<ContainerAllocator>>>;
  _poses_type poses;

  // setters for named parameter idiom
  Type & set__result(
    const simulation_interfaces::msg::Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__poses(
    const std::vector<simulation_interfaces::msg::NamedPose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<simulation_interfaces::msg::NamedPose_<ContainerAllocator>>> & _arg)
  {
    this->poses = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simulation_interfaces::srv::GetNamedPoses_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const simulation_interfaces::srv::GetNamedPoses_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simulation_interfaces::srv::GetNamedPoses_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simulation_interfaces::srv::GetNamedPoses_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::GetNamedPoses_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::GetNamedPoses_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::GetNamedPoses_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::GetNamedPoses_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simulation_interfaces::srv::GetNamedPoses_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simulation_interfaces::srv::GetNamedPoses_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simulation_interfaces__srv__GetNamedPoses_Response
    std::shared_ptr<simulation_interfaces::srv::GetNamedPoses_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simulation_interfaces__srv__GetNamedPoses_Response
    std::shared_ptr<simulation_interfaces::srv::GetNamedPoses_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetNamedPoses_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->poses != other.poses) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetNamedPoses_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetNamedPoses_Response_

// alias to use template instance with default allocator
using GetNamedPoses_Response =
  simulation_interfaces::srv::GetNamedPoses_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace simulation_interfaces

namespace simulation_interfaces
{

namespace srv
{

struct GetNamedPoses
{
  using Request = simulation_interfaces::srv::GetNamedPoses_Request;
  using Response = simulation_interfaces::srv::GetNamedPoses_Response;
};

}  // namespace srv

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_NAMED_POSES__STRUCT_HPP_

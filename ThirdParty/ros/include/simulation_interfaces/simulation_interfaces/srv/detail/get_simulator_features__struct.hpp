// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from simulation_interfaces:srv/GetSimulatorFeatures.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_SIMULATOR_FEATURES__STRUCT_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_SIMULATOR_FEATURES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__simulation_interfaces__srv__GetSimulatorFeatures_Request __attribute__((deprecated))
#else
# define DEPRECATED__simulation_interfaces__srv__GetSimulatorFeatures_Request __declspec(deprecated)
#endif

namespace simulation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetSimulatorFeatures_Request_
{
  using Type = GetSimulatorFeatures_Request_<ContainerAllocator>;

  explicit GetSimulatorFeatures_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetSimulatorFeatures_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    simulation_interfaces::srv::GetSimulatorFeatures_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const simulation_interfaces::srv::GetSimulatorFeatures_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simulation_interfaces::srv::GetSimulatorFeatures_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simulation_interfaces::srv::GetSimulatorFeatures_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::GetSimulatorFeatures_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::GetSimulatorFeatures_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::GetSimulatorFeatures_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::GetSimulatorFeatures_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simulation_interfaces::srv::GetSimulatorFeatures_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simulation_interfaces::srv::GetSimulatorFeatures_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simulation_interfaces__srv__GetSimulatorFeatures_Request
    std::shared_ptr<simulation_interfaces::srv::GetSimulatorFeatures_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simulation_interfaces__srv__GetSimulatorFeatures_Request
    std::shared_ptr<simulation_interfaces::srv::GetSimulatorFeatures_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetSimulatorFeatures_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetSimulatorFeatures_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetSimulatorFeatures_Request_

// alias to use template instance with default allocator
using GetSimulatorFeatures_Request =
  simulation_interfaces::srv::GetSimulatorFeatures_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace simulation_interfaces


// Include directives for member types
// Member 'features'
#include "simulation_interfaces/msg/detail/simulator_features__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__simulation_interfaces__srv__GetSimulatorFeatures_Response __attribute__((deprecated))
#else
# define DEPRECATED__simulation_interfaces__srv__GetSimulatorFeatures_Response __declspec(deprecated)
#endif

namespace simulation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetSimulatorFeatures_Response_
{
  using Type = GetSimulatorFeatures_Response_<ContainerAllocator>;

  explicit GetSimulatorFeatures_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : features(_init)
  {
    (void)_init;
  }

  explicit GetSimulatorFeatures_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : features(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _features_type =
    simulation_interfaces::msg::SimulatorFeatures_<ContainerAllocator>;
  _features_type features;

  // setters for named parameter idiom
  Type & set__features(
    const simulation_interfaces::msg::SimulatorFeatures_<ContainerAllocator> & _arg)
  {
    this->features = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simulation_interfaces::srv::GetSimulatorFeatures_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const simulation_interfaces::srv::GetSimulatorFeatures_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simulation_interfaces::srv::GetSimulatorFeatures_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simulation_interfaces::srv::GetSimulatorFeatures_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::GetSimulatorFeatures_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::GetSimulatorFeatures_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::GetSimulatorFeatures_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::GetSimulatorFeatures_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simulation_interfaces::srv::GetSimulatorFeatures_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simulation_interfaces::srv::GetSimulatorFeatures_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simulation_interfaces__srv__GetSimulatorFeatures_Response
    std::shared_ptr<simulation_interfaces::srv::GetSimulatorFeatures_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simulation_interfaces__srv__GetSimulatorFeatures_Response
    std::shared_ptr<simulation_interfaces::srv::GetSimulatorFeatures_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetSimulatorFeatures_Response_ & other) const
  {
    if (this->features != other.features) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetSimulatorFeatures_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetSimulatorFeatures_Response_

// alias to use template instance with default allocator
using GetSimulatorFeatures_Response =
  simulation_interfaces::srv::GetSimulatorFeatures_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace simulation_interfaces

namespace simulation_interfaces
{

namespace srv
{

struct GetSimulatorFeatures
{
  using Request = simulation_interfaces::srv::GetSimulatorFeatures_Request;
  using Response = simulation_interfaces::srv::GetSimulatorFeatures_Response;
};

}  // namespace srv

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_SIMULATOR_FEATURES__STRUCT_HPP_

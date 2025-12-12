// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from simulation_interfaces:srv/ResetSimulation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "simulation_interfaces/srv/reset_simulation.hpp"


#ifndef SIMULATION_INTERFACES__SRV__DETAIL__RESET_SIMULATION__STRUCT_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__RESET_SIMULATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__simulation_interfaces__srv__ResetSimulation_Request __attribute__((deprecated))
#else
# define DEPRECATED__simulation_interfaces__srv__ResetSimulation_Request __declspec(deprecated)
#endif

namespace simulation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ResetSimulation_Request_
{
  using Type = ResetSimulation_Request_<ContainerAllocator>;

  explicit ResetSimulation_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scope = 0;
    }
  }

  explicit ResetSimulation_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scope = 0;
    }
  }

  // field types and members
  using _scope_type =
    uint8_t;
  _scope_type scope;

  // setters for named parameter idiom
  Type & set__scope(
    const uint8_t & _arg)
  {
    this->scope = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SCOPE_DEFAULT =
    0u;
  static constexpr uint8_t SCOPE_TIME =
    1u;
  static constexpr uint8_t SCOPE_STATE =
    2u;
  static constexpr uint8_t SCOPE_SPAWNED =
    4u;
  static constexpr uint8_t SCOPE_ALL =
    255u;

  // pointer types
  using RawPtr =
    simulation_interfaces::srv::ResetSimulation_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const simulation_interfaces::srv::ResetSimulation_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simulation_interfaces::srv::ResetSimulation_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simulation_interfaces::srv::ResetSimulation_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::ResetSimulation_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::ResetSimulation_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::ResetSimulation_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::ResetSimulation_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simulation_interfaces::srv::ResetSimulation_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simulation_interfaces::srv::ResetSimulation_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simulation_interfaces__srv__ResetSimulation_Request
    std::shared_ptr<simulation_interfaces::srv::ResetSimulation_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simulation_interfaces__srv__ResetSimulation_Request
    std::shared_ptr<simulation_interfaces::srv::ResetSimulation_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResetSimulation_Request_ & other) const
  {
    if (this->scope != other.scope) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResetSimulation_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResetSimulation_Request_

// alias to use template instance with default allocator
using ResetSimulation_Request =
  simulation_interfaces::srv::ResetSimulation_Request_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ResetSimulation_Request_<ContainerAllocator>::SCOPE_DEFAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ResetSimulation_Request_<ContainerAllocator>::SCOPE_TIME;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ResetSimulation_Request_<ContainerAllocator>::SCOPE_STATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ResetSimulation_Request_<ContainerAllocator>::SCOPE_SPAWNED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ResetSimulation_Request_<ContainerAllocator>::SCOPE_ALL;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace simulation_interfaces


// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__simulation_interfaces__srv__ResetSimulation_Response __attribute__((deprecated))
#else
# define DEPRECATED__simulation_interfaces__srv__ResetSimulation_Response __declspec(deprecated)
#endif

namespace simulation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ResetSimulation_Response_
{
  using Type = ResetSimulation_Response_<ContainerAllocator>;

  explicit ResetSimulation_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    (void)_init;
  }

  explicit ResetSimulation_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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

  // pointer types
  using RawPtr =
    simulation_interfaces::srv::ResetSimulation_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const simulation_interfaces::srv::ResetSimulation_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simulation_interfaces::srv::ResetSimulation_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simulation_interfaces::srv::ResetSimulation_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::ResetSimulation_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::ResetSimulation_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::ResetSimulation_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::ResetSimulation_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simulation_interfaces::srv::ResetSimulation_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simulation_interfaces::srv::ResetSimulation_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simulation_interfaces__srv__ResetSimulation_Response
    std::shared_ptr<simulation_interfaces::srv::ResetSimulation_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simulation_interfaces__srv__ResetSimulation_Response
    std::shared_ptr<simulation_interfaces::srv::ResetSimulation_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResetSimulation_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResetSimulation_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResetSimulation_Response_

// alias to use template instance with default allocator
using ResetSimulation_Response =
  simulation_interfaces::srv::ResetSimulation_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace simulation_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__simulation_interfaces__srv__ResetSimulation_Event __attribute__((deprecated))
#else
# define DEPRECATED__simulation_interfaces__srv__ResetSimulation_Event __declspec(deprecated)
#endif

namespace simulation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ResetSimulation_Event_
{
  using Type = ResetSimulation_Event_<ContainerAllocator>;

  explicit ResetSimulation_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ResetSimulation_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<simulation_interfaces::srv::ResetSimulation_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<simulation_interfaces::srv::ResetSimulation_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<simulation_interfaces::srv::ResetSimulation_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<simulation_interfaces::srv::ResetSimulation_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<simulation_interfaces::srv::ResetSimulation_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<simulation_interfaces::srv::ResetSimulation_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<simulation_interfaces::srv::ResetSimulation_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<simulation_interfaces::srv::ResetSimulation_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simulation_interfaces::srv::ResetSimulation_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const simulation_interfaces::srv::ResetSimulation_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simulation_interfaces::srv::ResetSimulation_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simulation_interfaces::srv::ResetSimulation_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::ResetSimulation_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::ResetSimulation_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::ResetSimulation_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::ResetSimulation_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simulation_interfaces::srv::ResetSimulation_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simulation_interfaces::srv::ResetSimulation_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simulation_interfaces__srv__ResetSimulation_Event
    std::shared_ptr<simulation_interfaces::srv::ResetSimulation_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simulation_interfaces__srv__ResetSimulation_Event
    std::shared_ptr<simulation_interfaces::srv::ResetSimulation_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResetSimulation_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResetSimulation_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResetSimulation_Event_

// alias to use template instance with default allocator
using ResetSimulation_Event =
  simulation_interfaces::srv::ResetSimulation_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace simulation_interfaces

namespace simulation_interfaces
{

namespace srv
{

struct ResetSimulation
{
  using Request = simulation_interfaces::srv::ResetSimulation_Request;
  using Response = simulation_interfaces::srv::ResetSimulation_Response;
  using Event = simulation_interfaces::srv::ResetSimulation_Event;
};

}  // namespace srv

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__RESET_SIMULATION__STRUCT_HPP_

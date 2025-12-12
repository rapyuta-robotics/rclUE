// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from simulation_interfaces:srv/GetAvailableWorlds.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_AVAILABLE_WORLDS__STRUCT_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_AVAILABLE_WORLDS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'filter'
#include "simulation_interfaces/msg/detail/tags_filter__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__simulation_interfaces__srv__GetAvailableWorlds_Request __attribute__((deprecated))
#else
# define DEPRECATED__simulation_interfaces__srv__GetAvailableWorlds_Request __declspec(deprecated)
#endif

namespace simulation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetAvailableWorlds_Request_
{
  using Type = GetAvailableWorlds_Request_<ContainerAllocator>;

  explicit GetAvailableWorlds_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : filter(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->offline_only = false;
      this->continue_on_error = false;
    }
  }

  explicit GetAvailableWorlds_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : filter(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->offline_only = false;
      this->continue_on_error = false;
    }
  }

  // field types and members
  using _additional_sources_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _additional_sources_type additional_sources;
  using _filter_type =
    simulation_interfaces::msg::TagsFilter_<ContainerAllocator>;
  _filter_type filter;
  using _offline_only_type =
    bool;
  _offline_only_type offline_only;
  using _continue_on_error_type =
    bool;
  _continue_on_error_type continue_on_error;

  // setters for named parameter idiom
  Type & set__additional_sources(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->additional_sources = _arg;
    return *this;
  }
  Type & set__filter(
    const simulation_interfaces::msg::TagsFilter_<ContainerAllocator> & _arg)
  {
    this->filter = _arg;
    return *this;
  }
  Type & set__offline_only(
    const bool & _arg)
  {
    this->offline_only = _arg;
    return *this;
  }
  Type & set__continue_on_error(
    const bool & _arg)
  {
    this->continue_on_error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simulation_interfaces::srv::GetAvailableWorlds_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const simulation_interfaces::srv::GetAvailableWorlds_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simulation_interfaces::srv::GetAvailableWorlds_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simulation_interfaces::srv::GetAvailableWorlds_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::GetAvailableWorlds_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::GetAvailableWorlds_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::GetAvailableWorlds_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::GetAvailableWorlds_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simulation_interfaces::srv::GetAvailableWorlds_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simulation_interfaces::srv::GetAvailableWorlds_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simulation_interfaces__srv__GetAvailableWorlds_Request
    std::shared_ptr<simulation_interfaces::srv::GetAvailableWorlds_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simulation_interfaces__srv__GetAvailableWorlds_Request
    std::shared_ptr<simulation_interfaces::srv::GetAvailableWorlds_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetAvailableWorlds_Request_ & other) const
  {
    if (this->additional_sources != other.additional_sources) {
      return false;
    }
    if (this->filter != other.filter) {
      return false;
    }
    if (this->offline_only != other.offline_only) {
      return false;
    }
    if (this->continue_on_error != other.continue_on_error) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetAvailableWorlds_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetAvailableWorlds_Request_

// alias to use template instance with default allocator
using GetAvailableWorlds_Request =
  simulation_interfaces::srv::GetAvailableWorlds_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace simulation_interfaces


// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__struct.hpp"
// Member 'worlds'
#include "simulation_interfaces/msg/detail/world_resource__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__simulation_interfaces__srv__GetAvailableWorlds_Response __attribute__((deprecated))
#else
# define DEPRECATED__simulation_interfaces__srv__GetAvailableWorlds_Response __declspec(deprecated)
#endif

namespace simulation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetAvailableWorlds_Response_
{
  using Type = GetAvailableWorlds_Response_<ContainerAllocator>;

  explicit GetAvailableWorlds_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    (void)_init;
  }

  explicit GetAvailableWorlds_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _result_type =
    simulation_interfaces::msg::Result_<ContainerAllocator>;
  _result_type result;
  using _worlds_type =
    std::vector<simulation_interfaces::msg::WorldResource_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<simulation_interfaces::msg::WorldResource_<ContainerAllocator>>>;
  _worlds_type worlds;

  // setters for named parameter idiom
  Type & set__result(
    const simulation_interfaces::msg::Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__worlds(
    const std::vector<simulation_interfaces::msg::WorldResource_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<simulation_interfaces::msg::WorldResource_<ContainerAllocator>>> & _arg)
  {
    this->worlds = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t DEFAULT_SOURCES_FAILED =
    101u;

  // pointer types
  using RawPtr =
    simulation_interfaces::srv::GetAvailableWorlds_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const simulation_interfaces::srv::GetAvailableWorlds_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simulation_interfaces::srv::GetAvailableWorlds_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simulation_interfaces::srv::GetAvailableWorlds_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::GetAvailableWorlds_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::GetAvailableWorlds_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::GetAvailableWorlds_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::GetAvailableWorlds_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simulation_interfaces::srv::GetAvailableWorlds_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simulation_interfaces::srv::GetAvailableWorlds_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simulation_interfaces__srv__GetAvailableWorlds_Response
    std::shared_ptr<simulation_interfaces::srv::GetAvailableWorlds_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simulation_interfaces__srv__GetAvailableWorlds_Response
    std::shared_ptr<simulation_interfaces::srv::GetAvailableWorlds_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetAvailableWorlds_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->worlds != other.worlds) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetAvailableWorlds_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetAvailableWorlds_Response_

// alias to use template instance with default allocator
using GetAvailableWorlds_Response =
  simulation_interfaces::srv::GetAvailableWorlds_Response_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GetAvailableWorlds_Response_<ContainerAllocator>::DEFAULT_SOURCES_FAILED;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace simulation_interfaces

namespace simulation_interfaces
{

namespace srv
{

struct GetAvailableWorlds
{
  using Request = simulation_interfaces::srv::GetAvailableWorlds_Request;
  using Response = simulation_interfaces::srv::GetAvailableWorlds_Response;
};

}  // namespace srv

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_AVAILABLE_WORLDS__STRUCT_HPP_

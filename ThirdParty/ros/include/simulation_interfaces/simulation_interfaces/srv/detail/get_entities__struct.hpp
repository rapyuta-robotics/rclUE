// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from simulation_interfaces:srv/GetEntities.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "simulation_interfaces/srv/get_entities.hpp"


#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITIES__STRUCT_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITIES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'filters'
#include "simulation_interfaces/msg/detail/entity_filters__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__simulation_interfaces__srv__GetEntities_Request __attribute__((deprecated))
#else
# define DEPRECATED__simulation_interfaces__srv__GetEntities_Request __declspec(deprecated)
#endif

namespace simulation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetEntities_Request_
{
  using Type = GetEntities_Request_<ContainerAllocator>;

  explicit GetEntities_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : filters(_init)
  {
    (void)_init;
  }

  explicit GetEntities_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : filters(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _filters_type =
    simulation_interfaces::msg::EntityFilters_<ContainerAllocator>;
  _filters_type filters;

  // setters for named parameter idiom
  Type & set__filters(
    const simulation_interfaces::msg::EntityFilters_<ContainerAllocator> & _arg)
  {
    this->filters = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simulation_interfaces::srv::GetEntities_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const simulation_interfaces::srv::GetEntities_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simulation_interfaces::srv::GetEntities_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simulation_interfaces::srv::GetEntities_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::GetEntities_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::GetEntities_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::GetEntities_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::GetEntities_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simulation_interfaces::srv::GetEntities_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simulation_interfaces::srv::GetEntities_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simulation_interfaces__srv__GetEntities_Request
    std::shared_ptr<simulation_interfaces::srv::GetEntities_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simulation_interfaces__srv__GetEntities_Request
    std::shared_ptr<simulation_interfaces::srv::GetEntities_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetEntities_Request_ & other) const
  {
    if (this->filters != other.filters) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetEntities_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetEntities_Request_

// alias to use template instance with default allocator
using GetEntities_Request =
  simulation_interfaces::srv::GetEntities_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace simulation_interfaces


// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__simulation_interfaces__srv__GetEntities_Response __attribute__((deprecated))
#else
# define DEPRECATED__simulation_interfaces__srv__GetEntities_Response __declspec(deprecated)
#endif

namespace simulation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetEntities_Response_
{
  using Type = GetEntities_Response_<ContainerAllocator>;

  explicit GetEntities_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    (void)_init;
  }

  explicit GetEntities_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _result_type =
    simulation_interfaces::msg::Result_<ContainerAllocator>;
  _result_type result;
  using _entities_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _entities_type entities;

  // setters for named parameter idiom
  Type & set__result(
    const simulation_interfaces::msg::Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__entities(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->entities = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simulation_interfaces::srv::GetEntities_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const simulation_interfaces::srv::GetEntities_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simulation_interfaces::srv::GetEntities_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simulation_interfaces::srv::GetEntities_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::GetEntities_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::GetEntities_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::GetEntities_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::GetEntities_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simulation_interfaces::srv::GetEntities_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simulation_interfaces::srv::GetEntities_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simulation_interfaces__srv__GetEntities_Response
    std::shared_ptr<simulation_interfaces::srv::GetEntities_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simulation_interfaces__srv__GetEntities_Response
    std::shared_ptr<simulation_interfaces::srv::GetEntities_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetEntities_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->entities != other.entities) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetEntities_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetEntities_Response_

// alias to use template instance with default allocator
using GetEntities_Response =
  simulation_interfaces::srv::GetEntities_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace simulation_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__simulation_interfaces__srv__GetEntities_Event __attribute__((deprecated))
#else
# define DEPRECATED__simulation_interfaces__srv__GetEntities_Event __declspec(deprecated)
#endif

namespace simulation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetEntities_Event_
{
  using Type = GetEntities_Event_<ContainerAllocator>;

  explicit GetEntities_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit GetEntities_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<simulation_interfaces::srv::GetEntities_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<simulation_interfaces::srv::GetEntities_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<simulation_interfaces::srv::GetEntities_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<simulation_interfaces::srv::GetEntities_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<simulation_interfaces::srv::GetEntities_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<simulation_interfaces::srv::GetEntities_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<simulation_interfaces::srv::GetEntities_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<simulation_interfaces::srv::GetEntities_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simulation_interfaces::srv::GetEntities_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const simulation_interfaces::srv::GetEntities_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simulation_interfaces::srv::GetEntities_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simulation_interfaces::srv::GetEntities_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::GetEntities_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::GetEntities_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::srv::GetEntities_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::srv::GetEntities_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simulation_interfaces::srv::GetEntities_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simulation_interfaces::srv::GetEntities_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simulation_interfaces__srv__GetEntities_Event
    std::shared_ptr<simulation_interfaces::srv::GetEntities_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simulation_interfaces__srv__GetEntities_Event
    std::shared_ptr<simulation_interfaces::srv::GetEntities_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetEntities_Event_ & other) const
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
  bool operator!=(const GetEntities_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetEntities_Event_

// alias to use template instance with default allocator
using GetEntities_Event =
  simulation_interfaces::srv::GetEntities_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace simulation_interfaces

namespace simulation_interfaces
{

namespace srv
{

struct GetEntities
{
  using Request = simulation_interfaces::srv::GetEntities_Request;
  using Response = simulation_interfaces::srv::GetEntities_Response;
  using Event = simulation_interfaces::srv::GetEntities_Event;
};

}  // namespace srv

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITIES__STRUCT_HPP_

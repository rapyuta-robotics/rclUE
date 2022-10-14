// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from visualization_msgs:srv/GetInteractiveMarkers.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__SRV__DETAIL__GET_INTERACTIVE_MARKERS__STRUCT_HPP_
#define VISUALIZATION_MSGS__SRV__DETAIL__GET_INTERACTIVE_MARKERS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__visualization_msgs__srv__GetInteractiveMarkers_Request __attribute__((deprecated))
#else
# define DEPRECATED__visualization_msgs__srv__GetInteractiveMarkers_Request __declspec(deprecated)
#endif

namespace visualization_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetInteractiveMarkers_Request_
{
  using Type = GetInteractiveMarkers_Request_<ContainerAllocator>;

  explicit GetInteractiveMarkers_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetInteractiveMarkers_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    visualization_msgs::srv::GetInteractiveMarkers_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const visualization_msgs::srv::GetInteractiveMarkers_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<visualization_msgs::srv::GetInteractiveMarkers_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<visualization_msgs::srv::GetInteractiveMarkers_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      visualization_msgs::srv::GetInteractiveMarkers_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<visualization_msgs::srv::GetInteractiveMarkers_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      visualization_msgs::srv::GetInteractiveMarkers_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<visualization_msgs::srv::GetInteractiveMarkers_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<visualization_msgs::srv::GetInteractiveMarkers_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<visualization_msgs::srv::GetInteractiveMarkers_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__visualization_msgs__srv__GetInteractiveMarkers_Request
    std::shared_ptr<visualization_msgs::srv::GetInteractiveMarkers_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__visualization_msgs__srv__GetInteractiveMarkers_Request
    std::shared_ptr<visualization_msgs::srv::GetInteractiveMarkers_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetInteractiveMarkers_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetInteractiveMarkers_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetInteractiveMarkers_Request_

// alias to use template instance with default allocator
using GetInteractiveMarkers_Request =
  visualization_msgs::srv::GetInteractiveMarkers_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace visualization_msgs


// Include directives for member types
// Member 'markers'
#include "visualization_msgs/msg/detail/interactive_marker__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__visualization_msgs__srv__GetInteractiveMarkers_Response __attribute__((deprecated))
#else
# define DEPRECATED__visualization_msgs__srv__GetInteractiveMarkers_Response __declspec(deprecated)
#endif

namespace visualization_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetInteractiveMarkers_Response_
{
  using Type = GetInteractiveMarkers_Response_<ContainerAllocator>;

  explicit GetInteractiveMarkers_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sequence_number = 0ull;
    }
  }

  explicit GetInteractiveMarkers_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sequence_number = 0ull;
    }
  }

  // field types and members
  using _sequence_number_type =
    uint64_t;
  _sequence_number_type sequence_number;
  using _markers_type =
    std::vector<visualization_msgs::msg::InteractiveMarker_<ContainerAllocator>, typename ContainerAllocator::template rebind<visualization_msgs::msg::InteractiveMarker_<ContainerAllocator>>::other>;
  _markers_type markers;

  // setters for named parameter idiom
  Type & set__sequence_number(
    const uint64_t & _arg)
  {
    this->sequence_number = _arg;
    return *this;
  }
  Type & set__markers(
    const std::vector<visualization_msgs::msg::InteractiveMarker_<ContainerAllocator>, typename ContainerAllocator::template rebind<visualization_msgs::msg::InteractiveMarker_<ContainerAllocator>>::other> & _arg)
  {
    this->markers = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    visualization_msgs::srv::GetInteractiveMarkers_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const visualization_msgs::srv::GetInteractiveMarkers_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<visualization_msgs::srv::GetInteractiveMarkers_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<visualization_msgs::srv::GetInteractiveMarkers_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      visualization_msgs::srv::GetInteractiveMarkers_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<visualization_msgs::srv::GetInteractiveMarkers_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      visualization_msgs::srv::GetInteractiveMarkers_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<visualization_msgs::srv::GetInteractiveMarkers_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<visualization_msgs::srv::GetInteractiveMarkers_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<visualization_msgs::srv::GetInteractiveMarkers_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__visualization_msgs__srv__GetInteractiveMarkers_Response
    std::shared_ptr<visualization_msgs::srv::GetInteractiveMarkers_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__visualization_msgs__srv__GetInteractiveMarkers_Response
    std::shared_ptr<visualization_msgs::srv::GetInteractiveMarkers_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetInteractiveMarkers_Response_ & other) const
  {
    if (this->sequence_number != other.sequence_number) {
      return false;
    }
    if (this->markers != other.markers) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetInteractiveMarkers_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetInteractiveMarkers_Response_

// alias to use template instance with default allocator
using GetInteractiveMarkers_Response =
  visualization_msgs::srv::GetInteractiveMarkers_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace visualization_msgs

namespace visualization_msgs
{

namespace srv
{

struct GetInteractiveMarkers
{
  using Request = visualization_msgs::srv::GetInteractiveMarkers_Request;
  using Response = visualization_msgs::srv::GetInteractiveMarkers_Response;
};

}  // namespace srv

}  // namespace visualization_msgs

#endif  // VISUALIZATION_MSGS__SRV__DETAIL__GET_INTERACTIVE_MARKERS__STRUCT_HPP_

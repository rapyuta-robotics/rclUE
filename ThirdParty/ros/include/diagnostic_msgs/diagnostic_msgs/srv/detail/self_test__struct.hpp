// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from diagnostic_msgs:srv/SelfTest.idl
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__SRV__DETAIL__SELF_TEST__STRUCT_HPP_
#define DIAGNOSTIC_MSGS__SRV__DETAIL__SELF_TEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__diagnostic_msgs__srv__SelfTest_Request __attribute__((deprecated))
#else
# define DEPRECATED__diagnostic_msgs__srv__SelfTest_Request __declspec(deprecated)
#endif

namespace diagnostic_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SelfTest_Request_
{
  using Type = SelfTest_Request_<ContainerAllocator>;

  explicit SelfTest_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit SelfTest_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    diagnostic_msgs::srv::SelfTest_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const diagnostic_msgs::srv::SelfTest_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<diagnostic_msgs::srv::SelfTest_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<diagnostic_msgs::srv::SelfTest_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      diagnostic_msgs::srv::SelfTest_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<diagnostic_msgs::srv::SelfTest_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      diagnostic_msgs::srv::SelfTest_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<diagnostic_msgs::srv::SelfTest_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<diagnostic_msgs::srv::SelfTest_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<diagnostic_msgs::srv::SelfTest_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__diagnostic_msgs__srv__SelfTest_Request
    std::shared_ptr<diagnostic_msgs::srv::SelfTest_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__diagnostic_msgs__srv__SelfTest_Request
    std::shared_ptr<diagnostic_msgs::srv::SelfTest_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SelfTest_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const SelfTest_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SelfTest_Request_

// alias to use template instance with default allocator
using SelfTest_Request =
  diagnostic_msgs::srv::SelfTest_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace diagnostic_msgs


// Include directives for member types
// Member 'status'
#include "diagnostic_msgs/msg/detail/diagnostic_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__diagnostic_msgs__srv__SelfTest_Response __attribute__((deprecated))
#else
# define DEPRECATED__diagnostic_msgs__srv__SelfTest_Response __declspec(deprecated)
#endif

namespace diagnostic_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SelfTest_Response_
{
  using Type = SelfTest_Response_<ContainerAllocator>;

  explicit SelfTest_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->passed = 0;
    }
  }

  explicit SelfTest_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->passed = 0;
    }
  }

  // field types and members
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _passed_type =
    unsigned char;
  _passed_type passed;
  using _status_type =
    std::vector<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>>>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__passed(
    const unsigned char & _arg)
  {
    this->passed = _arg;
    return *this;
  }
  Type & set__status(
    const std::vector<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>>> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    diagnostic_msgs::srv::SelfTest_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const diagnostic_msgs::srv::SelfTest_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<diagnostic_msgs::srv::SelfTest_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<diagnostic_msgs::srv::SelfTest_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      diagnostic_msgs::srv::SelfTest_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<diagnostic_msgs::srv::SelfTest_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      diagnostic_msgs::srv::SelfTest_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<diagnostic_msgs::srv::SelfTest_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<diagnostic_msgs::srv::SelfTest_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<diagnostic_msgs::srv::SelfTest_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__diagnostic_msgs__srv__SelfTest_Response
    std::shared_ptr<diagnostic_msgs::srv::SelfTest_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__diagnostic_msgs__srv__SelfTest_Response
    std::shared_ptr<diagnostic_msgs::srv::SelfTest_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SelfTest_Response_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->passed != other.passed) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SelfTest_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SelfTest_Response_

// alias to use template instance with default allocator
using SelfTest_Response =
  diagnostic_msgs::srv::SelfTest_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace diagnostic_msgs

namespace diagnostic_msgs
{

namespace srv
{

struct SelfTest
{
  using Request = diagnostic_msgs::srv::SelfTest_Request;
  using Response = diagnostic_msgs::srv::SelfTest_Response;
};

}  // namespace srv

}  // namespace diagnostic_msgs

#endif  // DIAGNOSTIC_MSGS__SRV__DETAIL__SELF_TEST__STRUCT_HPP_

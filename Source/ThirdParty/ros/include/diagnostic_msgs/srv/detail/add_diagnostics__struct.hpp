// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from diagnostic_msgs:srv/AddDiagnostics.idl
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__SRV__DETAIL__ADD_DIAGNOSTICS__STRUCT_HPP_
#define DIAGNOSTIC_MSGS__SRV__DETAIL__ADD_DIAGNOSTICS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__diagnostic_msgs__srv__AddDiagnostics_Request __attribute__((deprecated))
#else
# define DEPRECATED__diagnostic_msgs__srv__AddDiagnostics_Request __declspec(deprecated)
#endif

namespace diagnostic_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AddDiagnostics_Request_
{
  using Type = AddDiagnostics_Request_<ContainerAllocator>;

  explicit AddDiagnostics_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->load_namespace = "";
    }
  }

  explicit AddDiagnostics_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : load_namespace(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->load_namespace = "";
    }
  }

  // field types and members
  using _load_namespace_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _load_namespace_type load_namespace;

  // setters for named parameter idiom
  Type & set__load_namespace(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->load_namespace = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    diagnostic_msgs::srv::AddDiagnostics_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const diagnostic_msgs::srv::AddDiagnostics_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<diagnostic_msgs::srv::AddDiagnostics_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<diagnostic_msgs::srv::AddDiagnostics_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      diagnostic_msgs::srv::AddDiagnostics_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<diagnostic_msgs::srv::AddDiagnostics_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      diagnostic_msgs::srv::AddDiagnostics_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<diagnostic_msgs::srv::AddDiagnostics_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<diagnostic_msgs::srv::AddDiagnostics_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<diagnostic_msgs::srv::AddDiagnostics_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__diagnostic_msgs__srv__AddDiagnostics_Request
    std::shared_ptr<diagnostic_msgs::srv::AddDiagnostics_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__diagnostic_msgs__srv__AddDiagnostics_Request
    std::shared_ptr<diagnostic_msgs::srv::AddDiagnostics_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AddDiagnostics_Request_ & other) const
  {
    if (this->load_namespace != other.load_namespace) {
      return false;
    }
    return true;
  }
  bool operator!=(const AddDiagnostics_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AddDiagnostics_Request_

// alias to use template instance with default allocator
using AddDiagnostics_Request =
  diagnostic_msgs::srv::AddDiagnostics_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace diagnostic_msgs


#ifndef _WIN32
# define DEPRECATED__diagnostic_msgs__srv__AddDiagnostics_Response __attribute__((deprecated))
#else
# define DEPRECATED__diagnostic_msgs__srv__AddDiagnostics_Response __declspec(deprecated)
#endif

namespace diagnostic_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AddDiagnostics_Response_
{
  using Type = AddDiagnostics_Response_<ContainerAllocator>;

  explicit AddDiagnostics_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit AddDiagnostics_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    diagnostic_msgs::srv::AddDiagnostics_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const diagnostic_msgs::srv::AddDiagnostics_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<diagnostic_msgs::srv::AddDiagnostics_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<diagnostic_msgs::srv::AddDiagnostics_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      diagnostic_msgs::srv::AddDiagnostics_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<diagnostic_msgs::srv::AddDiagnostics_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      diagnostic_msgs::srv::AddDiagnostics_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<diagnostic_msgs::srv::AddDiagnostics_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<diagnostic_msgs::srv::AddDiagnostics_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<diagnostic_msgs::srv::AddDiagnostics_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__diagnostic_msgs__srv__AddDiagnostics_Response
    std::shared_ptr<diagnostic_msgs::srv::AddDiagnostics_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__diagnostic_msgs__srv__AddDiagnostics_Response
    std::shared_ptr<diagnostic_msgs::srv::AddDiagnostics_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AddDiagnostics_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const AddDiagnostics_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AddDiagnostics_Response_

// alias to use template instance with default allocator
using AddDiagnostics_Response =
  diagnostic_msgs::srv::AddDiagnostics_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace diagnostic_msgs

namespace diagnostic_msgs
{

namespace srv
{

struct AddDiagnostics
{
  using Request = diagnostic_msgs::srv::AddDiagnostics_Request;
  using Response = diagnostic_msgs::srv::AddDiagnostics_Response;
};

}  // namespace srv

}  // namespace diagnostic_msgs

#endif  // DIAGNOSTIC_MSGS__SRV__DETAIL__ADD_DIAGNOSTICS__STRUCT_HPP_

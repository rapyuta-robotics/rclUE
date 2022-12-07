// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ue_msgs:srv/Attach.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__SRV__DETAIL__ATTACH__STRUCT_HPP_
#define UE_MSGS__SRV__DETAIL__ATTACH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ue_msgs__srv__Attach_Request __attribute__((deprecated))
#else
# define DEPRECATED__ue_msgs__srv__Attach_Request __declspec(deprecated)
#endif

namespace ue_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Attach_Request_
{
  using Type = Attach_Request_<ContainerAllocator>;

  explicit Attach_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name1 = "";
      this->name2 = "";
    }
  }

  explicit Attach_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name1(_alloc),
    name2(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name1 = "";
      this->name2 = "";
    }
  }

  // field types and members
  using _name1_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name1_type name1;
  using _name2_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name2_type name2;

  // setters for named parameter idiom
  Type & set__name1(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name1 = _arg;
    return *this;
  }
  Type & set__name2(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ue_msgs::srv::Attach_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ue_msgs::srv::Attach_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ue_msgs::srv::Attach_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ue_msgs::srv::Attach_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ue_msgs::srv::Attach_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::srv::Attach_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ue_msgs::srv::Attach_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::srv::Attach_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ue_msgs::srv::Attach_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ue_msgs::srv::Attach_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ue_msgs__srv__Attach_Request
    std::shared_ptr<ue_msgs::srv::Attach_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ue_msgs__srv__Attach_Request
    std::shared_ptr<ue_msgs::srv::Attach_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Attach_Request_ & other) const
  {
    if (this->name1 != other.name1) {
      return false;
    }
    if (this->name2 != other.name2) {
      return false;
    }
    return true;
  }
  bool operator!=(const Attach_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Attach_Request_

// alias to use template instance with default allocator
using Attach_Request =
  ue_msgs::srv::Attach_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ue_msgs


#ifndef _WIN32
# define DEPRECATED__ue_msgs__srv__Attach_Response __attribute__((deprecated))
#else
# define DEPRECATED__ue_msgs__srv__Attach_Response __declspec(deprecated)
#endif

namespace ue_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Attach_Response_
{
  using Type = Attach_Response_<ContainerAllocator>;

  explicit Attach_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit Attach_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ue_msgs::srv::Attach_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ue_msgs::srv::Attach_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ue_msgs::srv::Attach_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ue_msgs::srv::Attach_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ue_msgs::srv::Attach_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::srv::Attach_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ue_msgs::srv::Attach_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::srv::Attach_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ue_msgs::srv::Attach_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ue_msgs::srv::Attach_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ue_msgs__srv__Attach_Response
    std::shared_ptr<ue_msgs::srv::Attach_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ue_msgs__srv__Attach_Response
    std::shared_ptr<ue_msgs::srv::Attach_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Attach_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const Attach_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Attach_Response_

// alias to use template instance with default allocator
using Attach_Response =
  ue_msgs::srv::Attach_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ue_msgs

namespace ue_msgs
{

namespace srv
{

struct Attach
{
  using Request = ue_msgs::srv::Attach_Request;
  using Response = ue_msgs::srv::Attach_Response;
};

}  // namespace srv

}  // namespace ue_msgs

#endif  // UE_MSGS__SRV__DETAIL__ATTACH__STRUCT_HPP_

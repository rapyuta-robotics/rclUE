// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pcl_msgs:srv/UpdateFilename.idl
// generated code does not contain a copyright notice

#ifndef PCL_MSGS__SRV__DETAIL__UPDATE_FILENAME__STRUCT_HPP_
#define PCL_MSGS__SRV__DETAIL__UPDATE_FILENAME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pcl_msgs__srv__UpdateFilename_Request __attribute__((deprecated))
#else
# define DEPRECATED__pcl_msgs__srv__UpdateFilename_Request __declspec(deprecated)
#endif

namespace pcl_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UpdateFilename_Request_
{
  using Type = UpdateFilename_Request_<ContainerAllocator>;

  explicit UpdateFilename_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filename = "";
    }
  }

  explicit UpdateFilename_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : filename(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filename = "";
    }
  }

  // field types and members
  using _filename_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _filename_type filename;

  // setters for named parameter idiom
  Type & set__filename(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->filename = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pcl_msgs::srv::UpdateFilename_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pcl_msgs::srv::UpdateFilename_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pcl_msgs::srv::UpdateFilename_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pcl_msgs::srv::UpdateFilename_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pcl_msgs::srv::UpdateFilename_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pcl_msgs::srv::UpdateFilename_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pcl_msgs::srv::UpdateFilename_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pcl_msgs::srv::UpdateFilename_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pcl_msgs::srv::UpdateFilename_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pcl_msgs::srv::UpdateFilename_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pcl_msgs__srv__UpdateFilename_Request
    std::shared_ptr<pcl_msgs::srv::UpdateFilename_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pcl_msgs__srv__UpdateFilename_Request
    std::shared_ptr<pcl_msgs::srv::UpdateFilename_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UpdateFilename_Request_ & other) const
  {
    if (this->filename != other.filename) {
      return false;
    }
    return true;
  }
  bool operator!=(const UpdateFilename_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UpdateFilename_Request_

// alias to use template instance with default allocator
using UpdateFilename_Request =
  pcl_msgs::srv::UpdateFilename_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pcl_msgs


#ifndef _WIN32
# define DEPRECATED__pcl_msgs__srv__UpdateFilename_Response __attribute__((deprecated))
#else
# define DEPRECATED__pcl_msgs__srv__UpdateFilename_Response __declspec(deprecated)
#endif

namespace pcl_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UpdateFilename_Response_
{
  using Type = UpdateFilename_Response_<ContainerAllocator>;

  explicit UpdateFilename_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit UpdateFilename_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    pcl_msgs::srv::UpdateFilename_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pcl_msgs::srv::UpdateFilename_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pcl_msgs::srv::UpdateFilename_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pcl_msgs::srv::UpdateFilename_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pcl_msgs::srv::UpdateFilename_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pcl_msgs::srv::UpdateFilename_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pcl_msgs::srv::UpdateFilename_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pcl_msgs::srv::UpdateFilename_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pcl_msgs::srv::UpdateFilename_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pcl_msgs::srv::UpdateFilename_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pcl_msgs__srv__UpdateFilename_Response
    std::shared_ptr<pcl_msgs::srv::UpdateFilename_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pcl_msgs__srv__UpdateFilename_Response
    std::shared_ptr<pcl_msgs::srv::UpdateFilename_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UpdateFilename_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const UpdateFilename_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UpdateFilename_Response_

// alias to use template instance with default allocator
using UpdateFilename_Response =
  pcl_msgs::srv::UpdateFilename_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pcl_msgs

namespace pcl_msgs
{

namespace srv
{

struct UpdateFilename
{
  using Request = pcl_msgs::srv::UpdateFilename_Request;
  using Response = pcl_msgs::srv::UpdateFilename_Response;
};

}  // namespace srv

}  // namespace pcl_msgs

#endif  // PCL_MSGS__SRV__DETAIL__UPDATE_FILENAME__STRUCT_HPP_

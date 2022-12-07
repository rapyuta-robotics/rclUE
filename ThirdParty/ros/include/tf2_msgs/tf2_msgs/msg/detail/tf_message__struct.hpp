// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tf2_msgs:msg/TFMessage.idl
// generated code does not contain a copyright notice

#ifndef TF2_MSGS__MSG__DETAIL__TF_MESSAGE__STRUCT_HPP_
#define TF2_MSGS__MSG__DETAIL__TF_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'transforms'
#include "geometry_msgs/msg/detail/transform_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tf2_msgs__msg__TFMessage __attribute__((deprecated))
#else
# define DEPRECATED__tf2_msgs__msg__TFMessage __declspec(deprecated)
#endif

namespace tf2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TFMessage_
{
  using Type = TFMessage_<ContainerAllocator>;

  explicit TFMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit TFMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _transforms_type =
    std::vector<geometry_msgs::msg::TransformStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::TransformStamped_<ContainerAllocator>>>;
  _transforms_type transforms;

  // setters for named parameter idiom
  Type & set__transforms(
    const std::vector<geometry_msgs::msg::TransformStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::TransformStamped_<ContainerAllocator>>> & _arg)
  {
    this->transforms = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tf2_msgs::msg::TFMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const tf2_msgs::msg::TFMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tf2_msgs::msg::TFMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tf2_msgs::msg::TFMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tf2_msgs::msg::TFMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tf2_msgs::msg::TFMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tf2_msgs::msg::TFMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tf2_msgs::msg::TFMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tf2_msgs::msg::TFMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tf2_msgs::msg::TFMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tf2_msgs__msg__TFMessage
    std::shared_ptr<tf2_msgs::msg::TFMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tf2_msgs__msg__TFMessage
    std::shared_ptr<tf2_msgs::msg::TFMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TFMessage_ & other) const
  {
    if (this->transforms != other.transforms) {
      return false;
    }
    return true;
  }
  bool operator!=(const TFMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TFMessage_

// alias to use template instance with default allocator
using TFMessage =
  tf2_msgs::msg::TFMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tf2_msgs

#endif  // TF2_MSGS__MSG__DETAIL__TF_MESSAGE__STRUCT_HPP_

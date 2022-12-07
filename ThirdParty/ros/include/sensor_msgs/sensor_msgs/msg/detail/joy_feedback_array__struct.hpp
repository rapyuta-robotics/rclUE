// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sensor_msgs:msg/JoyFeedbackArray.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__JOY_FEEDBACK_ARRAY__STRUCT_HPP_
#define SENSOR_MSGS__MSG__DETAIL__JOY_FEEDBACK_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'array'
#include "sensor_msgs/msg/detail/joy_feedback__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sensor_msgs__msg__JoyFeedbackArray __attribute__((deprecated))
#else
# define DEPRECATED__sensor_msgs__msg__JoyFeedbackArray __declspec(deprecated)
#endif

namespace sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JoyFeedbackArray_
{
  using Type = JoyFeedbackArray_<ContainerAllocator>;

  explicit JoyFeedbackArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit JoyFeedbackArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _array_type =
    std::vector<sensor_msgs::msg::JoyFeedback_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::JoyFeedback_<ContainerAllocator>>>;
  _array_type array;

  // setters for named parameter idiom
  Type & set__array(
    const std::vector<sensor_msgs::msg::JoyFeedback_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::JoyFeedback_<ContainerAllocator>>> & _arg)
  {
    this->array = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sensor_msgs::msg::JoyFeedbackArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const sensor_msgs::msg::JoyFeedbackArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sensor_msgs::msg::JoyFeedbackArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sensor_msgs::msg::JoyFeedbackArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sensor_msgs::msg::JoyFeedbackArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sensor_msgs::msg::JoyFeedbackArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sensor_msgs::msg::JoyFeedbackArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sensor_msgs::msg::JoyFeedbackArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sensor_msgs::msg::JoyFeedbackArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sensor_msgs::msg::JoyFeedbackArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sensor_msgs__msg__JoyFeedbackArray
    std::shared_ptr<sensor_msgs::msg::JoyFeedbackArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sensor_msgs__msg__JoyFeedbackArray
    std::shared_ptr<sensor_msgs::msg::JoyFeedbackArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JoyFeedbackArray_ & other) const
  {
    if (this->array != other.array) {
      return false;
    }
    return true;
  }
  bool operator!=(const JoyFeedbackArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JoyFeedbackArray_

// alias to use template instance with default allocator
using JoyFeedbackArray =
  sensor_msgs::msg::JoyFeedbackArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__DETAIL__JOY_FEEDBACK_ARRAY__STRUCT_HPP_

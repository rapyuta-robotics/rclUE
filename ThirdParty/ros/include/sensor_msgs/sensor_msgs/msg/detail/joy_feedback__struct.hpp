// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sensor_msgs:msg/JoyFeedback.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__JOY_FEEDBACK__STRUCT_HPP_
#define SENSOR_MSGS__MSG__DETAIL__JOY_FEEDBACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sensor_msgs__msg__JoyFeedback __attribute__((deprecated))
#else
# define DEPRECATED__sensor_msgs__msg__JoyFeedback __declspec(deprecated)
#endif

namespace sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JoyFeedback_
{
  using Type = JoyFeedback_<ContainerAllocator>;

  explicit JoyFeedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->id = 0;
      this->intensity = 0.0f;
    }
  }

  explicit JoyFeedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->id = 0;
      this->intensity = 0.0f;
    }
  }

  // field types and members
  using _type_type =
    uint8_t;
  _type_type type;
  using _id_type =
    uint8_t;
  _id_type id;
  using _intensity_type =
    float;
  _intensity_type intensity;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__intensity(
    const float & _arg)
  {
    this->intensity = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t TYPE_LED =
    0u;
  static constexpr uint8_t TYPE_RUMBLE =
    1u;
  static constexpr uint8_t TYPE_BUZZER =
    2u;

  // pointer types
  using RawPtr =
    sensor_msgs::msg::JoyFeedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const sensor_msgs::msg::JoyFeedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sensor_msgs::msg::JoyFeedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sensor_msgs::msg::JoyFeedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sensor_msgs::msg::JoyFeedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sensor_msgs::msg::JoyFeedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sensor_msgs::msg::JoyFeedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sensor_msgs::msg::JoyFeedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sensor_msgs::msg::JoyFeedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sensor_msgs::msg::JoyFeedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sensor_msgs__msg__JoyFeedback
    std::shared_ptr<sensor_msgs::msg::JoyFeedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sensor_msgs__msg__JoyFeedback
    std::shared_ptr<sensor_msgs::msg::JoyFeedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JoyFeedback_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->intensity != other.intensity) {
      return false;
    }
    return true;
  }
  bool operator!=(const JoyFeedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JoyFeedback_

// alias to use template instance with default allocator
using JoyFeedback =
  sensor_msgs::msg::JoyFeedback_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t JoyFeedback_<ContainerAllocator>::TYPE_LED;
template<typename ContainerAllocator>
constexpr uint8_t JoyFeedback_<ContainerAllocator>::TYPE_RUMBLE;
template<typename ContainerAllocator>
constexpr uint8_t JoyFeedback_<ContainerAllocator>::TYPE_BUZZER;

}  // namespace msg

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__DETAIL__JOY_FEEDBACK__STRUCT_HPP_

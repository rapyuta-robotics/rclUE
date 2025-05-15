// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tf2_msgs:msg/TF2Error.idl
// generated code does not contain a copyright notice

#ifndef TF2_MSGS__MSG__DETAIL__TF2_ERROR__STRUCT_HPP_
#define TF2_MSGS__MSG__DETAIL__TF2_ERROR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tf2_msgs__msg__TF2Error __attribute__((deprecated))
#else
# define DEPRECATED__tf2_msgs__msg__TF2Error __declspec(deprecated)
#endif

namespace tf2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TF2Error_
{
  using Type = TF2Error_<ContainerAllocator>;

  explicit TF2Error_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error = 0;
      this->error_string = "";
    }
  }

  explicit TF2Error_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_string(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error = 0;
      this->error_string = "";
    }
  }

  // field types and members
  using _error_type =
    uint8_t;
  _error_type error;
  using _error_string_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_string_type error_string;

  // setters for named parameter idiom
  Type & set__error(
    const uint8_t & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__error_string(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_string = _arg;
    return *this;
  }

  // constant declarations
  // guard against 'NO_ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(NO_ERROR)
#    pragma push_macro("NO_ERROR")
#    undef NO_ERROR
#  endif
#endif
  static constexpr uint8_t NO_ERROR =
    0u;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("NO_ERROR")
#endif
  static constexpr uint8_t LOOKUP_ERROR =
    1u;
  static constexpr uint8_t CONNECTIVITY_ERROR =
    2u;
  static constexpr uint8_t EXTRAPOLATION_ERROR =
    3u;
  static constexpr uint8_t INVALID_ARGUMENT_ERROR =
    4u;
  static constexpr uint8_t TIMEOUT_ERROR =
    5u;
  static constexpr uint8_t TRANSFORM_ERROR =
    6u;

  // pointer types
  using RawPtr =
    tf2_msgs::msg::TF2Error_<ContainerAllocator> *;
  using ConstRawPtr =
    const tf2_msgs::msg::TF2Error_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tf2_msgs::msg::TF2Error_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tf2_msgs::msg::TF2Error_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tf2_msgs::msg::TF2Error_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tf2_msgs::msg::TF2Error_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tf2_msgs::msg::TF2Error_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tf2_msgs::msg::TF2Error_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tf2_msgs::msg::TF2Error_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tf2_msgs::msg::TF2Error_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tf2_msgs__msg__TF2Error
    std::shared_ptr<tf2_msgs::msg::TF2Error_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tf2_msgs__msg__TF2Error
    std::shared_ptr<tf2_msgs::msg::TF2Error_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TF2Error_ & other) const
  {
    if (this->error != other.error) {
      return false;
    }
    if (this->error_string != other.error_string) {
      return false;
    }
    return true;
  }
  bool operator!=(const TF2Error_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TF2Error_

// alias to use template instance with default allocator
using TF2Error =
  tf2_msgs::msg::TF2Error_<std::allocator<void>>;

// constant definitions
// guard against 'NO_ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(NO_ERROR)
#    pragma push_macro("NO_ERROR")
#    undef NO_ERROR
#  endif
#endif
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TF2Error_<ContainerAllocator>::NO_ERROR;
#endif  // __cplusplus < 201703L
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("NO_ERROR")
#endif
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TF2Error_<ContainerAllocator>::LOOKUP_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TF2Error_<ContainerAllocator>::CONNECTIVITY_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TF2Error_<ContainerAllocator>::EXTRAPOLATION_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TF2Error_<ContainerAllocator>::INVALID_ARGUMENT_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TF2Error_<ContainerAllocator>::TIMEOUT_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TF2Error_<ContainerAllocator>::TRANSFORM_ERROR;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace tf2_msgs

#endif  // TF2_MSGS__MSG__DETAIL__TF2_ERROR__STRUCT_HPP_

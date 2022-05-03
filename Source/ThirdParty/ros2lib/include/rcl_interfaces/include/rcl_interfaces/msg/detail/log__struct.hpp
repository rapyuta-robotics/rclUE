// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rcl_interfaces:msg/Log.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__MSG__DETAIL__LOG__STRUCT_HPP_
#define RCL_INTERFACES__MSG__DETAIL__LOG__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rcl_interfaces__msg__Log __attribute__((deprecated))
#else
# define DEPRECATED__rcl_interfaces__msg__Log __declspec(deprecated)
#endif

namespace rcl_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Log_
{
  using Type = Log_<ContainerAllocator>;

  explicit Log_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->level = 0;
      this->name = "";
      this->msg = "";
      this->file = "";
      this->function = "";
      this->line = 0ul;
    }
  }

  explicit Log_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    name(_alloc),
    msg(_alloc),
    file(_alloc),
    function(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->level = 0;
      this->name = "";
      this->msg = "";
      this->file = "";
      this->function = "";
      this->line = 0ul;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _level_type =
    uint8_t;
  _level_type level;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;
  using _msg_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _msg_type msg;
  using _file_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _file_type file;
  using _function_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _function_type function;
  using _line_type =
    uint32_t;
  _line_type line;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__level(
    const uint8_t & _arg)
  {
    this->level = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__msg(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->msg = _arg;
    return *this;
  }
  Type & set__file(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->file = _arg;
    return *this;
  }
  Type & set__function(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->function = _arg;
    return *this;
  }
  Type & set__line(
    const uint32_t & _arg)
  {
    this->line = _arg;
    return *this;
  }

  // constant declarations
  static constexpr unsigned char DEBUG =
    10;
  static constexpr unsigned char INFO =
    20;
  static constexpr unsigned char WARN =
    30;
  // guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
  static constexpr unsigned char ERROR =
    40;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif
  static constexpr unsigned char FATAL =
    50;

  // pointer types
  using RawPtr =
    rcl_interfaces::msg::Log_<ContainerAllocator> *;
  using ConstRawPtr =
    const rcl_interfaces::msg::Log_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rcl_interfaces::msg::Log_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rcl_interfaces::msg::Log_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rcl_interfaces::msg::Log_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rcl_interfaces::msg::Log_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rcl_interfaces::msg::Log_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rcl_interfaces::msg::Log_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rcl_interfaces::msg::Log_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rcl_interfaces::msg::Log_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rcl_interfaces__msg__Log
    std::shared_ptr<rcl_interfaces::msg::Log_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rcl_interfaces__msg__Log
    std::shared_ptr<rcl_interfaces::msg::Log_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Log_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->level != other.level) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->msg != other.msg) {
      return false;
    }
    if (this->file != other.file) {
      return false;
    }
    if (this->function != other.function) {
      return false;
    }
    if (this->line != other.line) {
      return false;
    }
    return true;
  }
  bool operator!=(const Log_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Log_

// alias to use template instance with default allocator
using Log =
  rcl_interfaces::msg::Log_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr unsigned char Log_<ContainerAllocator>::DEBUG;
template<typename ContainerAllocator>
constexpr unsigned char Log_<ContainerAllocator>::INFO;
template<typename ContainerAllocator>
constexpr unsigned char Log_<ContainerAllocator>::WARN;
// guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
template<typename ContainerAllocator>
constexpr unsigned char Log_<ContainerAllocator>::ERROR;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif
template<typename ContainerAllocator>
constexpr unsigned char Log_<ContainerAllocator>::FATAL;

}  // namespace msg

}  // namespace rcl_interfaces

#endif  // RCL_INTERFACES__MSG__DETAIL__LOG__STRUCT_HPP_

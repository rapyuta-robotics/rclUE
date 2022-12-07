// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from visualization_msgs:msg/ImageMarker.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__IMAGE_MARKER__STRUCT_HPP_
#define VISUALIZATION_MSGS__MSG__DETAIL__IMAGE_MARKER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'position'
// Member 'points'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'outline_color'
// Member 'fill_color'
// Member 'outline_colors'
#include "std_msgs/msg/detail/color_rgba__struct.hpp"
// Member 'lifetime'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__visualization_msgs__msg__ImageMarker __attribute__((deprecated))
#else
# define DEPRECATED__visualization_msgs__msg__ImageMarker __declspec(deprecated)
#endif

namespace visualization_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImageMarker_
{
  using Type = ImageMarker_<ContainerAllocator>;

  explicit ImageMarker_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    position(_init),
    outline_color(_init),
    fill_color(_init),
    lifetime(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ns = "";
      this->id = 0l;
      this->type = 0l;
      this->action = 0l;
      this->scale = 0.0f;
      this->filled = 0;
    }
  }

  explicit ImageMarker_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    ns(_alloc),
    position(_alloc, _init),
    outline_color(_alloc, _init),
    fill_color(_alloc, _init),
    lifetime(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ns = "";
      this->id = 0l;
      this->type = 0l;
      this->action = 0l;
      this->scale = 0.0f;
      this->filled = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ns_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ns_type ns;
  using _id_type =
    int32_t;
  _id_type id;
  using _type_type =
    int32_t;
  _type_type type;
  using _action_type =
    int32_t;
  _action_type action;
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _scale_type =
    float;
  _scale_type scale;
  using _outline_color_type =
    std_msgs::msg::ColorRGBA_<ContainerAllocator>;
  _outline_color_type outline_color;
  using _filled_type =
    uint8_t;
  _filled_type filled;
  using _fill_color_type =
    std_msgs::msg::ColorRGBA_<ContainerAllocator>;
  _fill_color_type fill_color;
  using _lifetime_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _lifetime_type lifetime;
  using _points_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _points_type points;
  using _outline_colors_type =
    std::vector<std_msgs::msg::ColorRGBA_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std_msgs::msg::ColorRGBA_<ContainerAllocator>>>;
  _outline_colors_type outline_colors;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ns(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ns = _arg;
    return *this;
  }
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__type(
    const int32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__action(
    const int32_t & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__scale(
    const float & _arg)
  {
    this->scale = _arg;
    return *this;
  }
  Type & set__outline_color(
    const std_msgs::msg::ColorRGBA_<ContainerAllocator> & _arg)
  {
    this->outline_color = _arg;
    return *this;
  }
  Type & set__filled(
    const uint8_t & _arg)
  {
    this->filled = _arg;
    return *this;
  }
  Type & set__fill_color(
    const std_msgs::msg::ColorRGBA_<ContainerAllocator> & _arg)
  {
    this->fill_color = _arg;
    return *this;
  }
  Type & set__lifetime(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->lifetime = _arg;
    return *this;
  }
  Type & set__points(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->points = _arg;
    return *this;
  }
  Type & set__outline_colors(
    const std::vector<std_msgs::msg::ColorRGBA_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std_msgs::msg::ColorRGBA_<ContainerAllocator>>> & _arg)
  {
    this->outline_colors = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t CIRCLE =
    0;
  static constexpr int32_t LINE_STRIP =
    1;
  static constexpr int32_t LINE_LIST =
    2;
  static constexpr int32_t POLYGON =
    3;
  static constexpr int32_t POINTS =
    4;
  static constexpr int32_t ADD =
    0;
  static constexpr int32_t REMOVE =
    1;

  // pointer types
  using RawPtr =
    visualization_msgs::msg::ImageMarker_<ContainerAllocator> *;
  using ConstRawPtr =
    const visualization_msgs::msg::ImageMarker_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<visualization_msgs::msg::ImageMarker_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<visualization_msgs::msg::ImageMarker_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      visualization_msgs::msg::ImageMarker_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<visualization_msgs::msg::ImageMarker_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      visualization_msgs::msg::ImageMarker_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<visualization_msgs::msg::ImageMarker_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<visualization_msgs::msg::ImageMarker_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<visualization_msgs::msg::ImageMarker_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__visualization_msgs__msg__ImageMarker
    std::shared_ptr<visualization_msgs::msg::ImageMarker_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__visualization_msgs__msg__ImageMarker
    std::shared_ptr<visualization_msgs::msg::ImageMarker_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImageMarker_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ns != other.ns) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->action != other.action) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->scale != other.scale) {
      return false;
    }
    if (this->outline_color != other.outline_color) {
      return false;
    }
    if (this->filled != other.filled) {
      return false;
    }
    if (this->fill_color != other.fill_color) {
      return false;
    }
    if (this->lifetime != other.lifetime) {
      return false;
    }
    if (this->points != other.points) {
      return false;
    }
    if (this->outline_colors != other.outline_colors) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImageMarker_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImageMarker_

// alias to use template instance with default allocator
using ImageMarker =
  visualization_msgs::msg::ImageMarker_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t ImageMarker_<ContainerAllocator>::CIRCLE;
template<typename ContainerAllocator>
constexpr int32_t ImageMarker_<ContainerAllocator>::LINE_STRIP;
template<typename ContainerAllocator>
constexpr int32_t ImageMarker_<ContainerAllocator>::LINE_LIST;
template<typename ContainerAllocator>
constexpr int32_t ImageMarker_<ContainerAllocator>::POLYGON;
template<typename ContainerAllocator>
constexpr int32_t ImageMarker_<ContainerAllocator>::POINTS;
template<typename ContainerAllocator>
constexpr int32_t ImageMarker_<ContainerAllocator>::ADD;
template<typename ContainerAllocator>
constexpr int32_t ImageMarker_<ContainerAllocator>::REMOVE;

}  // namespace msg

}  // namespace visualization_msgs

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__IMAGE_MARKER__STRUCT_HPP_

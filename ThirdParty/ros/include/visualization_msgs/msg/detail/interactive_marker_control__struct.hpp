// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from visualization_msgs:msg/InteractiveMarkerControl.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_CONTROL__STRUCT_HPP_
#define VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_CONTROL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"
// Member 'markers'
#include "visualization_msgs/msg/detail/marker__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__visualization_msgs__msg__InteractiveMarkerControl __attribute__((deprecated))
#else
# define DEPRECATED__visualization_msgs__msg__InteractiveMarkerControl __declspec(deprecated)
#endif

namespace visualization_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InteractiveMarkerControl_
{
  using Type = InteractiveMarkerControl_<ContainerAllocator>;

  explicit InteractiveMarkerControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : orientation(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->orientation_mode = 0;
      this->interaction_mode = 0;
      this->always_visible = false;
      this->independent_marker_orientation = false;
      this->description = "";
    }
  }

  explicit InteractiveMarkerControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    orientation(_alloc, _init),
    description(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->orientation_mode = 0;
      this->interaction_mode = 0;
      this->always_visible = false;
      this->independent_marker_orientation = false;
      this->description = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;
  using _orientation_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _orientation_type orientation;
  using _orientation_mode_type =
    uint8_t;
  _orientation_mode_type orientation_mode;
  using _interaction_mode_type =
    uint8_t;
  _interaction_mode_type interaction_mode;
  using _always_visible_type =
    bool;
  _always_visible_type always_visible;
  using _markers_type =
    std::vector<visualization_msgs::msg::Marker_<ContainerAllocator>, typename ContainerAllocator::template rebind<visualization_msgs::msg::Marker_<ContainerAllocator>>::other>;
  _markers_type markers;
  using _independent_marker_orientation_type =
    bool;
  _independent_marker_orientation_type independent_marker_orientation;
  using _description_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _description_type description;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__orientation(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__orientation_mode(
    const uint8_t & _arg)
  {
    this->orientation_mode = _arg;
    return *this;
  }
  Type & set__interaction_mode(
    const uint8_t & _arg)
  {
    this->interaction_mode = _arg;
    return *this;
  }
  Type & set__always_visible(
    const bool & _arg)
  {
    this->always_visible = _arg;
    return *this;
  }
  Type & set__markers(
    const std::vector<visualization_msgs::msg::Marker_<ContainerAllocator>, typename ContainerAllocator::template rebind<visualization_msgs::msg::Marker_<ContainerAllocator>>::other> & _arg)
  {
    this->markers = _arg;
    return *this;
  }
  Type & set__independent_marker_orientation(
    const bool & _arg)
  {
    this->independent_marker_orientation = _arg;
    return *this;
  }
  Type & set__description(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->description = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t INHERIT =
    0u;
  static constexpr uint8_t FIXED =
    1u;
  static constexpr uint8_t VIEW_FACING =
    2u;
  static constexpr uint8_t NONE =
    0u;
  static constexpr uint8_t MENU =
    1u;
  static constexpr uint8_t BUTTON =
    2u;
  static constexpr uint8_t MOVE_AXIS =
    3u;
  static constexpr uint8_t MOVE_PLANE =
    4u;
  static constexpr uint8_t ROTATE_AXIS =
    5u;
  static constexpr uint8_t MOVE_ROTATE =
    6u;
  static constexpr uint8_t MOVE_3D =
    7u;
  static constexpr uint8_t ROTATE_3D =
    8u;
  static constexpr uint8_t MOVE_ROTATE_3D =
    9u;

  // pointer types
  using RawPtr =
    visualization_msgs::msg::InteractiveMarkerControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const visualization_msgs::msg::InteractiveMarkerControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<visualization_msgs::msg::InteractiveMarkerControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<visualization_msgs::msg::InteractiveMarkerControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      visualization_msgs::msg::InteractiveMarkerControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<visualization_msgs::msg::InteractiveMarkerControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      visualization_msgs::msg::InteractiveMarkerControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<visualization_msgs::msg::InteractiveMarkerControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<visualization_msgs::msg::InteractiveMarkerControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<visualization_msgs::msg::InteractiveMarkerControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__visualization_msgs__msg__InteractiveMarkerControl
    std::shared_ptr<visualization_msgs::msg::InteractiveMarkerControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__visualization_msgs__msg__InteractiveMarkerControl
    std::shared_ptr<visualization_msgs::msg::InteractiveMarkerControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InteractiveMarkerControl_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->orientation_mode != other.orientation_mode) {
      return false;
    }
    if (this->interaction_mode != other.interaction_mode) {
      return false;
    }
    if (this->always_visible != other.always_visible) {
      return false;
    }
    if (this->markers != other.markers) {
      return false;
    }
    if (this->independent_marker_orientation != other.independent_marker_orientation) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    return true;
  }
  bool operator!=(const InteractiveMarkerControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InteractiveMarkerControl_

// alias to use template instance with default allocator
using InteractiveMarkerControl =
  visualization_msgs::msg::InteractiveMarkerControl_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t InteractiveMarkerControl_<ContainerAllocator>::INHERIT;
template<typename ContainerAllocator>
constexpr uint8_t InteractiveMarkerControl_<ContainerAllocator>::FIXED;
template<typename ContainerAllocator>
constexpr uint8_t InteractiveMarkerControl_<ContainerAllocator>::VIEW_FACING;
template<typename ContainerAllocator>
constexpr uint8_t InteractiveMarkerControl_<ContainerAllocator>::NONE;
template<typename ContainerAllocator>
constexpr uint8_t InteractiveMarkerControl_<ContainerAllocator>::MENU;
template<typename ContainerAllocator>
constexpr uint8_t InteractiveMarkerControl_<ContainerAllocator>::BUTTON;
template<typename ContainerAllocator>
constexpr uint8_t InteractiveMarkerControl_<ContainerAllocator>::MOVE_AXIS;
template<typename ContainerAllocator>
constexpr uint8_t InteractiveMarkerControl_<ContainerAllocator>::MOVE_PLANE;
template<typename ContainerAllocator>
constexpr uint8_t InteractiveMarkerControl_<ContainerAllocator>::ROTATE_AXIS;
template<typename ContainerAllocator>
constexpr uint8_t InteractiveMarkerControl_<ContainerAllocator>::MOVE_ROTATE;
template<typename ContainerAllocator>
constexpr uint8_t InteractiveMarkerControl_<ContainerAllocator>::MOVE_3D;
template<typename ContainerAllocator>
constexpr uint8_t InteractiveMarkerControl_<ContainerAllocator>::ROTATE_3D;
template<typename ContainerAllocator>
constexpr uint8_t InteractiveMarkerControl_<ContainerAllocator>::MOVE_ROTATE_3D;

}  // namespace msg

}  // namespace visualization_msgs

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_CONTROL__STRUCT_HPP_

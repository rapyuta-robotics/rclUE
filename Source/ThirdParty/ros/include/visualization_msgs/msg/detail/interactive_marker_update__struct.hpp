// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from visualization_msgs:msg/InteractiveMarkerUpdate.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_UPDATE__STRUCT_HPP_
#define VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_UPDATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'markers'
#include "visualization_msgs/msg/detail/interactive_marker__struct.hpp"
// Member 'poses'
#include "visualization_msgs/msg/detail/interactive_marker_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__visualization_msgs__msg__InteractiveMarkerUpdate __attribute__((deprecated))
#else
# define DEPRECATED__visualization_msgs__msg__InteractiveMarkerUpdate __declspec(deprecated)
#endif

namespace visualization_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InteractiveMarkerUpdate_
{
  using Type = InteractiveMarkerUpdate_<ContainerAllocator>;

  explicit InteractiveMarkerUpdate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->server_id = "";
      this->seq_num = 0ull;
      this->type = 0;
    }
  }

  explicit InteractiveMarkerUpdate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : server_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->server_id = "";
      this->seq_num = 0ull;
      this->type = 0;
    }
  }

  // field types and members
  using _server_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _server_id_type server_id;
  using _seq_num_type =
    uint64_t;
  _seq_num_type seq_num;
  using _type_type =
    uint8_t;
  _type_type type;
  using _markers_type =
    std::vector<visualization_msgs::msg::InteractiveMarker_<ContainerAllocator>, typename ContainerAllocator::template rebind<visualization_msgs::msg::InteractiveMarker_<ContainerAllocator>>::other>;
  _markers_type markers;
  using _poses_type =
    std::vector<visualization_msgs::msg::InteractiveMarkerPose_<ContainerAllocator>, typename ContainerAllocator::template rebind<visualization_msgs::msg::InteractiveMarkerPose_<ContainerAllocator>>::other>;
  _poses_type poses;
  using _erases_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _erases_type erases;

  // setters for named parameter idiom
  Type & set__server_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->server_id = _arg;
    return *this;
  }
  Type & set__seq_num(
    const uint64_t & _arg)
  {
    this->seq_num = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__markers(
    const std::vector<visualization_msgs::msg::InteractiveMarker_<ContainerAllocator>, typename ContainerAllocator::template rebind<visualization_msgs::msg::InteractiveMarker_<ContainerAllocator>>::other> & _arg)
  {
    this->markers = _arg;
    return *this;
  }
  Type & set__poses(
    const std::vector<visualization_msgs::msg::InteractiveMarkerPose_<ContainerAllocator>, typename ContainerAllocator::template rebind<visualization_msgs::msg::InteractiveMarkerPose_<ContainerAllocator>>::other> & _arg)
  {
    this->poses = _arg;
    return *this;
  }
  Type & set__erases(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->erases = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t KEEP_ALIVE =
    0u;
  static constexpr uint8_t UPDATE =
    1u;

  // pointer types
  using RawPtr =
    visualization_msgs::msg::InteractiveMarkerUpdate_<ContainerAllocator> *;
  using ConstRawPtr =
    const visualization_msgs::msg::InteractiveMarkerUpdate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<visualization_msgs::msg::InteractiveMarkerUpdate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<visualization_msgs::msg::InteractiveMarkerUpdate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      visualization_msgs::msg::InteractiveMarkerUpdate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<visualization_msgs::msg::InteractiveMarkerUpdate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      visualization_msgs::msg::InteractiveMarkerUpdate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<visualization_msgs::msg::InteractiveMarkerUpdate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<visualization_msgs::msg::InteractiveMarkerUpdate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<visualization_msgs::msg::InteractiveMarkerUpdate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__visualization_msgs__msg__InteractiveMarkerUpdate
    std::shared_ptr<visualization_msgs::msg::InteractiveMarkerUpdate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__visualization_msgs__msg__InteractiveMarkerUpdate
    std::shared_ptr<visualization_msgs::msg::InteractiveMarkerUpdate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InteractiveMarkerUpdate_ & other) const
  {
    if (this->server_id != other.server_id) {
      return false;
    }
    if (this->seq_num != other.seq_num) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->markers != other.markers) {
      return false;
    }
    if (this->poses != other.poses) {
      return false;
    }
    if (this->erases != other.erases) {
      return false;
    }
    return true;
  }
  bool operator!=(const InteractiveMarkerUpdate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InteractiveMarkerUpdate_

// alias to use template instance with default allocator
using InteractiveMarkerUpdate =
  visualization_msgs::msg::InteractiveMarkerUpdate_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t InteractiveMarkerUpdate_<ContainerAllocator>::KEEP_ALIVE;
template<typename ContainerAllocator>
constexpr uint8_t InteractiveMarkerUpdate_<ContainerAllocator>::UPDATE;

}  // namespace msg

}  // namespace visualization_msgs

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_UPDATE__STRUCT_HPP_

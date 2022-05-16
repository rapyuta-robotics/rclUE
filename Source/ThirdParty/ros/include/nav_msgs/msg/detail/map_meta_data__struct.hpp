// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nav_msgs:msg/MapMetaData.idl
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__MSG__DETAIL__MAP_META_DATA__STRUCT_HPP_
#define NAV_MSGS__MSG__DETAIL__MAP_META_DATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'map_load_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'origin'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nav_msgs__msg__MapMetaData __attribute__((deprecated))
#else
# define DEPRECATED__nav_msgs__msg__MapMetaData __declspec(deprecated)
#endif

namespace nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MapMetaData_
{
  using Type = MapMetaData_<ContainerAllocator>;

  explicit MapMetaData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : map_load_time(_init),
    origin(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->resolution = 0.0f;
      this->width = 0ul;
      this->height = 0ul;
    }
  }

  explicit MapMetaData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : map_load_time(_alloc, _init),
    origin(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->resolution = 0.0f;
      this->width = 0ul;
      this->height = 0ul;
    }
  }

  // field types and members
  using _map_load_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _map_load_time_type map_load_time;
  using _resolution_type =
    float;
  _resolution_type resolution;
  using _width_type =
    uint32_t;
  _width_type width;
  using _height_type =
    uint32_t;
  _height_type height;
  using _origin_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _origin_type origin;

  // setters for named parameter idiom
  Type & set__map_load_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->map_load_time = _arg;
    return *this;
  }
  Type & set__resolution(
    const float & _arg)
  {
    this->resolution = _arg;
    return *this;
  }
  Type & set__width(
    const uint32_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const uint32_t & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__origin(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->origin = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav_msgs::msg::MapMetaData_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav_msgs::msg::MapMetaData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav_msgs::msg::MapMetaData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav_msgs::msg::MapMetaData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav_msgs::msg::MapMetaData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav_msgs::msg::MapMetaData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav_msgs::msg::MapMetaData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav_msgs::msg::MapMetaData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav_msgs::msg::MapMetaData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav_msgs::msg::MapMetaData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav_msgs__msg__MapMetaData
    std::shared_ptr<nav_msgs::msg::MapMetaData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav_msgs__msg__MapMetaData
    std::shared_ptr<nav_msgs::msg::MapMetaData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapMetaData_ & other) const
  {
    if (this->map_load_time != other.map_load_time) {
      return false;
    }
    if (this->resolution != other.resolution) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->origin != other.origin) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapMetaData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapMetaData_

// alias to use template instance with default allocator
using MapMetaData =
  nav_msgs::msg::MapMetaData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nav_msgs

#endif  // NAV_MSGS__MSG__DETAIL__MAP_META_DATA__STRUCT_HPP_

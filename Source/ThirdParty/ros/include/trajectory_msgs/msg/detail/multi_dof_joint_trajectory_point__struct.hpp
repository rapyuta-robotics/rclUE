// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from trajectory_msgs:msg/MultiDOFJointTrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef TRAJECTORY_MSGS__MSG__DETAIL__MULTI_DOF_JOINT_TRAJECTORY_POINT__STRUCT_HPP_
#define TRAJECTORY_MSGS__MSG__DETAIL__MULTI_DOF_JOINT_TRAJECTORY_POINT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'transforms'
#include "geometry_msgs/msg/detail/transform__struct.hpp"
// Member 'velocities'
// Member 'accelerations'
#include "geometry_msgs/msg/detail/twist__struct.hpp"
// Member 'time_from_start'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__trajectory_msgs__msg__MultiDOFJointTrajectoryPoint __attribute__((deprecated))
#else
# define DEPRECATED__trajectory_msgs__msg__MultiDOFJointTrajectoryPoint __declspec(deprecated)
#endif

namespace trajectory_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MultiDOFJointTrajectoryPoint_
{
  using Type = MultiDOFJointTrajectoryPoint_<ContainerAllocator>;

  explicit MultiDOFJointTrajectoryPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_from_start(_init)
  {
    (void)_init;
  }

  explicit MultiDOFJointTrajectoryPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_from_start(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _transforms_type =
    std::vector<geometry_msgs::msg::Transform_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Transform_<ContainerAllocator>>::other>;
  _transforms_type transforms;
  using _velocities_type =
    std::vector<geometry_msgs::msg::Twist_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Twist_<ContainerAllocator>>::other>;
  _velocities_type velocities;
  using _accelerations_type =
    std::vector<geometry_msgs::msg::Twist_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Twist_<ContainerAllocator>>::other>;
  _accelerations_type accelerations;
  using _time_from_start_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _time_from_start_type time_from_start;

  // setters for named parameter idiom
  Type & set__transforms(
    const std::vector<geometry_msgs::msg::Transform_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Transform_<ContainerAllocator>>::other> & _arg)
  {
    this->transforms = _arg;
    return *this;
  }
  Type & set__velocities(
    const std::vector<geometry_msgs::msg::Twist_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Twist_<ContainerAllocator>>::other> & _arg)
  {
    this->velocities = _arg;
    return *this;
  }
  Type & set__accelerations(
    const std::vector<geometry_msgs::msg::Twist_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Twist_<ContainerAllocator>>::other> & _arg)
  {
    this->accelerations = _arg;
    return *this;
  }
  Type & set__time_from_start(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->time_from_start = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    trajectory_msgs::msg::MultiDOFJointTrajectoryPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const trajectory_msgs::msg::MultiDOFJointTrajectoryPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      trajectory_msgs::msg::MultiDOFJointTrajectoryPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      trajectory_msgs::msg::MultiDOFJointTrajectoryPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__trajectory_msgs__msg__MultiDOFJointTrajectoryPoint
    std::shared_ptr<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__trajectory_msgs__msg__MultiDOFJointTrajectoryPoint
    std::shared_ptr<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MultiDOFJointTrajectoryPoint_ & other) const
  {
    if (this->transforms != other.transforms) {
      return false;
    }
    if (this->velocities != other.velocities) {
      return false;
    }
    if (this->accelerations != other.accelerations) {
      return false;
    }
    if (this->time_from_start != other.time_from_start) {
      return false;
    }
    return true;
  }
  bool operator!=(const MultiDOFJointTrajectoryPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MultiDOFJointTrajectoryPoint_

// alias to use template instance with default allocator
using MultiDOFJointTrajectoryPoint =
  trajectory_msgs::msg::MultiDOFJointTrajectoryPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace trajectory_msgs

#endif  // TRAJECTORY_MSGS__MSG__DETAIL__MULTI_DOF_JOINT_TRAJECTORY_POINT__STRUCT_HPP_

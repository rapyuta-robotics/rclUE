// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pcl_msgs:msg/ModelCoefficients.idl
// generated code does not contain a copyright notice

#ifndef PCL_MSGS__MSG__DETAIL__MODEL_COEFFICIENTS__STRUCT_HPP_
#define PCL_MSGS__MSG__DETAIL__MODEL_COEFFICIENTS__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__pcl_msgs__msg__ModelCoefficients __attribute__((deprecated))
#else
# define DEPRECATED__pcl_msgs__msg__ModelCoefficients __declspec(deprecated)
#endif

namespace pcl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ModelCoefficients_
{
  using Type = ModelCoefficients_<ContainerAllocator>;

  explicit ModelCoefficients_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit ModelCoefficients_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _values_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _values_type values;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__values(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->values = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pcl_msgs::msg::ModelCoefficients_<ContainerAllocator> *;
  using ConstRawPtr =
    const pcl_msgs::msg::ModelCoefficients_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pcl_msgs::msg::ModelCoefficients_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pcl_msgs::msg::ModelCoefficients_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pcl_msgs::msg::ModelCoefficients_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pcl_msgs::msg::ModelCoefficients_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pcl_msgs::msg::ModelCoefficients_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pcl_msgs::msg::ModelCoefficients_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pcl_msgs::msg::ModelCoefficients_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pcl_msgs::msg::ModelCoefficients_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pcl_msgs__msg__ModelCoefficients
    std::shared_ptr<pcl_msgs::msg::ModelCoefficients_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pcl_msgs__msg__ModelCoefficients
    std::shared_ptr<pcl_msgs::msg::ModelCoefficients_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ModelCoefficients_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->values != other.values) {
      return false;
    }
    return true;
  }
  bool operator!=(const ModelCoefficients_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ModelCoefficients_

// alias to use template instance with default allocator
using ModelCoefficients =
  pcl_msgs::msg::ModelCoefficients_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pcl_msgs

#endif  // PCL_MSGS__MSG__DETAIL__MODEL_COEFFICIENTS__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sensor_msgs:msg/CameraInfo.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__CAMERA_INFO__STRUCT_HPP_
#define SENSOR_MSGS__MSG__DETAIL__CAMERA_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sensor_msgs__msg__CameraInfo __attribute__((deprecated))
#else
# define DEPRECATED__sensor_msgs__msg__CameraInfo __declspec(deprecated)
#endif

namespace sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CameraInfo_
{
  using Type = CameraInfo_<ContainerAllocator>;

  explicit CameraInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    roi(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height = 0ul;
      this->width = 0ul;
      this->distortion_model = "";
      std::fill<typename std::array<double, 9>::iterator, double>(this->k.begin(), this->k.end(), 0.0);
      std::fill<typename std::array<double, 9>::iterator, double>(this->r.begin(), this->r.end(), 0.0);
      std::fill<typename std::array<double, 12>::iterator, double>(this->p.begin(), this->p.end(), 0.0);
      this->binning_x = 0ul;
      this->binning_y = 0ul;
    }
  }

  explicit CameraInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    distortion_model(_alloc),
    k(_alloc),
    r(_alloc),
    p(_alloc),
    roi(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height = 0ul;
      this->width = 0ul;
      this->distortion_model = "";
      std::fill<typename std::array<double, 9>::iterator, double>(this->k.begin(), this->k.end(), 0.0);
      std::fill<typename std::array<double, 9>::iterator, double>(this->r.begin(), this->r.end(), 0.0);
      std::fill<typename std::array<double, 12>::iterator, double>(this->p.begin(), this->p.end(), 0.0);
      this->binning_x = 0ul;
      this->binning_y = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _height_type =
    uint32_t;
  _height_type height;
  using _width_type =
    uint32_t;
  _width_type width;
  using _distortion_model_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _distortion_model_type distortion_model;
  using _d_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _d_type d;
  using _k_type =
    std::array<double, 9>;
  _k_type k;
  using _r_type =
    std::array<double, 9>;
  _r_type r;
  using _p_type =
    std::array<double, 12>;
  _p_type p;
  using _binning_x_type =
    uint32_t;
  _binning_x_type binning_x;
  using _binning_y_type =
    uint32_t;
  _binning_y_type binning_y;
  using _roi_type =
    sensor_msgs::msg::RegionOfInterest_<ContainerAllocator>;
  _roi_type roi;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__height(
    const uint32_t & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__width(
    const uint32_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__distortion_model(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->distortion_model = _arg;
    return *this;
  }
  Type & set__d(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->d = _arg;
    return *this;
  }
  Type & set__k(
    const std::array<double, 9> & _arg)
  {
    this->k = _arg;
    return *this;
  }
  Type & set__r(
    const std::array<double, 9> & _arg)
  {
    this->r = _arg;
    return *this;
  }
  Type & set__p(
    const std::array<double, 12> & _arg)
  {
    this->p = _arg;
    return *this;
  }
  Type & set__binning_x(
    const uint32_t & _arg)
  {
    this->binning_x = _arg;
    return *this;
  }
  Type & set__binning_y(
    const uint32_t & _arg)
  {
    this->binning_y = _arg;
    return *this;
  }
  Type & set__roi(
    const sensor_msgs::msg::RegionOfInterest_<ContainerAllocator> & _arg)
  {
    this->roi = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sensor_msgs::msg::CameraInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const sensor_msgs::msg::CameraInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sensor_msgs::msg::CameraInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sensor_msgs::msg::CameraInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sensor_msgs::msg::CameraInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sensor_msgs::msg::CameraInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sensor_msgs::msg::CameraInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sensor_msgs::msg::CameraInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sensor_msgs::msg::CameraInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sensor_msgs::msg::CameraInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sensor_msgs__msg__CameraInfo
    std::shared_ptr<sensor_msgs::msg::CameraInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sensor_msgs__msg__CameraInfo
    std::shared_ptr<sensor_msgs::msg::CameraInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->distortion_model != other.distortion_model) {
      return false;
    }
    if (this->d != other.d) {
      return false;
    }
    if (this->k != other.k) {
      return false;
    }
    if (this->r != other.r) {
      return false;
    }
    if (this->p != other.p) {
      return false;
    }
    if (this->binning_x != other.binning_x) {
      return false;
    }
    if (this->binning_y != other.binning_y) {
      return false;
    }
    if (this->roi != other.roi) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraInfo_

// alias to use template instance with default allocator
using CameraInfo =
  sensor_msgs::msg::CameraInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__DETAIL__CAMERA_INFO__STRUCT_HPP_

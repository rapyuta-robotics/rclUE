// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from stereo_msgs:msg/DisparityImage.idl
// generated code does not contain a copyright notice

#ifndef STEREO_MSGS__MSG__DETAIL__DISPARITY_IMAGE__STRUCT_HPP_
#define STEREO_MSGS__MSG__DETAIL__DISPARITY_IMAGE__STRUCT_HPP_

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
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.hpp"
// Member 'valid_window'
#include "sensor_msgs/msg/detail/region_of_interest__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__stereo_msgs__msg__DisparityImage __attribute__((deprecated))
#else
# define DEPRECATED__stereo_msgs__msg__DisparityImage __declspec(deprecated)
#endif

namespace stereo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DisparityImage_
{
  using Type = DisparityImage_<ContainerAllocator>;

  explicit DisparityImage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    image(_init),
    valid_window(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->f = 0.0f;
      this->t = 0.0f;
      this->min_disparity = 0.0f;
      this->max_disparity = 0.0f;
      this->delta_d = 0.0f;
    }
  }

  explicit DisparityImage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    image(_alloc, _init),
    valid_window(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->f = 0.0f;
      this->t = 0.0f;
      this->min_disparity = 0.0f;
      this->max_disparity = 0.0f;
      this->delta_d = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;
  using _f_type =
    float;
  _f_type f;
  using _t_type =
    float;
  _t_type t;
  using _valid_window_type =
    sensor_msgs::msg::RegionOfInterest_<ContainerAllocator>;
  _valid_window_type valid_window;
  using _min_disparity_type =
    float;
  _min_disparity_type min_disparity;
  using _max_disparity_type =
    float;
  _max_disparity_type max_disparity;
  using _delta_d_type =
    float;
  _delta_d_type delta_d;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }
  Type & set__f(
    const float & _arg)
  {
    this->f = _arg;
    return *this;
  }
  Type & set__t(
    const float & _arg)
  {
    this->t = _arg;
    return *this;
  }
  Type & set__valid_window(
    const sensor_msgs::msg::RegionOfInterest_<ContainerAllocator> & _arg)
  {
    this->valid_window = _arg;
    return *this;
  }
  Type & set__min_disparity(
    const float & _arg)
  {
    this->min_disparity = _arg;
    return *this;
  }
  Type & set__max_disparity(
    const float & _arg)
  {
    this->max_disparity = _arg;
    return *this;
  }
  Type & set__delta_d(
    const float & _arg)
  {
    this->delta_d = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    stereo_msgs::msg::DisparityImage_<ContainerAllocator> *;
  using ConstRawPtr =
    const stereo_msgs::msg::DisparityImage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stereo_msgs::msg::DisparityImage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stereo_msgs::msg::DisparityImage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stereo_msgs::msg::DisparityImage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stereo_msgs::msg::DisparityImage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stereo_msgs::msg::DisparityImage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stereo_msgs::msg::DisparityImage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stereo_msgs::msg::DisparityImage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stereo_msgs::msg::DisparityImage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stereo_msgs__msg__DisparityImage
    std::shared_ptr<stereo_msgs::msg::DisparityImage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stereo_msgs__msg__DisparityImage
    std::shared_ptr<stereo_msgs::msg::DisparityImage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DisparityImage_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->image != other.image) {
      return false;
    }
    if (this->f != other.f) {
      return false;
    }
    if (this->t != other.t) {
      return false;
    }
    if (this->valid_window != other.valid_window) {
      return false;
    }
    if (this->min_disparity != other.min_disparity) {
      return false;
    }
    if (this->max_disparity != other.max_disparity) {
      return false;
    }
    if (this->delta_d != other.delta_d) {
      return false;
    }
    return true;
  }
  bool operator!=(const DisparityImage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DisparityImage_

// alias to use template instance with default allocator
using DisparityImage =
  stereo_msgs::msg::DisparityImage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace stereo_msgs

#endif  // STEREO_MSGS__MSG__DETAIL__DISPARITY_IMAGE__STRUCT_HPP_

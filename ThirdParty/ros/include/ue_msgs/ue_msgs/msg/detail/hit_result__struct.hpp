// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ue_msgs:msg/HitResult.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__HIT_RESULT__STRUCT_HPP_
#define UE_MSGS__MSG__DETAIL__HIT_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'impact_normal'
// Member 'normal'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'impact_point'
// Member 'location'
// Member 'trace_start'
// Member 'trace_end'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ue_msgs__msg__HitResult __attribute__((deprecated))
#else
# define DEPRECATED__ue_msgs__msg__HitResult __declspec(deprecated)
#endif

namespace ue_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HitResult_
{
  using Type = HitResult_<ContainerAllocator>;

  explicit HitResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : impact_normal(_init),
    impact_point(_init),
    normal(_init),
    location(_init),
    trace_start(_init),
    trace_end(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->blocking_hit = false;
      this->start_penetrating = false;
      this->component_name = "";
      this->actor_name = "";
      this->distance = 0.0f;
      this->element_index = 0;
      this->face_index = 0l;
      this->bone_name = "";
      this->item = 0l;
      this->my_bone_name = "";
      this->my_item = 0l;
      this->penetration_depth = 0.0f;
      this->physics_material_name = "";
      this->time = 0.0f;
    }
  }

  explicit HitResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : component_name(_alloc),
    actor_name(_alloc),
    bone_name(_alloc),
    my_bone_name(_alloc),
    physics_material_name(_alloc),
    impact_normal(_alloc, _init),
    impact_point(_alloc, _init),
    normal(_alloc, _init),
    location(_alloc, _init),
    trace_start(_alloc, _init),
    trace_end(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->blocking_hit = false;
      this->start_penetrating = false;
      this->component_name = "";
      this->actor_name = "";
      this->distance = 0.0f;
      this->element_index = 0;
      this->face_index = 0l;
      this->bone_name = "";
      this->item = 0l;
      this->my_bone_name = "";
      this->my_item = 0l;
      this->penetration_depth = 0.0f;
      this->physics_material_name = "";
      this->time = 0.0f;
    }
  }

  // field types and members
  using _blocking_hit_type =
    bool;
  _blocking_hit_type blocking_hit;
  using _start_penetrating_type =
    bool;
  _start_penetrating_type start_penetrating;
  using _component_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _component_name_type component_name;
  using _actor_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _actor_name_type actor_name;
  using _distance_type =
    float;
  _distance_type distance;
  using _element_index_type =
    uint8_t;
  _element_index_type element_index;
  using _face_index_type =
    int32_t;
  _face_index_type face_index;
  using _bone_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _bone_name_type bone_name;
  using _item_type =
    int32_t;
  _item_type item;
  using _my_bone_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _my_bone_name_type my_bone_name;
  using _my_item_type =
    int32_t;
  _my_item_type my_item;
  using _penetration_depth_type =
    float;
  _penetration_depth_type penetration_depth;
  using _physics_material_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _physics_material_name_type physics_material_name;
  using _time_type =
    float;
  _time_type time;
  using _impact_normal_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _impact_normal_type impact_normal;
  using _impact_point_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _impact_point_type impact_point;
  using _normal_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _normal_type normal;
  using _location_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _location_type location;
  using _trace_start_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _trace_start_type trace_start;
  using _trace_end_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _trace_end_type trace_end;

  // setters for named parameter idiom
  Type & set__blocking_hit(
    const bool & _arg)
  {
    this->blocking_hit = _arg;
    return *this;
  }
  Type & set__start_penetrating(
    const bool & _arg)
  {
    this->start_penetrating = _arg;
    return *this;
  }
  Type & set__component_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->component_name = _arg;
    return *this;
  }
  Type & set__actor_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->actor_name = _arg;
    return *this;
  }
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__element_index(
    const uint8_t & _arg)
  {
    this->element_index = _arg;
    return *this;
  }
  Type & set__face_index(
    const int32_t & _arg)
  {
    this->face_index = _arg;
    return *this;
  }
  Type & set__bone_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->bone_name = _arg;
    return *this;
  }
  Type & set__item(
    const int32_t & _arg)
  {
    this->item = _arg;
    return *this;
  }
  Type & set__my_bone_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->my_bone_name = _arg;
    return *this;
  }
  Type & set__my_item(
    const int32_t & _arg)
  {
    this->my_item = _arg;
    return *this;
  }
  Type & set__penetration_depth(
    const float & _arg)
  {
    this->penetration_depth = _arg;
    return *this;
  }
  Type & set__physics_material_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->physics_material_name = _arg;
    return *this;
  }
  Type & set__time(
    const float & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__impact_normal(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->impact_normal = _arg;
    return *this;
  }
  Type & set__impact_point(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->impact_point = _arg;
    return *this;
  }
  Type & set__normal(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->normal = _arg;
    return *this;
  }
  Type & set__location(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->location = _arg;
    return *this;
  }
  Type & set__trace_start(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->trace_start = _arg;
    return *this;
  }
  Type & set__trace_end(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->trace_end = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ue_msgs::msg::HitResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const ue_msgs::msg::HitResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ue_msgs::msg::HitResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ue_msgs::msg::HitResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ue_msgs::msg::HitResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::msg::HitResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ue_msgs::msg::HitResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::msg::HitResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ue_msgs::msg::HitResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ue_msgs::msg::HitResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ue_msgs__msg__HitResult
    std::shared_ptr<ue_msgs::msg::HitResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ue_msgs__msg__HitResult
    std::shared_ptr<ue_msgs::msg::HitResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HitResult_ & other) const
  {
    if (this->blocking_hit != other.blocking_hit) {
      return false;
    }
    if (this->start_penetrating != other.start_penetrating) {
      return false;
    }
    if (this->component_name != other.component_name) {
      return false;
    }
    if (this->actor_name != other.actor_name) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    if (this->element_index != other.element_index) {
      return false;
    }
    if (this->face_index != other.face_index) {
      return false;
    }
    if (this->bone_name != other.bone_name) {
      return false;
    }
    if (this->item != other.item) {
      return false;
    }
    if (this->my_bone_name != other.my_bone_name) {
      return false;
    }
    if (this->my_item != other.my_item) {
      return false;
    }
    if (this->penetration_depth != other.penetration_depth) {
      return false;
    }
    if (this->physics_material_name != other.physics_material_name) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    if (this->impact_normal != other.impact_normal) {
      return false;
    }
    if (this->impact_point != other.impact_point) {
      return false;
    }
    if (this->normal != other.normal) {
      return false;
    }
    if (this->location != other.location) {
      return false;
    }
    if (this->trace_start != other.trace_start) {
      return false;
    }
    if (this->trace_end != other.trace_end) {
      return false;
    }
    return true;
  }
  bool operator!=(const HitResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HitResult_

// alias to use template instance with default allocator
using HitResult =
  ue_msgs::msg::HitResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ue_msgs

#endif  // UE_MSGS__MSG__DETAIL__HIT_RESULT__STRUCT_HPP_

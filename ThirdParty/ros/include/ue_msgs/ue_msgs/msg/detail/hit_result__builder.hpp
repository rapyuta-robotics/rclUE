// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ue_msgs:msg/HitResult.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__HIT_RESULT__BUILDER_HPP_
#define UE_MSGS__MSG__DETAIL__HIT_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ue_msgs/msg/detail/hit_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ue_msgs
{

namespace msg
{

namespace builder
{

class Init_HitResult_trace_end
{
public:
  explicit Init_HitResult_trace_end(::ue_msgs::msg::HitResult & msg)
  : msg_(msg)
  {}
  ::ue_msgs::msg::HitResult trace_end(::ue_msgs::msg::HitResult::_trace_end_type arg)
  {
    msg_.trace_end = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ue_msgs::msg::HitResult msg_;
};

class Init_HitResult_trace_start
{
public:
  explicit Init_HitResult_trace_start(::ue_msgs::msg::HitResult & msg)
  : msg_(msg)
  {}
  Init_HitResult_trace_end trace_start(::ue_msgs::msg::HitResult::_trace_start_type arg)
  {
    msg_.trace_start = std::move(arg);
    return Init_HitResult_trace_end(msg_);
  }

private:
  ::ue_msgs::msg::HitResult msg_;
};

class Init_HitResult_location
{
public:
  explicit Init_HitResult_location(::ue_msgs::msg::HitResult & msg)
  : msg_(msg)
  {}
  Init_HitResult_trace_start location(::ue_msgs::msg::HitResult::_location_type arg)
  {
    msg_.location = std::move(arg);
    return Init_HitResult_trace_start(msg_);
  }

private:
  ::ue_msgs::msg::HitResult msg_;
};

class Init_HitResult_normal
{
public:
  explicit Init_HitResult_normal(::ue_msgs::msg::HitResult & msg)
  : msg_(msg)
  {}
  Init_HitResult_location normal(::ue_msgs::msg::HitResult::_normal_type arg)
  {
    msg_.normal = std::move(arg);
    return Init_HitResult_location(msg_);
  }

private:
  ::ue_msgs::msg::HitResult msg_;
};

class Init_HitResult_impact_point
{
public:
  explicit Init_HitResult_impact_point(::ue_msgs::msg::HitResult & msg)
  : msg_(msg)
  {}
  Init_HitResult_normal impact_point(::ue_msgs::msg::HitResult::_impact_point_type arg)
  {
    msg_.impact_point = std::move(arg);
    return Init_HitResult_normal(msg_);
  }

private:
  ::ue_msgs::msg::HitResult msg_;
};

class Init_HitResult_impact_normal
{
public:
  explicit Init_HitResult_impact_normal(::ue_msgs::msg::HitResult & msg)
  : msg_(msg)
  {}
  Init_HitResult_impact_point impact_normal(::ue_msgs::msg::HitResult::_impact_normal_type arg)
  {
    msg_.impact_normal = std::move(arg);
    return Init_HitResult_impact_point(msg_);
  }

private:
  ::ue_msgs::msg::HitResult msg_;
};

class Init_HitResult_time
{
public:
  explicit Init_HitResult_time(::ue_msgs::msg::HitResult & msg)
  : msg_(msg)
  {}
  Init_HitResult_impact_normal time(::ue_msgs::msg::HitResult::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_HitResult_impact_normal(msg_);
  }

private:
  ::ue_msgs::msg::HitResult msg_;
};

class Init_HitResult_physics_material_name
{
public:
  explicit Init_HitResult_physics_material_name(::ue_msgs::msg::HitResult & msg)
  : msg_(msg)
  {}
  Init_HitResult_time physics_material_name(::ue_msgs::msg::HitResult::_physics_material_name_type arg)
  {
    msg_.physics_material_name = std::move(arg);
    return Init_HitResult_time(msg_);
  }

private:
  ::ue_msgs::msg::HitResult msg_;
};

class Init_HitResult_penetration_depth
{
public:
  explicit Init_HitResult_penetration_depth(::ue_msgs::msg::HitResult & msg)
  : msg_(msg)
  {}
  Init_HitResult_physics_material_name penetration_depth(::ue_msgs::msg::HitResult::_penetration_depth_type arg)
  {
    msg_.penetration_depth = std::move(arg);
    return Init_HitResult_physics_material_name(msg_);
  }

private:
  ::ue_msgs::msg::HitResult msg_;
};

class Init_HitResult_my_item
{
public:
  explicit Init_HitResult_my_item(::ue_msgs::msg::HitResult & msg)
  : msg_(msg)
  {}
  Init_HitResult_penetration_depth my_item(::ue_msgs::msg::HitResult::_my_item_type arg)
  {
    msg_.my_item = std::move(arg);
    return Init_HitResult_penetration_depth(msg_);
  }

private:
  ::ue_msgs::msg::HitResult msg_;
};

class Init_HitResult_my_bone_name
{
public:
  explicit Init_HitResult_my_bone_name(::ue_msgs::msg::HitResult & msg)
  : msg_(msg)
  {}
  Init_HitResult_my_item my_bone_name(::ue_msgs::msg::HitResult::_my_bone_name_type arg)
  {
    msg_.my_bone_name = std::move(arg);
    return Init_HitResult_my_item(msg_);
  }

private:
  ::ue_msgs::msg::HitResult msg_;
};

class Init_HitResult_item
{
public:
  explicit Init_HitResult_item(::ue_msgs::msg::HitResult & msg)
  : msg_(msg)
  {}
  Init_HitResult_my_bone_name item(::ue_msgs::msg::HitResult::_item_type arg)
  {
    msg_.item = std::move(arg);
    return Init_HitResult_my_bone_name(msg_);
  }

private:
  ::ue_msgs::msg::HitResult msg_;
};

class Init_HitResult_bone_name
{
public:
  explicit Init_HitResult_bone_name(::ue_msgs::msg::HitResult & msg)
  : msg_(msg)
  {}
  Init_HitResult_item bone_name(::ue_msgs::msg::HitResult::_bone_name_type arg)
  {
    msg_.bone_name = std::move(arg);
    return Init_HitResult_item(msg_);
  }

private:
  ::ue_msgs::msg::HitResult msg_;
};

class Init_HitResult_face_index
{
public:
  explicit Init_HitResult_face_index(::ue_msgs::msg::HitResult & msg)
  : msg_(msg)
  {}
  Init_HitResult_bone_name face_index(::ue_msgs::msg::HitResult::_face_index_type arg)
  {
    msg_.face_index = std::move(arg);
    return Init_HitResult_bone_name(msg_);
  }

private:
  ::ue_msgs::msg::HitResult msg_;
};

class Init_HitResult_element_index
{
public:
  explicit Init_HitResult_element_index(::ue_msgs::msg::HitResult & msg)
  : msg_(msg)
  {}
  Init_HitResult_face_index element_index(::ue_msgs::msg::HitResult::_element_index_type arg)
  {
    msg_.element_index = std::move(arg);
    return Init_HitResult_face_index(msg_);
  }

private:
  ::ue_msgs::msg::HitResult msg_;
};

class Init_HitResult_distance
{
public:
  explicit Init_HitResult_distance(::ue_msgs::msg::HitResult & msg)
  : msg_(msg)
  {}
  Init_HitResult_element_index distance(::ue_msgs::msg::HitResult::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_HitResult_element_index(msg_);
  }

private:
  ::ue_msgs::msg::HitResult msg_;
};

class Init_HitResult_actor_name
{
public:
  explicit Init_HitResult_actor_name(::ue_msgs::msg::HitResult & msg)
  : msg_(msg)
  {}
  Init_HitResult_distance actor_name(::ue_msgs::msg::HitResult::_actor_name_type arg)
  {
    msg_.actor_name = std::move(arg);
    return Init_HitResult_distance(msg_);
  }

private:
  ::ue_msgs::msg::HitResult msg_;
};

class Init_HitResult_component_name
{
public:
  explicit Init_HitResult_component_name(::ue_msgs::msg::HitResult & msg)
  : msg_(msg)
  {}
  Init_HitResult_actor_name component_name(::ue_msgs::msg::HitResult::_component_name_type arg)
  {
    msg_.component_name = std::move(arg);
    return Init_HitResult_actor_name(msg_);
  }

private:
  ::ue_msgs::msg::HitResult msg_;
};

class Init_HitResult_start_penetrating
{
public:
  explicit Init_HitResult_start_penetrating(::ue_msgs::msg::HitResult & msg)
  : msg_(msg)
  {}
  Init_HitResult_component_name start_penetrating(::ue_msgs::msg::HitResult::_start_penetrating_type arg)
  {
    msg_.start_penetrating = std::move(arg);
    return Init_HitResult_component_name(msg_);
  }

private:
  ::ue_msgs::msg::HitResult msg_;
};

class Init_HitResult_blocking_hit
{
public:
  Init_HitResult_blocking_hit()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HitResult_start_penetrating blocking_hit(::ue_msgs::msg::HitResult::_blocking_hit_type arg)
  {
    msg_.blocking_hit = std::move(arg);
    return Init_HitResult_start_penetrating(msg_);
  }

private:
  ::ue_msgs::msg::HitResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ue_msgs::msg::HitResult>()
{
  return ue_msgs::msg::builder::Init_HitResult_blocking_hit();
}

}  // namespace ue_msgs

#endif  // UE_MSGS__MSG__DETAIL__HIT_RESULT__BUILDER_HPP_

// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from geometry_msgs:msg/PoseArray.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__POSE_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__POSE_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "geometry_msgs/msg/detail/pose_array__struct.hpp"
#include "geometry_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#ifndef _WIN32
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
#ifdef __clang__
#pragma clang diagnostic ignored "-Wdeprecated-register"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
#endif
#endif
#ifndef _WIN32
#pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace geometry_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_geometry_msgs cdr_serialize(const geometry_msgs::msg::PoseArray& ros_message,
                                                                        eprosima::fastcdr::Cdr& cdr);

bool ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_geometry_msgs cdr_deserialize(eprosima::fastcdr::Cdr& cdr,
                                                                          geometry_msgs::msg::PoseArray& ros_message);

size_t ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_geometry_msgs get_serialized_size(const geometry_msgs::msg::PoseArray& ros_message,
                                                                                size_t current_alignment);

size_t ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_geometry_msgs max_serialized_size_PoseArray(bool& full_bounded,
                                                                                          bool& is_plain,
                                                                                          size_t current_alignment);

}    // namespace typesupport_fastrtps_cpp

}    // namespace msg

}    // namespace geometry_msgs

#ifdef __cplusplus
extern "C"
{
#endif

    ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_geometry_msgs const rosidl_message_type_support_t*
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, geometry_msgs, msg, PoseArray)();

#ifdef __cplusplus
}
#endif

#endif    // GEOMETRY_MSGS__MSG__DETAIL__POSE_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from pcl_msgs:msg/PolygonMesh.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "pcl_msgs/msg/detail/polygon_mesh__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pcl_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PolygonMesh_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pcl_msgs::msg::PolygonMesh(_init);
}

void PolygonMesh_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pcl_msgs::msg::PolygonMesh *>(message_memory);
  typed_message->~PolygonMesh();
}

size_t size_function__PolygonMesh__polygons(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<pcl_msgs::msg::Vertices> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PolygonMesh__polygons(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<pcl_msgs::msg::Vertices> *>(untyped_member);
  return &member[index];
}

void * get_function__PolygonMesh__polygons(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<pcl_msgs::msg::Vertices> *>(untyped_member);
  return &member[index];
}

void fetch_function__PolygonMesh__polygons(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const pcl_msgs::msg::Vertices *>(
    get_const_function__PolygonMesh__polygons(untyped_member, index));
  auto & value = *reinterpret_cast<pcl_msgs::msg::Vertices *>(untyped_value);
  value = item;
}

void assign_function__PolygonMesh__polygons(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<pcl_msgs::msg::Vertices *>(
    get_function__PolygonMesh__polygons(untyped_member, index));
  const auto & value = *reinterpret_cast<const pcl_msgs::msg::Vertices *>(untyped_value);
  item = value;
}

void resize_function__PolygonMesh__polygons(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<pcl_msgs::msg::Vertices> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PolygonMesh_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pcl_msgs::msg::PolygonMesh, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cloud",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::PointCloud2>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pcl_msgs::msg::PolygonMesh, cloud),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "polygons",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<pcl_msgs::msg::Vertices>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pcl_msgs::msg::PolygonMesh, polygons),  // bytes offset in struct
    nullptr,  // default value
    size_function__PolygonMesh__polygons,  // size() function pointer
    get_const_function__PolygonMesh__polygons,  // get_const(index) function pointer
    get_function__PolygonMesh__polygons,  // get(index) function pointer
    fetch_function__PolygonMesh__polygons,  // fetch(index, &value) function pointer
    assign_function__PolygonMesh__polygons,  // assign(index, value) function pointer
    resize_function__PolygonMesh__polygons  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PolygonMesh_message_members = {
  "pcl_msgs::msg",  // message namespace
  "PolygonMesh",  // message name
  3,  // number of fields
  sizeof(pcl_msgs::msg::PolygonMesh),
  PolygonMesh_message_member_array,  // message members
  PolygonMesh_init_function,  // function to initialize message memory (memory has to be allocated)
  PolygonMesh_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PolygonMesh_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PolygonMesh_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace pcl_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pcl_msgs::msg::PolygonMesh>()
{
  return &::pcl_msgs::msg::rosidl_typesupport_introspection_cpp::PolygonMesh_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pcl_msgs, msg, PolygonMesh)() {
  return &::pcl_msgs::msg::rosidl_typesupport_introspection_cpp::PolygonMesh_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

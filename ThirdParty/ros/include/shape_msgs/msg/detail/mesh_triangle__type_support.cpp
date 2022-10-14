// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from shape_msgs:msg/MeshTriangle.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "shape_msgs/msg/detail/mesh_triangle__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace shape_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MeshTriangle_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) shape_msgs::msg::MeshTriangle(_init);
}

void MeshTriangle_fini_function(void * message_memory)
{
  auto typed_message = static_cast<shape_msgs::msg::MeshTriangle *>(message_memory);
  typed_message->~MeshTriangle();
}

size_t size_function__MeshTriangle__vertex_indices(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__MeshTriangle__vertex_indices(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint32_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__MeshTriangle__vertex_indices(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint32_t, 3> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MeshTriangle_message_member_array[1] = {
  {
    "vertex_indices",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(shape_msgs::msg::MeshTriangle, vertex_indices),  // bytes offset in struct
    nullptr,  // default value
    size_function__MeshTriangle__vertex_indices,  // size() function pointer
    get_const_function__MeshTriangle__vertex_indices,  // get_const(index) function pointer
    get_function__MeshTriangle__vertex_indices,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MeshTriangle_message_members = {
  "shape_msgs::msg",  // message namespace
  "MeshTriangle",  // message name
  1,  // number of fields
  sizeof(shape_msgs::msg::MeshTriangle),
  MeshTriangle_message_member_array,  // message members
  MeshTriangle_init_function,  // function to initialize message memory (memory has to be allocated)
  MeshTriangle_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MeshTriangle_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MeshTriangle_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace shape_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<shape_msgs::msg::MeshTriangle>()
{
  return &::shape_msgs::msg::rosidl_typesupport_introspection_cpp::MeshTriangle_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, shape_msgs, msg, MeshTriangle)() {
  return &::shape_msgs::msg::rosidl_typesupport_introspection_cpp::MeshTriangle_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from shape_msgs:msg/Plane.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "shape_msgs/msg/detail/plane__struct.hpp"
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

void Plane_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) shape_msgs::msg::Plane(_init);
}

void Plane_fini_function(void * message_memory)
{
  auto typed_message = static_cast<shape_msgs::msg::Plane *>(message_memory);
  typed_message->~Plane();
}

size_t size_function__Plane__coef(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__Plane__coef(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__Plane__coef(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__Plane__coef(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__Plane__coef(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__Plane__coef(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__Plane__coef(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Plane_message_member_array[1] = {
  {
    "coef",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(shape_msgs::msg::Plane, coef),  // bytes offset in struct
    nullptr,  // default value
    size_function__Plane__coef,  // size() function pointer
    get_const_function__Plane__coef,  // get_const(index) function pointer
    get_function__Plane__coef,  // get(index) function pointer
    fetch_function__Plane__coef,  // fetch(index, &value) function pointer
    assign_function__Plane__coef,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Plane_message_members = {
  "shape_msgs::msg",  // message namespace
  "Plane",  // message name
  1,  // number of fields
  sizeof(shape_msgs::msg::Plane),
  Plane_message_member_array,  // message members
  Plane_init_function,  // function to initialize message memory (memory has to be allocated)
  Plane_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Plane_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Plane_message_members,
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
get_message_type_support_handle<shape_msgs::msg::Plane>()
{
  return &::shape_msgs::msg::rosidl_typesupport_introspection_cpp::Plane_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, shape_msgs, msg, Plane)() {
  return &::shape_msgs::msg::rosidl_typesupport_introspection_cpp::Plane_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

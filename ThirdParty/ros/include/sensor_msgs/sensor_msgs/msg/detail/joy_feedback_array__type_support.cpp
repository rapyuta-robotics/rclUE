// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from sensor_msgs:msg/JoyFeedbackArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "sensor_msgs/msg/detail/joy_feedback_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace sensor_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void JoyFeedbackArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) sensor_msgs::msg::JoyFeedbackArray(_init);
}

void JoyFeedbackArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<sensor_msgs::msg::JoyFeedbackArray *>(message_memory);
  typed_message->~JoyFeedbackArray();
}

size_t size_function__JoyFeedbackArray__array(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<sensor_msgs::msg::JoyFeedback> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JoyFeedbackArray__array(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<sensor_msgs::msg::JoyFeedback> *>(untyped_member);
  return &member[index];
}

void * get_function__JoyFeedbackArray__array(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<sensor_msgs::msg::JoyFeedback> *>(untyped_member);
  return &member[index];
}

void fetch_function__JoyFeedbackArray__array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const sensor_msgs::msg::JoyFeedback *>(
    get_const_function__JoyFeedbackArray__array(untyped_member, index));
  auto & value = *reinterpret_cast<sensor_msgs::msg::JoyFeedback *>(untyped_value);
  value = item;
}

void assign_function__JoyFeedbackArray__array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<sensor_msgs::msg::JoyFeedback *>(
    get_function__JoyFeedbackArray__array(untyped_member, index));
  const auto & value = *reinterpret_cast<const sensor_msgs::msg::JoyFeedback *>(untyped_value);
  item = value;
}

void resize_function__JoyFeedbackArray__array(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<sensor_msgs::msg::JoyFeedback> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember JoyFeedbackArray_message_member_array[1] = {
  {
    "array",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::JoyFeedback>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs::msg::JoyFeedbackArray, array),  // bytes offset in struct
    nullptr,  // default value
    size_function__JoyFeedbackArray__array,  // size() function pointer
    get_const_function__JoyFeedbackArray__array,  // get_const(index) function pointer
    get_function__JoyFeedbackArray__array,  // get(index) function pointer
    fetch_function__JoyFeedbackArray__array,  // fetch(index, &value) function pointer
    assign_function__JoyFeedbackArray__array,  // assign(index, value) function pointer
    resize_function__JoyFeedbackArray__array  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JoyFeedbackArray_message_members = {
  "sensor_msgs::msg",  // message namespace
  "JoyFeedbackArray",  // message name
  1,  // number of fields
  sizeof(sensor_msgs::msg::JoyFeedbackArray),
  JoyFeedbackArray_message_member_array,  // message members
  JoyFeedbackArray_init_function,  // function to initialize message memory (memory has to be allocated)
  JoyFeedbackArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t JoyFeedbackArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JoyFeedbackArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace sensor_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sensor_msgs::msg::JoyFeedbackArray>()
{
  return &::sensor_msgs::msg::rosidl_typesupport_introspection_cpp::JoyFeedbackArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sensor_msgs, msg, JoyFeedbackArray)() {
  return &::sensor_msgs::msg::rosidl_typesupport_introspection_cpp::JoyFeedbackArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

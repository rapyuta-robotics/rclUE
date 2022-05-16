// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from sensor_msgs:msg/FluidPressure.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "sensor_msgs/msg/detail/fluid_pressure__struct.hpp"
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

void FluidPressure_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) sensor_msgs::msg::FluidPressure(_init);
}

void FluidPressure_fini_function(void * message_memory)
{
  auto typed_message = static_cast<sensor_msgs::msg::FluidPressure *>(message_memory);
  typed_message->~FluidPressure();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FluidPressure_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs::msg::FluidPressure, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "fluid_pressure",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs::msg::FluidPressure, fluid_pressure),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "variance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs::msg::FluidPressure, variance),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FluidPressure_message_members = {
  "sensor_msgs::msg",  // message namespace
  "FluidPressure",  // message name
  3,  // number of fields
  sizeof(sensor_msgs::msg::FluidPressure),
  FluidPressure_message_member_array,  // message members
  FluidPressure_init_function,  // function to initialize message memory (memory has to be allocated)
  FluidPressure_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FluidPressure_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FluidPressure_message_members,
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
get_message_type_support_handle<sensor_msgs::msg::FluidPressure>()
{
  return &::sensor_msgs::msg::rosidl_typesupport_introspection_cpp::FluidPressure_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sensor_msgs, msg, FluidPressure)() {
  return &::sensor_msgs::msg::rosidl_typesupport_introspection_cpp::FluidPressure_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

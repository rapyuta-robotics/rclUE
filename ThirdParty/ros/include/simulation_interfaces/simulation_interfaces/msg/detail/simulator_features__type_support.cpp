// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from simulation_interfaces:msg/SimulatorFeatures.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "simulation_interfaces/msg/detail/simulator_features__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace simulation_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SimulatorFeatures_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) simulation_interfaces::msg::SimulatorFeatures(_init);
}

void SimulatorFeatures_fini_function(void * message_memory)
{
  auto typed_message = static_cast<simulation_interfaces::msg::SimulatorFeatures *>(message_memory);
  typed_message->~SimulatorFeatures();
}

size_t size_function__SimulatorFeatures__features(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SimulatorFeatures__features(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__SimulatorFeatures__features(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__SimulatorFeatures__features(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint16_t *>(
    get_const_function__SimulatorFeatures__features(untyped_member, index));
  auto & value = *reinterpret_cast<uint16_t *>(untyped_value);
  value = item;
}

void assign_function__SimulatorFeatures__features(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint16_t *>(
    get_function__SimulatorFeatures__features(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint16_t *>(untyped_value);
  item = value;
}

void resize_function__SimulatorFeatures__features(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SimulatorFeatures__spawn_formats(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SimulatorFeatures__spawn_formats(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__SimulatorFeatures__spawn_formats(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__SimulatorFeatures__spawn_formats(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__SimulatorFeatures__spawn_formats(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__SimulatorFeatures__spawn_formats(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__SimulatorFeatures__spawn_formats(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__SimulatorFeatures__spawn_formats(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SimulatorFeatures_message_member_array[3] = {
  {
    "features",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces::msg::SimulatorFeatures, features),  // bytes offset in struct
    nullptr,  // default value
    size_function__SimulatorFeatures__features,  // size() function pointer
    get_const_function__SimulatorFeatures__features,  // get_const(index) function pointer
    get_function__SimulatorFeatures__features,  // get(index) function pointer
    fetch_function__SimulatorFeatures__features,  // fetch(index, &value) function pointer
    assign_function__SimulatorFeatures__features,  // assign(index, value) function pointer
    resize_function__SimulatorFeatures__features  // resize(index) function pointer
  },
  {
    "spawn_formats",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces::msg::SimulatorFeatures, spawn_formats),  // bytes offset in struct
    nullptr,  // default value
    size_function__SimulatorFeatures__spawn_formats,  // size() function pointer
    get_const_function__SimulatorFeatures__spawn_formats,  // get_const(index) function pointer
    get_function__SimulatorFeatures__spawn_formats,  // get(index) function pointer
    fetch_function__SimulatorFeatures__spawn_formats,  // fetch(index, &value) function pointer
    assign_function__SimulatorFeatures__spawn_formats,  // assign(index, value) function pointer
    resize_function__SimulatorFeatures__spawn_formats  // resize(index) function pointer
  },
  {
    "custom_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces::msg::SimulatorFeatures, custom_info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SimulatorFeatures_message_members = {
  "simulation_interfaces::msg",  // message namespace
  "SimulatorFeatures",  // message name
  3,  // number of fields
  sizeof(simulation_interfaces::msg::SimulatorFeatures),
  SimulatorFeatures_message_member_array,  // message members
  SimulatorFeatures_init_function,  // function to initialize message memory (memory has to be allocated)
  SimulatorFeatures_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SimulatorFeatures_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SimulatorFeatures_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace simulation_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<simulation_interfaces::msg::SimulatorFeatures>()
{
  return &::simulation_interfaces::msg::rosidl_typesupport_introspection_cpp::SimulatorFeatures_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, simulation_interfaces, msg, SimulatorFeatures)() {
  return &::simulation_interfaces::msg::rosidl_typesupport_introspection_cpp::SimulatorFeatures_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

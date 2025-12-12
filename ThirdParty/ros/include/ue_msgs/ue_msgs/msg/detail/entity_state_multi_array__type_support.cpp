// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ue_msgs:msg/EntityStateMultiArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ue_msgs/msg/detail/entity_state_multi_array__functions.h"
#include "ue_msgs/msg/detail/entity_state_multi_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ue_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void EntityStateMultiArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ue_msgs::msg::EntityStateMultiArray(_init);
}

void EntityStateMultiArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ue_msgs::msg::EntityStateMultiArray *>(message_memory);
  typed_message->~EntityStateMultiArray();
}

size_t size_function__EntityStateMultiArray__entity_states(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ue_msgs::msg::EntityState> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EntityStateMultiArray__entity_states(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ue_msgs::msg::EntityState> *>(untyped_member);
  return &member[index];
}

void * get_function__EntityStateMultiArray__entity_states(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ue_msgs::msg::EntityState> *>(untyped_member);
  return &member[index];
}

void fetch_function__EntityStateMultiArray__entity_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ue_msgs::msg::EntityState *>(
    get_const_function__EntityStateMultiArray__entity_states(untyped_member, index));
  auto & value = *reinterpret_cast<ue_msgs::msg::EntityState *>(untyped_value);
  value = item;
}

void assign_function__EntityStateMultiArray__entity_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ue_msgs::msg::EntityState *>(
    get_function__EntityStateMultiArray__entity_states(untyped_member, index));
  const auto & value = *reinterpret_cast<const ue_msgs::msg::EntityState *>(untyped_value);
  item = value;
}

void resize_function__EntityStateMultiArray__entity_states(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ue_msgs::msg::EntityState> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EntityStateMultiArray_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs::msg::EntityStateMultiArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "entity_states",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ue_msgs::msg::EntityState>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs::msg::EntityStateMultiArray, entity_states),  // bytes offset in struct
    nullptr,  // default value
    size_function__EntityStateMultiArray__entity_states,  // size() function pointer
    get_const_function__EntityStateMultiArray__entity_states,  // get_const(index) function pointer
    get_function__EntityStateMultiArray__entity_states,  // get(index) function pointer
    fetch_function__EntityStateMultiArray__entity_states,  // fetch(index, &value) function pointer
    assign_function__EntityStateMultiArray__entity_states,  // assign(index, value) function pointer
    resize_function__EntityStateMultiArray__entity_states  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EntityStateMultiArray_message_members = {
  "ue_msgs::msg",  // message namespace
  "EntityStateMultiArray",  // message name
  2,  // number of fields
  sizeof(ue_msgs::msg::EntityStateMultiArray),
  false,  // has_any_key_member_
  EntityStateMultiArray_message_member_array,  // message members
  EntityStateMultiArray_init_function,  // function to initialize message memory (memory has to be allocated)
  EntityStateMultiArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EntityStateMultiArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EntityStateMultiArray_message_members,
  get_message_typesupport_handle_function,
  &ue_msgs__msg__EntityStateMultiArray__get_type_hash,
  &ue_msgs__msg__EntityStateMultiArray__get_type_description,
  &ue_msgs__msg__EntityStateMultiArray__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ue_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ue_msgs::msg::EntityStateMultiArray>()
{
  return &::ue_msgs::msg::rosidl_typesupport_introspection_cpp::EntityStateMultiArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ue_msgs, msg, EntityStateMultiArray)() {
  return &::ue_msgs::msg::rosidl_typesupport_introspection_cpp::EntityStateMultiArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

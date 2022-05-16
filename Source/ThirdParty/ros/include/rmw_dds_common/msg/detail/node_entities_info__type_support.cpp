// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmw_dds_common:msg/NodeEntitiesInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmw_dds_common/msg/detail/node_entities_info__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rmw_dds_common
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void NodeEntitiesInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmw_dds_common::msg::NodeEntitiesInfo(_init);
}

void NodeEntitiesInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmw_dds_common::msg::NodeEntitiesInfo *>(message_memory);
  typed_message->~NodeEntitiesInfo();
}

size_t size_function__NodeEntitiesInfo__reader_gid_seq(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmw_dds_common::msg::Gid> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NodeEntitiesInfo__reader_gid_seq(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmw_dds_common::msg::Gid> *>(untyped_member);
  return &member[index];
}

void * get_function__NodeEntitiesInfo__reader_gid_seq(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmw_dds_common::msg::Gid> *>(untyped_member);
  return &member[index];
}

void resize_function__NodeEntitiesInfo__reader_gid_seq(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmw_dds_common::msg::Gid> *>(untyped_member);
  member->resize(size);
}

size_t size_function__NodeEntitiesInfo__writer_gid_seq(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmw_dds_common::msg::Gid> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NodeEntitiesInfo__writer_gid_seq(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmw_dds_common::msg::Gid> *>(untyped_member);
  return &member[index];
}

void * get_function__NodeEntitiesInfo__writer_gid_seq(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmw_dds_common::msg::Gid> *>(untyped_member);
  return &member[index];
}

void resize_function__NodeEntitiesInfo__writer_gid_seq(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmw_dds_common::msg::Gid> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NodeEntitiesInfo_message_member_array[4] = {
  {
    "node_namespace",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    256,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmw_dds_common::msg::NodeEntitiesInfo, node_namespace),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "node_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    256,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmw_dds_common::msg::NodeEntitiesInfo, node_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reader_gid_seq",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmw_dds_common::msg::Gid>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmw_dds_common::msg::NodeEntitiesInfo, reader_gid_seq),  // bytes offset in struct
    nullptr,  // default value
    size_function__NodeEntitiesInfo__reader_gid_seq,  // size() function pointer
    get_const_function__NodeEntitiesInfo__reader_gid_seq,  // get_const(index) function pointer
    get_function__NodeEntitiesInfo__reader_gid_seq,  // get(index) function pointer
    resize_function__NodeEntitiesInfo__reader_gid_seq  // resize(index) function pointer
  },
  {
    "writer_gid_seq",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmw_dds_common::msg::Gid>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmw_dds_common::msg::NodeEntitiesInfo, writer_gid_seq),  // bytes offset in struct
    nullptr,  // default value
    size_function__NodeEntitiesInfo__writer_gid_seq,  // size() function pointer
    get_const_function__NodeEntitiesInfo__writer_gid_seq,  // get_const(index) function pointer
    get_function__NodeEntitiesInfo__writer_gid_seq,  // get(index) function pointer
    resize_function__NodeEntitiesInfo__writer_gid_seq  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NodeEntitiesInfo_message_members = {
  "rmw_dds_common::msg",  // message namespace
  "NodeEntitiesInfo",  // message name
  4,  // number of fields
  sizeof(rmw_dds_common::msg::NodeEntitiesInfo),
  NodeEntitiesInfo_message_member_array,  // message members
  NodeEntitiesInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  NodeEntitiesInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NodeEntitiesInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NodeEntitiesInfo_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rmw_dds_common


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rmw_dds_common::msg::NodeEntitiesInfo>()
{
  return &::rmw_dds_common::msg::rosidl_typesupport_introspection_cpp::NodeEntitiesInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmw_dds_common, msg, NodeEntitiesInfo)() {
  return &::rmw_dds_common::msg::rosidl_typesupport_introspection_cpp::NodeEntitiesInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ue_msgs:srv/SpawnEntities.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ue_msgs/srv/detail/spawn_entities__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ue_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SpawnEntities_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ue_msgs::srv::SpawnEntities_Request(_init);
}

void SpawnEntities_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ue_msgs::srv::SpawnEntities_Request *>(message_memory);
  typed_message->~SpawnEntities_Request();
}

size_t size_function__SpawnEntities_Request__type(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SpawnEntities_Request__type(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__SpawnEntities_Request__type(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__SpawnEntities_Request__type(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__SpawnEntities_Request__type(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__SpawnEntities_Request__type(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__SpawnEntities_Request__type(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__SpawnEntities_Request__type(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SpawnEntities_Request__state(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ue_msgs::msg::EntityState> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SpawnEntities_Request__state(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ue_msgs::msg::EntityState> *>(untyped_member);
  return &member[index];
}

void * get_function__SpawnEntities_Request__state(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ue_msgs::msg::EntityState> *>(untyped_member);
  return &member[index];
}

void fetch_function__SpawnEntities_Request__state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ue_msgs::msg::EntityState *>(
    get_const_function__SpawnEntities_Request__state(untyped_member, index));
  auto & value = *reinterpret_cast<ue_msgs::msg::EntityState *>(untyped_value);
  value = item;
}

void assign_function__SpawnEntities_Request__state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ue_msgs::msg::EntityState *>(
    get_function__SpawnEntities_Request__state(untyped_member, index));
  const auto & value = *reinterpret_cast<const ue_msgs::msg::EntityState *>(untyped_value);
  item = value;
}

void resize_function__SpawnEntities_Request__state(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ue_msgs::msg::EntityState> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SpawnEntities_Request__tags(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SpawnEntities_Request__tags(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__SpawnEntities_Request__tags(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__SpawnEntities_Request__tags(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__SpawnEntities_Request__tags(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__SpawnEntities_Request__tags(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__SpawnEntities_Request__tags(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__SpawnEntities_Request__tags(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SpawnEntities_Request__json_parameters(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SpawnEntities_Request__json_parameters(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__SpawnEntities_Request__json_parameters(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__SpawnEntities_Request__json_parameters(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__SpawnEntities_Request__json_parameters(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__SpawnEntities_Request__json_parameters(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__SpawnEntities_Request__json_parameters(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__SpawnEntities_Request__json_parameters(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SpawnEntities_Request_message_member_array[4] = {
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs::srv::SpawnEntities_Request, type),  // bytes offset in struct
    nullptr,  // default value
    size_function__SpawnEntities_Request__type,  // size() function pointer
    get_const_function__SpawnEntities_Request__type,  // get_const(index) function pointer
    get_function__SpawnEntities_Request__type,  // get(index) function pointer
    fetch_function__SpawnEntities_Request__type,  // fetch(index, &value) function pointer
    assign_function__SpawnEntities_Request__type,  // assign(index, value) function pointer
    resize_function__SpawnEntities_Request__type  // resize(index) function pointer
  },
  {
    "state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ue_msgs::msg::EntityState>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs::srv::SpawnEntities_Request, state),  // bytes offset in struct
    nullptr,  // default value
    size_function__SpawnEntities_Request__state,  // size() function pointer
    get_const_function__SpawnEntities_Request__state,  // get_const(index) function pointer
    get_function__SpawnEntities_Request__state,  // get(index) function pointer
    fetch_function__SpawnEntities_Request__state,  // fetch(index, &value) function pointer
    assign_function__SpawnEntities_Request__state,  // assign(index, value) function pointer
    resize_function__SpawnEntities_Request__state  // resize(index) function pointer
  },
  {
    "tags",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs::srv::SpawnEntities_Request, tags),  // bytes offset in struct
    nullptr,  // default value
    size_function__SpawnEntities_Request__tags,  // size() function pointer
    get_const_function__SpawnEntities_Request__tags,  // get_const(index) function pointer
    get_function__SpawnEntities_Request__tags,  // get(index) function pointer
    fetch_function__SpawnEntities_Request__tags,  // fetch(index, &value) function pointer
    assign_function__SpawnEntities_Request__tags,  // assign(index, value) function pointer
    resize_function__SpawnEntities_Request__tags  // resize(index) function pointer
  },
  {
    "json_parameters",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs::srv::SpawnEntities_Request, json_parameters),  // bytes offset in struct
    nullptr,  // default value
    size_function__SpawnEntities_Request__json_parameters,  // size() function pointer
    get_const_function__SpawnEntities_Request__json_parameters,  // get_const(index) function pointer
    get_function__SpawnEntities_Request__json_parameters,  // get(index) function pointer
    fetch_function__SpawnEntities_Request__json_parameters,  // fetch(index, &value) function pointer
    assign_function__SpawnEntities_Request__json_parameters,  // assign(index, value) function pointer
    resize_function__SpawnEntities_Request__json_parameters  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SpawnEntities_Request_message_members = {
  "ue_msgs::srv",  // message namespace
  "SpawnEntities_Request",  // message name
  4,  // number of fields
  sizeof(ue_msgs::srv::SpawnEntities_Request),
  SpawnEntities_Request_message_member_array,  // message members
  SpawnEntities_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SpawnEntities_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SpawnEntities_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SpawnEntities_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ue_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ue_msgs::srv::SpawnEntities_Request>()
{
  return &::ue_msgs::srv::rosidl_typesupport_introspection_cpp::SpawnEntities_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ue_msgs, srv, SpawnEntities_Request)() {
  return &::ue_msgs::srv::rosidl_typesupport_introspection_cpp::SpawnEntities_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "ue_msgs/srv/detail/spawn_entities__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ue_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SpawnEntities_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ue_msgs::srv::SpawnEntities_Response(_init);
}

void SpawnEntities_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ue_msgs::srv::SpawnEntities_Response *>(message_memory);
  typed_message->~SpawnEntities_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SpawnEntities_Response_message_member_array[2] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs::srv::SpawnEntities_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "status_message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs::srv::SpawnEntities_Response, status_message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SpawnEntities_Response_message_members = {
  "ue_msgs::srv",  // message namespace
  "SpawnEntities_Response",  // message name
  2,  // number of fields
  sizeof(ue_msgs::srv::SpawnEntities_Response),
  SpawnEntities_Response_message_member_array,  // message members
  SpawnEntities_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SpawnEntities_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SpawnEntities_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SpawnEntities_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ue_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ue_msgs::srv::SpawnEntities_Response>()
{
  return &::ue_msgs::srv::rosidl_typesupport_introspection_cpp::SpawnEntities_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ue_msgs, srv, SpawnEntities_Response)() {
  return &::ue_msgs::srv::rosidl_typesupport_introspection_cpp::SpawnEntities_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "ue_msgs/srv/detail/spawn_entities__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace ue_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers SpawnEntities_service_members = {
  "ue_msgs::srv",  // service namespace
  "SpawnEntities",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<ue_msgs::srv::SpawnEntities>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t SpawnEntities_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SpawnEntities_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ue_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ue_msgs::srv::SpawnEntities>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::ue_msgs::srv::rosidl_typesupport_introspection_cpp::SpawnEntities_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::ue_msgs::srv::SpawnEntities_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::ue_msgs::srv::SpawnEntities_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ue_msgs, srv, SpawnEntities)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<ue_msgs::srv::SpawnEntities>();
}

#ifdef __cplusplus
}
#endif

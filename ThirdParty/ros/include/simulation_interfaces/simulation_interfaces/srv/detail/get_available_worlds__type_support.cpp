// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from simulation_interfaces:srv/GetAvailableWorlds.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "simulation_interfaces/srv/detail/get_available_worlds__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace simulation_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetAvailableWorlds_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) simulation_interfaces::srv::GetAvailableWorlds_Request(_init);
}

void GetAvailableWorlds_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<simulation_interfaces::srv::GetAvailableWorlds_Request *>(message_memory);
  typed_message->~GetAvailableWorlds_Request();
}

size_t size_function__GetAvailableWorlds_Request__additional_sources(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetAvailableWorlds_Request__additional_sources(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__GetAvailableWorlds_Request__additional_sources(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetAvailableWorlds_Request__additional_sources(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__GetAvailableWorlds_Request__additional_sources(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__GetAvailableWorlds_Request__additional_sources(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__GetAvailableWorlds_Request__additional_sources(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__GetAvailableWorlds_Request__additional_sources(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetAvailableWorlds_Request_message_member_array[4] = {
  {
    "additional_sources",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces::srv::GetAvailableWorlds_Request, additional_sources),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetAvailableWorlds_Request__additional_sources,  // size() function pointer
    get_const_function__GetAvailableWorlds_Request__additional_sources,  // get_const(index) function pointer
    get_function__GetAvailableWorlds_Request__additional_sources,  // get(index) function pointer
    fetch_function__GetAvailableWorlds_Request__additional_sources,  // fetch(index, &value) function pointer
    assign_function__GetAvailableWorlds_Request__additional_sources,  // assign(index, value) function pointer
    resize_function__GetAvailableWorlds_Request__additional_sources  // resize(index) function pointer
  },
  {
    "filter",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<simulation_interfaces::msg::TagsFilter>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces::srv::GetAvailableWorlds_Request, filter),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "offline_only",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces::srv::GetAvailableWorlds_Request, offline_only),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "continue_on_error",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces::srv::GetAvailableWorlds_Request, continue_on_error),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetAvailableWorlds_Request_message_members = {
  "simulation_interfaces::srv",  // message namespace
  "GetAvailableWorlds_Request",  // message name
  4,  // number of fields
  sizeof(simulation_interfaces::srv::GetAvailableWorlds_Request),
  GetAvailableWorlds_Request_message_member_array,  // message members
  GetAvailableWorlds_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetAvailableWorlds_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetAvailableWorlds_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetAvailableWorlds_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace simulation_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<simulation_interfaces::srv::GetAvailableWorlds_Request>()
{
  return &::simulation_interfaces::srv::rosidl_typesupport_introspection_cpp::GetAvailableWorlds_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, simulation_interfaces, srv, GetAvailableWorlds_Request)() {
  return &::simulation_interfaces::srv::rosidl_typesupport_introspection_cpp::GetAvailableWorlds_Request_message_type_support_handle;
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
// #include "simulation_interfaces/srv/detail/get_available_worlds__struct.hpp"
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

namespace simulation_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetAvailableWorlds_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) simulation_interfaces::srv::GetAvailableWorlds_Response(_init);
}

void GetAvailableWorlds_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<simulation_interfaces::srv::GetAvailableWorlds_Response *>(message_memory);
  typed_message->~GetAvailableWorlds_Response();
}

size_t size_function__GetAvailableWorlds_Response__worlds(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<simulation_interfaces::msg::WorldResource> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetAvailableWorlds_Response__worlds(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<simulation_interfaces::msg::WorldResource> *>(untyped_member);
  return &member[index];
}

void * get_function__GetAvailableWorlds_Response__worlds(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<simulation_interfaces::msg::WorldResource> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetAvailableWorlds_Response__worlds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const simulation_interfaces::msg::WorldResource *>(
    get_const_function__GetAvailableWorlds_Response__worlds(untyped_member, index));
  auto & value = *reinterpret_cast<simulation_interfaces::msg::WorldResource *>(untyped_value);
  value = item;
}

void assign_function__GetAvailableWorlds_Response__worlds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<simulation_interfaces::msg::WorldResource *>(
    get_function__GetAvailableWorlds_Response__worlds(untyped_member, index));
  const auto & value = *reinterpret_cast<const simulation_interfaces::msg::WorldResource *>(untyped_value);
  item = value;
}

void resize_function__GetAvailableWorlds_Response__worlds(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<simulation_interfaces::msg::WorldResource> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetAvailableWorlds_Response_message_member_array[2] = {
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<simulation_interfaces::msg::Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces::srv::GetAvailableWorlds_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "worlds",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<simulation_interfaces::msg::WorldResource>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces::srv::GetAvailableWorlds_Response, worlds),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetAvailableWorlds_Response__worlds,  // size() function pointer
    get_const_function__GetAvailableWorlds_Response__worlds,  // get_const(index) function pointer
    get_function__GetAvailableWorlds_Response__worlds,  // get(index) function pointer
    fetch_function__GetAvailableWorlds_Response__worlds,  // fetch(index, &value) function pointer
    assign_function__GetAvailableWorlds_Response__worlds,  // assign(index, value) function pointer
    resize_function__GetAvailableWorlds_Response__worlds  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetAvailableWorlds_Response_message_members = {
  "simulation_interfaces::srv",  // message namespace
  "GetAvailableWorlds_Response",  // message name
  2,  // number of fields
  sizeof(simulation_interfaces::srv::GetAvailableWorlds_Response),
  GetAvailableWorlds_Response_message_member_array,  // message members
  GetAvailableWorlds_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetAvailableWorlds_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetAvailableWorlds_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetAvailableWorlds_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace simulation_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<simulation_interfaces::srv::GetAvailableWorlds_Response>()
{
  return &::simulation_interfaces::srv::rosidl_typesupport_introspection_cpp::GetAvailableWorlds_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, simulation_interfaces, srv, GetAvailableWorlds_Response)() {
  return &::simulation_interfaces::srv::rosidl_typesupport_introspection_cpp::GetAvailableWorlds_Response_message_type_support_handle;
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
// #include "simulation_interfaces/srv/detail/get_available_worlds__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace simulation_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetAvailableWorlds_service_members = {
  "simulation_interfaces::srv",  // service namespace
  "GetAvailableWorlds",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<simulation_interfaces::srv::GetAvailableWorlds>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t GetAvailableWorlds_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetAvailableWorlds_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace simulation_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<simulation_interfaces::srv::GetAvailableWorlds>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::simulation_interfaces::srv::rosidl_typesupport_introspection_cpp::GetAvailableWorlds_service_type_support_handle;
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
        ::simulation_interfaces::srv::GetAvailableWorlds_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::simulation_interfaces::srv::GetAvailableWorlds_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, simulation_interfaces, srv, GetAvailableWorlds)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<simulation_interfaces::srv::GetAvailableWorlds>();
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from simulation_interfaces:srv/LoadWorld.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "simulation_interfaces/srv/detail/load_world__functions.h"
#include "simulation_interfaces/srv/detail/load_world__struct.hpp"
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

void LoadWorld_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) simulation_interfaces::srv::LoadWorld_Request(_init);
}

void LoadWorld_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<simulation_interfaces::srv::LoadWorld_Request *>(message_memory);
  typed_message->~LoadWorld_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LoadWorld_Request_message_member_array[3] = {
  {
    "world_resource",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<simulation_interfaces::msg::Resource>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces::srv::LoadWorld_Request, world_resource),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "fail_on_unsupported_element",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces::srv::LoadWorld_Request, fail_on_unsupported_element),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ignore_missing_or_unsupported_assets",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces::srv::LoadWorld_Request, ignore_missing_or_unsupported_assets),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LoadWorld_Request_message_members = {
  "simulation_interfaces::srv",  // message namespace
  "LoadWorld_Request",  // message name
  3,  // number of fields
  sizeof(simulation_interfaces::srv::LoadWorld_Request),
  false,  // has_any_key_member_
  LoadWorld_Request_message_member_array,  // message members
  LoadWorld_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  LoadWorld_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LoadWorld_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LoadWorld_Request_message_members,
  get_message_typesupport_handle_function,
  &simulation_interfaces__srv__LoadWorld_Request__get_type_hash,
  &simulation_interfaces__srv__LoadWorld_Request__get_type_description,
  &simulation_interfaces__srv__LoadWorld_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace simulation_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<simulation_interfaces::srv::LoadWorld_Request>()
{
  return &::simulation_interfaces::srv::rosidl_typesupport_introspection_cpp::LoadWorld_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, simulation_interfaces, srv, LoadWorld_Request)() {
  return &::simulation_interfaces::srv::rosidl_typesupport_introspection_cpp::LoadWorld_Request_message_type_support_handle;
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
// #include "simulation_interfaces/srv/detail/load_world__functions.h"
// already included above
// #include "simulation_interfaces/srv/detail/load_world__struct.hpp"
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

void LoadWorld_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) simulation_interfaces::srv::LoadWorld_Response(_init);
}

void LoadWorld_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<simulation_interfaces::srv::LoadWorld_Response *>(message_memory);
  typed_message->~LoadWorld_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LoadWorld_Response_message_member_array[2] = {
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<simulation_interfaces::msg::Result>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces::srv::LoadWorld_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "world",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<simulation_interfaces::msg::WorldResource>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces::srv::LoadWorld_Response, world),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LoadWorld_Response_message_members = {
  "simulation_interfaces::srv",  // message namespace
  "LoadWorld_Response",  // message name
  2,  // number of fields
  sizeof(simulation_interfaces::srv::LoadWorld_Response),
  false,  // has_any_key_member_
  LoadWorld_Response_message_member_array,  // message members
  LoadWorld_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  LoadWorld_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LoadWorld_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LoadWorld_Response_message_members,
  get_message_typesupport_handle_function,
  &simulation_interfaces__srv__LoadWorld_Response__get_type_hash,
  &simulation_interfaces__srv__LoadWorld_Response__get_type_description,
  &simulation_interfaces__srv__LoadWorld_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace simulation_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<simulation_interfaces::srv::LoadWorld_Response>()
{
  return &::simulation_interfaces::srv::rosidl_typesupport_introspection_cpp::LoadWorld_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, simulation_interfaces, srv, LoadWorld_Response)() {
  return &::simulation_interfaces::srv::rosidl_typesupport_introspection_cpp::LoadWorld_Response_message_type_support_handle;
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
// #include "simulation_interfaces/srv/detail/load_world__functions.h"
// already included above
// #include "simulation_interfaces/srv/detail/load_world__struct.hpp"
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

void LoadWorld_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) simulation_interfaces::srv::LoadWorld_Event(_init);
}

void LoadWorld_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<simulation_interfaces::srv::LoadWorld_Event *>(message_memory);
  typed_message->~LoadWorld_Event();
}

size_t size_function__LoadWorld_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<simulation_interfaces::srv::LoadWorld_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LoadWorld_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<simulation_interfaces::srv::LoadWorld_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__LoadWorld_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<simulation_interfaces::srv::LoadWorld_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__LoadWorld_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const simulation_interfaces::srv::LoadWorld_Request *>(
    get_const_function__LoadWorld_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<simulation_interfaces::srv::LoadWorld_Request *>(untyped_value);
  value = item;
}

void assign_function__LoadWorld_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<simulation_interfaces::srv::LoadWorld_Request *>(
    get_function__LoadWorld_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const simulation_interfaces::srv::LoadWorld_Request *>(untyped_value);
  item = value;
}

void resize_function__LoadWorld_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<simulation_interfaces::srv::LoadWorld_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LoadWorld_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<simulation_interfaces::srv::LoadWorld_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LoadWorld_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<simulation_interfaces::srv::LoadWorld_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__LoadWorld_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<simulation_interfaces::srv::LoadWorld_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__LoadWorld_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const simulation_interfaces::srv::LoadWorld_Response *>(
    get_const_function__LoadWorld_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<simulation_interfaces::srv::LoadWorld_Response *>(untyped_value);
  value = item;
}

void assign_function__LoadWorld_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<simulation_interfaces::srv::LoadWorld_Response *>(
    get_function__LoadWorld_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const simulation_interfaces::srv::LoadWorld_Response *>(untyped_value);
  item = value;
}

void resize_function__LoadWorld_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<simulation_interfaces::srv::LoadWorld_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LoadWorld_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces::srv::LoadWorld_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<simulation_interfaces::srv::LoadWorld_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(simulation_interfaces::srv::LoadWorld_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__LoadWorld_Event__request,  // size() function pointer
    get_const_function__LoadWorld_Event__request,  // get_const(index) function pointer
    get_function__LoadWorld_Event__request,  // get(index) function pointer
    fetch_function__LoadWorld_Event__request,  // fetch(index, &value) function pointer
    assign_function__LoadWorld_Event__request,  // assign(index, value) function pointer
    resize_function__LoadWorld_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<simulation_interfaces::srv::LoadWorld_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(simulation_interfaces::srv::LoadWorld_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__LoadWorld_Event__response,  // size() function pointer
    get_const_function__LoadWorld_Event__response,  // get_const(index) function pointer
    get_function__LoadWorld_Event__response,  // get(index) function pointer
    fetch_function__LoadWorld_Event__response,  // fetch(index, &value) function pointer
    assign_function__LoadWorld_Event__response,  // assign(index, value) function pointer
    resize_function__LoadWorld_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LoadWorld_Event_message_members = {
  "simulation_interfaces::srv",  // message namespace
  "LoadWorld_Event",  // message name
  3,  // number of fields
  sizeof(simulation_interfaces::srv::LoadWorld_Event),
  false,  // has_any_key_member_
  LoadWorld_Event_message_member_array,  // message members
  LoadWorld_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  LoadWorld_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LoadWorld_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LoadWorld_Event_message_members,
  get_message_typesupport_handle_function,
  &simulation_interfaces__srv__LoadWorld_Event__get_type_hash,
  &simulation_interfaces__srv__LoadWorld_Event__get_type_description,
  &simulation_interfaces__srv__LoadWorld_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace simulation_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<simulation_interfaces::srv::LoadWorld_Event>()
{
  return &::simulation_interfaces::srv::rosidl_typesupport_introspection_cpp::LoadWorld_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, simulation_interfaces, srv, LoadWorld_Event)() {
  return &::simulation_interfaces::srv::rosidl_typesupport_introspection_cpp::LoadWorld_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "simulation_interfaces/srv/detail/load_world__functions.h"
// already included above
// #include "simulation_interfaces/srv/detail/load_world__struct.hpp"
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
static ::rosidl_typesupport_introspection_cpp::ServiceMembers LoadWorld_service_members = {
  "simulation_interfaces::srv",  // service namespace
  "LoadWorld",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<simulation_interfaces::srv::LoadWorld>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t LoadWorld_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LoadWorld_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<simulation_interfaces::srv::LoadWorld_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<simulation_interfaces::srv::LoadWorld_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<simulation_interfaces::srv::LoadWorld_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<simulation_interfaces::srv::LoadWorld>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<simulation_interfaces::srv::LoadWorld>,
  &simulation_interfaces__srv__LoadWorld__get_type_hash,
  &simulation_interfaces__srv__LoadWorld__get_type_description,
  &simulation_interfaces__srv__LoadWorld__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace simulation_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<simulation_interfaces::srv::LoadWorld>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::simulation_interfaces::srv::rosidl_typesupport_introspection_cpp::LoadWorld_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::simulation_interfaces::srv::LoadWorld_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::simulation_interfaces::srv::LoadWorld_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::simulation_interfaces::srv::LoadWorld_Event
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, simulation_interfaces, srv, LoadWorld)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<simulation_interfaces::srv::LoadWorld>();
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from visualization_msgs:srv/GetInteractiveMarkers.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "visualization_msgs/srv/detail/get_interactive_markers__rosidl_typesupport_introspection_c.h"
#include "visualization_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "visualization_msgs/srv/detail/get_interactive_markers__functions.h"
#include "visualization_msgs/srv/detail/get_interactive_markers__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GetInteractiveMarkers_Request__rosidl_typesupport_introspection_c__GetInteractiveMarkers_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  visualization_msgs__srv__GetInteractiveMarkers_Request__init(message_memory);
}

void GetInteractiveMarkers_Request__rosidl_typesupport_introspection_c__GetInteractiveMarkers_Request_fini_function(void * message_memory)
{
  visualization_msgs__srv__GetInteractiveMarkers_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetInteractiveMarkers_Request__rosidl_typesupport_introspection_c__GetInteractiveMarkers_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__srv__GetInteractiveMarkers_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetInteractiveMarkers_Request__rosidl_typesupport_introspection_c__GetInteractiveMarkers_Request_message_members = {
  "visualization_msgs__srv",  // message namespace
  "GetInteractiveMarkers_Request",  // message name
  1,  // number of fields
  sizeof(visualization_msgs__srv__GetInteractiveMarkers_Request),
  GetInteractiveMarkers_Request__rosidl_typesupport_introspection_c__GetInteractiveMarkers_Request_message_member_array,  // message members
  GetInteractiveMarkers_Request__rosidl_typesupport_introspection_c__GetInteractiveMarkers_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetInteractiveMarkers_Request__rosidl_typesupport_introspection_c__GetInteractiveMarkers_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetInteractiveMarkers_Request__rosidl_typesupport_introspection_c__GetInteractiveMarkers_Request_message_type_support_handle = {
  0,
  &GetInteractiveMarkers_Request__rosidl_typesupport_introspection_c__GetInteractiveMarkers_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_visualization_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, visualization_msgs, srv, GetInteractiveMarkers_Request)() {
  if (!GetInteractiveMarkers_Request__rosidl_typesupport_introspection_c__GetInteractiveMarkers_Request_message_type_support_handle.typesupport_identifier) {
    GetInteractiveMarkers_Request__rosidl_typesupport_introspection_c__GetInteractiveMarkers_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetInteractiveMarkers_Request__rosidl_typesupport_introspection_c__GetInteractiveMarkers_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "visualization_msgs/srv/detail/get_interactive_markers__rosidl_typesupport_introspection_c.h"
// already included above
// #include "visualization_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "visualization_msgs/srv/detail/get_interactive_markers__functions.h"
// already included above
// #include "visualization_msgs/srv/detail/get_interactive_markers__struct.h"


// Include directives for member types
// Member `markers`
#include "visualization_msgs/msg/interactive_marker.h"
// Member `markers`
#include "visualization_msgs/msg/detail/interactive_marker__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetInteractiveMarkers_Response__rosidl_typesupport_introspection_c__GetInteractiveMarkers_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  visualization_msgs__srv__GetInteractiveMarkers_Response__init(message_memory);
}

void GetInteractiveMarkers_Response__rosidl_typesupport_introspection_c__GetInteractiveMarkers_Response_fini_function(void * message_memory)
{
  visualization_msgs__srv__GetInteractiveMarkers_Response__fini(message_memory);
}

size_t GetInteractiveMarkers_Response__rosidl_typesupport_introspection_c__size_function__InteractiveMarker__markers(
  const void * untyped_member)
{
  const visualization_msgs__msg__InteractiveMarker__Sequence * member =
    (const visualization_msgs__msg__InteractiveMarker__Sequence *)(untyped_member);
  return member->size;
}

const void * GetInteractiveMarkers_Response__rosidl_typesupport_introspection_c__get_const_function__InteractiveMarker__markers(
  const void * untyped_member, size_t index)
{
  const visualization_msgs__msg__InteractiveMarker__Sequence * member =
    (const visualization_msgs__msg__InteractiveMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GetInteractiveMarkers_Response__rosidl_typesupport_introspection_c__get_function__InteractiveMarker__markers(
  void * untyped_member, size_t index)
{
  visualization_msgs__msg__InteractiveMarker__Sequence * member =
    (visualization_msgs__msg__InteractiveMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GetInteractiveMarkers_Response__rosidl_typesupport_introspection_c__resize_function__InteractiveMarker__markers(
  void * untyped_member, size_t size)
{
  visualization_msgs__msg__InteractiveMarker__Sequence * member =
    (visualization_msgs__msg__InteractiveMarker__Sequence *)(untyped_member);
  visualization_msgs__msg__InteractiveMarker__Sequence__fini(member);
  return visualization_msgs__msg__InteractiveMarker__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember GetInteractiveMarkers_Response__rosidl_typesupport_introspection_c__GetInteractiveMarkers_Response_message_member_array[2] = {
  {
    "sequence_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__srv__GetInteractiveMarkers_Response, sequence_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "markers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__srv__GetInteractiveMarkers_Response, markers),  // bytes offset in struct
    NULL,  // default value
    GetInteractiveMarkers_Response__rosidl_typesupport_introspection_c__size_function__InteractiveMarker__markers,  // size() function pointer
    GetInteractiveMarkers_Response__rosidl_typesupport_introspection_c__get_const_function__InteractiveMarker__markers,  // get_const(index) function pointer
    GetInteractiveMarkers_Response__rosidl_typesupport_introspection_c__get_function__InteractiveMarker__markers,  // get(index) function pointer
    GetInteractiveMarkers_Response__rosidl_typesupport_introspection_c__resize_function__InteractiveMarker__markers  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetInteractiveMarkers_Response__rosidl_typesupport_introspection_c__GetInteractiveMarkers_Response_message_members = {
  "visualization_msgs__srv",  // message namespace
  "GetInteractiveMarkers_Response",  // message name
  2,  // number of fields
  sizeof(visualization_msgs__srv__GetInteractiveMarkers_Response),
  GetInteractiveMarkers_Response__rosidl_typesupport_introspection_c__GetInteractiveMarkers_Response_message_member_array,  // message members
  GetInteractiveMarkers_Response__rosidl_typesupport_introspection_c__GetInteractiveMarkers_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetInteractiveMarkers_Response__rosidl_typesupport_introspection_c__GetInteractiveMarkers_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetInteractiveMarkers_Response__rosidl_typesupport_introspection_c__GetInteractiveMarkers_Response_message_type_support_handle = {
  0,
  &GetInteractiveMarkers_Response__rosidl_typesupport_introspection_c__GetInteractiveMarkers_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_visualization_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, visualization_msgs, srv, GetInteractiveMarkers_Response)() {
  GetInteractiveMarkers_Response__rosidl_typesupport_introspection_c__GetInteractiveMarkers_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, visualization_msgs, msg, InteractiveMarker)();
  if (!GetInteractiveMarkers_Response__rosidl_typesupport_introspection_c__GetInteractiveMarkers_Response_message_type_support_handle.typesupport_identifier) {
    GetInteractiveMarkers_Response__rosidl_typesupport_introspection_c__GetInteractiveMarkers_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetInteractiveMarkers_Response__rosidl_typesupport_introspection_c__GetInteractiveMarkers_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "visualization_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "visualization_msgs/srv/detail/get_interactive_markers__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers visualization_msgs__srv__detail__get_interactive_markers__rosidl_typesupport_introspection_c__GetInteractiveMarkers_service_members = {
  "visualization_msgs__srv",  // service namespace
  "GetInteractiveMarkers",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // visualization_msgs__srv__detail__get_interactive_markers__rosidl_typesupport_introspection_c__GetInteractiveMarkers_Request_message_type_support_handle,
  NULL  // response message
  // visualization_msgs__srv__detail__get_interactive_markers__rosidl_typesupport_introspection_c__GetInteractiveMarkers_Response_message_type_support_handle
};

static rosidl_service_type_support_t visualization_msgs__srv__detail__get_interactive_markers__rosidl_typesupport_introspection_c__GetInteractiveMarkers_service_type_support_handle = {
  0,
  &visualization_msgs__srv__detail__get_interactive_markers__rosidl_typesupport_introspection_c__GetInteractiveMarkers_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, visualization_msgs, srv, GetInteractiveMarkers_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, visualization_msgs, srv, GetInteractiveMarkers_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_visualization_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, visualization_msgs, srv, GetInteractiveMarkers)() {
  if (!visualization_msgs__srv__detail__get_interactive_markers__rosidl_typesupport_introspection_c__GetInteractiveMarkers_service_type_support_handle.typesupport_identifier) {
    visualization_msgs__srv__detail__get_interactive_markers__rosidl_typesupport_introspection_c__GetInteractiveMarkers_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)visualization_msgs__srv__detail__get_interactive_markers__rosidl_typesupport_introspection_c__GetInteractiveMarkers_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, visualization_msgs, srv, GetInteractiveMarkers_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, visualization_msgs, srv, GetInteractiveMarkers_Response)()->data;
  }

  return &visualization_msgs__srv__detail__get_interactive_markers__rosidl_typesupport_introspection_c__GetInteractiveMarkers_service_type_support_handle;
}

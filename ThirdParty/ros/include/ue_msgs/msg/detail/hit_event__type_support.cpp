// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ue_msgs:msg/HitEvent.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"
#include "string"
#include "ue_msgs/msg/detail/hit_event__struct.hpp"
#include "vector"

namespace ue_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void HitEvent_init_function(void* message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
    new (message_memory) ue_msgs::msg::HitEvent(_init);
}

void HitEvent_fini_function(void* message_memory)
{
    auto typed_message = static_cast<ue_msgs::msg::HitEvent*>(message_memory);
    typed_message->~HitEvent();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember HitEvent_message_member_array[5] = {
    {
        "self_name",                                                // name
        ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,    // type
        0,                                                          // upper bound of string
        nullptr,                                                    // members of sub message
        false,                                                      // is array
        0,                                                          // array size
        false,                                                      // is upper bound
        offsetof(ue_msgs::msg::HitEvent, self_name),                // bytes offset in struct
        nullptr,                                                    // default value
        nullptr,                                                    // size() function pointer
        nullptr,                                                    // get_const(index) function pointer
        nullptr,                                                    // get(index) function pointer
        nullptr                                                     // resize(index) function pointer
    },
    {
        "other_actor_name",                                         // name
        ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,    // type
        0,                                                          // upper bound of string
        nullptr,                                                    // members of sub message
        false,                                                      // is array
        0,                                                          // array size
        false,                                                      // is upper bound
        offsetof(ue_msgs::msg::HitEvent, other_actor_name),         // bytes offset in struct
        nullptr,                                                    // default value
        nullptr,                                                    // size() function pointer
        nullptr,                                                    // get_const(index) function pointer
        nullptr,                                                    // get(index) function pointer
        nullptr                                                     // resize(index) function pointer
    },
    {
        "normal_impluse",                                            // name
        ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,    // type
        0,                                                           // upper bound of string
        ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
            geometry_msgs::msg::Vector3>(),                  // members of sub message
        false,                                               // is array
        0,                                                   // array size
        false,                                               // is upper bound
        offsetof(ue_msgs::msg::HitEvent, normal_impluse),    // bytes offset in struct
        nullptr,                                             // default value
        nullptr,                                             // size() function pointer
        nullptr,                                             // get_const(index) function pointer
        nullptr,                                             // get(index) function pointer
        nullptr                                              // resize(index) function pointer
    },
    {
        "hit_result",                                                // name
        ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,    // type
        0,                                                           // upper bound of string
        ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
            ue_msgs::msg::HitResult>(),                  // members of sub message
        false,                                           // is array
        0,                                               // array size
        false,                                           // is upper bound
        offsetof(ue_msgs::msg::HitEvent, hit_result),    // bytes offset in struct
        nullptr,                                         // default value
        nullptr,                                         // size() function pointer
        nullptr,                                         // get_const(index) function pointer
        nullptr,                                         // get(index) function pointer
        nullptr                                          // resize(index) function pointer
    },
    {
        "other_component_name",                                     // name
        ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,    // type
        0,                                                          // upper bound of string
        nullptr,                                                    // members of sub message
        false,                                                      // is array
        0,                                                          // array size
        false,                                                      // is upper bound
        offsetof(ue_msgs::msg::HitEvent, other_component_name),     // bytes offset in struct
        nullptr,                                                    // default value
        nullptr,                                                    // size() function pointer
        nullptr,                                                    // get_const(index) function pointer
        nullptr,                                                    // get(index) function pointer
        nullptr                                                     // resize(index) function pointer
    }};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers HitEvent_message_members = {
    "ue_msgs::msg",    // message namespace
    "HitEvent",        // message name
    5,                 // number of fields
    sizeof(ue_msgs::msg::HitEvent),
    HitEvent_message_member_array,    // message members
    HitEvent_init_function,           // function to initialize message memory (memory has to be allocated)
    HitEvent_fini_function            // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t HitEvent_message_type_support_handle = {
    ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    &HitEvent_message_members,
    get_message_typesupport_handle_function,
};

}    // namespace rosidl_typesupport_introspection_cpp

}    // namespace msg

}    // namespace ue_msgs

namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC const rosidl_message_type_support_t*
get_message_type_support_handle<ue_msgs::msg::HitEvent>()
{
    return &::ue_msgs::msg::rosidl_typesupport_introspection_cpp::HitEvent_message_type_support_handle;
}

}    // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

    ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
    const rosidl_message_type_support_t* ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp,
                                                                                           ue_msgs,
                                                                                           msg,
                                                                                           HitEvent)()
    {
        return &::ue_msgs::msg::rosidl_typesupport_introspection_cpp::HitEvent_message_type_support_handle;
    }

#ifdef __cplusplus
}
#endif

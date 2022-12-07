// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from example_interfaces:msg/WString.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "example_interfaces/msg/detail/w_string__struct.hpp"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"
#include "string"
#include "vector"

namespace example_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void WString_init_function(void* message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
    new (message_memory) example_interfaces::msg::WString(_init);
}

void WString_fini_function(void* message_memory)
{
    auto typed_message = static_cast<example_interfaces::msg::WString*>(message_memory);
    typed_message->~WString();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember WString_message_member_array[1] = {{
    "data",                                                      // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_WSTRING,    // type
    0,                                                           // upper bound of string
    nullptr,                                                     // members of sub message
    false,                                                       // is array
    0,                                                           // array size
    false,                                                       // is upper bound
    offsetof(example_interfaces::msg::WString, data),            // bytes offset in struct
    nullptr,                                                     // default value
    nullptr,                                                     // size() function pointer
    nullptr,                                                     // get_const(index) function pointer
    nullptr,                                                     // get(index) function pointer
    nullptr,                                                     // fetch(index, &value) function pointer
    nullptr,                                                     // assign(index, value) function pointer
    nullptr                                                      // resize(index) function pointer
}};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers WString_message_members = {
    "example_interfaces::msg",    // message namespace
    "WString",                    // message name
    1,                            // number of fields
    sizeof(example_interfaces::msg::WString),
    WString_message_member_array,    // message members
    WString_init_function,           // function to initialize message memory (memory has to be allocated)
    WString_fini_function            // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t WString_message_type_support_handle = {
    ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    &WString_message_members,
    get_message_typesupport_handle_function,
};

}    // namespace rosidl_typesupport_introspection_cpp

}    // namespace msg

}    // namespace example_interfaces

namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC const rosidl_message_type_support_t*
get_message_type_support_handle<example_interfaces::msg::WString>()
{
    return &::example_interfaces::msg::rosidl_typesupport_introspection_cpp::WString_message_type_support_handle;
}

}    // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

    ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
    const rosidl_message_type_support_t* ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp,
                                                                                           example_interfaces,
                                                                                           msg,
                                                                                           WString)()
    {
        return &::example_interfaces::msg::rosidl_typesupport_introspection_cpp::WString_message_type_support_handle;
    }

#ifdef __cplusplus
}
#endif

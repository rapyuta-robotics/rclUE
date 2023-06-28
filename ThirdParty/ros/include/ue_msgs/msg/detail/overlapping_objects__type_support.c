// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ue_msgs:msg/OverlappingObjects.idl
// generated code does not contain a copyright notice

#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ue_msgs/msg/detail/overlapping_objects__functions.h"
#include "ue_msgs/msg/detail/overlapping_objects__rosidl_typesupport_introspection_c.h"
#include "ue_msgs/msg/detail/overlapping_objects__struct.h"
#include "ue_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include <stddef.h>

// Include directives for member types
// Member `actors`
// Member `components`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

    void OverlappingObjects__rosidl_typesupport_introspection_c__OverlappingObjects_init_function(
        void* message_memory,
        enum rosidl_runtime_c__message_initialization _init)
    {
        // TODO(karsten1987): initializers are not yet implemented for typesupport c
        // see https://github.com/ros2/ros2/issues/397
        (void)_init;
        ue_msgs__msg__OverlappingObjects__init(message_memory);
    }

    void OverlappingObjects__rosidl_typesupport_introspection_c__OverlappingObjects_fini_function(void* message_memory)
    {
        ue_msgs__msg__OverlappingObjects__fini(message_memory);
    }

    static rosidl_typesupport_introspection_c__MessageMember
        OverlappingObjects__rosidl_typesupport_introspection_c__OverlappingObjects_message_member_array[2] = {
            {
                "actors",                                               // name
                rosidl_typesupport_introspection_c__ROS_TYPE_STRING,    // type
                0,                                                      // upper bound of string
                NULL,                                                   // members of sub message
                true,                                                   // is array
                0,                                                      // array size
                false,                                                  // is upper bound
                offsetof(ue_msgs__msg__OverlappingObjects, actors),     // bytes offset in struct
                NULL,                                                   // default value
                NULL,                                                   // size() function pointer
                NULL,                                                   // get_const(index) function pointer
                NULL,                                                   // get(index) function pointer
                NULL                                                    // resize(index) function pointer
            },
            {
                "components",                                              // name
                rosidl_typesupport_introspection_c__ROS_TYPE_STRING,       // type
                0,                                                         // upper bound of string
                NULL,                                                      // members of sub message
                true,                                                      // is array
                0,                                                         // array size
                false,                                                     // is upper bound
                offsetof(ue_msgs__msg__OverlappingObjects, components),    // bytes offset in struct
                NULL,                                                      // default value
                NULL,                                                      // size() function pointer
                NULL,                                                      // get_const(index) function pointer
                NULL,                                                      // get(index) function pointer
                NULL                                                       // resize(index) function pointer
            }};

    static const rosidl_typesupport_introspection_c__MessageMembers
        OverlappingObjects__rosidl_typesupport_introspection_c__OverlappingObjects_message_members = {
            "ue_msgs__msg",          // message namespace
            "OverlappingObjects",    // message name
            2,                       // number of fields
            sizeof(ue_msgs__msg__OverlappingObjects),
            OverlappingObjects__rosidl_typesupport_introspection_c__OverlappingObjects_message_member_array,    // message members
            OverlappingObjects__rosidl_typesupport_introspection_c__OverlappingObjects_init_function,    // function to initialize message memory (memory has to be allocated)
            OverlappingObjects__rosidl_typesupport_introspection_c__OverlappingObjects_fini_function    // function to terminate message instance (will not free memory)
    };

    // this is not const since it must be initialized on first access
    // since C does not allow non-integral compile-time constants
    static rosidl_message_type_support_t
        OverlappingObjects__rosidl_typesupport_introspection_c__OverlappingObjects_message_type_support_handle = {
            0,
            &OverlappingObjects__rosidl_typesupport_introspection_c__OverlappingObjects_message_members,
            get_message_typesupport_handle_function,
    };

    ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ue_msgs const rosidl_message_type_support_t*
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, msg, OverlappingObjects)()
    {
        if (!OverlappingObjects__rosidl_typesupport_introspection_c__OverlappingObjects_message_type_support_handle
                 .typesupport_identifier)
        {
            OverlappingObjects__rosidl_typesupport_introspection_c__OverlappingObjects_message_type_support_handle
                .typesupport_identifier = rosidl_typesupport_introspection_c__identifier;
        }
        return &OverlappingObjects__rosidl_typesupport_introspection_c__OverlappingObjects_message_type_support_handle;
    }
#ifdef __cplusplus
}
#endif

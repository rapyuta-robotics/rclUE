// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ue_msgs:msg/Overlaps.idl
// generated code does not contain a copyright notice

#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ue_msgs/msg/detail/overlaps__functions.h"
#include "ue_msgs/msg/detail/overlaps__rosidl_typesupport_introspection_c.h"
#include "ue_msgs/msg/detail/overlaps__struct.h"
#include "ue_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include <stddef.h>

// Include directives for member types
// Member `targets`
#include "rosidl_runtime_c/string_functions.h"
// Member `overlaps`
#include "ue_msgs/msg/overlapping_objects.h"
// Member `overlaps`
#include "ue_msgs/msg/detail/overlapping_objects__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

    void Overlaps__rosidl_typesupport_introspection_c__Overlaps_init_function(void* message_memory,
                                                                              enum rosidl_runtime_c__message_initialization _init)
    {
        // TODO(karsten1987): initializers are not yet implemented for typesupport c
        // see https://github.com/ros2/ros2/issues/397
        (void)_init;
        ue_msgs__msg__Overlaps__init(message_memory);
    }

    void Overlaps__rosidl_typesupport_introspection_c__Overlaps_fini_function(void* message_memory)
    {
        ue_msgs__msg__Overlaps__fini(message_memory);
    }

    size_t Overlaps__rosidl_typesupport_introspection_c__size_function__OverlappingObjects__overlaps(const void* untyped_member)
    {
        const ue_msgs__msg__OverlappingObjects__Sequence* member =
            (const ue_msgs__msg__OverlappingObjects__Sequence*)(untyped_member);
        return member->size;
    }

    const void* Overlaps__rosidl_typesupport_introspection_c__get_const_function__OverlappingObjects__overlaps(
        const void* untyped_member,
        size_t index)
    {
        const ue_msgs__msg__OverlappingObjects__Sequence* member =
            (const ue_msgs__msg__OverlappingObjects__Sequence*)(untyped_member);
        return &member->data[index];
    }

    void* Overlaps__rosidl_typesupport_introspection_c__get_function__OverlappingObjects__overlaps(void* untyped_member,
                                                                                                   size_t index)
    {
        ue_msgs__msg__OverlappingObjects__Sequence* member = (ue_msgs__msg__OverlappingObjects__Sequence*)(untyped_member);
        return &member->data[index];
    }

    bool Overlaps__rosidl_typesupport_introspection_c__resize_function__OverlappingObjects__overlaps(void* untyped_member,
                                                                                                     size_t size)
    {
        ue_msgs__msg__OverlappingObjects__Sequence* member = (ue_msgs__msg__OverlappingObjects__Sequence*)(untyped_member);
        ue_msgs__msg__OverlappingObjects__Sequence__fini(member);
        return ue_msgs__msg__OverlappingObjects__Sequence__init(member, size);
    }

    static rosidl_typesupport_introspection_c__MessageMember
        Overlaps__rosidl_typesupport_introspection_c__Overlaps_message_member_array[2] = {
            {
                "targets",                                              // name
                rosidl_typesupport_introspection_c__ROS_TYPE_STRING,    // type
                0,                                                      // upper bound of string
                NULL,                                                   // members of sub message
                true,                                                   // is array
                0,                                                      // array size
                false,                                                  // is upper bound
                offsetof(ue_msgs__msg__Overlaps, targets),              // bytes offset in struct
                NULL,                                                   // default value
                NULL,                                                   // size() function pointer
                NULL,                                                   // get_const(index) function pointer
                NULL,                                                   // get(index) function pointer
                NULL                                                    // resize(index) function pointer
            },
            {
                "overlaps",                                              // name
                rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,    // type
                0,                                                       // upper bound of string
                NULL,                                                    // members of sub message (initialized later)
                true,                                                    // is array
                0,                                                       // array size
                false,                                                   // is upper bound
                offsetof(ue_msgs__msg__Overlaps, overlaps),              // bytes offset in struct
                NULL,                                                    // default value
                Overlaps__rosidl_typesupport_introspection_c__size_function__OverlappingObjects__overlaps,    // size() function pointer
                Overlaps__rosidl_typesupport_introspection_c__get_const_function__OverlappingObjects__overlaps,    // get_const(index) function pointer
                Overlaps__rosidl_typesupport_introspection_c__get_function__OverlappingObjects__overlaps,    // get(index) function pointer
                Overlaps__rosidl_typesupport_introspection_c__resize_function__OverlappingObjects__overlaps    // resize(index) function pointer
            }};

    static const rosidl_typesupport_introspection_c__MessageMembers
        Overlaps__rosidl_typesupport_introspection_c__Overlaps_message_members = {
            "ue_msgs__msg",    // message namespace
            "Overlaps",        // message name
            2,                 // number of fields
            sizeof(ue_msgs__msg__Overlaps),
            Overlaps__rosidl_typesupport_introspection_c__Overlaps_message_member_array,    // message members
            Overlaps__rosidl_typesupport_introspection_c__Overlaps_init_function,    // function to initialize message memory (memory has to be allocated)
            Overlaps__rosidl_typesupport_introspection_c__Overlaps_fini_function    // function to terminate message instance (will not free memory)
    };

    // this is not const since it must be initialized on first access
    // since C does not allow non-integral compile-time constants
    static rosidl_message_type_support_t Overlaps__rosidl_typesupport_introspection_c__Overlaps_message_type_support_handle = {
        0,
        &Overlaps__rosidl_typesupport_introspection_c__Overlaps_message_members,
        get_message_typesupport_handle_function,
    };

    ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ue_msgs const rosidl_message_type_support_t*
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, msg, Overlaps)()
    {
        Overlaps__rosidl_typesupport_introspection_c__Overlaps_message_member_array[1].members_ =
            ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
                rosidl_typesupport_introspection_c, ue_msgs, msg, OverlappingObjects)();
        if (!Overlaps__rosidl_typesupport_introspection_c__Overlaps_message_type_support_handle.typesupport_identifier)
        {
            Overlaps__rosidl_typesupport_introspection_c__Overlaps_message_type_support_handle.typesupport_identifier =
                rosidl_typesupport_introspection_c__identifier;
        }
        return &Overlaps__rosidl_typesupport_introspection_c__Overlaps_message_type_support_handle;
    }
#ifdef __cplusplus
}
#endif

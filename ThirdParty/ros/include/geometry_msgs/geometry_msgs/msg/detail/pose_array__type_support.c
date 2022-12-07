// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from geometry_msgs:msg/PoseArray.idl
// generated code does not contain a copyright notice

#include "geometry_msgs/msg/detail/pose_array__functions.h"
#include "geometry_msgs/msg/detail/pose_array__rosidl_typesupport_introspection_c.h"
#include "geometry_msgs/msg/detail/pose_array__struct.h"
#include "geometry_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"

#include <stddef.h>

// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `poses`
#include "geometry_msgs/msg/pose.h"
// Member `poses`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

    void geometry_msgs__msg__PoseArray__rosidl_typesupport_introspection_c__PoseArray_init_function(
        void* message_memory,
        enum rosidl_runtime_c__message_initialization _init)
    {
        // TODO(karsten1987): initializers are not yet implemented for typesupport c
        // see https://github.com/ros2/ros2/issues/397
        (void)_init;
        geometry_msgs__msg__PoseArray__init(message_memory);
    }

    void geometry_msgs__msg__PoseArray__rosidl_typesupport_introspection_c__PoseArray_fini_function(void* message_memory)
    {
        geometry_msgs__msg__PoseArray__fini(message_memory);
    }

    size_t geometry_msgs__msg__PoseArray__rosidl_typesupport_introspection_c__size_function__PoseArray__poses(
        const void* untyped_member)
    {
        const geometry_msgs__msg__Pose__Sequence* member = (const geometry_msgs__msg__Pose__Sequence*)(untyped_member);
        return member->size;
    }

    const void* geometry_msgs__msg__PoseArray__rosidl_typesupport_introspection_c__get_const_function__PoseArray__poses(
        const void* untyped_member,
        size_t index)
    {
        const geometry_msgs__msg__Pose__Sequence* member = (const geometry_msgs__msg__Pose__Sequence*)(untyped_member);
        return &member->data[index];
    }

    void* geometry_msgs__msg__PoseArray__rosidl_typesupport_introspection_c__get_function__PoseArray__poses(void* untyped_member,
                                                                                                            size_t index)
    {
        geometry_msgs__msg__Pose__Sequence* member = (geometry_msgs__msg__Pose__Sequence*)(untyped_member);
        return &member->data[index];
    }

    void geometry_msgs__msg__PoseArray__rosidl_typesupport_introspection_c__fetch_function__PoseArray__poses(
        const void* untyped_member,
        size_t index,
        void* untyped_value)
    {
        const geometry_msgs__msg__Pose* item =
            ((const geometry_msgs__msg__Pose*)
                 geometry_msgs__msg__PoseArray__rosidl_typesupport_introspection_c__get_const_function__PoseArray__poses(
                     untyped_member, index));
        geometry_msgs__msg__Pose* value = (geometry_msgs__msg__Pose*)(untyped_value);
        *value = *item;
    }

    void geometry_msgs__msg__PoseArray__rosidl_typesupport_introspection_c__assign_function__PoseArray__poses(
        void* untyped_member,
        size_t index,
        const void* untyped_value)
    {
        geometry_msgs__msg__Pose* item =
            ((geometry_msgs__msg__Pose*)
                 geometry_msgs__msg__PoseArray__rosidl_typesupport_introspection_c__get_function__PoseArray__poses(untyped_member,
                                                                                                                   index));
        const geometry_msgs__msg__Pose* value = (const geometry_msgs__msg__Pose*)(untyped_value);
        *item = *value;
    }

    bool geometry_msgs__msg__PoseArray__rosidl_typesupport_introspection_c__resize_function__PoseArray__poses(void* untyped_member,
                                                                                                              size_t size)
    {
        geometry_msgs__msg__Pose__Sequence* member = (geometry_msgs__msg__Pose__Sequence*)(untyped_member);
        geometry_msgs__msg__Pose__Sequence__fini(member);
        return geometry_msgs__msg__Pose__Sequence__init(member, size);
    }

    static rosidl_typesupport_introspection_c__MessageMember
        geometry_msgs__msg__PoseArray__rosidl_typesupport_introspection_c__PoseArray_message_member_array[2] = {
            {
                "header",                                                // name
                rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,    // type
                0,                                                       // upper bound of string
                NULL,                                                    // members of sub message (initialized later)
                false,                                                   // is array
                0,                                                       // array size
                false,                                                   // is upper bound
                offsetof(geometry_msgs__msg__PoseArray, header),         // bytes offset in struct
                NULL,                                                    // default value
                NULL,                                                    // size() function pointer
                NULL,                                                    // get_const(index) function pointer
                NULL,                                                    // get(index) function pointer
                NULL,                                                    // fetch(index, &value) function pointer
                NULL,                                                    // assign(index, value) function pointer
                NULL                                                     // resize(index) function pointer
            },
            {
                "poses",                                                 // name
                rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,    // type
                0,                                                       // upper bound of string
                NULL,                                                    // members of sub message (initialized later)
                true,                                                    // is array
                0,                                                       // array size
                false,                                                   // is upper bound
                offsetof(geometry_msgs__msg__PoseArray, poses),          // bytes offset in struct
                NULL,                                                    // default value
                geometry_msgs__msg__PoseArray__rosidl_typesupport_introspection_c__size_function__PoseArray__poses,    // size()
                                                                                                                       // function
                                                                                                                       // pointer
                geometry_msgs__msg__PoseArray__rosidl_typesupport_introspection_c__get_const_function__PoseArray__poses,    // get_const(index)
                                                                                                                            // function
                                                                                                                            // pointer
                geometry_msgs__msg__PoseArray__rosidl_typesupport_introspection_c__get_function__PoseArray__poses,    // get(index)
                                                                                                                      // function
                                                                                                                      // pointer
                geometry_msgs__msg__PoseArray__rosidl_typesupport_introspection_c__fetch_function__PoseArray__poses,    // fetch(index,
                                                                                                                        // &value)
                                                                                                                        // function
                                                                                                                        // pointer
                geometry_msgs__msg__PoseArray__rosidl_typesupport_introspection_c__assign_function__PoseArray__poses,    // assign(index,
                                                                                                                         // value)
                                                                                                                         // function
                                                                                                                         // pointer
                geometry_msgs__msg__PoseArray__rosidl_typesupport_introspection_c__resize_function__PoseArray__poses    // resize(index)
                                                                                                                        // function
                                                                                                                        // pointer
            }};

    static const rosidl_typesupport_introspection_c__MessageMembers
        geometry_msgs__msg__PoseArray__rosidl_typesupport_introspection_c__PoseArray_message_members = {
            "geometry_msgs__msg",    // message namespace
            "PoseArray",             // message name
            2,                       // number of fields
            sizeof(geometry_msgs__msg__PoseArray),
            geometry_msgs__msg__PoseArray__rosidl_typesupport_introspection_c__PoseArray_message_member_array,    // message members
            geometry_msgs__msg__PoseArray__rosidl_typesupport_introspection_c__PoseArray_init_function,    // function to initialize
                                                                                                           // message memory (memory
                                                                                                           // has to be allocated)
            geometry_msgs__msg__PoseArray__rosidl_typesupport_introspection_c__PoseArray_fini_function     // function to terminate
                                                                                                           // message instance (will
                                                                                                           // not free memory)
    };

    // this is not const since it must be initialized on first access
    // since C does not allow non-integral compile-time constants
    static rosidl_message_type_support_t
        geometry_msgs__msg__PoseArray__rosidl_typesupport_introspection_c__PoseArray_message_type_support_handle = {
            0,
            &geometry_msgs__msg__PoseArray__rosidl_typesupport_introspection_c__PoseArray_message_members,
            get_message_typesupport_handle_function,
    };

    ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_geometry_msgs const rosidl_message_type_support_t*
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseArray)()
    {
        geometry_msgs__msg__PoseArray__rosidl_typesupport_introspection_c__PoseArray_message_member_array[0].members_ =
            ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
        geometry_msgs__msg__PoseArray__rosidl_typesupport_introspection_c__PoseArray_message_member_array[1].members_ =
            ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
        if (!geometry_msgs__msg__PoseArray__rosidl_typesupport_introspection_c__PoseArray_message_type_support_handle
                 .typesupport_identifier)
        {
            geometry_msgs__msg__PoseArray__rosidl_typesupport_introspection_c__PoseArray_message_type_support_handle
                .typesupport_identifier = rosidl_typesupport_introspection_c__identifier;
        }
        return &geometry_msgs__msg__PoseArray__rosidl_typesupport_introspection_c__PoseArray_message_type_support_handle;
    }
#ifdef __cplusplus
}
#endif

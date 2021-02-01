// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ue4_interfaces:srv/UE4SrvExample.idl
// generated code does not contain a copyright notice

#ifndef UE4_INTERFACES__SRV__UE4_SRV_EXAMPLE__FUNCTIONS_H_
#define UE4_INTERFACES__SRV__UE4_SRV_EXAMPLE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "ue4_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "ue4_interfaces/srv/ue4_srv_example__struct.h"

/// Initialize srv/UE4SrvExample message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ue4_interfaces__srv__UE4SrvExample_Request
 * )) before or use
 * ue4_interfaces__srv__UE4SrvExample_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ue4_interfaces
bool
ue4_interfaces__srv__UE4SrvExample_Request__init(ue4_interfaces__srv__UE4SrvExample_Request * msg);

/// Finalize srv/UE4SrvExample message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ue4_interfaces
void
ue4_interfaces__srv__UE4SrvExample_Request__fini(ue4_interfaces__srv__UE4SrvExample_Request * msg);

/// Create srv/UE4SrvExample message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ue4_interfaces__srv__UE4SrvExample_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ue4_interfaces
ue4_interfaces__srv__UE4SrvExample_Request *
ue4_interfaces__srv__UE4SrvExample_Request__create();

/// Destroy srv/UE4SrvExample message.
/**
 * It calls
 * ue4_interfaces__srv__UE4SrvExample_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ue4_interfaces
void
ue4_interfaces__srv__UE4SrvExample_Request__destroy(ue4_interfaces__srv__UE4SrvExample_Request * msg);


/// Initialize array of srv/UE4SrvExample messages.
/**
 * It allocates the memory for the number of elements and calls
 * ue4_interfaces__srv__UE4SrvExample_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ue4_interfaces
bool
ue4_interfaces__srv__UE4SrvExample_Request__Sequence__init(ue4_interfaces__srv__UE4SrvExample_Request__Sequence * array, size_t size);

/// Finalize array of srv/UE4SrvExample messages.
/**
 * It calls
 * ue4_interfaces__srv__UE4SrvExample_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ue4_interfaces
void
ue4_interfaces__srv__UE4SrvExample_Request__Sequence__fini(ue4_interfaces__srv__UE4SrvExample_Request__Sequence * array);

/// Create array of srv/UE4SrvExample messages.
/**
 * It allocates the memory for the array and calls
 * ue4_interfaces__srv__UE4SrvExample_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ue4_interfaces
ue4_interfaces__srv__UE4SrvExample_Request__Sequence *
ue4_interfaces__srv__UE4SrvExample_Request__Sequence__create(size_t size);

/// Destroy array of srv/UE4SrvExample messages.
/**
 * It calls
 * ue4_interfaces__srv__UE4SrvExample_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ue4_interfaces
void
ue4_interfaces__srv__UE4SrvExample_Request__Sequence__destroy(ue4_interfaces__srv__UE4SrvExample_Request__Sequence * array);

/// Initialize srv/UE4SrvExample message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ue4_interfaces__srv__UE4SrvExample_Response
 * )) before or use
 * ue4_interfaces__srv__UE4SrvExample_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ue4_interfaces
bool
ue4_interfaces__srv__UE4SrvExample_Response__init(ue4_interfaces__srv__UE4SrvExample_Response * msg);

/// Finalize srv/UE4SrvExample message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ue4_interfaces
void
ue4_interfaces__srv__UE4SrvExample_Response__fini(ue4_interfaces__srv__UE4SrvExample_Response * msg);

/// Create srv/UE4SrvExample message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ue4_interfaces__srv__UE4SrvExample_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ue4_interfaces
ue4_interfaces__srv__UE4SrvExample_Response *
ue4_interfaces__srv__UE4SrvExample_Response__create();

/// Destroy srv/UE4SrvExample message.
/**
 * It calls
 * ue4_interfaces__srv__UE4SrvExample_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ue4_interfaces
void
ue4_interfaces__srv__UE4SrvExample_Response__destroy(ue4_interfaces__srv__UE4SrvExample_Response * msg);


/// Initialize array of srv/UE4SrvExample messages.
/**
 * It allocates the memory for the number of elements and calls
 * ue4_interfaces__srv__UE4SrvExample_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ue4_interfaces
bool
ue4_interfaces__srv__UE4SrvExample_Response__Sequence__init(ue4_interfaces__srv__UE4SrvExample_Response__Sequence * array, size_t size);

/// Finalize array of srv/UE4SrvExample messages.
/**
 * It calls
 * ue4_interfaces__srv__UE4SrvExample_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ue4_interfaces
void
ue4_interfaces__srv__UE4SrvExample_Response__Sequence__fini(ue4_interfaces__srv__UE4SrvExample_Response__Sequence * array);

/// Create array of srv/UE4SrvExample messages.
/**
 * It allocates the memory for the array and calls
 * ue4_interfaces__srv__UE4SrvExample_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ue4_interfaces
ue4_interfaces__srv__UE4SrvExample_Response__Sequence *
ue4_interfaces__srv__UE4SrvExample_Response__Sequence__create(size_t size);

/// Destroy array of srv/UE4SrvExample messages.
/**
 * It calls
 * ue4_interfaces__srv__UE4SrvExample_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ue4_interfaces
void
ue4_interfaces__srv__UE4SrvExample_Response__Sequence__destroy(ue4_interfaces__srv__UE4SrvExample_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // UE4_INTERFACES__SRV__UE4_SRV_EXAMPLE__FUNCTIONS_H_

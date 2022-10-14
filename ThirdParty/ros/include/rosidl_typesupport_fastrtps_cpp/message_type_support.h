// Copyright 2014-2015 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef ROSIDL_TYPESUPPORT_FASTRTPS_CPP__MESSAGE_TYPE_SUPPORT_H_
#define ROSIDL_TYPESUPPORT_FASTRTPS_CPP__MESSAGE_TYPE_SUPPORT_H_

#include "rosidl_runtime_c/message_type_support_struct.h"

#include <fastcdr/Cdr.h>

/// Encapsulates the callbacks for getting properties of this rosidl type.
/**
 * These callbacks are implemented in the generated sources.
 */
typedef struct message_type_support_callbacks_t
{
  /// The C++ namespace of this message.
  const char * message_namespace_;

  /// The typename of this message.
  const char * message_name_;

  /// Callback function for message serialization
  /**
   * \param[in] untyped_ros_message Type erased pointer to message instance.
   * \param [in,out] Serialized FastCDR data object.
   * \return true if serialization succeeded, false otherwise.
   */
  bool (* cdr_serialize)(
    const void * untyped_ros_message,
    eprosima::fastcdr::Cdr & cdr);

  /// Callback function for message deserialization
  /**
   * \param [in] Serialized FastCDR data object.
   * \param[out] untyped_ros_message Type erased pointer to message instance.
   * \return true if deserialization succeeded, false otherwise.
   */
  bool (* cdr_deserialize)(
    eprosima::fastcdr::Cdr & cdr,
    void * untyped_ros_message);

  /// Callback function to get size of data
  /**
   * \return The size of the serialized message in bytes.
   */
  uint32_t (* get_serialized_size)(const void *);

  /// Callback function to determine the maximum size needed for serialization, which is used for
  /// type support initialization.
  /**
   * \param[out] Whether the maximum serialized size was fully bounded, (i.e. not unbounded strings
   *  or sequences).
   * \return The maximum serialized size, in bytes.
   */
  size_t (* max_serialized_size)(bool & full_bounded);
} message_type_support_callbacks_t;

#endif  // ROSIDL_TYPESUPPORT_FASTRTPS_CPP__MESSAGE_TYPE_SUPPORT_H_
